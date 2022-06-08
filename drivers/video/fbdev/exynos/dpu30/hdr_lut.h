/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * DPP HDR LUT(Look Up Table)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _HDR_LUT_
#define _HDR_LUT_

#include <linux/types.h>

#if defined(CONFIG_SOC_EXYNOS9630)
#define MAX_OETF	(33)
#define MAX_EOTF	(129)
#endif

#define MAX_GM		(9)
#define MAX_TM		(33)

/* EOTF section */
// smpte 2084 1000nit
u32 eotf_x_axis_st2084_1000[MAX_EOTF] = {
	0, 64, 128, 160, 192, 224, 256, 288, 304, 320,
	336, 352, 368, 384, 400, 416, 432, 448, 464, 480,
	496, 512, 528, 536, 544, 552, 560, 568, 576, 584,
	592, 600, 608, 616, 624, 632, 640, 648, 656, 664,
	672, 680, 688, 696, 704, 712, 720, 728, 736, 744,
	748, 752, 756, 760, 764, 768, 769, 770, 772, 776,
	784, 800, 832, 896, 128,
};

u32 eotf_y_axis_st2084_1000[MAX_EOTF] = {
	0, 2, 10, 19, 33, 54, 85, 130, 159, 194,
	235, 283, 339, 406, 483, 574, 679, 802, 944, 1110,
	1301, 1523, 1780, 1923, 2076, 2241, 2419, 2610, 2814, 3034,
	3271, 3524, 3797, 4089, 4403, 4740, 5102, 5490, 5907, 6354,
	6834, 7350, 7903, 8496, 9134, 9817, 10551, 11339, 12185, 13093,
	13571, 14067, 14581, 15114, 15665, 16237, 16383, 16383, 16383, 16383,
	16383, 16383, 16383, 16383, 0,
};

// smpte 2084 4000nit
u32 eotf_x_axis_st2084_4000[MAX_EOTF] = {
	0, 32, 48, 56, 64, 72, 80, 84, 88, 92,
	94, 96, 100, 102, 104, 108, 112, 120, 128, 130,
	132, 134, 136, 138, 140, 142, 144, 146, 148, 152,
	156, 158, 160, 168, 176, 192, 224, 240, 256, 272,
	288, 304, 320, 352, 384, 416, 448, 480, 512, 544,
	576, 608, 640, 768, 832, 896, 912, 920, 922, 923,
	924, 928, 960, 992, 32,
};

u32 eotf_y_axis_st2084_4000[MAX_EOTF] = {
	0, 0, 1, 1, 2, 2, 3, 3, 4, 4,
	4, 5, 5, 5, 6, 6, 7, 8, 10, 10,
	11, 11, 12, 12, 13, 13, 14, 14, 15, 16,
	17, 18, 19, 21, 25, 32, 54, 68, 85, 105,
	130, 159, 193, 282, 404, 572, 799, 1106, 1519, 2071,
	2807, 3773, 4912, 10549, 13333, 15605, 16075, 16294, 16348, 16374,
	16383, 16383, 16383, 16383, 0,
};

// Rec709/601
u32 eotf_x_axis_709_601[MAX_EOTF] = {
	0, 64, 96, 112, 128, 144, 160, 176, 192, 208,
	224, 240, 256, 272, 288, 304, 320, 336, 352, 368,
	384, 400, 416, 432, 448, 464, 480, 496, 512, 528,
	544, 560, 576, 592, 608, 624, 640, 656, 672, 688,
	704, 720, 736, 752, 768, 784, 800, 816, 832, 848,
	864, 880, 896, 912, 928, 944, 960, 976, 992, 1008,
	1016, 1020, 1022, 1023, 1,
};

u32 eotf_y_axis_709_601[MAX_EOTF] = {
	0, 227, 342, 407, 477, 555, 638, 728, 825, 928,
	1038, 1155, 1278, 1409, 1547, 1691, 1843, 2003, 2169, 2343,
	2524, 2712, 2908, 3112, 3323, 3542, 3769, 4003, 4245, 4495,
	4753, 5019, 5293, 5574, 5864, 6162, 6468, 6782, 7105, 7436,
	7775, 8122, 8478, 8842, 9215, 9596, 9985, 10383, 10790, 11205,
	11629, 12062, 12503, 12953, 13412, 13880, 14356, 14841, 15336, 15839,
	16094, 16222, 16286, 16318, 65,
};

// sRGB
u32 eotf_x_axis_srgb[MAX_EOTF] = {
	0, 32, 64, 80, 96, 112, 128, 144, 160, 176,
	192, 208, 224, 240, 256, 272, 288, 304, 320, 336,
	352, 368, 384, 400, 416, 432, 448, 464, 480, 496,
	512, 528, 544, 560, 576, 592, 608, 624, 640, 656,
	672, 688, 704, 720, 736, 752, 768, 784, 800, 816,
	832, 848, 864, 880, 896, 912, 928, 944, 960, 976,
	992, 1008, 1016, 1020, 4,
};

u32 eotf_y_axis_srgb[MAX_EOTF] = {
	0, 40, 84, 114, 149, 189, 235, 287, 345, 409,
	480, 557, 642, 733, 832, 938, 1051, 1172, 1301, 1438,
	1583, 1736, 1897, 2066, 2245, 2431, 2627, 2831, 3045, 3267,
	3499, 3740, 3991, 4251, 4521, 4800, 5089, 5388, 5697, 6017,
	6346, 6686, 7036, 7396, 7768, 8149, 8542, 8945, 9359, 9784,
	10221, 10668, 11127, 11597, 12078, 12571, 13075, 13591, 14118, 14658,
	15209, 15772, 16058, 16202, 181,
};

// HLG
u32 eotf_x_axis_hlg[MAX_EOTF] = {
	0, 32, 64, 96, 128, 160, 192, 224, 256, 288,
	320, 352, 384, 416, 448, 480, 512, 528, 544, 560,
	576, 592, 608, 624, 640, 656, 672, 688, 704, 720,
	736, 752, 768, 776, 784, 792, 800, 808, 816, 824,
	832, 840, 848, 856, 864, 872, 880, 888, 896, 904,
	912, 920, 928, 936, 944, 952, 960, 968, 976, 984,
	992, 1000, 1008, 1016, 8,
};

u32 eotf_y_axis_hlg[MAX_EOTF] = {
	0, 5, 21, 48, 85, 133, 192, 261, 341, 432,
	533, 645, 768, 901, 1045, 1200, 1365, 1454, 1552, 1658,
	1774, 1900, 2038, 2189, 2353, 2533, 2728, 2942, 3175, 3430,
	3707, 4010, 4341, 4517, 4702, 4894, 5096, 5306, 5525, 5755,
	5994, 6245, 6506, 6779, 7065, 7363, 7674, 7999, 8339, 8694,
	9065, 9453, 9857, 10280, 10722, 11183, 11665, 12169, 12695, 13245,
	13819, 14418, 15045, 15699, 684,
};


/* GM section */
// 709 to P3
u32 gm_coef_709_p3[MAX_GM] = {
	13475, 2909, 0,
	544, 15840, 0,
	280, 1186, 14918,
};

// 709 to 2020
u32 gm_coef_709_2020[MAX_GM] = {
	10279, 5395, 710,
	1132, 15066, 186,
	269, 1442, 14673,
};

// P3 to 709
u32 gm_coef_p3_709[MAX_GM] = {
	20069, -3685, 0,
	-689, 17073, 0,
	-322, -1288, 17994,
};

// P3 to 2020
u32 gm_coef_p3_2020[MAX_GM] = {
	12351, 3254, 779,
	749, 15430, 204,
	-20, 288, 16115,
};

// 2020 to P3
u32 gm_coef_2020_p3[MAX_GM] = {
	22013, -4623, -1006,
	-1070, 17626, -172,
	46, -321, 16659,
};

// 2020 to 709
u32 gm_coef_2020_709[MAX_GM] = {
	27205, -9628, -1194,
	-2041, 18561, -137,
	-297, -1648, 18329,
};

/* TM section */
// TUNE
u32 tm_x_tune[MAX_TM] = { 0, };
u32 tm_y_tune[MAX_TM] = { 0, };

// sRGB
u32 tm_x_axis_srgb[MAX_TM] = {
	0, 64, 128, 256, 384, 512, 640, 768, 1024, 1280,
	1536, 1792, 2048, 2560, 3072, 3584, 4096, 4608, 5120, 5376,
	5632, 6144, 7168, 8192, 8704, 9216, 10240, 11264, 12288, 13312,
	13824, 14336, 2048,
};

u32 tm_y_axis_srgb[MAX_TM] = {
	0, 51, 87, 135, 170, 198, 223, 245, 284, 317,
	346, 373, 398, 442, 481, 517, 549, 580, 608, 622,
	635, 661, 709, 752, 773, 793, 831, 867, 901, 934,
	949, 965, 58,
};

// rec.601/709
u32 tm_x_axis_601_709[MAX_TM] = {
	0, 256, 384, 512, 640, 768, 1024, 1280, 1536, 1792,
	2048, 2304, 2560, 2816, 3072, 3584, 3840, 4096, 4352, 4608,
	5120, 5632, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312,
	14336, 15360, 1024,
};

u32 tm_y_axis_601_709[MAX_TM] = {
	0, 72, 106, 135, 160, 182, 222, 256, 286, 314,
	340, 364, 386, 408, 428, 466, 484, 501, 518, 534,
	565, 594, 622, 674, 722, 767, 809, 849, 886, 923,
	957, 991, 32,
};

// smpte2084 1000nit
u32 tm_x_axis_2084_1000nit[MAX_TM] = {
	0, 4, 8, 16, 32, 64, 96, 128, 192, 256,
	384, 512, 640, 768, 1024, 1280, 1536, 2048, 2560, 3072,
	3584, 4096, 4608, 5120, 6144, 7168, 8192, 9216, 10240, 11264,
	12288, 14336, 2048,
};

