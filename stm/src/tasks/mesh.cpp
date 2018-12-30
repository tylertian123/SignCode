// count = 206
#include "threed.h"


bool threed::Renderer::init() {

tris[0] = {
    { -0.218, 0.12, -0.402 },
    { -0.211, 0.12, -0.251 },
    { -0.209, 0.12, -0.251 },
    204,
    78,
    0
};


tris[1] = {
    { 0.235, -0.12, -0.402 },
    { 0.229, -0.12, -0.251 },
    { 0.227, -0.12, -0.251 },
    204,
    78,
    0
};


tris[2] = {
    { -0.211, 0.12, 0.28 },
    { -0.211, 0.12, -0.251 },
    { -0.309, 0.12, 0.28 },
    204,
    78,
    0
};


tris[3] = {
    { -0.309, 0.12, 0.28 },
    { -0.211, 0.12, -0.251 },
    { -0.309, 0.12, -0.402 },
    204,
    78,
    0
};


tris[4] = {
    { -0.309, 0.12, -0.402 },
    { -0.211, 0.12, -0.251 },
    { -0.218, 0.12, -0.402 },
    204,
    78,
    0
};


tris[5] = {
    { -0.218, 0.12, -0.402 },
    { -0.209, 0.12, -0.251 },
    { 0.009, 0.12, -0.122 },
    204,
    78,
    0
};


tris[6] = {
    { 0.009, 0.12, -0.122 },
    { 0.227, 0.12, -0.251 },
    { 0.235, 0.12, -0.402 },
    204,
    78,
    0
};


tris[7] = {
    { 0.235, 0.12, -0.402 },
    { 0.229, 0.12, -0.251 },
    { 0.327, 0.12, -0.402 },
    204,
    78,
    0
};


tris[8] = {
    { 0.227, 0.12, -0.251 },
    { 0.229, 0.12, -0.251 },
    { 0.235, 0.12, -0.402 },
    204,
    78,
    0
};


tris[9] = {
    { 0.327, 0.12, -0.402 },
    { 0.229, 0.12, -0.251 },
    { 0.327, 0.12, 0.28 },
    204,
    78,
    0
};


tris[10] = {
    { 0.327, 0.12, 0.28 },
    { 0.229, 0.12, -0.251 },
    { 0.229, 0.12, 0.28 },
    204,
    78,
    0
};


tris[11] = {
    { 0.227, 0.12, -0.251 },
    { 0.009, 0.12, -0.122 },
    { 0.017, 0.12, 0.013 },
    204,
    78,
    0
};


tris[12] = {
    { 0.017, 0.12, 0.013 },
    { 0.009, 0.12, -0.122 },
    { 0.001, 0.12, 0.013 },
    204,
    78,
    0
};


tris[13] = {
    { 0.009, 0.12, -0.122 },
    { -0.209, 0.12, -0.251 },
    { 0.001, 0.12, 0.013 },
    204,
    78,
    0
};


tris[14] = {
    { -0.209, -0.12, -0.251 },
    { 0.009, -0.12, -0.122 },
    { 0.001, -0.12, 0.013 },
    204,
    78,
    0
};


tris[15] = {
    { 0.001, -0.12, 0.013 },
    { 0.009, -0.12, -0.122 },
    { 0.017, -0.12, 0.013 },
    204,
    78,
    0
};


tris[16] = {
    { -0.309, -0.12, 0.28 },
    { -0.211, -0.12, -0.251 },
    { -0.211, -0.12, 0.28 },
    204,
    78,
    0
};


tris[17] = {
    { -0.218, -0.12, -0.402 },
    { -0.211, -0.12, -0.251 },
    { -0.309, -0.12, -0.402 },
    204,
    78,
    0
};


tris[18] = {
    { -0.309, -0.12, -0.402 },
    { -0.211, -0.12, -0.251 },
    { -0.309, -0.12, 0.28 },
    204,
    78,
    0
};


tris[19] = {
    { 0.327, -0.12, -0.402 },
    { 0.229, -0.12, -0.251 },
    { 0.235, -0.12, -0.402 },
    204,
    78,
    0
};


tris[20] = {
    { 0.235, -0.12, -0.402 },
    { 0.227, -0.12, -0.251 },
    { 0.009, -0.12, -0.122 },
    204,
    78,
    0
};


tris[21] = {
    { -0.218, -0.12, -0.402 },
    { -0.209, -0.12, -0.251 },
    { -0.211, -0.12, -0.251 },
    204,
    78,
    0
};


tris[22] = {
    { 0.009, -0.12, -0.122 },
    { -0.209, -0.12, -0.251 },
    { -0.218, -0.12, -0.402 },
    204,
    78,
    0
};


tris[23] = {
    { 0.229, -0.12, -0.251 },
    { 0.327, -0.12, 0.28 },
    { 0.229, -0.12, 0.28 },
    204,
    78,
    0
};


tris[24] = {
    { 0.009, -0.12, -0.122 },
    { 0.227, -0.12, -0.251 },
    { 0.017, -0.12, 0.013 },
    204,
    78,
    0
};


tris[25] = {
    { 0.229, -0.12, -0.251 },
    { 0.327, -0.12, -0.402 },
    { 0.327, -0.12, 0.28 },
    204,
    78,
    0
};


tris[26] = {
    { -0.211, 0.12, -0.251 },
    { -0.211, 0.12, 0.28 },
    { -0.211, -0.12, 0.28 },
    204,
    78,
    0
};


tris[27] = {
    { -0.209, 0.12, -0.251 },
    { -0.211, 0.12, -0.251 },
    { -0.211, -0.12, -0.251 },
    204,
    78,
    0
};


tris[28] = {
    { 0.001, 0.12, 0.013 },
    { -0.209, 0.12, -0.251 },
    { -0.209, -0.12, -0.251 },
    204,
    78,
    0
};


tris[29] = {
    { 0.017, 0.12, 0.013 },
    { 0.001, 0.12, 0.013 },
    { 0.001, -0.12, 0.013 },
    204,
    78,
    0
};


tris[30] = {
    { 0.227, 0.12, -0.251 },
    { 0.017, 0.12, 0.013 },
    { 0.017, -0.12, 0.013 },
    204,
    78,
    0
};


tris[31] = {
    { 0.229, 0.12, -0.251 },
    { 0.227, 0.12, -0.251 },
    { 0.227, -0.12, -0.251 },
    204,
    78,
    0
};


tris[32] = {
    { 0.229, 0.12, 0.28 },
    { 0.229, 0.12, -0.251 },
    { 0.229, -0.12, -0.251 },
    204,
    78,
    0
};


tris[33] = {
    { 0.327, 0.12, 0.28 },
    { 0.229, 0.12, 0.28 },
    { 0.229, -0.12, 0.28 },
    204,
    78,
    0
};


tris[34] = {
    { 0.327, 0.12, -0.402 },
    { 0.327, 0.12, 0.28 },
    { 0.327, -0.12, 0.28 },
    204,
    78,
    0
};


tris[35] = {
    { 0.235, 0.12, -0.402 },
    { 0.327, 0.12, -0.402 },
    { 0.327, -0.12, -0.402 },
    204,
    78,
    0
};


tris[36] = {
    { 0.009, 0.12, -0.122 },
    { 0.235, 0.12, -0.402 },
    { 0.235, -0.12, -0.402 },
    204,
    78,
    0
};


tris[37] = {
    { -0.218, 0.12, -0.402 },
    { 0.009, 0.12, -0.122 },
    { 0.009, -0.12, -0.122 },
    204,
    78,
    0
};


tris[38] = {
    { -0.309, 0.12, -0.402 },
    { -0.218, 0.12, -0.402 },
    { -0.218, -0.12, -0.402 },
    204,
    78,
    0
};


tris[39] = {
    { -0.309, 0.12, 0.28 },
    { -0.309, 0.12, -0.402 },
    { -0.309, -0.12, -0.402 },
    204,
    78,
    0
};


tris[40] = {
    { -0.211, 0.12, 0.28 },
    { -0.309, 0.12, 0.28 },
    { -0.309, -0.12, 0.28 },
    204,
    78,
    0
};


tris[41] = {
    { -0.211, 0.12, -0.251 },
    { -0.211, -0.12, 0.28 },
    { -0.211, -0.12, -0.251 },
    204,
    78,
    0
};


tris[42] = {
    { -0.209, 0.12, -0.251 },
    { -0.211, -0.12, -0.251 },
    { -0.209, -0.12, -0.251 },
    204,
    78,
    0
};


tris[43] = {
    { 0.001, 0.12, 0.013 },
    { -0.209, -0.12, -0.251 },
    { 0.001, -0.12, 0.013 },
    204,
    78,
    0
};


tris[44] = {
    { 0.017, 0.12, 0.013 },
    { 0.001, -0.12, 0.013 },
    { 0.017, -0.12, 0.013 },
    204,
    78,
    0
};


tris[45] = {
    { 0.227, 0.12, -0.251 },
    { 0.017, -0.12, 0.013 },
    { 0.227, -0.12, -0.251 },
    204,
    78,
    0
};


tris[46] = {
    { 0.229, 0.12, -0.251 },
    { 0.227, -0.12, -0.251 },
    { 0.229, -0.12, -0.251 },
    204,
    78,
    0
};


tris[47] = {
    { 0.229, 0.12, 0.28 },
    { 0.229, -0.12, -0.251 },
    { 0.229, -0.12, 0.28 },
    204,
    78,
    0
};


tris[48] = {
    { 0.327, 0.12, 0.28 },
    { 0.229, -0.12, 0.28 },
    { 0.327, -0.12, 0.28 },
    204,
    78,
    0
};


tris[49] = {
    { 0.327, 0.12, -0.402 },
    { 0.327, -0.12, 0.28 },
    { 0.327, -0.12, -0.402 },
    204,
    78,
    0
};


tris[50] = {
    { 0.235, 0.12, -0.402 },
    { 0.327, -0.12, -0.402 },
    { 0.235, -0.12, -0.402 },
    204,
    78,
    0
};


tris[51] = {
    { 0.009, 0.12, -0.122 },
    { 0.235, -0.12, -0.402 },
    { 0.009, -0.12, -0.122 },
    204,
    78,
    0
};


tris[52] = {
    { -0.218, 0.12, -0.402 },
    { 0.009, -0.12, -0.122 },
    { -0.218, -0.12, -0.402 },
    204,
    78,
    0
};


tris[53] = {
    { -0.309, 0.12, -0.402 },
    { -0.218, -0.12, -0.402 },
    { -0.309, -0.12, -0.402 },
    204,
    78,
    0
};


tris[54] = {
    { -0.309, 0.12, 0.28 },
    { -0.309, -0.12, -0.402 },
    { -0.309, -0.12, 0.28 },
    204,
    78,
    0
};


tris[55] = {
    { -0.211, 0.12, 0.28 },
    { -0.309, -0.12, 0.28 },
    { -0.211, -0.12, 0.28 },
    204,
    78,
    0
};


tris[56] = {
    { -0.574898, 0.12, -0.311945 },
    { -0.647, 0.12, -0.299 },
    { -0.577, 0.12, -0.295 },
    3,
    76,
    163
};


tris[57] = {
    { -0.55925, -0.12, -0.3385 },
    { -0.568852, -0.12, -0.326556 },
    { -0.621566, -0.12, -0.369203 },
    3,
    76,
    163
};


tris[58] = {
    { -0.647, 0.12, -0.299 },
    { -0.574898, 0.12, -0.311945 },
    { -0.642722, 0.12, -0.330213 },
    3,
    76,
    163
};


tris[59] = {
    { -0.642722, 0.12, -0.330213 },
    { -0.574898, 0.12, -0.311945 },
    { -0.637531, 0.12, -0.344344 },
    3,
    76,
    163
};


tris[60] = {
    { -0.637531, 0.12, -0.344344 },
    { -0.568852, 0.12, -0.326556 },
    { -0.621566, 0.12, -0.369203 },
    3,
    76,
    163
};


tris[61] = {
    { -0.621566, 0.12, -0.369203 },
    { -0.55925, 0.12, -0.3385 },
    { -0.598851, 0.12, -0.388922 },
    3,
    76,
    163
};


tris[62] = {
    { -0.598851, 0.12, -0.388922 },
    { -0.55925, 0.12, -0.3385 },
    { -0.570219, 0.12, -0.402781 },
    3,
    76,
    163
};


tris[63] = {
    { -0.570219, 0.12, -0.402781 },
    { -0.530935, 0.12, -0.353056 },
    { -0.536504, 0.12, -0.410057 },
    3,
    76,
    163
};


tris[64] = {
    { -0.546481, 0.12, -0.347445 },
    { -0.530935, 0.12, -0.353056 },
    { -0.570219, 0.12, -0.402781 },
    3,
    76,
    163
};


tris[65] = {
    { -0.536504, 0.12, -0.410057 },
    { -0.513, 0.12, -0.355 },
    { -0.484074, 0.12, -0.407222 },
    3,
    76,
    163
};


tris[66] = {
    { -0.484074, 0.12, -0.407222 },
    { -0.477482, 0.12, -0.347518 },
    { -0.451259, 0.12, -0.395445 },
    3,
    76,
    163
};


tris[67] = {
    { -0.536504, 0.12, -0.410057 },
    { -0.530935, 0.12, -0.353056 },
    { -0.513, 0.12, -0.355 },
    3,
    76,
    163
};


tris[68] = {
    { -0.451259, 0.12, -0.395445 },
    { -0.477482, 0.12, -0.347518 },
    { -0.418, 0.12, -0.375 },
    3,
    76,
    163
};


tris[69] = {
    { -0.418, 0.12, -0.375 },
    { -0.444852, 0.12, -0.327148 },
    { -0.418, 0.12, -0.297 },
    3,
    76,
    163
};


tris[70] = {
    { -0.418, 0.12, -0.375 },
    { -0.477482, 0.12, -0.347518 },
    { -0.444852, 0.12, -0.327148 },
    3,
    76,
    163
};


tris[71] = {
    { -0.570219, 0.12, -0.402781 },
    { -0.55925, 0.12, -0.3385 },
    { -0.546481, 0.12, -0.347445 },
    3,
    76,
    163
};


tris[72] = {
    { -0.621566, 0.12, -0.369203 },
    { -0.568852, 0.12, -0.326556 },
    { -0.55925, 0.12, -0.3385 },
    3,
    76,
    163
};


tris[73] = {
    { -0.616375, 0.12, -0.212625 },
    { -0.565797, 0.12, -0.249969 },
    { -0.643588, 0.12, -0.271857 },
    3,
    76,
    163
};


tris[74] = {
    { -0.643588, 0.12, -0.271857 },
    { -0.577, 0.12, -0.295 },
    { -0.647, 0.12, -0.299 },
    3,
    76,
    163
};


tris[75] = {
    { -0.565797, 0.12, -0.249969 },
    { -0.575738, 0.12, -0.280693 },
    { -0.643588, 0.12, -0.271857 },
    3,
    76,
    163
};


tris[76] = {
    { -0.676, 0.12, -0.052 },
    { -0.525, 0.12, -0.106 },
    { -0.676, 0.12, -0.106 },
    3,
    76,
    163
};


tris[77] = {
    { -0.525, 0.12, -0.106 },
    { -0.546314, 0.12, -0.215828 },
    { -0.616375, 0.12, -0.212625 },
    3,
    76,
    163
};


tris[78] = {
    { -0.546314, 0.12, -0.215828 },
    { -0.565797, 0.12, -0.249969 },
    { -0.616375, 0.12, -0.212625 },
    3,
    76,
    163
};


tris[79] = {
    { -0.477482, 0.12, -0.347518 },
    { -0.484074, 0.12, -0.407222 },
    { -0.49506, 0.12, -0.353065 },
    3,
    76,
    163
};


tris[80] = {
    { -0.409, 0.12, -0.052 },
    { -0.525, 0.12, -0.106 },
    { -0.676, 0.12, -0.052 },
    3,
    76,
    163
};


tris[81] = {
    { -0.546314, 0.12, -0.215828 },
    { -0.525, 0.12, -0.106 },
    { -0.409, 0.12, -0.059 },
    3,
    76,
    163
};


tris[82] = {
    { -0.409, 0.12, -0.059 },
    { -0.525, 0.12, -0.106 },
    { -0.409, 0.12, -0.052 },
    3,
    76,
    163
};


tris[83] = {
    { -0.49506, 0.12, -0.353065 },
    { -0.484074, 0.12, -0.407222 },
    { -0.513, 0.12, -0.355 },
    3,
    76,
    163
};


tris[84] = {
    { -0.575738, 0.12, -0.280693 },
    { -0.577, 0.12, -0.295 },
    { -0.643588, 0.12, -0.271857 },
    3,
    76,
    163
};


tris[85] = {
    { -0.637531, 0.12, -0.344344 },
    { -0.574898, 0.12, -0.311945 },
    { -0.568852, 0.12, -0.326556 },
    3,
    76,
    163
};


tris[86] = {
    { -0.484074, -0.12, -0.407222 },
    { -0.513, -0.12, -0.355 },
    { -0.536504, -0.12, -0.410057 },
    3,
    76,
    163
};


tris[87] = {
    { -0.536504, -0.12, -0.410057 },
    { -0.530935, -0.12, -0.353056 },
    { -0.570219, -0.12, -0.402781 },
    3,
    76,
    163
};


tris[88] = {
    { -0.570219, -0.12, -0.402781 },
    { -0.55925, -0.12, -0.3385 },
    { -0.598851, -0.12, -0.388922 },
    3,
    76,
    163
};


tris[89] = {
    { -0.598851, -0.12, -0.388922 },
    { -0.55925, -0.12, -0.3385 },
    { -0.621566, -0.12, -0.369203 },
    3,
    76,
    163
};


tris[90] = {
    { -0.570219, -0.12, -0.402781 },
    { -0.546481, -0.12, -0.347445 },
    { -0.55925, -0.12, -0.3385 },
    3,
    76,
    163
};


tris[91] = {
    { -0.621566, -0.12, -0.369203 },
    { -0.568852, -0.12, -0.326556 },
    { -0.637531, -0.12, -0.344344 },
    3,
    76,
    163
};


tris[92] = {
    { -0.637531, -0.12, -0.344344 },
    { -0.574898, -0.12, -0.311945 },
    { -0.642722, -0.12, -0.330213 },
    3,
    76,
    163
};


tris[93] = {
    { -0.568852, -0.12, -0.326556 },
    { -0.574898, -0.12, -0.311945 },
    { -0.637531, -0.12, -0.344344 },
    3,
    76,
    163
};


tris[94] = {
    { -0.642722, -0.12, -0.330213 },
    { -0.574898, -0.12, -0.311945 },
    { -0.647, -0.12, -0.299 },
    3,
    76,
    163
};


tris[95] = {
    { -0.647, -0.12, -0.299 },
    { -0.577, -0.12, -0.295 },
    { -0.643588, -0.12, -0.271857 },
    3,
    76,
    163
};


tris[96] = {
    { -0.577, -0.12, -0.295 },
    { -0.575738, -0.12, -0.280693 },
    { -0.643588, -0.12, -0.271857 },
    3,
    76,
    163
};


tris[97] = {
    { -0.643588, -0.12, -0.271857 },
    { -0.565797, -0.12, -0.249969 },
    { -0.616375, -0.12, -0.212625 },
    3,
    76,
    163
};


tris[98] = {
    { -0.616375, -0.12, -0.212625 },
    { -0.546314, -0.12, -0.215828 },
    { -0.525, -0.12, -0.106 },
    3,
    76,
    163
};


tris[99] = {
    { -0.565797, -0.12, -0.249969 },
    { -0.546314, -0.12, -0.215828 },
    { -0.616375, -0.12, -0.212625 },
    3,
    76,
    163
};


tris[100] = {
    { -0.525, -0.12, -0.106 },
    { -0.676, -0.12, -0.052 },
    { -0.676, -0.12, -0.106 },
    3,
    76,
    163
};


tris[101] = {
    { -0.676, -0.12, -0.052 },
    { -0.525, -0.12, -0.106 },
    { -0.409, -0.12, -0.052 },
    3,
    76,
    163
};


tris[102] = {
    { -0.409, -0.12, -0.052 },
    { -0.525, -0.12, -0.106 },
    { -0.409, -0.12, -0.059 },
    3,
    76,
    163
};


tris[103] = {
    { -0.451259, -0.12, -0.395445 },
    { -0.477482, -0.12, -0.347518 },
    { -0.484074, -0.12, -0.407222 },
    3,
    76,
    163
};


tris[104] = {
    { -0.536504, -0.12, -0.410057 },
    { -0.513, -0.12, -0.355 },
    { -0.530935, -0.12, -0.353056 },
    3,
    76,
    163
};


tris[105] = {
    { -0.418, -0.12, -0.297 },
    { -0.444852, -0.12, -0.327148 },
    { -0.418, -0.12, -0.375 },
    3,
    76,
    163
};


tris[106] = {
    { -0.418, -0.12, -0.375 },
    { -0.477482, -0.12, -0.347518 },
    { -0.451259, -0.12, -0.395445 },
    3,
    76,
    163
};


tris[107] = {
    { -0.444852, -0.12, -0.327148 },
    { -0.477482, -0.12, -0.347518 },
    { -0.418, -0.12, -0.375 },
    3,
    76,
    163
};


tris[108] = {
    { -0.530935, -0.12, -0.353056 },
    { -0.546481, -0.12, -0.347445 },
    { -0.570219, -0.12, -0.402781 },
    3,
    76,
    163
};


tris[109] = {
    { -0.525, -0.12, -0.106 },
    { -0.546314, -0.12, -0.215828 },
    { -0.409, -0.12, -0.059 },
    3,
    76,
    163
};


tris[110] = {
    { -0.49506, -0.12, -0.353065 },
    { -0.484074, -0.12, -0.407222 },
    { -0.477482, -0.12, -0.347518 },
    3,
    76,
    163
};


tris[111] = {
    { -0.643588, -0.12, -0.271857 },
    { -0.575738, -0.12, -0.280693 },
    { -0.565797, -0.12, -0.249969 },
    3,
    76,
    163
};


tris[112] = {
    { -0.513, -0.12, -0.355 },
    { -0.484074, -0.12, -0.407222 },
    { -0.49506, -0.12, -0.353065 },
    3,
    76,
    163
};


tris[113] = {
    { -0.647, -0.12, -0.299 },
    { -0.574898, -0.12, -0.311945 },
    { -0.577, -0.12, -0.295 },
    3,
    76,
    163
};


tris[114] = {
    { -0.409, 0.12, -0.059 },
    { -0.409, 0.12, -0.052 },
    { -0.409, -0.12, -0.052 },
    3,
    76,
    163
};


tris[115] = {
    { -0.546481, -0.12, -0.347445 },
    { -0.546481, 0.12, -0.347445 },
    { -0.55925, 0.12, -0.3385 },
    3,
    76,
    163
};


tris[116] = {
    { -0.430523, -0.12, -0.313102 },
    { -0.430523, 0.12, -0.313102 },
    { -0.437484, -0.12, -0.320406 },
    3,
    76,
    163
};


tris[117] = {
    { -0.577, 0.12, -0.295 },
    { -0.575738, 0.12, -0.280693 },
    { -0.575738, -0.12, -0.280693 },
    3,
    76,
    163
};


tris[118] = {
    { -0.575738, -0.12, -0.280693 },
    { -0.575738, 0.12, -0.280693 },
    { -0.565797, 0.12, -0.249969 },
    3,
    76,
    163
};


tris[119] = {
    { -0.647, -0.12, -0.299 },
    { -0.647, 0.12, -0.299 },
    { -0.642722, 0.12, -0.330213 },
    3,
    76,
    163
};


tris[120] = {
    { -0.637531, 0.12, -0.344344 },
    { -0.621566, 0.12, -0.369203 },
    { -0.621566, -0.12, -0.369203 },
    3,
    76,
    163
};


tris[121] = {
    { -0.621566, -0.12, -0.369203 },
    { -0.621566, 0.12, -0.369203 },
    { -0.598851, 0.12, -0.388922 },
    3,
    76,
    163
};


tris[122] = {
    { -0.574898, 0.12, -0.311945 },
    { -0.577, 0.12, -0.295 },
    { -0.577, -0.12, -0.295 },
    3,
    76,
    163
};


tris[123] = {
    { -0.570219, 0.12, -0.402781 },
    { -0.536504, 0.12, -0.410057 },
    { -0.536504, -0.12, -0.410057 },
    3,
    76,
    163
};


tris[124] = {
    { -0.513, 0.12, -0.355 },
    { -0.530935, 0.12, -0.353056 },
    { -0.530935, -0.12, -0.353056 },
    3,
    76,
    163
};


tris[125] = {
    { -0.434782, -0.12, -0.386347 },
    { -0.434782, 0.12, -0.386347 },
    { -0.418, 0.12, -0.375 },
    3,
    76,
    163
};


tris[126] = {
    { -0.565797, -0.12, -0.249969 },
    { -0.565797, 0.12, -0.249969 },
    { -0.546314, 0.12, -0.215828 },
    3,
    76,
    163
};


tris[127] = {
    { -0.500801, -0.12, -0.410069 },
    { -0.500801, 0.12, -0.410069 },
    { -0.492391, -0.12, -0.408891 },
    3,
    76,
    163
};


tris[128] = {
    { -0.418, 0.12, -0.375 },
    { -0.418, 0.12, -0.297 },
    { -0.418, -0.12, -0.297 },
    3,
    76,
    163
};


tris[129] = {
    { -0.643588, -0.12, -0.271857 },
    { -0.643588, 0.12, -0.271857 },
    { -0.647, 0.12, -0.299 },
    3,
    76,
    163
};


tris[130] = {
    { -0.49506, 0.12, -0.353065 },
    { -0.513, 0.12, -0.355 },
    { -0.513, -0.12, -0.355 },
    3,
    76,
    163
};


tris[131] = {
    { -0.467625, -0.12, -0.402375 },
    { -0.467625, 0.12, -0.402375 },
    { -0.451259, 0.12, -0.395445 },
    3,
    76,
    163
};


tris[132] = {
    { -0.530935, 0.12, -0.353056 },
    { -0.546481, 0.12, -0.347445 },
    { -0.546481, -0.12, -0.347445 },
    3,
    76,
    163
};


tris[133] = {
    { -0.568852, -0.12, -0.326556 },
    { -0.568852, 0.12, -0.326556 },
    { -0.574898, 0.12, -0.311945 },
    3,
    76,
    163
};


tris[134] = {
    { -0.444852, 0.12, -0.327148 },
    { -0.477482, 0.12, -0.347518 },
    { -0.477482, -0.12, -0.347518 },
    3,
    76,
    163
};


tris[135] = {
    { -0.642722, 0.12, -0.330213 },
    { -0.637531, 0.12, -0.344344 },
    { -0.637531, -0.12, -0.344344 },
    3,
    76,
    163
};


tris[136] = {
    { -0.55925, 0.12, -0.3385 },
    { -0.568852, 0.12, -0.326556 },
    { -0.568852, -0.12, -0.326556 },
    3,
    76,
    163
};


tris[137] = {
    { -0.598851, 0.12, -0.388922 },
    { -0.570219, 0.12, -0.402781 },
    { -0.570219, -0.12, -0.402781 },
    3,
    76,
    163
};


tris[138] = {
    { -0.517707, -0.12, -0.177547 },
    { -0.517707, 0.12, -0.177547 },
    { -0.409, 0.12, -0.059 },
    3,
    76,
    163
};


tris[139] = {
    { -0.63337, 0.12, -0.243185 },
    { -0.63337, -0.12, -0.243185 },
    { -0.616375, -0.12, -0.212625 },
    3,
    76,
    163
};


tris[140] = {
    { -0.525, -0.12, -0.106 },
    { -0.525, 0.12, -0.106 },
    { -0.616375, 0.12, -0.212625 },
    3,
    76,
    163
};


tris[141] = {
    { -0.477482, 0.12, -0.347518 },
    { -0.49506, 0.12, -0.353065 },
    { -0.49506, -0.12, -0.353065 },
    3,
    76,
    163
};


tris[142] = {
    { -0.676, 0.12, -0.106 },
    { -0.525, 0.12, -0.106 },
    { -0.525, -0.12, -0.106 },
    3,
    76,
    163
};


tris[143] = {
    { -0.676, 0.12, -0.052 },
    { -0.676, 0.12, -0.106 },
    { -0.676, -0.12, -0.106 },
    3,
    76,
    163
};


tris[144] = {
    { -0.409, 0.12, -0.052 },
    { -0.676, 0.12, -0.052 },
    { -0.676, -0.12, -0.052 },
    3,
    76,
    163
};


tris[145] = {
    { -0.409, 0.12, -0.059 },
    { -0.409, -0.12, -0.052 },
    { -0.409, -0.12, -0.059 },
    3,
    76,
    163
};


tris[146] = {
    { -0.546481, -0.12, -0.347445 },
    { -0.55925, 0.12, -0.3385 },
    { -0.55925, -0.12, -0.3385 },
    3,
    76,
    163
};


tris[147] = {
    { -0.444852, 0.12, -0.327148 },
    { -0.444852, -0.12, -0.327148 },
    { -0.437484, 0.12, -0.320406 },
    3,
    76,
    163
};


tris[148] = {
    { -0.437484, 0.12, -0.320406 },
    { -0.437484, -0.12, -0.320406 },
    { -0.430523, 0.12, -0.313102 },
    3,
    76,
    163
};


tris[149] = {
    { -0.444852, -0.12, -0.327148 },
    { -0.437484, -0.12, -0.320406 },
    { -0.437484, 0.12, -0.320406 },
    3,
    76,
    163
};


tris[150] = {
    { -0.424013, 0.12, -0.305284 },
    { -0.418, -0.12, -0.297 },
    { -0.418, 0.12, -0.297 },
    3,
    76,
    163
};


tris[151] = {
    { -0.430523, 0.12, -0.313102 },
    { -0.424013, -0.12, -0.305284 },
    { -0.424013, 0.12, -0.305284 },
    3,
    76,
    163
};


tris[152] = {
    { -0.424013, 0.12, -0.305284 },
    { -0.424013, -0.12, -0.305284 },
    { -0.418, -0.12, -0.297 },
    3,
    76,
    163
};


tris[153] = {
    { -0.424013, -0.12, -0.305284 },
    { -0.430523, 0.12, -0.313102 },
    { -0.430523, -0.12, -0.313102 },
    3,
    76,
    163
};


tris[154] = {
    { -0.577, 0.12, -0.295 },
    { -0.575738, -0.12, -0.280693 },
    { -0.577, -0.12, -0.295 },
    3,
    76,
    163
};


tris[155] = {
    { -0.575738, -0.12, -0.280693 },
    { -0.565797, 0.12, -0.249969 },
    { -0.565797, -0.12, -0.249969 },
    3,
    76,
    163
};


tris[156] = {
    { -0.647, -0.12, -0.299 },
    { -0.642722, 0.12, -0.330213 },
    { -0.642722, -0.12, -0.330213 },
    3,
    76,
    163
};


tris[157] = {
    { -0.637531, 0.12, -0.344344 },
    { -0.621566, -0.12, -0.369203 },
    { -0.637531, -0.12, -0.344344 },
    3,
    76,
    163
};


tris[158] = {
    { -0.621566, -0.12, -0.369203 },
    { -0.598851, 0.12, -0.388922 },
    { -0.598851, -0.12, -0.388922 },
    3,
    76,
    163
};


tris[159] = {
    { -0.574898, 0.12, -0.311945 },
    { -0.577, -0.12, -0.295 },
    { -0.574898, -0.12, -0.311945 },
    3,
    76,
    163
};


tris[160] = {
    { -0.570219, 0.12, -0.402781 },
    { -0.536504, -0.12, -0.410057 },
    { -0.570219, -0.12, -0.402781 },
    3,
    76,
    163
};


tris[161] = {
    { -0.513, 0.12, -0.355 },
    { -0.530935, -0.12, -0.353056 },
    { -0.513, -0.12, -0.355 },
    3,
    76,
    163
};


tris[162] = {
    { -0.434782, 0.12, -0.386347 },
    { -0.434782, -0.12, -0.386347 },
    { -0.443047, 0.12, -0.391172 },
    3,
    76,
    163
};


tris[163] = {
    { -0.443047, 0.12, -0.391172 },
    { -0.443047, -0.12, -0.391172 },
    { -0.451259, 0.12, -0.395445 },
    3,
    76,
    163
};


tris[164] = {
    { -0.434782, -0.12, -0.386347 },
    { -0.443047, -0.12, -0.391172 },
    { -0.443047, 0.12, -0.391172 },
    3,
    76,
    163
};


tris[165] = {
    { -0.451259, 0.12, -0.395445 },
    { -0.443047, -0.12, -0.391172 },
    { -0.451259, -0.12, -0.395445 },
    3,
    76,
    163
};


tris[166] = {
    { -0.434782, -0.12, -0.386347 },
    { -0.418, 0.12, -0.375 },
    { -0.418, -0.12, -0.375 },
    3,
    76,
    163
};


tris[167] = {
    { -0.565797, -0.12, -0.249969 },
    { -0.546314, 0.12, -0.215828 },
    { -0.546314, -0.12, -0.215828 },
    3,
    76,
    163
};


tris[168] = {
    { -0.500801, 0.12, -0.410069 },
    { -0.509329, -0.12, -0.410769 },
    { -0.509329, 0.12, -0.410769 },
    3,
    76,
    163
};


tris[169] = {
    { -0.509329, 0.12, -0.410769 },
    { -0.518, -0.12, -0.411 },
    { -0.518, 0.12, -0.411 },
    3,
    76,
    163
};


tris[170] = {
    { -0.518, 0.12, -0.411 },
    { -0.536504, -0.12, -0.410057 },
    { -0.536504, 0.12, -0.410057 },
    3,
    76,
    163
};


tris[171] = {
    { -0.518, -0.12, -0.411 },
    { -0.509329, 0.12, -0.410769 },
    { -0.509329, -0.12, -0.410769 },
    3,
    76,
    163
};


tris[172] = {
    { -0.509329, -0.12, -0.410769 },
    { -0.500801, 0.12, -0.410069 },
    { -0.500801, -0.12, -0.410069 },
    3,
    76,
    163
};


tris[173] = {
    { -0.518, 0.12, -0.411 },
    { -0.518, -0.12, -0.411 },
    { -0.536504, -0.12, -0.410057 },
    3,
    76,
    163
};


tris[174] = {
    { -0.484074, 0.12, -0.407222 },
    { -0.484074, -0.12, -0.407222 },
    { -0.492391, 0.12, -0.408891 },
    3,
    76,
    163
};


tris[175] = {
    { -0.492391, 0.12, -0.408891 },
    { -0.492391, -0.12, -0.408891 },
    { -0.500801, 0.12, -0.410069 },
    3,
    76,
    163
};


tris[176] = {
    { -0.484074, -0.12, -0.407222 },
    { -0.492391, -0.12, -0.408891 },
    { -0.492391, 0.12, -0.408891 },
    3,
    76,
    163
};


tris[177] = {
    { -0.418, 0.12, -0.375 },
    { -0.418, -0.12, -0.297 },
    { -0.418, -0.12, -0.375 },
    3,
    76,
    163
};


tris[178] = {
    { -0.643588, -0.12, -0.271857 },
    { -0.647, 0.12, -0.299 },
    { -0.647, -0.12, -0.299 },
    3,
    76,
    163
};


tris[179] = {
    { -0.49506, 0.12, -0.353065 },
    { -0.513, -0.12, -0.355 },
    { -0.49506, -0.12, -0.353065 },
    3,
    76,
    163
};


tris[180] = {
    { -0.467625, 0.12, -0.402375 },
    { -0.467625, -0.12, -0.402375 },
    { -0.475827, 0.12, -0.405054 },
    3,
    76,
    163
};


tris[181] = {
    { -0.475827, 0.12, -0.405054 },
    { -0.475827, -0.12, -0.405054 },
    { -0.484074, 0.12, -0.407222 },
    3,
    76,
    163
};


tris[182] = {
    { -0.467625, -0.12, -0.402375 },
    { -0.475827, -0.12, -0.405054 },
    { -0.475827, 0.12, -0.405054 },
    3,
    76,
    163
};


tris[183] = {
    { -0.484074, 0.12, -0.407222 },
    { -0.475827, -0.12, -0.405054 },
    { -0.484074, -0.12, -0.407222 },
    3,
    76,
    163
};


tris[184] = {
    { -0.467625, -0.12, -0.402375 },
    { -0.451259, 0.12, -0.395445 },
    { -0.451259, -0.12, -0.395445 },
    3,
    76,
    163
};


tris[185] = {
    { -0.530935, 0.12, -0.353056 },
    { -0.546481, -0.12, -0.347445 },
    { -0.530935, -0.12, -0.353056 },
    3,
    76,
    163
};


tris[186] = {
    { -0.568852, -0.12, -0.326556 },
    { -0.574898, 0.12, -0.311945 },
    { -0.574898, -0.12, -0.311945 },
    3,
    76,
    163
};


tris[187] = {
    { -0.444852, 0.12, -0.327148 },
    { -0.477482, -0.12, -0.347518 },
    { -0.444852, -0.12, -0.327148 },
    3,
    76,
    163
};


tris[188] = {
    { -0.642722, 0.12, -0.330213 },
    { -0.637531, -0.12, -0.344344 },
    { -0.642722, -0.12, -0.330213 },
    3,
    76,
    163
};


tris[189] = {
    { -0.55925, 0.12, -0.3385 },
    { -0.568852, -0.12, -0.326556 },
    { -0.55925, -0.12, -0.3385 },
    3,
    76,
    163
};


tris[190] = {
    { -0.598851, 0.12, -0.388922 },
    { -0.570219, -0.12, -0.402781 },
    { -0.598851, -0.12, -0.388922 },
    3,
    76,
    163
};


tris[191] = {
    { -0.517707, 0.12, -0.177547 },
    { -0.517707, -0.12, -0.177547 },
    { -0.533125, 0.12, -0.19725 },
    3,
    76,
    163
};


tris[192] = {
    { -0.533125, 0.12, -0.19725 },
    { -0.533125, -0.12, -0.19725 },
    { -0.546314, 0.12, -0.215828 },
    3,
    76,
    163
};


tris[193] = {
    { -0.517707, -0.12, -0.177547 },
    { -0.533125, -0.12, -0.19725 },
    { -0.533125, 0.12, -0.19725 },
    3,
    76,
    163
};


tris[194] = {
    { -0.546314, 0.12, -0.215828 },
    { -0.533125, -0.12, -0.19725 },
    { -0.546314, -0.12, -0.215828 },
    3,
    76,
    163
};


tris[195] = {
    { -0.517707, -0.12, -0.177547 },
    { -0.409, 0.12, -0.059 },
    { -0.409, -0.12, -0.059 },
    3,
    76,
    163
};


tris[196] = {
    { -0.643588, 0.12, -0.271857 },
    { -0.643588, -0.12, -0.271857 },
    { -0.639328, 0.12, -0.257734 },
    3,
    76,
    163
};


tris[197] = {
    { -0.639328, 0.12, -0.257734 },
    { -0.639328, -0.12, -0.257734 },
    { -0.63337, 0.12, -0.243185 },
    3,
    76,
    163
};


tris[198] = {
    { -0.643588, -0.12, -0.271857 },
    { -0.639328, -0.12, -0.257734 },
    { -0.639328, 0.12, -0.257734 },
    3,
    76,
    163
};


tris[199] = {
    { -0.63337, 0.12, -0.243185 },
    { -0.616375, -0.12, -0.212625 },
    { -0.616375, 0.12, -0.212625 },
    3,
    76,
    163
};


tris[200] = {
    { -0.63337, -0.12, -0.243185 },
    { -0.63337, 0.12, -0.243185 },
    { -0.639328, -0.12, -0.257734 },
    3,
    76,
    163
};


tris[201] = {
    { -0.525, -0.12, -0.106 },
    { -0.616375, 0.12, -0.212625 },
    { -0.616375, -0.12, -0.212625 },
    3,
    76,
    163
};


tris[202] = {
    { -0.477482, 0.12, -0.347518 },
    { -0.49506, -0.12, -0.353065 },
    { -0.477482, -0.12, -0.347518 },
    3,
    76,
    163
};


tris[203] = {
    { -0.676, 0.12, -0.106 },
    { -0.525, -0.12, -0.106 },
    { -0.676, -0.12, -0.106 },
    3,
    76,
    163
};


tris[204] = {
    { -0.676, 0.12, -0.052 },
    { -0.676, -0.12, -0.106 },
    { -0.676, -0.12, -0.052 },
    3,
    76,
    163
};


tris[205] = {
    { -0.409, 0.12, -0.052 },
    { -0.676, -0.12, -0.052 },
    { -0.409, -0.12, -0.052 },
    3,
    76,
    163
};

return true;
}
