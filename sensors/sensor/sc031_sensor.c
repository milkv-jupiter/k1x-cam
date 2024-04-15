/*
 * Copyright (C) 2022 Spacemit Micro Limited
 * All Rights Reserved.
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "spm_comm_cam.h"
#include "cam_sensor.h"

#define SENSOR_MAGIC 0x1355B5
#define sc031_NAME "sc031"
static const unsigned int sc031_reg_addr_byte = I2C_16BIT; /*byte width of the sensor register address*/
static const unsigned int sc031_reg_data_byte = I2C_8BIT;  /*byte width of sensor register data*/

static struct regval_tab stream_on_regs[] = {
    {0x0100, 0x01},
};

static struct regval_tab stream_off_regs[] = {
    {0x0100, 0x00},
};

static struct regval_tab stream_soft_reset_regs[] = {
    {0x0103, 0x01},
};

static struct regval_tab color_bar_regs[] = {
    { 0x0601, 0x02},
};

#define sc031_VTS_ADJUST     (4) /* vts - max_exposure*/
#define sc031_VTS_LINES_MAX  (0xffff)
#define sc031_EXPO_LINES_MIN (0x0001)

#define sc031_VTS_ADDR_H   (0x0340)
#define sc031_VTS_ADDR_L   (0x0341)
#define sc031_EXPO_H       (0x0202)
#define sc031_EXPO_L       (0x0203)
#define sc031_AGAIN_GLOBAL (0x0205)
#define sc031_DGAIN_GR_H   (0x020E)
#define sc031_DGAIN_GR_L   (0x020F)
#define sc031_DGAIN_R_H    (0x0210)
#define sc031_DGAIN_R_L    (0x0211)
#define sc031_DGAIN_B_H    (0x0212)
#define sc031_DGAIN_B_L    (0x0213)
#define sc031_DGAIN_GB_H   (0x0214)
#define sc031_DGAIN_GB_L   (0x0215)
#define sc031_GROUP_ACCESS (0x0104)

/*******************************************************************/
static int sc031_write_register(void* handle, uint16_t regAddr, uint16_t value)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    struct cam_i2c_data reg_data;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    sensor_context = (SENSOR_CONTEXT_S*)handle;

    reg_data.addr = sensor_context->i2c_addr;
    reg_data.reg_len = sc031_reg_addr_byte;
    reg_data.val_len = sc031_reg_data_byte;
    reg_data.tab.reg = regAddr;
    reg_data.tab.val = value;
    ret = sensor_write_register(sensor_context->devId, &reg_data);

    return ret;
}

static int sc031_read_register(void* handle, uint16_t regAddr, uint16_t* value)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    struct cam_i2c_data reg_data;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    sensor_context = (SENSOR_CONTEXT_S*)handle;

    reg_data.addr = sensor_context->i2c_addr;
    reg_data.reg_len = sc031_reg_addr_byte;
    reg_data.val_len = sc031_reg_data_byte;
    reg_data.tab.reg = regAddr;
    reg_data.tab.val = 0;
    ret = sensor_read_register(sensor_context->devId, &reg_data);
    if (!ret) {
        *value = reg_data.tab.val;
    }

    return ret;
}

static int sc031_write_burst_register(void* handle, struct regval_tab* reg_table, int reg_table_num)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    struct cam_burst_i2c_data reg_table_data;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    SENSORS_CHECK_PARA_POINTER(reg_table);
    sensor_context = (SENSOR_CONTEXT_S*)handle;

#if 1
    reg_table_data.addr = sensor_context->i2c_addr;
    reg_table_data.reg_len = sc031_reg_addr_byte;
    reg_table_data.val_len = sc031_reg_data_byte;
    reg_table_data.tab = reg_table;
    reg_table_data.num = reg_table_num;
    ret = sensor_write_burst_register(sensor_context->devId, &reg_table_data);
#else
    {
        int i;
        for (i = 0; i < reg_table_num; i++) {
            sc031_write_register(handle, reg_table[i].reg, reg_table[i].val);
        }
    }
#endif
    return ret;
}

#if 0
static int sc031_read_burst_register(void* handle, struct regval_tab* reg_table, int reg_table_num)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    struct cam_burst_i2c_data reg_table_data;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    SENSORS_CHECK_PARA_POINTER(reg_table);
    sensor_context = (SENSOR_CONTEXT_S*)handle;

    reg_table_data.addr = sensor_context->work_info.i2c_addr;
    reg_table_data.reg_len = sc031_reg_addr_byte;
    reg_table_data.val_len = sc031_reg_data_byte;
    reg_table_data.tab = reg_table;
    reg_table_data.num = reg_table_num;
    ret = sensor_read_burst_register(sensor_context->devId, &reg_table_data);

    return ret;
}
#endif

/*******************************************************************/
/*isp sensor function*/
static int sc031_sensor_write_reg(void* snsHandle, uint32_t regAddr, uint32_t value)
{
    int ret = 0;
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    ret = sc031_write_register(snsHandle, regAddr, value);
    pthread_mutex_unlock(&sensor_context->apiLock);
    return ret;
}

static int sc031_sensor_group_reg_start(void* snsHandle)
{
    int ret = 0;
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    sc031_write_register(snsHandle, sc031_GROUP_ACCESS, 1);
    pthread_mutex_unlock(&sensor_context->apiLock);
    return ret;
}

static int sc031_sensor_group_reg_done(void* snsHandle)
{
    int ret = 0;
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    sc031_write_register(snsHandle, sc031_GROUP_ACCESS, 0x00);
    pthread_mutex_unlock(&sensor_context->apiLock);
    return ret;
}

static int sc031_sensor_get_isp_default(void* snsHandle, uint32_t u32ChanelId, uint32_t camScene,
                                          ISP_SENSOR_DEFAULT_S* pstDef)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    SENSORS_CHECK_PARA_POINTER(pstDef);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    memset(pstDef, 0, sizeof(ISP_SENSOR_DEFAULT_S));
    if (camScene >= CAM_ISP_SCENE_INVALID) {
        CLOG_WARNING("%s: invalid camera scene:%d for isp get sensor default", __FUNCTION__, camScene);
        pstDef->pstIspDefaultSetting = NULL;
    } else {
        pstDef->pstIspDefaultSetting = sensor_context->work_info.pstIspDefaultSettings[camScene];
    }

#if 0
    // Transfer isp tunning file to struct like this if you need.
    if (sensor_context->work_info.image_mode == SENSOR_LINEAR_MODE) {
        if (0 == u32ChanelId)
            pstDef->pstIspDefaultSetting = NULL;
        else if (1 == u32ChanelId)
            pstDef->pstIspDefaultSetting = NULL;
    } else {
        if (0 == u32ChanelId)
            pstDef->pstIspDefaultSetting = NULL;
        else if (0 == u32ChanelId)
            pstDef->pstIspDefaultSetting = NULL;
    }
#endif
    pthread_mutex_unlock(&sensor_context->apiLock);
    CLOG_DEBUG("%s: isp get sensor default, u32ChanelId %d", __FUNCTION__, u32ChanelId);

    return 0;
}

static int sc031_sensor_get_isp_black_level(void* snsHandle, uint32_t u32ChanelId,
                                              ISP_SENSOR_BLACK_LEVEL_S* pstBlackLevel)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int i = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    SENSORS_CHECK_PARA_POINTER(pstBlackLevel);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    /* Don't need to update black level when iso change */
    pstBlackLevel->bUpdate = false;
    if (SENSOR_LINEAR_MODE == sensor_context->work_info.image_mode) {
        for (i = 0; i < 4; i++) {
            pstBlackLevel->sensorBlackLevel[i] = 259; /*10bit,0x40*/
            pstBlackLevel->bitDepth = 12;
        }
    }
    pthread_mutex_unlock(&sensor_context->apiLock);

    return 0;
}

static int sc031_sensor_get_reg_info(void* snsHandle, ISP_SENSOR_REGS_INFO_S* pstSensorRegsInfo)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    uint32_t i = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    SENSORS_CHECK_PARA_POINTER(pstSensorRegsInfo);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    if (false == sensor_context->syncInit) {
        sensor_context->sensorRegs[0].u8CfgDelayMax = 2;
        sensor_context->sensorRegs[0].u32RegNum = 13;
        sensor_context->sensorRegs[0].stSensorComBus.s8I2cDev = sensor_context->twsi_no;

        for (i = 0; i < sensor_context->sensorRegs[0].u32RegNum; i++) {
            sensor_context->sensorRegs[0].astI2cData[i].bUpdate = true;
            sensor_context->sensorRegs[0].astI2cData[i].u8DevAddr = sensor_context->i2c_addr;
            sensor_context->sensorRegs[0].astI2cData[i].u32AddrWidth = sc031_reg_addr_byte;
            sensor_context->sensorRegs[0].astI2cData[i].u32DataWidth = sc031_reg_data_byte;
        }

        sensor_context->sensorRegs[0].astI2cData[0].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[0].u32RegAddr = sc031_EXPO_L;  // exposure time
        sensor_context->sensorRegs[0].astI2cData[1].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[1].u32RegAddr = sc031_EXPO_H;  // exposure time
        sensor_context->sensorRegs[0].astI2cData[2].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[2].u32RegAddr = sc031_AGAIN_GLOBAL;  // analog gain
        sensor_context->sensorRegs[0].astI2cData[3].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[3].u32RegAddr = sc031_VTS_ADDR_L;  // VTS
        sensor_context->sensorRegs[0].astI2cData[4].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[4].u32RegAddr = sc031_VTS_ADDR_H;  // VTS
        sensor_context->sensorRegs[0].astI2cData[5].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[5].u32RegAddr = sc031_DGAIN_GR_L;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[6].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[6].u32RegAddr = sc031_DGAIN_GR_H;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[7].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[7].u32RegAddr = sc031_DGAIN_R_L;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[8].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[8].u32RegAddr = sc031_DGAIN_R_H;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[9].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[9].u32RegAddr = sc031_DGAIN_B_L;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[10].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[10].u32RegAddr = sc031_DGAIN_B_H;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[11].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[11].u32RegAddr = sc031_DGAIN_GB_L;  // digital gain
        sensor_context->sensorRegs[0].astI2cData[12].u8DelayFrmNum = 2;
        sensor_context->sensorRegs[0].astI2cData[12].u32RegAddr = sc031_DGAIN_GB_L;  // digital gain

        sensor_context->syncInit = true;
    } else {
        for (i = 0; i < (sensor_context->sensorRegs[0].u32RegNum); i++) {
            if (sensor_context->sensorRegs[0].astI2cData[i].u32Data
                == sensor_context->sensorRegs[1].astI2cData[i].u32Data) {
                sensor_context->sensorRegs[0].astI2cData[i].bUpdate = false;
            } else {
                sensor_context->sensorRegs[0].astI2cData[i].bUpdate = true;
            }
        }
    }

    memcpy(pstSensorRegsInfo, &sensor_context->sensorRegs[0], sizeof(ISP_SENSOR_REGS_INFO_S));
    memcpy(&sensor_context->sensorRegs[1], &sensor_context->sensorRegs[0], sizeof(ISP_SENSOR_REGS_INFO_S));
    sensor_context->vts[1] = sensor_context->vts[0];
    pthread_mutex_unlock(&sensor_context->apiLock);

    return 0;
}

static int sc031_sensor_dump_info(void* snsHandle)
{
    int ret = 0;
    SENSOR_CONTEXT_S* sensor_context = NULL;
    uint32_t vts = 0, exp_time = 0;
    uint32_t again = 0, dgain = 0;
    uint16_t reg_val_h, reg_val_l;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    sc031_read_register(snsHandle, sc031_VTS_ADDR_H, &reg_val_h);
    sc031_read_register(snsHandle, sc031_VTS_ADDR_L, &reg_val_l);
    vts = (reg_val_h << 8) | reg_val_l;
    sc031_read_register(snsHandle, sc031_EXPO_H, &reg_val_h);
    sc031_read_register(snsHandle, sc031_EXPO_L, &reg_val_l);
    exp_time = (reg_val_h << 8) | reg_val_l;
    sc031_read_register(snsHandle, sc031_AGAIN_GLOBAL, &reg_val_h);
    again = reg_val_h;
    sc031_read_register(snsHandle, sc031_DGAIN_GR_H, &reg_val_h);
    sc031_read_register(snsHandle, sc031_DGAIN_GR_L, &reg_val_l);
    dgain = ((reg_val_h & 0x3) << 8) | reg_val_l;
    pthread_mutex_lock(&sensor_context->apiLock);
    CLOG_INFO("sc031 regs(vts=%d,exptime=%d,again=0x%x,dain =0x%x),struct(initVTS=%d,initFps=%f,vts=%d,expline=%d)",
        vts, exp_time, again, dgain, sensor_context->initVTS, sensor_context->initFps, sensor_context->vts[0],
        sensor_context->hdrIntTime[0] * 1000 / sensor_context->lineTime);
    pthread_mutex_unlock(&sensor_context->apiLock);

    return ret;
}

/*ae function*/
static int sc031_sensor_get_ae_default(void* snsHandle, uint32_t u32ChanelId, ISP_SENSOR_AE_DEFAULT_S* pstSensorAeDft)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    uint32_t exp_time = 0;
    uint32_t again = 0, dgain = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    SENSORS_CHECK_PARA_POINTER(pstSensorAeDft);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    exp_time = sensor_context->work_info.exp_time[u32ChanelId];
    again = sensor_context->work_info.again[u32ChanelId];
    dgain = sensor_context->work_info.dgain[u32ChanelId];

    // pstSensorAeDft->maxAnaGain = 0xF80;  // 15.5x Q8 format
    // pstSensorAeDft->minAnaGain = 0x100;  // 1x Q8 format
    // pstSensorAeDft->maxTGain = 0x3f8 * pstSensorAeDft->maxAnaGain / 0x100;  // Q8 format; maxDgain * maxAnaGain
    // pstSensorAeDft->minTGain = 0x100 * pstSensorAeDft->minAnaGain / 0x100;  // Q8 format; minDgain * minAnaGain

    pstSensorAeDft->initSceneLuma = sensor_context->init_3a_attr.initSceneLuma[u32ChanelId];
    pstSensorAeDft->initSceneLux = sensor_context->init_3a_attr.initSceneLux[u32ChanelId];

    pstSensorAeDft->initExpTime = exp_time;
    pstSensorAeDft->initAnaGain = again;
    pstSensorAeDft->initDGain = dgain;
    pstSensorAeDft->initTGain = pstSensorAeDft->initAnaGain * pstSensorAeDft->initDGain / 0x1000;

    pstSensorAeDft->maxDelayCfg = 2;
    pstSensorAeDft->minDelayCfg = 2;

    /* uint : us */
    // pstSensorAeDft->maxExpTime = (pstSensorState->initVTS - sc031_VTS_ADJUST) * sensor_context->lineTime / 1000;
    // pstSensorAeDft->minExpTime = sc031_EXPO_LINES_MIN * sensor_context->lineTime / 1000;

    pthread_mutex_unlock(&sensor_context->apiLock);
    return 0;
}

static int sc031_sensor_get_expotime_by_fps(void* snsHandle, float f32Fps)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    uint32_t max_expotime = 0;
    uint32_t vts = 0;
    float minFps;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    minFps = (sensor_context->minVTS * sensor_context->maxFps) / sc031_VTS_LINES_MAX;
    if ((f32Fps <= sensor_context->maxFps) && (f32Fps >= minFps))
        vts = sensor_context->minVTS * sensor_context->maxFps / f32Fps;
    else {
        CLOG_ERROR("Not support Fps: %f", f32Fps);
        max_expotime = -EINVAL;
        goto out;
    }

    max_expotime = (vts - sc031_VTS_ADJUST) * sensor_context->lineTime / 1000;  // us
out:
    pthread_mutex_unlock(&sensor_context->apiLock);
    return max_expotime;
}

static int sc031_sensor_fps_set(void* snsHandle, float f32Fps)
{
    int ret = 0;
    SENSOR_CONTEXT_S* sensor_context = NULL;
    uint32_t lines;
    float minFps;
    uint32_t expLine = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    minFps = (sensor_context->minVTS * sensor_context->maxFps) / sc031_VTS_LINES_MAX;
    if ((f32Fps <= sensor_context->maxFps) && (f32Fps >= minFps))
        lines = sensor_context->minVTS * sensor_context->maxFps / f32Fps;
    else {
        CLOG_ERROR("Not support Fps: %f", f32Fps);
        ret = -1;
        goto out;
    }
    sensor_context->initVTS = lines;
    sensor_context->initFps = f32Fps;
    sensor_context->vts[0] = sensor_context->initVTS;
    sensor_context->sensorRegs[0].astI2cData[3].u32Data = LOW_8BITS(sensor_context->vts[0]);
    sensor_context->sensorRegs[0].astI2cData[4].u32Data = HIGH_8BITS(sensor_context->vts[0]);
out:
    pthread_mutex_unlock(&sensor_context->apiLock);
    return ret;
}

static int sc031_sensor_expotime_update(void* snsHandle, uint32_t u32ChanelId, uint32_t u32ExpoTime,
                                          ISP_SENSOR_VTS_INFO_S* pstSensorVtsInfo)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    uint32_t expLine = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    expLine = u32ExpoTime * 1000 / sensor_context->lineTime;  // u32ExpoTime unit: us
    expLine = (expLine < sc031_EXPO_LINES_MIN) ? sc031_EXPO_LINES_MIN : expLine;
    expLine = (expLine > (sc031_VTS_LINES_MAX - sc031_VTS_ADJUST)) ? (sc031_VTS_LINES_MAX - sc031_VTS_ADJUST)
                                                                       : expLine;
    sensor_context->hdrIntTime[u32ChanelId] = expLine * sensor_context->lineTime / 1000;

    if (expLine > (sensor_context->initVTS - sc031_VTS_ADJUST))
        sensor_context->vts[0] = expLine + sc031_VTS_ADJUST;
    else
        sensor_context->vts[0] = sensor_context->initVTS;

    sensor_context->sensorRegs[0].astI2cData[3].u32Data = LOW_8BITS(sensor_context->vts[0]);
    sensor_context->sensorRegs[0].astI2cData[4].u32Data = HIGH_8BITS(sensor_context->vts[0]);
    sensor_context->sensorRegs[0].astI2cData[0].u32Data = LOW_8BITS(expLine);
    sensor_context->sensorRegs[0].astI2cData[1].u32Data = HIGH_8BITS(expLine);

    pstSensorVtsInfo->snsLineTime = sensor_context->lineTime;
    pstSensorVtsInfo->snsVts = sensor_context->vts[0];
    pstSensorVtsInfo->snsFps = sensor_context->initFps * sensor_context->initVTS / sensor_context->vts[0];
    pthread_mutex_unlock(&sensor_context->apiLock);

    return 0;
}

static int sc031_sensor_gain_update(void* snsHandle, uint32_t u32ChanelId, uint32_t* pAgainVal, uint32_t* pDgainVal)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int ret = 0;
    uint32_t AGain_Reg, DGain_Reg = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    SENSORS_CHECK_PARA_POINTER(pAgainVal);
    SENSORS_CHECK_PARA_POINTER(pDgainVal);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    if (*pAgainVal < 0x0100) //Q8 1x
        AGain_Reg = 0x0;
    else if (*pAgainVal > 0x1000) //16x
        AGain_Reg = 0x00F0;
    else //Gain_an = 256 / (256 - reg);  reg: 0~240
        AGain_Reg = ((*pAgainVal - 256) * 256 ) / *pAgainVal;
    DGain_Reg = (*pDgainVal >> 4);  // Q12 -> Q8
    if (DGain_Reg < 0x100)
        DGain_Reg = 0x100;
    if (DGain_Reg > 0x0FE0)  
        DGain_Reg = 0x0FE0;

    sensor_context->sensorRegs[0].astI2cData[2].u32Data = AGain_Reg;     // bit[7:0] = Again[7:0]
    sensor_context->sensorRegs[0].astI2cData[5].u32Data = LOW_8BITS(DGain_Reg);   // bit[3:0] = Dgain[11:8]
    sensor_context->sensorRegs[0].astI2cData[6].u32Data = HIGH_8BITS(DGain_Reg);  // bit[7:0] = Dgain[7:0]
    sensor_context->sensorRegs[0].astI2cData[7].u32Data = LOW_8BITS(DGain_Reg);   // bit[3:0] = Dgain[11:8]
    sensor_context->sensorRegs[0].astI2cData[8].u32Data = HIGH_8BITS(DGain_Reg);  // bit[7:0] = Dgain[7:0]
    sensor_context->sensorRegs[0].astI2cData[9].u32Data = LOW_8BITS(DGain_Reg);   // bit[3:0] = Dgain[11:8]
    sensor_context->sensorRegs[0].astI2cData[10].u32Data = HIGH_8BITS(DGain_Reg);  // bit[7:0] = Dgain[7:0]
    sensor_context->sensorRegs[0].astI2cData[11].u32Data = LOW_8BITS(DGain_Reg);   // bit[3:0] = Dgain[11:8]
    sensor_context->sensorRegs[0].astI2cData[12].u32Data = HIGH_8BITS(DGain_Reg);  // bit[7:0] = Dgain[7:0]

    *pAgainVal = (0x0100 * 256) / (256 - AGain_Reg);  // Q8
    *pDgainVal = DGain_Reg << 4;  // Q8 -> Q12
    pthread_mutex_unlock(&sensor_context->apiLock);

    return ret;
}

static int sc031_get_aelib_default_settings(void* snsHandle, uint32_t u32ChanelId,
                                              AE_LIB_DEFAULT_SETTING_S** ppstAeLibDefault)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSORS_CHECK_PARA_POINTER(ppstAeLibDefault);
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    *ppstAeLibDefault = NULL;

#if 1
    // Transfer ae lib tunning file to struct like this if you need.
    if (SENSOR_HDR_MODE == sensor_context->work_info.image_mode) {
        if (0 == u32ChanelId)
            *ppstAeLibDefault = NULL;

        /* spm aelib needn't set setting for pipe1(short exposure),because setting of short exposure has already existed
         * in pipe0, perhaps you can set the same value of pipe0 to pipe1.
         */
    } else {
        if (0 == u32ChanelId)
            *ppstAeLibDefault = NULL;
        else if (1 == u32ChanelId)
            *ppstAeLibDefault = NULL;
    }
#endif
    pthread_mutex_unlock(&sensor_context->apiLock);
    return 0;
}

/*awb function*/
static int sc031_sensor_get_awb_default(void* snsHandle, uint32_t u32ChanelId,
                                          ISP_SENSOR_AWB_DEFAULT_S* pstSensorAwbDft)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSORS_CHECK_PARA_POINTER(pstSensorAwbDft);
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    if (sensor_context->init_3a_attr.initCorrelationCT[u32ChanelId] != 0 && sensor_context->init_3a_attr.initTint[u32ChanelId] != 0) {
        pstSensorAwbDft->initCorrelationCT = sensor_context->init_3a_attr.initCorrelationCT[u32ChanelId];
        pstSensorAwbDft->initTint = sensor_context->init_3a_attr.initTint[u32ChanelId];
    }
    pthread_mutex_unlock(&sensor_context->apiLock);

    return ret;
}

static int sc031_get_awblib_default_settings(void* snsHandle, uint32_t u32ChanelId,
                                               AWB_LIB_DEFAULT_SETTING_S** ppstAwbLibDefault)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(snsHandle);
    SENSORS_CHECK_PARA_POINTER(ppstAwbLibDefault);
    sensor_context = (SENSOR_CONTEXT_S*)snsHandle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    *ppstAwbLibDefault = NULL;

#if 1
    // Transfer awb lib tunning file to struct like this if you need.
    if (SENSOR_HDR_MODE == sensor_context->work_info.image_mode) {
        if (0 == u32ChanelId)
            *ppstAwbLibDefault = NULL;
        else if (1 == u32ChanelId)
            *ppstAwbLibDefault = NULL;
    } else {
        if (0 == u32ChanelId)
            *ppstAwbLibDefault = NULL;
        else if (1 == u32ChanelId)
            *ppstAwbLibDefault = NULL;
    }
#endif
    pthread_mutex_unlock(&sensor_context->apiLock);

    return 0;
}

static int sc031_power_on(SENSOR_CONTEXT_S* sensor_context)
{
    SENSORS_CHECK_PARA_POINTER(sensor_context);

    sensor_set_mclk_enable(sensor_context->devId, 1);
    sensor_set_mclk_rate(sensor_context->devId, 24000000);

    sensor_set_gpio_enable(sensor_context->devId, SENSOR_GPIO_PWDN, 0);
    sensor_set_gpio_enable(sensor_context->devId, SENSOR_GPIO_RST, 0);

    sensor_set_power_voltage(sensor_context->devId, SENSOR_REGULATOR_DOVDD, 1800000);
    sensor_set_power_on(sensor_context->devId, SENSOR_REGULATOR_DOVDD, 1);
    sensor_set_power_voltage(sensor_context->devId, SENSOR_REGULATOR_DVDD, 1200000);
    sensor_set_power_on(sensor_context->devId, SENSOR_REGULATOR_DVDD, 1);
    sensor_set_power_voltage(sensor_context->devId, SENSOR_REGULATOR_AFVDD, 2800000);
    sensor_set_power_on(sensor_context->devId, SENSOR_REGULATOR_AFVDD, 1);
    usleep(1100);

    sensor_set_power_voltage(sensor_context->devId, SENSOR_REGULATOR_AVDD, 2800000);
    sensor_set_power_on(sensor_context->devId, SENSOR_REGULATOR_AVDD, 1);

    usleep(2100);

    sensor_set_gpio_enable(sensor_context->devId, SENSOR_GPIO_PWDN, 1);
    sensor_set_gpio_enable(sensor_context->devId, SENSOR_GPIO_RST, 1);
    usleep(2100);

    CLOG_INFO("finish power on");
    return 0;
}


/*******************************************************************/
static int sc031_init(void** pHandle, int sns_id, uint8_t sns_addr)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    struct cam_sensor_info sensor_hw_info;

    SENSORS_CHECK_PARA_POINTER(pHandle);

    sensor_context = (SENSOR_CONTEXT_S*)calloc(1, sizeof(SENSOR_CONTEXT_S));
    if (NULL == sensor_context) {
        CLOG_ERROR("%s: sensor_context malloc memory failed!", __FUNCTION__);
        return -ENOMEM;
    }
    sensor_context->name = sc031_NAME;
    sensor_context->devId = sns_id;
    sensor_context->i2c_addr = sns_addr;
    sensor_context->magic = SENSOR_MAGIC;
    pthread_mutex_init(&sensor_context->apiLock, NULL);
    sensor_hw_init(sensor_context->devId);
    sc031_power_on(sensor_context);
    // sensor_hw_unreset(sensor_context->devId);
    sensor_get_hw_info(sensor_context->devId, &sensor_hw_info);
    sensor_context->twsi_no = sensor_hw_info.twsi_no;

    *pHandle = sensor_context;
    return 0;
}

static int sc031_deinit(void* handle)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(handle);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    sensor_context->magic = 0;
    pthread_mutex_lock(&sensor_context->apiLock);
    if (sensor_context->stream_on_flag == 1) {
        sc031_write_burst_register(handle, stream_off_regs, ARRAY_SIZE(stream_off_regs));
        sensor_context->stream_on_flag = 0;
    }

    sensor_hw_reset(sensor_context->devId);
    sensor_hw_exit(sensor_context->devId);
    pthread_mutex_unlock(&sensor_context->apiLock);

    pthread_mutex_destroy(&sensor_context->apiLock);
    if (sensor_context) {
        memset(sensor_context, 0, sizeof(SENSOR_CONTEXT_S));
        free(sensor_context);
        sensor_context = NULL;
    }
    return 0;
}

static int sc031_global_config(void* handle, SENSOR_WORK_INFO_S* work_info)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    SENSORS_CHECK_PARA_POINTER(work_info);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    if (sensor_context->stream_on_flag == 1) {
        CLOG_ERROR("%s: sensor global config must be done before stream on", __FUNCTION__);
        ret = -EPERM;
       // goto out;
    }
    memcpy(&sensor_context->work_info, work_info, sizeof(SENSOR_WORK_INFO_S));
    memset(&sensor_context->init_3a_attr, 0x00, sizeof(SENSOR_INIT_ATTR_S));

    sensor_context->initVTS = sensor_context->work_info.vts;
    sensor_context->initFps = sensor_context->work_info.f32maxFps;
    sensor_context->minVTS = sensor_context->work_info.vts;
    sensor_context->maxFps = sensor_context->work_info.f32maxFps;
    sensor_context->lineTime = sensor_context->work_info.linetime;
    sensor_context->vts[0] = sensor_context->initVTS;
    sensor_context->vts[1] = sensor_context->vts[0];
    memset(sensor_context->hdrIntTime, 0, sizeof(sensor_context->hdrIntTime));
    memset(sensor_context->sensorRegs, 0, 2 * sizeof(ISP_SENSOR_REGS_INFO_S));
    sensor_context->syncInit = 0;
    sc031_write_burst_register(handle, sensor_context->work_info.setting_table,sensor_context->work_info.setting_table_size);

    ret = sc031_write_burst_register(handle, stream_soft_reset_regs, ARRAY_SIZE(stream_soft_reset_regs));
    if (ret) {
        CLOG_ERROR("sensor soft reset fail");
        goto out;
    }
    usleep(5000);

    ret = sc031_write_burst_register(handle, sensor_context->work_info.setting_table,
                                    sensor_context->work_info.setting_table_size);
    if (ret) {
        CLOG_ERROR("sensor write reg fail");
        goto out;
    }
    /*
        if(work_info->test_pattern_mode == CC_SENSOR_TEST_PATTERN_COLOR_BARS){
            ret = sc031_write_burst_register(handle, color_bar_regs, ARRAY_SIZE(color_bar_regs));
        }
    */
    out:
        pthread_mutex_unlock(&sensor_context->apiLock);

    return 0;
}

static int sc031_set_param(void* handle, const SENSOR_INIT_ATTR_S* init_attr)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(handle);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    memcpy(&sensor_context->init_3a_attr, init_attr, sizeof(SENSOR_INIT_ATTR_S));

    return 0;
}

static int sc031_stream_on(void* handle)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int ret = 0;
    uint32_t i = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    ret = sensor_mipi_clock_set(sensor_context->devId, sensor_context->work_info.mipi_clock);//
    /*
    if (ret)
        return ret;
    for (i = 0; i < sensor_context->sensorRegs[0].u32RegNum; i++) {
        sc031_write_register(handle, sensor_context->sensorRegs[0].astI2cData[i].u32RegAddr,
                               sensor_context->sensorRegs[0].astI2cData[i].u32Data);
    }
    */
    ret = sc031_write_burst_register(handle, stream_on_regs, ARRAY_SIZE(stream_on_regs));

    sensor_context->stream_on_flag = 1;
    pthread_mutex_unlock(&sensor_context->apiLock);
    return ret;
}

static int sc031_stream_off(void* handle)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int ret = 0;

    SENSORS_CHECK_PARA_POINTER(handle);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    //ret = sc031_write_burst_register(handle, stream_off_regs, ARRAY_SIZE(stream_off_regs));

    sensor_context->stream_on_flag = 0;
    pthread_mutex_unlock(&sensor_context->apiLock);
    return ret;
}

static int sc031_get_ops(void* handle, ISP_SENSOR_REGISTER_S* pSensorFuncOps)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;

    SENSORS_CHECK_PARA_POINTER(handle);
    SENSORS_CHECK_PARA_POINTER(pSensorFuncOps);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    pSensorFuncOps->snsHandle = handle;
    pSensorFuncOps->stSensorFunc.pfn_sensor_write_reg = sc031_sensor_write_reg;
    pSensorFuncOps->stSensorFunc.pfn_sensor_get_isp_default = sc031_sensor_get_isp_default;
    pSensorFuncOps->stSensorFunc.pfn_sensor_get_isp_black_level = sc031_sensor_get_isp_black_level;
    pSensorFuncOps->stSensorFunc.pfn_sensor_get_reg_info = sc031_sensor_get_reg_info;
    pSensorFuncOps->stSensorFunc.pfn_sensor_dump_info = sc031_sensor_dump_info;
    pSensorFuncOps->stSensorFunc.pfn_sensor_group_regs_start = sc031_sensor_group_reg_start;
    pSensorFuncOps->stSensorFunc.pfn_sensor_group_regs_done = sc031_sensor_group_reg_done;

    pSensorFuncOps->stSensorAeFunc.pfn_sensor_get_ae_default = sc031_sensor_get_ae_default;
    pSensorFuncOps->stSensorAeFunc.pfn_sensor_fps_set = sc031_sensor_fps_set;
    pSensorFuncOps->stSensorAeFunc.pfn_sensor_get_expotime_by_fps = sc031_sensor_get_expotime_by_fps;
    pSensorFuncOps->stSensorAeFunc.pfn_sensor_expotime_update = sc031_sensor_expotime_update;
    pSensorFuncOps->stSensorAeFunc.pfn_sensor_gain_update = sc031_sensor_gain_update;
    pSensorFuncOps->stSensorAeFunc.pfn_get_aelib_default_settings = sc031_get_aelib_default_settings;

    pSensorFuncOps->stSensorAwbFunc.pfn_sensor_get_awb_default = sc031_sensor_get_awb_default;
    pSensorFuncOps->stSensorAwbFunc.pfn_get_awblib_default_settings = sc031_get_awblib_default_settings;
    pthread_mutex_unlock(&sensor_context->apiLock);

    return 0;
}

static int sc031_detect_sensor(void* handle, SENSOR_VENDOR_ID_S* vendor_id)
{
    SENSOR_CONTEXT_S* sensor_context = NULL;
    int ret = 0;
    struct regval_tab* vendor_id_table = NULL;
    int i = 0;
    struct cam_burst_i2c_data reg_table_data;

    SENSORS_CHECK_PARA_POINTER(handle);
    SENSORS_CHECK_PARA_POINTER(vendor_id);
    SENSORS_CHECK_PARA_POINTER(vendor_id->id_table);
    sensor_context = (SENSOR_CONTEXT_S*)handle;
    SENSOR_CHECK_HANDLE_IS_ERR(sensor_context);

    pthread_mutex_lock(&sensor_context->apiLock);
    vendor_id_table = (struct regval_tab*)calloc(vendor_id->id_table_size, sizeof(struct regval_tab));
    if (NULL == vendor_id_table) {
        CLOG_ERROR("vendor id table malloc memory failed!");
        ret = -ENOMEM;
        goto out;
    }
    for (i = 0; i < vendor_id->id_table_size; i++) {
        vendor_id_table[i].reg = vendor_id->id_table[i].reg;
        vendor_id_table[i].val = 0;
    }

    reg_table_data.addr = sensor_context->i2c_addr;
    reg_table_data.reg_len = sc031_reg_addr_byte;
    reg_table_data.val_len = sc031_reg_data_byte;
    reg_table_data.tab = vendor_id_table;
    reg_table_data.num = vendor_id->id_table_size;
    CLOG_INFO("start read vendor id register ");
    ret = sensor_read_burst_register(sensor_context->devId, &reg_table_data);
    if (ret) {
        CLOG_INFO("read vendor id register failed: %s\n", strerror(errno));
        goto out;
    }

    for (i = 0; i < vendor_id->id_table_size; i++) {
        if ((vendor_id_table[i].reg != vendor_id->id_table[i].reg)
            || (vendor_id_table[i].val != vendor_id->id_table[i].val)) {
            CLOG_INFO("%s: detect sensor fail", __func__);
            ret = -1;
            break;
        }
    }
    if (ret == -1) {
        for (i = 0; i < vendor_id->id_table_size; i++) {
            CLOG_INFO("read sensor vendor id (0x%04x, 0x%04x)", vendor_id_table[i].reg, vendor_id_table[i].val);
        }
        for (i = 0; i < vendor_id->id_table_size; i++) {
            CLOG_INFO("valid sensor vendor id (0x%04x, 0x%04x)", vendor_id->id_table[i].reg,
                      vendor_id->id_table[i].val);
        }
    } else {
        CLOG_INFO("detect sensor%d success", sensor_context->devId);
    }

out:
    pthread_mutex_unlock(&sensor_context->apiLock);
    if (vendor_id_table) {
        free(vendor_id_table);
        vendor_id_table = NULL;
    }

    return ret;
}

SENSOR_OBJ_S sc031Obj = {
    .name = sc031_NAME,
    .pfnInit = sc031_init,
    .pfnDeinit = sc031_deinit,
    .pfnGloablConfig = sc031_global_config,
    .pfnSetParam = sc031_set_param,
    .pfnStreamOn = sc031_stream_on,
    .pfnStreamOff = sc031_stream_off,
    .pfnGetSensorOps = sc031_get_ops,
    .pfnDetectSns = sc031_detect_sensor,
    .pfnWriteReg = sc031_write_register,
    .pfnReadReg = sc031_read_register,
};
