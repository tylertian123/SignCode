#ifndef MSE_UTIL_H
#define MSE_UTIL_H

#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <HardwareSerial.h>
#include <functional>
#include <TimeLib.h>

namespace util {

	struct Download {
		uint32_t status_code;
		char * buf;
		uint32_t length;
		bool error;
	};

	// Mallocs a buffer, and downloads.
	// Also occasionally runs the serial buffer.
	// Does not make a c_str, returns the length in a struct however. The response may be less than length if error is set.
	Download download_from(const char * host, const char * path);
	Download download_from(const char * host, const char * path, const char * const headers[][2]);
	Download download_from(const char * host, const char * path, const char * const headers[][2], const char * method, const char * body=nullptr);
	// Starts the downloader, but returns a function that will return a byte (1-255) indicating data or 0 indicating end of transmission. Not designed for use with binary data.
	std::function<char (void)> download_with_callback(const char * host, const char * path);
	std::function<char (void)> download_with_callback(const char * host, const char * path, const char * const headers[][2]);
	std::function<char (void)> download_with_callback(const char * host, const char * path, int16_t &status_code_out);
	std::function<char (void)> download_with_callback(const char * host, const char * path, const char * const headers[][2], int16_t &status_code_out);
	std::function<char (void)> download_with_callback(const char * host, const char * path, const char * const headers[][2], const char * method, const char * body);
	std::function<char (void)> download_with_callback(const char * host, const char * path, const char * const headers[][2], const char * method, const char * body, int16_t &status_code_out, int32_t &size_out);
	// Make sure a callback is stopped
	void stop_download();

	uint16_t compute_crc(uint8_t * buffer, size_t length, uint16_t crc_previous=0);
	bool crc_valid(uint8_t * buffer, size_t length_including_crc);
}
#endif