u32 tm_y_axis_2084_1000nit[MAX_TM] = {
	0, 91, 119, 152, 191, 236, 265, 286, 319, 343,
	379, 405, 426, 444, 472, 494, 513, 542, 566, 585,
	601, 616, 629, 640, 660, 677, 692, 705, 716, 727,
	737, 754, 15,
};

// 1/2.2 gamma 1000nit
u32 tm_x_axis_gamma_2P2_1000[MAX_TM] = {
	0, 1, 2, 4, 8, 16, 32, 64, 96, 128,
	192, 256, 384, 512, 768, 1024, 1536, 2048, 2560, 3072,
	4096, 5120, 6144, 6656, 7168, 7680, 8192, 9216, 10240, 12288,
	14336, 15360, 1024,
};

u32 tm_y_axis_gamma_2P2_1000[MAX_TM] = {
	0, 16, 22, 31, 42, 57, 79, 108, 130, 148,
	178, 203, 244, 278, 334, 381, 458, 522, 577, 627,
	715, 791, 860, 891, 917, 936, 950, 971, 985, 1004,
	1015, 1019, 4,
};

// 1/2.2 gamma 4000nit
u32 tm_x_axis_gamma_2P2_4000[MAX_TM] = {
	0, 1, 2, 4, 8, 16, 32, 64, 96, 128,
	192, 256, 384, 512, 768, 1024, 1536, 2048, 2560, 3072,
	3584, 4096, 4608, 5120, 6144, 7168, 8192, 9216, 10240, 12288,
	14336, 15360, 1024,
};

u32 tm_y_axis_gamma_2P2_4000[MAX_TM] = {
	0, 16, 22, 31, 42, 57, 79, 108, 130, 148,
	178, 203, 244, 278, 334, 381, 458, 522, 577, 627,
	672, 710, 743, 771, 818, 856, 888, 914, 936, 972,
	1001, 1012, 11,
};

// 1/2.4 gamma
u32 tm_x_axis_gamma_2P4[MAX_TM] = {
	0, 16, 32, 64, 128, 256, 384, 512, 768, 1024,
	1280, 1536, 2048, 2560, 3072, 3584, 4096, 4608, 5120, 6144,
	7168, 7680, 8192, 8704, 9216, 10240, 11264, 12288, 12800, 13312,
	14336, 15360, 1024,
};

u32 tm_y_axis_gamma_2P4[MAX_TM] = {
	0, 57, 76, 101, 135, 181, 214, 241, 286, 322,
	354, 382, 430, 472, 509, 543, 574, 603, 630, 680,
	725, 746, 766, 786, 805, 841, 875, 907, 923, 938,
	968, 996, 27,
};

// 1/2.6 gamma
u32 tm_x_axis_gamma_2P6[MAX_TM] = {
	0, 16, 32, 64, 128, 192, 256, 384, 512, 640,
	768, 1024, 1280, 1536, 1792, 2048, 2560, 2816, 3072, 3584,
	4096, 4608, 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288,
	14336, 15360, 1024,
};

u32 tm_y_axis_gamma_2P6[MAX_TM] = {
	0, 71, 93, 121, 158, 185, 207, 242, 270, 294,
	315, 352, 384, 412, 437, 460, 501, 520, 537, 570,
	600, 628, 654, 702, 744, 784, 820, 854, 886, 916,
	972, 998, 25,
};

/* FOR TEST */
u32 eotf_x_axis_dft[MAX_EOTF] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
	10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
	20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
	30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
	40, 41, 42, 43, 44, 45, 46, 48, 64, 96,
	128, 192, 256, 320, 384, 448, 512, 576, 640, 704,
	768, 832, 896, 960, 64,
};

u32 eotf_y_axis_dft[MAX_EOTF] = {
	0, 1, 2, 4, 5, 6, 7, 9, 10, 11,
	12, 14, 15, 16, 17, 19, 20, 21, 22, 24,
	25, 26, 27, 29, 30, 31, 32, 33, 35, 36,
	37, 38, 40, 41, 42, 43, 45, 46, 47, 48,
	50, 51, 52, 53, 55, 56, 57, 60, 85, 149,
	235, 482, 835, 1306, 1905, 2638, 3514, 4540, 5722, 7066,
	8579, 10266, 12131, 14181, 2202,
};

s32 gm_coef_bypass[MAX_GM] = {
	16384, 0, 0,
	0, 16384, 0,
	0, 0, 16384,
};

u32 tm_x_axis_dft[MAX_TM] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
	10, 11, 12, 13, 14, 15, 16, 20, 24, 32,
	64, 128, 256, 512, 1024, 1536, 2048, 3072, 4096, 6144,
	8192, 12288, 4096,
};

u32 tm_y_axis_dft[MAX_TM] = {
	0, 12, 17, 20, 23, 26, 28, 30, 32, 34,
	35, 37, 38, 40, 41, 43, 44, 48, 53, 60,
	82, 113, 154, 212, 290, 349, 398, 478, 545, 655,
	747, 898, 125,
};

#endif /* _HDR_LUT_ */
