/*
 * Copyright (C) 2022 ASR Micro Limited
 * All Rights Reserved.
 */
#ifndef _GC2375H_ASR_SETTING_H_
#define _GC2375H_ASR_SETTING_H_

#include "cam_sensors_module.h"

#ifdef __cplusplus
extern "C" {
#endif /* extern "C" */

#define GC2375H_MIRROR_NORMAL
//#define GC2375H_MIRROR_H
//#define GC2375H_MIRROR_V
//#define GC2375H_MIRROR_HV

#if defined(GC2375H_MIRROR_NORMAL)
#define MIRROR 0xd4
#define STARTY 0x00
#define STARTX 0x02
#define BLK_Select1_H 0x00
#define BLK_Select1_L 0x3c
#define BLK_Select2_H 0x00
#define BLK_Select2_L 0x03
#elif defined(GC2375H_MIRROR_H)
#define MIRROR 0xd5
#define STARTY 0x00
#define STARTX 0x06
#define BLK_Select1_H 0x00
#define BLK_Select1_L 0x3c
#define BLK_Select2_H 0x00
#define BLK_Select2_L 0x03
#elif defined(GC2375H_MIRROR_V)
#define MIRROR 0xd6
#define STARTY 0x08
#define STARTX 0x02
#define BLK_Select1_H 0x3c
#define BLK_Select1_L 0x00
#define BLK_Select2_H 0xc0
#define BLK_Select2_L 0x00
#elif defined(GC2375H_MIRROR_HV)
#define MIRROR 0xd7
#define STARTY 0x08
#define STARTX 0x06
#define BLK_Select1_H 0x3c
#define BLK_Select1_L 0x00
#define BLK_Select2_H 0xc0
#define BLK_Select2_L 0x00
#else
#define MIRROR 0xd4
#define STARTY 0x00
#define STARTX 0x02
#define BLK_Select1_H 0x00
#define BLK_Select1_L 0x3c
#define BLK_Select2_H 0x00
#define BLK_Select2_L 0x03
#endif

struct regval_tab gc2375h_asr_1600x1200_10bit_30fps_tab[] = {
    /*System*/
    {0xfe, 0x00},
    {0xfe, 0x00},
    {0xfe, 0x00},
    {0xf7, 0x03}, // 01
    {0xf8, 0x1e}, // 0c
    {0xf9, 0x42},
    {0xfa, 0x88},
    {0xfc, 0x8e},
    {0xfe, 0x00},
    {0x86, 0x05}, // 0x4 [3:0] start_cnt_th: drop frame
    {0x88, 0x03},
    /*Analog*/
    {0x03, 0x04},
    {0x04, 0x65},
#if 0 //mclk = 24M
    {0x05, 0x03}, // 02
    {0x06, 0x19}, // 2c->19
    {0x07, 0x00},
    {0x08, 0x25}, // 10->25
#else //mclk = 23.63
    {0x05, 0x02}, //HB[11:8]
    {0x06, 0xbc}, //HB[7:0]
    {0x07, 0x00}, //VB[12:8]
    {0x08, 0x6e}, //VB[7:0]
#endif
    {0x09, 0x00},
    {0x0a, 0x08},
    {0x0b, 0x00},
    {0x0c, 0x18},
    {0x0d, 0x04},
    {0x0e, 0xb8},
    {0x0f, 0x06},
    {0x10, 0x48},
    {0x17, MIRROR},
    {0x1c, 0x10},
    {0x1d, 0x13},
    {0x20, 0x0b},
    {0x21, 0x6d},
    {0x22, 0x0c},
    {0x25, 0xc1},
    {0x26, 0x0e},
    {0x27, 0x22},
    {0x29, 0x5f},
    {0x2b, 0x88},
    {0x2f, 0x12},
    {0x38, 0x86},
    {0x3d, 0x00},
    {0xcd, 0xa3},
    {0xce, 0x57},
    {0xd0, 0x09},
    {0xd1, 0xca},
    {0xd2, 0x34},
    {0xd3, 0xbb},
    {0xd8, 0x60},
    {0xe0, 0x08},
    {0xe1, 0x1f},
    {0xe4, 0xf8},
    {0xe5, 0x0c},
    {0xe6, 0x10},
    {0xe7, 0xcc},
    {0xe8, 0x02},
    {0xe9, 0x01},
    {0xea, 0x02},
    {0xeb, 0x01},
    /*Crop*/
    {0x90, 0x01},
    {0x92, STARTY}, // STARTY
    {0x94, STARTX}, // 00 //STARTX
    {0x95, 0x04},
    {0x96, 0xb0},
    {0x97, 0x06},
    {0x98, 0x40},
    /*BLK*/
    {0x18, 0x02},
    {0x1a, 0x18},
    {0x28, 0x00},
    {0x3f, 0x40},
    {0x40, 0x26},
    {0x41, 0x00},
    {0x43, 0x03},
    {0x4a, 0x00},
    {0x4e, BLK_Select1_H},
    {0x4f, BLK_Select1_L},
    {0x66, BLK_Select2_H},
    {0x67, BLK_Select2_L},
    /*Dark sun*/
    {0x68, 0x00},
    /*Gain*/
    {0xb0, 0x58},
    {0xb1, 0x01},
    {0xb2, 0x00},
    {0xb6, 0x00},
    /*MIPI*/
    {0xef, 0x00},
    {0xfe, 0x03},
    {0x01, 0x03},
    {0x02, 0x33},
    {0x03, 0x90},
    {0x04, 0x04},
    {0x05, 0x00},
    {0x06, 0x80},
    {0x11, 0x2b},
    {0x12, 0xd0},
    {0x13, 0x07},
    {0x15, 0x00},
    {0x21, 0x08},
    {0x22, 0x05},
    {0x23, 0x14}, // 13
    {0x24, 0x02},
    {0x25, 0x13},
    {0x26, 0x08},
    {0x29, 0x06},
    {0x2a, 0x08},
    {0x2b, 0x08},
    {0xfe, 0x00},
    {0xef, 0x00},//stream off
    {0xfe, 0x00},
};

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif
