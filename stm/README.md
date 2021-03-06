# STM
The code will run on a nucleo-f207zg or the msign, which uses an stm32f205rgt

## HUB75

### Pinout on nucleo

| Pin   | Mapped |
| ----- | ------ |
| `R0`  | `PD0`  |
| `G0`  | `PD1`  |
| `B0`  | `PD2`  |
| `R1`  | `PD3`  |
| `G1`  | `PD4`  |
| `B1`  | `PD5`  |
| `A`   | `PB0`  |
| `B`   | `PB1`  |
| `C`   | `PB2`  |
| `D`   | `PB3`  |
| `CLK` | `PD6`  |
| `LAT` | `PB5`  |
| `OE`  | `PB6`  |

### Pinout on board

| Pin   | Mapped |
| ----- | ------ |
| `R0`  | `PC0`  |
| `G0`  | `PC1`  |
| `B0`  | `PC2`  |
| `R1`  | `PC3`  |
| `G1`  | `PC4`  |
| `B1`  | `PC5`  |
| `A`   | `PB0`  |
| `B`   | `PB1`  |
| `C`   | `PB2`  |
| `D`   | `PB3`  |
| `CLK` | `PD6`  |
| `LAT` | `PB5`  |
| `OE`  | `PB6`  |

Uses DMA to the GPIO to drive R0-B1 as well as the clock.
DMA is triggered off of TIM1 update event; the delay between different bits of color in PCM encoding goes off of TIM9.

## Serial Protocol

The protocol starts with a handshake, initiated from the STM32, and continues asynchronously.

The system is mostly based around the sharing and storage of various "slots" of data, which have variable length, which while being capped at 65k by technical restrictions
is limited to around 8k in practice.

### Command format

```
| 0xA6 | 0x00 | 0x11 | <payload> |
  |       |     |
  |       |     ------ command, see below
  |       ---- payload size
  --- direction byte, A6 for packets from the esp, A5 for packets from the STM
```

| Name | Byte |
| ---- | ---- |
| `HANDSHAKE_INIT` | `0x10` |
| `HANDSHAKE_RESP` | `0x11` |
| `HANDSHAKE_OK` | `0x12` |
| `HANDSHAKE_UOK` | `0x13` |
| `DATA_TEMP` | `0x20` |
| `DATA_UPDATE` | `0x21` |
| `DATA_MOVE` | `0x22` |
| `DATA_DEL` | `0x23` |
| `ACK_DATA_TEMP` | `0x30` |
| `ACK_DATA_UPDATE` | `0x31` |
| `ACK_DATA_MOVE` | `0x32` |
| `ACK_DATA_DEL` | `0x33` |
| `QUERY_FREE_HEAP` | `0x40` |
| `QUERY_TIME` | `0x41` |
| `RESET` | `0x50` |
| `PING` | `0x51` |
| `PONG` | `0x52` |
| `UPDATE_CMD` | `0x60` |
| `UPDATE_IMG_DATA` | `0x61` |
| `UPDATE_IMG_START` | `0x62` |
| `UPDATE_STATUS` | `0x63` |
| `CONSOLE_MSG` | `0x70` |


### Handshake

STM sends command `HANDSHAKE_INIT`, esp responds with `HANDSHAKE_RESP`, STM finishes with `HANDSHAKE_OK`. All handshake commands have payload size 0 and no payload.
The command `HANDSHAKE_UOK` is sent to indicate that the STM should enter update mode.

### Slots

Each slot is represented as a theoretically unbounded, randomly-accessible and partitionable chunk of memory.

Each part of the slot's data can be stored on either the ESP or the STM when not in use. Data stored on a processor in this way is called _canonical_ data. The other processor refers
to this data as _remote_ data, using a placeholder to avoid duplicating it. Remote data may temporarily be converted to _ephemeral_ data, which is a temporary copy of _canonical_ data, almost
always by the STM for use on-screen.

An entire slot has a _temperature_, which relates to where a version of it should be made available:

| Temperature | Meaning |
| ----------- | ---------------- |
| Cold | Not required for the display right now |
| Warm | Will be required soon for the display, should be sent. |
| Hot | Is being displayed right now. |

Any updates to data that is at least level Warm should be immediately transferred to the STM. Additionally, if any part of the slot's data is stored _canonically_ on the STM and the slot
is made Warm or higher, all the remaining parts of the data still stored on the ESP should be flushed to the STM and marked remote.

The STM controls the temperature of data using the `DATA_TEMP` (data temperature) message:

```
| 0x090a | 0x01 |
  |        |
  |        ---- the temperature to update to, one of the Block::Temperature* constants
  ----- the slot ID to update (12 bits, stored as 16 bit with upper nybble 0)
```

The STM shall send this message whenever it wishes to change the temperature of a slot, and should send it repeatedly until it receives an identical message of type `ACK_DATA_TEMP` confirming the change
(although it's allowed to stop sending if it wants to)

#### Updating

The ESP uses the `DATA_UPDATE` message to signal that the STM should create an ephemeral part of the data at some offset and length. It also sends along the total length of the slot.

```
| 0x090a | 0x0100 | 0x0500 | 0x0120 | <data> |
  |        |        |        |
  |        |        |        ---- total length of this update
  |        |        ---- total length of slot
  |        --- offset to update at
  --- slot ID + framing info:

  0b0000  0x90a
    ||||    |
    ||\\    slot ID
    ||-- reserved
    |- end
    - start
```

#### Framing

This message (as well as `DATA_MOVE`) is framed to allow for sending more than 249 bytes: the `start` bit is set for the first message corresponding to this update, the `end` bit is set for the last message, and the offset is always
the offset of this message.

This is enough to both know the size and starting offset of an update immediately, progressively update, and again know the size and starting offset of the entire update as well.

#### Acknowledgements

This message (as well as `DATA_MOVE`) send a single acknowledgement to indicate successful/unsuccessful completion of the update as a whole. Note that an acknowledgement is not required if an `end` packet
is not sent.

This acknowledgement takes the form

```
| 0x090a | 0x0100 | 0x0120 | 0 |
  |           |      |       |
  |           |      |       -- result code
  |           |      -- length of update
  -- slot ID  -- start of update
```

Valid result codes are:

| Code | Usage |
| ---- | ----- |
| `0x00` | Completed OK |
| `0x01` | Not enough space to store |
| `0x02` | Illegal internal state |
| `0x03` | Parameters don't make sense / other NAK |

#### Moving 

The ESP or STM are both allowed to "flush" parts of data to the opposite processor, and convert them from canonical parts to remote parts. This is accomplished with the `DATA_MOVE` message, which has the
same format and acknowledgement scheme as `DATA_UPDATE`, but semantically means to create a canonical part not an ephemeral one.

#### Deletion

The ESP can also send the following message to indicate that a slot has been nulled entirely (a 0-slot-length update packet is illegal)

```
| 0x090a |
   |
   -- slot ID
```

This is acknowledged with a copy of the message, and it is illegal to not have this complete succesfully: if the data is not present, silently ignore it.

### Consoles

A console is a unidirectional stream of characters. There are three consoles on the MSign:

| ID | Usage |
| --- | ---------|
| `0x01` | The debug console input; as accessed through the web interface for commands starting with `"stm"` |
| `0x02` | The debug console output; relayed back to the web interface, hooked to `stderr` |
| `0x10` | `printf` output; logs, hooked to `stdout` |

The protocol uses one message for these:

```
| 0x01 | <data> |
  |      |
  |		 - character data for the remainder of the message
  -------- the console ID
```

It can be sent from either device.

### Time sync

When the STM sends a `QUERY_TIME` message, the ESP should respond with the current time. The payload of the request is empty and the response is

```
| 0x00 | <time> |
  |      |
  |      ---- JS-style millisecond-referenced unix timestamp
  ---- status code
```

The time should be as close to as possible the time when the last byte of the header of the request was sent.
The status code can be one of

| Code | Meaning |
| ---- | ------- |
| `0x00` | OK |
| `0x01` | Time is still being retrieved, try again in a bit |

### Other commands

When either device sends the `RESET` command, both devices should reset. Usually sent by the ESP upon grabbing new configuration -- but the STM can also send it in rare cases.

When either device sends the `PING` command, the other MUST respond with the `PONG` command, UNLESS the handshake has not been completed.

The above three commands have no payload.

When either device sends the `QUERY_FREE_HEAP` command (with no payload) the other device should respond with the same message ID but with a payload corresponding to the
maximum amount of data that can be `DATA_MOVE`d to it. This should only ever underestimate this quantity, not over estimate it. The value itself is represented as an unsigned 16 bit integer.

### Update commands

The update procedure is rather complicated due to the requirement to update two things.
The first step is the ESP receiving an update package. While it is downloading the package, it updates various status slots to inform. Once it has finished, it will send a `RESET` command to reset the device.
When the system reboots, the ESP shall respond with `HANDSHAKE_UOK` on successful handshaking. Once this occurs, the STM enter update mode. Once the update finishes for the STM, it must send an appropriate `UPDATE_STATUS` to the ESP. Once this occurs,
the ESP will update itself. When it finishes, the STM will hear a `UPDATE_CMD` to reset itself to normal mode. At this point, the system is updated.

#### Detailed flow

After the `RESET`, the ESP will send various `UPDATE_CMD`s, and then the image.

The `UPDATE_CMD` message looks like this:

```
| 0xFF |
 |
 ---- cmd ID
```

where `cmd ID` is:

| ID | Meaning |
| :--- | :--- |
| `0x10` | Cancel update mode / reset to normal mode |
| `0x11` | Prepare to recieve image
| `0x30` | Image read error |
| `0x31` | Image checksum error |
| `0x32` | Invalid state error |
| `0x40` | Update completed successfully |
| `0x50` | ESP wrote sector (see below) |
| `0x51` | ESP copying sector (see below) |

Once message `0x11` is sent, the STM should get ready to recieve the `UPDATE_IMG_START`. This message contains:

The STM can respond with `UPDATE_STATUS` messages, with the same format.

| ID | Meaning |
| :--- | ------ |
| `0x10` | Entered update mode |
| `0x12` | Ready for image |
| `0x13` | Ready for chunk |
| `0x20` | Beginning copy process |
| `0x21` | Copy process completed |
| `0x30` | Resend last chunk, csum error |
| `0x40` | Checksum error on entire thing, abort procedure |

Note there are no errors for copy process as if it fails the code won't run. If the ESP doesn't get anything for a few minutes it can report failure and ask for manual reflashing.

```
| 0xCC CC | 0xSS SS SS SS | 0xCNCN |
  |          |               |
  |          |               ------ chunck count, little endian 16bits
  |          ---- size of new image, bytes, little endian 32bits
  ---- checksum, little endian 16bits, CRC16
```

Then, the STM can send `UPDATE_STATUS` commands to get the chunks.

Once it sends the `0x13` message, the ESP responds with a chunk like this:

```
| 0xCC 0xCC | <data for rest of message>
  |            |
  |            -- chunk data (size = msgsize - 2) extra bytes are padded with zeros
  ---- CRC-16 checksum for this chunk
```

After each chunk, the STM can respond with an error or a new message.
If the stm deduces it has received all chunks, it sends the finished message and updates itself.
After completion of this process, it sends the status corresponding to update completed.
The ESP will then begin writing the image to itself in preparation for copying, and will send out "ESP wrote sector" messages
as it does so.
The STM then waits for the ESP to send a cmd corresponding to completed.
It then resets.

## Serial

### Pinout on nucleo

USART6.

| Pin  | Mapped |
| ---- | ------ |
| `TX` | `PG14`  |
| `RX` | `PG9`  |

### Pinout on board

USART2.

| Pin  | Mapped |
| ---- | ------ |
| `TX` | `PA2`  |
| `RX` | `PA3`  |
