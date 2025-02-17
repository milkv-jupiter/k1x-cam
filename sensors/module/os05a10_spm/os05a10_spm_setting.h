/*
 * Copyright (C) 2023 Spacemit Limited
 * All Rights Reserved.
 */
#ifndef _OS05A10_SPM_SETTING_H_
#define _OS05A10_SPM_SETTING_H_

#include "cam_sensors_module.h"

#ifdef __cplusplus
extern "C" {
#endif /* extern "C" */

//#define OS05A10_1080P_16FPS
//#define ZYNQ_OS05A10_1080P_MCLK29_MIPI354_7FPS
#define ZYNQ_OS05A10_1080P_MCLK29_MIPI354_1FPS

struct regval_tab os05a10_spm_1920x1080_10bit_30fps_tab[] = {
    // SCLK:108M  MIPI bps:960M/1lane; MCLK:24M
    {0x0100, 0x00},
    {0x0303, 0x01},  // bit[2:0] 0x00: /1; 0x01: /1.5
#if defined(OS05A10_1080P_16FPS)
    {0x0305, 0x1e},  // 0x1e:32 MIPI bps:480M
    {0x0306, 0x00},
    {0x0307, 0x00},
#elif defined(ZYNQ_OS05A10_1080P_MCLK29_MIPI354_7FPS)
    //MCLK =29.5M; mipi bps: 1062/4 = 265.5M, 1062/3= 354M
    //{0x0303, 0x01}, //bit[2:0] 0x00: /1; 0x01: /1.5
    {0x0305, 0x36}, //MCLK =29.5M, 0x36:54 VCO = 1062M
    {0x0306, 0x00},
    {0x0307, 0x02}, //1+bit[3:0]: mipi div
#elif defined(ZYNQ_OS05A10_1080P_MCLK29_MIPI354_1FPS)
    //MCLK =29.5M; mipi bps: 1062/4 = 265.5M, 1062/3= 354M
    //{0x0303, 0x01}, //bit[2:0] 0x00: /1; 0x01: /1.5
    {0x0305, 0x36}, //MCLK =29.5M, 0x36:54 VCO = 1062M
    {0x0306, 0x00},
    {0x0307, 0x02}, //1+bit[3:0]: mipi div
#else
    {0x0305, 0x3c},  // bit[7:0] 0x3c: x60
    {0x0306, 0x00},
    {0x0307, 0x00},
#endif
    {0x0308, 0x03},
    {0x0309, 0x04},
    {0x032a, 0x00},
    {0x0325, 0x48},
    {0x0328, 0x07},
    {0x031e, 0x09},  // 0x0a:10bit; 0x09:10bit
    {0x300d, 0x11},
    {0x300e, 0x11},
    {0x300f, 0x11},
    {0x3010, 0x01},
    {0x3012, 0x11},  // lane num
    {0x3016, 0xf0},
    {0x3018, 0xf0},
    {0x3028, 0xf0},
    {0x301e, 0x98},
    {0x3010, 0x04},
    {0x3011, 0x06},
    {0x3031, 0xa9},
    {0x3103, 0x48},
    {0x3104, 0x01},
    {0x3106, 0x10},
    {0x3400, 0x04},
    {0x3025, 0x03},
    {0x3425, 0x51},
    {0x3428, 0x01},
    {0x3406, 0x08},
    {0x3408, 0x03},
    {0x3501, 0x08},
    {0x3502, 0x6f},
    {0x3505, 0x83},
    {0x3508, 0x00},
    {0x3509, 0x80},
    {0x350a, 0x04},
    {0x350b, 0x00},
    {0x350c, 0x00},
    {0x350d, 0x80},
    {0x350e, 0x04},
    {0x350f, 0x00},
    {0x3600, 0x00},
    {0x3626, 0xff},
    {0x3605, 0x50},
    {0x3609, 0xdb},
    {0x3610, 0x69},
    {0x360c, 0x01},
    {0x3628, 0xa4},
    {0x3629, 0x6a},
    {0x362d, 0x10},
    {0x3660, 0xd3},
    {0x3661, 0x06},
    {0x3662, 0x00},
    {0x3663, 0x28},
    {0x3664, 0x0d},
    {0x366a, 0x38},
    {0x366b, 0xa0},
    {0x366d, 0x00},
    {0x366e, 0x00},
    {0x3680, 0x00},
    {0x3621, 0x81},
    {0x3634, 0x31},
    {0x3620, 0x00},
    {0x3622, 0x00},
    {0x362a, 0xd0},
    {0x362e, 0x8c},
    {0x362f, 0x98},
    {0x3630, 0xb0},
    {0x3631, 0xd7},
    {0x3701, 0x0f},
    {0x3737, 0x02},
    {0x3741, 0x04},
    {0x373c, 0x0f},
    {0x373b, 0x02},
    {0x3705, 0x00},
    {0x3706, 0xa0},
    {0x370a, 0x01},
    {0x370b, 0xc8},
    {0x3709, 0x4a},
    {0x3714, 0x21},
    {0x371c, 0x00},
    {0x371d, 0x08},
    {0x375e, 0x0b},
    {0x3776, 0x10},
    {0x3781, 0x02},
    {0x3782, 0x04},
    {0x3783, 0x02},
    {0x3784, 0x08},
    {0x3785, 0x08},
    {0x3788, 0x01},
    {0x3789, 0x01},
    {0x3797, 0x04},
    {0x3761, 0x02},
    {0x3762, 0x0d},
    {0x3800, 0x00},
    {0x3801, 0x00},
    {0x3802, 0x00},
    {0x3803, 0x0c},
    {0x3804, 0x0e},
    {0x3805, 0xff},
    {0x3806, 0x08},
    {0x3807, 0x6f},
    {0x3808, 0x0a},  // sensor_width[11:8] 0x0a80:2688
    {0x3809, 0x80},  // sensor_width [7:0]
    {0x380a, 0x07},  // sensor_height[11:8] 0x0798:1944
    {0x380b, 0x98},  // sensor_height[7:0]
    {0x380c, 0x04},
    {0x380d, 0xd0},
    {0x380e, 0x08},
    {0x380f, 0x8f},
    {0x3813, 0x04},
    {0x3814, 0x01},
    {0x3815, 0x01},
    {0x3816, 0x01},
    {0x3817, 0x01},
    {0x381c, 0x00},
    {0x3820, 0x00},
    {0x3821, 0x04},
    {0x3823, 0x18},
    {0x3826, 0x00},
    {0x3827, 0x01},
    {0x3832, 0x02},
    {0x383c, 0x48},
    {0x383d, 0xff},
    {0x3843, 0x20},
    {0x382d, 0x08},
    {0x3d85, 0x0b},
    {0x3d84, 0x40},
    {0x3d8c, 0x63},
    {0x3d8d, 0x00},
    {0x4000, 0x78},
    {0x4001, 0x2b},
    {0x4004, 0x01},
    {0x4005, 0x03},
    {0x4028, 0x2f},
    {0x400a, 0x01},
    {0x4010, 0x12},
    {0x4008, 0x02},
    {0x4009, 0x0d},
    {0x401a, 0x58},
    {0x4050, 0x00},
    {0x4051, 0x01},
    {0x4052, 0x00},
    {0x4053, 0x80},
    {0x4054, 0x00},
    {0x4055, 0x80},
    {0x4056, 0x00},
    {0x4057, 0x80},
    {0x4058, 0x00},
    {0x4059, 0x80},
    {0x430b, 0xff},
    {0x430c, 0xff},
    {0x430d, 0x00},
    {0x430e, 0x00},
    {0x4501, 0x18},
    {0x4502, 0x00},
    {0x4600, 0x00},
    {0x4601, 0x10},
    {0x4603, 0x01},
    {0x4643, 0x00},
    {0x4640, 0x01},
    {0x4641, 0x04},
    {0x480e, 0x00},
    {0x4813, 0x00},
    {0x4815, 0x2b},
    {0x486e, 0x36},
    {0x486f, 0x84},
    {0x4860, 0x00},
    {0x4861, 0xa0},
    {0x484b, 0x05},
    {0x4850, 0x00},
    {0x4851, 0xaa},
    {0x4852, 0xff},
    {0x4853, 0x8a},
    {0x4854, 0x08},
    {0x4855, 0x30},
    {0x4800, 0x00},
    {0x4837, 0x50},
    {0x5000, 0xc9},
    {0x5001, 0x43},
    {0x5211, 0x03},
    {0x5291, 0x03},
    {0x520d, 0x0f},
    {0x520e, 0xfd},
    {0x520f, 0xa5},
    {0x5210, 0xa5},
    {0x528d, 0x0f},
    {0x528e, 0xfd},
    {0x528f, 0xa5},
    {0x5290, 0xa5},
    {0x5004, 0x40},
    {0x5005, 0x00},
    {0x5081, 0x00},  // bit[7]: test pattern enable,0x80
    {0x5180, 0x00},
    {0x5181, 0x10},
    {0x5182, 0x0f},
    {0x5183, 0xff},
    {0x580b, 0x03},
    {0x4d00, 0x03},
    {0x4d01, 0xe9},
    {0x4d02, 0xba},
    {0x4d03, 0x66},
    {0x4d04, 0x46},
    {0x4d05, 0xa5},
    {0x3603, 0x3c},
    {0x3703, 0x26},
    {0x3709, 0x49},
    {0x4000, 0x79},
// 0xf28: 3880;720Mbps/1-lane 10bit Hblank:10%,V-blank:10%
// 0x978: 2424;960Mbps/1-lane 10bit Hblank:10%,V-blank:10%
#if defined(OS05A10_1080P_16FPS)  // 16fps
    {0x380c, 0x15},
    {0x380d, 0xfa},  // 0x15fa: 5626; 0xbb8:3000
// {0x4837, 0x19},
#elif defined(ZYNQ_OS05A10_1080P_MCLK29_MIPI354_7FPS)
    //MCLK = 29.5M, sysclk = 132.75M
    //MIPI =265.5Mbps/1-lane, HTS = 0x2b36 =11062 line_time: 83.33us; 10fps
    //MIPI =354Mbps/1-lane, HTS = 0x213C =8508 line_time: 60us; 13fps
    {0x380c, 0x42},
    {0x380d, 0x78}, //0x4278 = 17016, line_time =113.6us, 6fps
    {0x4837, 0x19}, //0x49
#elif defined(ZYNQ_OS05A10_1080P_MCLK29_MIPI354_1FPS)
    {0x380c, 0x84},
    {0x380d, 0xf0}, //0x84f0 = 17016*2, line_time = 256.36us
    {0x4837, 0x19}, //0x49
#else
    {0x380c, 0x0b},
    {0x380d, 0xb8},
#endif
#if defined(ZYNQ_OS05A10_1080P_MCLK29_MIPI354_1FPS)
    {0x380e, 0x0f},
    {0x380f, 0x3c},  // vts: 0x4b0 = 3900;   1/fps = hts * vts /sysclk(132.75M)
#else
    {0x380e, 0x04},
    {0x380f, 0xb0},  // 0x4b0 1200;
#endif
    // 1920x1080
    {0x3808, 0x07},  // sensor_width[11:8]
    {0x3809, 0x80},  // sensor_width [7:0]
    {0x380a, 0x04},  // sensor_height[11:8]
    {0x380b, 0x38},  // sensor_height[7:0]
    {0x3810, 0x01},  // x output offset
    {0x3811, 0x50},
    {0x3812, 0x01},  // y output offset
    {0x3813, 0xb0},
    // end
    {0x3501, 0x03},
    {0x3502, 0x00},
    //{0x3009, 0x07},	// bit[1:0]
    {0x0100, 0x00},
};

struct regval_tab os05a10_spm_HDR_1920x1080_10bit_30fps_tab[] = {
    // SCLK=108M, MIPI bps:960M/1lane; MCLK:24M
    {0x0100, 0x00},
    {0x0303, 0x01},  // bit[2:0] 0x00: /1; 0x01: /1.5
    {0x0305, 0x3c},  // bit[7:0] 0x3c: x60
    {0x0306, 0x00},
    {0x0307, 0x00},
    {0x0308, 0x03},
    {0x0309, 0x04},
    {0x032a, 0x00},
    {0x031e, 0x09},  // 0x0a:10bit; 0x09:10bit
    {0x0325, 0x48},
    {0x0328, 0x07},
    {0x300d, 0x11},
    {0x300e, 0x11},
    {0x300f, 0x11},
    {0x3026, 0x00},
    {0x3027, 0x00},
    {0x3010, 0x01},
    {0x3012, 0x11},  // lane num 0x41
    {0x3016, 0xf0},
    {0x3018, 0xf0},
    {0x3028, 0xf0},
    {0x301e, 0x98},
    {0x3010, 0x01},
    {0x3011, 0x04},
    {0x3031, 0xa9},
    {0x3103, 0x48},
    {0x3104, 0x01},
    {0x3106, 0x10},
    {0x3501, 0x09},
    {0x3502, 0xa0},
    {0x3505, 0x83},
    {0x3508, 0x00},
    {0x3509, 0x80},
    {0x350a, 0x04},
    {0x350b, 0x00},
    {0x350c, 0x00},
    {0x350d, 0x80},
    {0x350e, 0x04},
    {0x350f, 0x00},
    {0x3600, 0x00},
    {0x3626, 0xff},
    {0x3605, 0x50},
    {0x3609, 0xb5},
    {0x3610, 0x69},
    {0x360c, 0x01},
    {0x3628, 0xa4},
    {0x3629, 0x6a},
    {0x362d, 0x10},
    {0x3660, 0x42},
    {0x3661, 0x07},
    {0x3662, 0x00},
    {0x3663, 0x28},
    {0x3664, 0x0d},
    {0x366a, 0x38},
    {0x366b, 0xa0},
    {0x366d, 0x00},
    {0x366e, 0x00},
    {0x3680, 0x00},
    {0x36c0, 0x00},
    {0x3621, 0x81},
    {0x3634, 0x31},
    {0x3620, 0x00},
    {0x3622, 0x00},
    {0x362a, 0xd0},
    {0x362e, 0x8c},
    {0x362f, 0x98},
    {0x3630, 0xb0},
    {0x3631, 0xd7},
    {0x3701, 0x0f},
    {0x3737, 0x02},
    {0x3740, 0x18},
    {0x3741, 0x04},
    {0x373c, 0x0f},
    {0x373b, 0x02},
    {0x3705, 0x00},
    {0x3706, 0x50},
    {0x370a, 0x00},
    {0x370b, 0xe4},
    {0x3709, 0x4a},
    {0x3714, 0x21},
    {0x371c, 0x00},
    {0x371d, 0x08},
    {0x375e, 0x0e},
    {0x3760, 0x13},
    {0x3776, 0x10},
    {0x3781, 0x02},
    {0x3782, 0x04},
    {0x3783, 0x02},
    {0x3784, 0x08},
    {0x3785, 0x08},
    {0x3788, 0x01},
    {0x3789, 0x01},
    {0x3797, 0x04},
    {0x3798, 0x01},
    {0x3799, 0x00},
    {0x3761, 0x02},
    {0x3762, 0x0d},
    {0x3800, 0x00},
    {0x3801, 0x00},
    {0x3802, 0x00},
    {0x3803, 0x0c},
    {0x3804, 0x0e},
    {0x3805, 0xff},
    {0x3806, 0x08},
    {0x3807, 0x6f},
    {0x3808, 0x0a},
    {0x3809, 0x80},
    {0x380a, 0x07},
    {0x380b, 0x98},
    {0x380c, 0x02},
    {0x380d, 0xd0},
    {0x380e, 0x09},
    {0x380f, 0xc0},
    {0x3811, 0x10},
    {0x3813, 0x04},
    {0x3814, 0x01},
    {0x3815, 0x01},
    {0x3816, 0x01},
    {0x3817, 0x01},
    {0x381c, 0x08},
    {0x3820, 0x00},
    {0x3821, 0x24},
    {0x3822, 0x54},
    {0x3823, 0x08},
    {0x3826, 0x00},
    {0x3827, 0x01},
    {0x3833, 0x01},
    {0x3832, 0x02},
    {0x383c, 0x48},
    {0x383d, 0xff},
    {0x3843, 0x20},
    {0x382d, 0x08},
    {0x3d85, 0x0b},
    {0x3d84, 0x40},
    {0x3d8c, 0x63},
    {0x3d8d, 0x00},
    {0x4000, 0x78},
    {0x4001, 0x2b},
    {0x4004, 0x00},
    {0x4005, 0x40},
    {0x4028, 0x2f},
    {0x400a, 0x01},
    {0x4010, 0x12},
    {0x4008, 0x02},
    {0x4009, 0x0d},
    {0x401a, 0x58},
    {0x4050, 0x00},
    {0x4051, 0x01},
    {0x4052, 0x00},
    {0x4053, 0x80},
    {0x4054, 0x00},
    {0x4055, 0x80},
    {0x4056, 0x00},
    {0x4057, 0x80},
    {0x4058, 0x00},
    {0x4059, 0x80},
    {0x430b, 0xff},
    {0x430c, 0xff},
    {0x430d, 0x00},
    {0x430e, 0x00},
    {0x4501, 0x18},
    {0x4502, 0x00},
    {0x4643, 0x00},
    {0x4640, 0x01},
    {0x4641, 0x04},
    {0x480e, 0x04},
    {0x4813, 0x98},
    {0x4815, 0x2b},
    {0x486e, 0x36},
    {0x486f, 0x84},
    {0x4860, 0x00},
    {0x4861, 0xa0},
    {0x484b, 0x05},
    {0x4850, 0x00},
    {0x4851, 0xaa},
    {0x4852, 0xff},
    {0x4853, 0x8a},
    {0x4854, 0x08},
    {0x4855, 0x30},
    {0x4800, 0x40},
    {0x4837, 0x50},  // 0x49
    {0x484a, 0x3f},
    {0x5000, 0xc9},
    {0x5001, 0x43},
    {0x5002, 0x00},
    {0x5211, 0x03},
    {0x5291, 0x03},
    {0x520d, 0x0f},
    {0x520e, 0xfd},
    {0x520f, 0xa5},
    {0x5210, 0xa5},
    {0x528d, 0x0f},
    {0x528e, 0xfd},
    {0x528f, 0xa5},
    {0x5290, 0xa5},
    {0x5004, 0x40},
    {0x5005, 0x00},
    {0x5180, 0x00},
    {0x5181, 0x10},
    {0x5182, 0x0f},
    {0x5183, 0xff},
    {0x580b, 0x03},
    {0x4d00, 0x03},
    {0x4d01, 0xe9},
    {0x4d02, 0xba},
    {0x4d03, 0x66},
    {0x4d04, 0x46},
    {0x4d05, 0xa5},
    {0x3603, 0x3c},
    {0x3703, 0x26},
    {0x3709, 0x49},
    {0x3708, 0x2d},
    {0x3719, 0x1c},
    {0x371a, 0x06},
    {0x4000, 0x79},
    // 0xa56:2646 600Mbps/1-lane 10bit Hblank:10%,V-blank:10%
    // 0x678:1656 960Mbps/1-lane 10bit Hblank:10%,V-blank:10%
    {0x380c, 0x07},  // 0x750: 1872
    {0x380d, 0x50},
    {0x380e, 0x03},  // 0x3c0: 960
    {0x380f, 0xc0},
    // 1280x720
    {0x3808, 0x05},  // sensor_width[11:8]
    {0x3809, 0x00},  // sensor_width [7:0]
    {0x380a, 0x02},  // sensor_height[11:8]
    {0x380b, 0xd0},  // sensor_height[7:0]
    {0x3810, 0x02},  // x output offset
    {0x3811, 0x90},
    {0x3812, 0x02},  // y output offset
    {0x3813, 0x60},
    {0x3501, 0x02},
    {0x3502, 0x80},
    {0x3511, 0x00},
    {0x3512, 0x80},
    {0x3009, 0x07},  // bit[1:0]
    {0x0100, 0x00},
};

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif
