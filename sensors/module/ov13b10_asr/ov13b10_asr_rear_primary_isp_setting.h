
//ASR_ISP_Eagle_Firmware_V0.1
{
    /* @m_nRevisionNumber  Size: 1x1  BitWidth: 32_u  Range~[0, 262144]  Type: fw_info */
    /* Firmware revision number */
    9105
},

//CTopFirmwareFilter
{
    /* @m_nBayerPattern  Size: 1x1  BitWidth: 32_u  Range~[0, 4]  Type: firmware */
    /* 0 - RGGB, 1 - GRBG, 2 - GBRG, 3 - BGGR, 4 - monochrome */
    0,
    /* @m_bAELinkZoom  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - AE not link with zoom, 1 - AE link with zoom */
    1,
    /* @m_bAFLinkZoom  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - AF not link with zoom, 1 - AF link with zoom */
    1,
    /* @m_bAWBLinkZoom  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - AWB not link with zoom, 1 - AWB link with zoom */
    0,
    /* @m_nPreviewZoomRatio  Size: 1x1  BitWidth: 32_u  Range~[256, 2048]  Type: firmware */
    /* zoom ratio in Q8 */
    256,
    /* @m_nAEProcessPosition  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - eof, 1 - sof, ae process position */
    0,
    /* @m_nAEProcessFrameNum  Size: 1x1  BitWidth: 32_u  Range~[1, 3]  Type: firmware */
    /* ae process frame number */
    1,
    /* @m_bHighQualityPreviewZoomEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - high quality zoom disable, 1 - high quality zoom enable */
    0
},

//CAEMFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable, 1: enable */
    1,
    /* @m_nAEStatMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: not-white-balanced, 1: white-balanced */
    0,
    /* @m_bZSLHDRCapture  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: no capture trigger, 1: auto capture trigger */
    0,
    /* @m_nInitialExpTime  Size: 1x1  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* initial exposure time, sync with sensor */
    4921,
    /* @m_nInitialAnaGain  Size: 1x1  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* initial analog gain, sync with sensor */
    256,
    /* @m_nInitialSnsTotalGain  Size: 1x1  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* initial sensor total gain, sync with sensor */
    256,
    /* @m_nInitialTotalGain  Size: 1x1  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* initial isp total gain */
    256,
    /* @m_nStableTolerance  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* ratio of tolerance for judging whether frame is stable in isp firmware. */
    100,
    /* @m_nStableToleranceExternal  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* ratio of tolerance for judging whether frame is stable for external system use. */
    0,
    /* @m_bAutoCalculateAEMWindow  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: config by hardware, 1: config by firmware */
    1,
    /* @m_nPreEndingPercentage  Size: 1x1  BitWidth: 32_u  Range~[0, 50]  Type: firmware */
    /* pseudo dummy line percentage */
    10,
    /* @m_bDRCGainSyncOption  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: sync every frame, 1: the penultimate frame before AE stabilization is not updated to avoid flicking issues */
    1,
    /* @m_pSceneChangeSADThr  Size: 1x12  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* scene change detect luma sad threshold */
    {300, 450, 600, 750, 900, 900, 900, 900, 900, 900, 900, 900},
    /* @m_pSubROIPermil  Size: 6x4  BitWidth: 13_u  Range~[0, 1000]  Type: firmware */
    /* sub ROI index is matrix row index, {start_x start_y end_x end_y} for one sub ROI permil */
    {
        {120, 80, 200, 160},
        {120, 80, 200, 160},
        {120, 80, 200, 160},
        {120, 80, 200, 160},
        {120, 80, 200, 160},
        {120, 80, 200, 160}
    },
    /* @m_nSubROIScaleFactor  Size: 1x1  BitWidth: 32_u  Range~[50, 100]  Type: firmware */
    /* sub roi scale factor */
    50,
    /* @m_nFaceLumaOption  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: hardware, 1: software */
    0,
    /* @m_nFaceDetFrameID  Size: 1x1  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* face detect frame id, only read parameter  */
    0
},

//CDigitalGainFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-digital gain disable, 1-digital gain enable */
    1,
    /* @m_nISPGlobalOffsetValue12bit  Size: 1x1  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* 0-auto calculated by black level, [1,511]- fixed offset = m_nISPGlobalOffsetValue12bit - 1 */
    1,
    /* @m_bManualMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-auto mode, 1-manual mode */
    0,
    /* @m_pGlobalBlackValueManual  Size: 1x4  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* black level for R/GR/GB/B channel in manual mode */
    {261, 261, 261, 261},
    /* @m_pGlobalBlackValueManualCapture  Size: 1x4  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* black level for R/GR/GB/B channel in manual mode, for capture */
    {259, 259, 259, 259},
    /* @m_pGlobalBlackValue  Size: 12x4  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* black level for R/GR/GB/B channel in auto mode */
    {
        {259, 259, 259, 259},
        {259, 259, 259, 259},
        {260, 260, 260, 260},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {261, 261, 261, 261}
    },
    /* @m_pGlobalBlackValueCapture  Size: 12x4  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* black level for R/GR/GB/B channel in auto mode, for capture */
    {
        {259, 259, 259, 259},
        {259, 259, 259, 259},
        {260, 260, 260, 260},
        {261, 261, 261, 261},
        {261, 261, 261, 261},
        {260, 260, 260, 260},
        {260, 260, 260, 260},
        {260, 260, 260, 260},
        {260, 260, 260, 260},
        {260, 260, 260, 260},
        {260, 260, 260, 260},
        {260, 260, 260, 260}
    }
},

//CWBGainFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable wbc, 1-enable wbc */
    1
},

//CStretchFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable stretch, 1-enable stretch */
    0
},

//CColorMatrixFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable CCM, 1-enable CCM */
    1,
    /* @m_bManualMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-auto mode, 1-manual mode */
    0,
    /* @m_bColorFringleRemoveEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable cfr, 1-enable cfr */
    0,
    /* @m_bDisgardHFEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - add HF, 1 - disgard HF */
    1,
    /* @m_nHueTransShiftNum  Size: 1x1  BitWidth: 32_u  Range~[0, 5]  Type: firmware */
    /* hue transition band shift num, band = 1<<shift_number */
    3,
    /* @m_nHighFreqThreshold  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* threshold for high frequency for cfr */
    16,
    /* @m_nHighFreqTransShiftNum  Size: 1x1  BitWidth: 32_u  Range~[0, 7]  Type: firmware */
    /* high frequency transition band shift num, band = 1<<shift_number */
    3,
    /* @m_nColorFringRemovalStrength  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* cfr strength */
    24,
    /* @m_pColorFringeHueRange  Size: 1x2  BitWidth: 32_u  Range~[0, 360]  Type: firmware */
    /* hue range for cfr color detection, increase order */
    {240, 270},
    /* @m_bUseCorrelatedCT  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - use internal CT(B/R), 1 - use correlated CT( m_pCTMatrixLow/High should be calibrated) */
    0,
    /* @m_pColorTemperatureIndex  Size: 1x4  BitWidth: 32_u  Range~[0, 8192]  Type: firmware */
    /* color temperature index for matrix adaptation */
    {168, 205, 299, 356},
    /* @m_pCMC0  Size: 3x3  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
    /* color matrix for low color temperature */
    {
        {6078, 355, -2337},
        {-941, 5954, -917},
        {-875, -4746, 9717}
    },
    /* @m_pCMC1  Size: 3x3  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
    /* color matrix for mid color temperature */
    {
        {7694, -3244, -354},
        {-942, 5329, -291},
        {-159, -2773, 7028}
    },
    /* @m_pCMC2  Size: 3x3  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
    /* color matrix for high color temperature */
    {
        {6701, -1994, -611},
        {-625, 5960, -1239},
        {-343, -2529, 6968}
    },
    /* @m_pCMCManual  Size: 3x3  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
    /* color matrix for manual mode */
    {
        {8071, -3062, -913},
        {-1280, 7143, -1767},
        {92, -2595, 6599}
    },
    /* @m_pCMCSaturationList  Size: 1x12  BitWidth: 32_u  Range~[0, 128]  Type: firmware */
    /* gain based color matrix saturation ratio list, Q7 */
    {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
},

//CBPCFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Enable of BPC module */
    1,
    /* @m_bManualMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Enable of ManualMode */
    0,
    /* @m_nCrossChnStrengthManual  Size: 1x1  BitWidth: 2_u  Range~[0, 3]  Type: firmware */
    /* cross channel detect strength(MANUAL) */
    2,
    /* @m_pSlopeGManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* slope of G channel in the LUT(MANUAL) */
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pInterceptGManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* intercept of G channel in the LUT(MANUAL) */
    {90, 90, 90, 90, 90, 90, 128, 192, 255},
    /* @m_pSlopeRBManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* slope of R/B channel in the LUT(MANUAL) */
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pInterceptRBManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* intercept of R/B channel in the LUT(MANUAL) */
    {90, 90, 90, 90, 90, 90, 128, 192, 255},
    /* @m_pSlopeCornerManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* slope of corner detect in the LUT(MANUAL) */
    {40, 50, 70, 90, 100, 100, 120, 200, 180},
    /* @m_pInterceptCornerManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* intercept of corner detect in the LUT(MANUAL) */
    {3, 4, 7, 9, 12, 25, 62, 137, 125},
    /* @m_pBpcGainIndex  Size: 1x12  BitWidth: 32_u  Range~[16, 32768]  Type: firmware */
    /* bpc gain control index */
    {16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768},
    /* @m_pCrossChnStrength  Size: 1x12  BitWidth: 2_u  Range~[0, 3]  Type: firmware */
    /* cross channel detect strength */
    {2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0},
    /* @m_pSlopeG  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* slope of G channel in the LUT */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pInterceptG  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* intercept of G channel in the LUT */
    {
        {3, 3, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8},
        {3, 3, 6, 6, 9, 9, 9, 9, 9, 9, 9, 9},
        {3, 3, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10},
        {3, 3, 6, 6, 11, 11, 11, 11, 11, 11, 11, 11},
        {4, 4, 8, 8, 12, 12, 12, 12, 12, 12, 12, 12},
        {4, 4, 8, 8, 13, 13, 13, 13, 13, 13, 13, 13},
        {7, 7, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14},
        {10, 10, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15},
        {13, 13, 23, 23, 16, 16, 16, 16, 16, 16, 16, 16}
    },
    /* @m_pSlopeRB  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* slope of R/B channel in the LUT */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pInterceptRB  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* intercept of R/B channel in the LUT */
    {
        {3, 3, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8},
        {3, 3, 6, 6, 9, 9, 9, 9, 9, 9, 9, 9},
        {3, 3, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10},
        {3, 3, 6, 6, 11, 11, 11, 11, 11, 11, 11, 11},
        {4, 4, 8, 8, 12, 12, 12, 12, 12, 12, 12, 12},
        {4, 4, 8, 8, 13, 13, 13, 13, 13, 13, 13, 13},
        {7, 7, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14},
        {10, 10, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15},
        {13, 13, 23, 23, 16, 16, 16, 16, 16, 16, 16, 16}
    },
    /* @m_pSlopeCorner  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* slope of corner detect in the LUT */
    {
        {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
        {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50},
        {70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70},
        {90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90},
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100},
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100},
        {120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120},
        {200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200},
        {180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180, 180}
    },
    /* @m_pInterceptCorner  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* intercept of corner detect in the LUT */
    {
        {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
        {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
        {12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12},
        {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25},
        {62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62, 62},
        {137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137, 137},
        {125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125}
    },
    /* @m_bDeadEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* dead pixel correction enable */
    1,
    /* @m_bSpikeEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* spike pixel correction enable */
    1,
    /* @m_bSameChnNum  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* defect pixel correction in the same channel */
    1,
    /* @m_bGrGbNum  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* defect pixel correction in grgb channel */
    1,
    /* @m_nDeltaThr  Size: 1x1  BitWidth: 12_u  Range~[0, 4095]  Type: firmware */
    /* delta threshold */
    20,
    /* @m_nRingGRatio  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* correction threshold of near channel */
    20,
    /* @m_nRingMeanRatio  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* correction threshold of near channel */
    10,
    /* @m_nEdgeTimes  Size: 1x1  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* edge detect strength */
    7,
    /* @m_nNearThr  Size: 1x1  BitWidth: 12_u  Range~[0, 4095]  Type: firmware */
    /* threshold of near pixel */
    400,
    /* @m_pSegG  Size: 1x8  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* segregation of LUT */
    {0, 16, 32, 64, 96, 128, 160, 192},
    /* @m_nDeadRatioG  Size: 1x1  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* tolerance of dead pixel in G channel */
    1,
    /* @m_nSpikeRatioG  Size: 1x1  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* tolerance of spike pixel in G channel */
    1,
    /* @m_nDeadRatioRB  Size: 1x1  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* tolerance of dead pixel in R/B channel */
    1,
    /* @m_nSpikeRatioRB  Size: 1x1  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* tolerance of spike pixel in R/B channel */
    1,
    /* @m_nMinThrEn  Size: 1x1  BitWidth: 3_u  Range~[1, 7]  Type: firmware */
    /* min threshold enable */
    7,
    /* @m_nMaxThrEn  Size: 1x1  BitWidth: 3_u  Range~[1, 7]  Type: firmware */
    /* max threshold enable */
    7,
    /* @m_bAroundDetEn  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* around detect enable */
    1,
    /* @m_bCornerDetEn  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* corner detect enable */
    1,
    /* @m_bBlockDetEn  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* block detect enable */
    1,
    /* @m_bEdgeDetEn  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* edge detect enable */
    1
},

//CLSCFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable LSC, 1-enable LSC */
    1,
    /* @m_bUseOTP  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-ignore otp information, 1-use otp information */
    0,
    /* @m_bManualMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-auto mode, 1-manual mode */
    0,
    /* @m_bAutoScale  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - disable auto calculate scale parameters, 1 - enable auto calculate scale parameters */
    1,
    /* @m_bEnhanceEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - disable enhance, 1 - enable enhance */
    0,
    /* @m_bLSCCSCEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable LSC color shading correction, 1-enable LSC color shading correction (for LSC auto mode) */
    1,
    /* @m_bAdjustCSCTblMinEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-don't adjust R/G(B/G) minimum, 1-adjust R/G(B/G) minimum */
    0,
    /* @m_nProfileSelectOption  Size: 1x1  BitWidth: 32_u  Range~[0, 3]  Type: firmware */
    /* 0 - Auto CT switch, 1 - Use profile 0, 2 - Use profile 1, 3 - Use profile 2 */
    0,
    /* @m_nLSCStrengthManual  Size: 1x1  BitWidth: 32_u  Range~[0, 64]  Type: firmware */
    /* lens shading correction strength for manual mode */
    64,
    /* @m_nFOVCropRatioH  Size: 1x1  BitWidth: 32_u  Range~[1, 100]  Type: firmware */
    /* FOV horizontal crop ratio percentage */
    100,
    /* @m_nFOVCropRatioV  Size: 1x1  BitWidth: 32_u  Range~[1, 100]  Type: firmware */
    /* FOV vertical crop ratio percentage */
    100,
    /* @m_nDifThr  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* screening reasonable point: R/G(B/G) adjacent point difference threshold, normalized 1 equals 1000 */
    30,
    /* @m_nDifThrMinPerc  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* screening reasonable point:If difference of R/G adjacent point is less than DifThrMinPerc*DifThr, angle is not considered */
    10,
    /* @m_nAngleThr  Size: 1x1  BitWidth: 32_u  Range~[0, 90]  Type: firmware */
    /* screening reasonable point: angle threshold */
    40,
    /* @m_nDifThrVMF  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* screening reasonable point: color difference threshold before and after VMF, normalized 1 equals 1000 */
    30,
    /* @m_nAngleThrVMF  Size: 1x1  BitWidth: 32_u  Range~[0, 90]  Type: firmware */
    /* screening reasonable point: angle threshold before and after VMF */
    40,
    /* @m_nGradThrMin  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* R/G(B/G) valid gradient threshold minimum, normalized 1 equals 1000 */
    0,
    /* @m_nGradThrMax  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* R/G(B/G) valid gradient threshold maximum, normalized 1 equals 1000 */
    32,
    /* @m_nGradMaxError  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* maximum acceptabled error of gradient of R/G(B/G), normalized 1 equals 1000 */
    20,
    /* @m_nGradThrConv  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* R/G(B/G) gradient threshold of CSC convergence, normalized 1 equals 1000 */
    1,
    /* @m_nGradMax  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* maximum value of R/G(B/G) gradient, normalized 1 equals 1000 */
    32,
    /* @m_nTblAlpha  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* convergence speed, 100:max */
    25,
    /* @m_nCSCGlobalStrength  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* CSC global strength, 100:max */
    100,
    /* @m_nEffPNumAll  Size: 1x1  BitWidth: 32_u  Range~[0, 192]  Type: firmware */
    /*  effective point threshold in the whole image */
    50,
    /* @m_nEffPNumHalf  Size: 1x1  BitWidth: 32_u  Range~[0, 192]  Type: firmware */
    /* effective point threshold in the half image */
    32,
    /* @m_nEffPNumQuarter  Size: 1x1  BitWidth: 32_u  Range~[0, 192]  Type: firmware */
    /* effective point threshold in the quarter image */
    20,
    /* @m_pEffNumRing  Size: 1x3  BitWidth: 32_u  Range~[0, 192]  Type: firmware */
    /* effective point threshold in the ring */
    {4, 8, 12},
    /* @m_pCSCCTIndex  Size: 1x2  BitWidth: 32_u  Range~[0, 4096]  Type: firmware */
    /* CT index of CSC on or off. close CSC if CT is bigger than CSCCTIndex[1], CSCCTIndex[0] <= CSCCTIndex[1] */
    {1000, 2000},
    /* @m_pCSCLuxIndex  Size: 1x2  BitWidth: 32_u  Range~[0, 65536]  Type: firmware */
    /* Lux index of CSC on or off. close CSC if Lux is bigger than CSCLuxIndex[1], CSCLuxIndex[0] <= CSCLuxIndex[1] */
    {3000, 5000},
    /* @m_pLSCStrength  Size: 1x12  BitWidth: 32_u  Range~[0, 64]  Type: firmware */
    /* lens shading correction strength for auto mode */
    {62, 62, 62, 62, 58, 42, 16, 16, 16, 16, 16, 16},
    /* @m_bUseCorrelatedCT  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - use internal CT(B/R), 1 - use correlated CT( m_pCTMatrixLow/High should be calibrated) */
    0,
    /* @m_pCTIndex  Size: 1x4  BitWidth: 32_u  Range~[0, 8192]  Type: firmware */
    /* CT index for profile switching */
    {130, 180, 230, 280},
    /* @m_pLSCProfile  Size: 3x576  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* profiles for low/mid/high color temperature */
    {
        {244, 199, 177, 158, 146, 144, 140, 145, 155, 167, 196, 230, 194, 158, 142, 125, 
         112, 108, 106, 111, 123, 134, 153, 192, 162, 130, 114, 94, 82, 78, 76, 82, 
         93, 107, 128, 156, 138, 106, 87, 69, 56, 52, 50, 56, 68, 82, 104, 137, 
         118, 85, 67, 48, 36, 32, 30, 36, 47, 62, 84, 116, 100, 70, 50, 33, 
         22, 18, 16, 22, 33, 46, 69, 101, 89, 59, 39, 23, 12, 6, 5, 12, 
         23, 36, 57, 89, 84, 53, 34, 18, 6, 1, 0, 6, 18, 31, 52, 84, 
         84, 53, 34, 18, 6, 1, 0, 5, 17, 31, 51, 84, 89, 59, 39, 23, 
         12, 6, 5, 11, 23, 35, 57, 88, 100, 70, 49, 33, 22, 17, 16, 22, 
         32, 46, 68, 99, 116, 85, 66, 47, 36, 31, 30, 35, 47, 61, 82, 114, 
         136, 105, 86, 68, 56, 51, 48, 54, 67, 80, 102, 135, 157, 129, 112, 93, 
         81, 77, 74, 80, 91, 105, 125, 155, 191, 154, 139, 122, 109, 106, 103, 108, 
         121, 132, 151, 187, 236, 198, 174, 157, 145, 142, 138, 146, 153, 164, 194, 228, 
         120, 123, 124, 124, 123, 123, 123, 123, 121, 122, 120, 121, 120, 124, 123, 124, 
         124, 124, 123, 122, 121, 120, 121, 119, 121, 123, 123, 123, 123, 123, 122, 121, 
         121, 120, 119, 121, 120, 122, 121, 122, 123, 123, 123, 121, 120, 119, 119, 121, 
         120, 122, 122, 123, 124, 124, 123, 121, 120, 120, 120, 121, 121, 123, 123, 124, 
         125, 126, 125, 123, 121, 121, 121, 122, 122, 124, 124, 126, 128, 128, 127, 124, 
         123, 122, 122, 121, 121, 125, 125, 128, 129, 130, 128, 126, 124, 123, 122, 123, 
         122, 125, 126, 128, 130, 130, 129, 126, 124, 123, 123, 124, 121, 124, 125, 126, 
         128, 129, 128, 125, 123, 122, 123, 122, 122, 124, 124, 125, 126, 127, 126, 124, 
         121, 121, 121, 123, 121, 123, 123, 124, 125, 126, 125, 123, 120, 120, 120, 122, 
         122, 123, 123, 124, 125, 126, 125, 123, 121, 120, 120, 120, 121, 124, 124, 124, 
         125, 125, 125, 123, 121, 121, 120, 122, 122, 124, 124, 124, 125, 125, 124, 123, 
         122, 121, 120, 121, 113, 124, 123, 124, 125, 124, 125, 123, 121, 121, 119, 123, 
         142, 145, 145, 146, 146, 146, 147, 146, 146, 145, 145, 142, 146, 148, 147, 148, 
         147, 148, 147, 148, 147, 148, 149, 143, 146, 149, 147, 146, 145, 145, 145, 145, 
         146, 148, 149, 146, 147, 148, 145, 143, 142, 142, 142, 142, 143, 146, 149, 144, 
         146, 146, 143, 140, 138, 137, 138, 138, 140, 144, 146, 146, 146, 144, 140, 137, 
         134, 133, 133, 134, 136, 141, 144, 142, 145, 143, 138, 134, 130, 129, 129, 130, 
         133, 138, 143, 143, 143, 143, 138, 133, 129, 128, 128, 129, 133, 138, 142, 144, 
         144, 142, 137, 133, 129, 128, 128, 129, 133, 138, 143, 143, 144, 142, 137, 133, 
         129, 129, 129, 130, 133, 139, 143, 143, 144, 143, 139, 136, 133, 133, 133, 134, 
         136, 140, 144, 143, 145, 146, 142, 140, 138, 138, 139, 138, 141, 144, 146, 145, 
         147, 147, 145, 143, 143, 143, 143, 144, 145, 146, 149, 144, 146, 149, 147, 146, 
         146, 147, 147, 147, 148, 149, 150, 146, 145, 148, 148, 148, 149, 149, 150, 149, 
         149, 150, 149, 144, 141, 145, 146, 147, 147, 150, 148, 148, 148, 147, 145, 145},
        {230, 196, 169, 152, 142, 137, 136, 139, 147, 164, 188, 224, 188, 154, 135, 119, 
         109, 102, 102, 107, 117, 129, 147, 183, 154, 126, 107, 90, 79, 73, 73, 79, 
         88, 104, 122, 148, 132, 102, 82, 66, 55, 49, 48, 54, 64, 79, 100, 129, 
         112, 82, 63, 46, 36, 30, 30, 35, 45, 60, 80, 109, 95, 68, 48, 32, 
         22, 17, 16, 22, 31, 45, 66, 95, 85, 57, 37, 23, 12, 6, 6, 12, 
         22, 35, 55, 84, 80, 51, 32, 17, 6, 1, 1, 6, 17, 31, 49, 79, 
         80, 51, 32, 17, 6, 1, 1, 5, 16, 30, 49, 79, 85, 57, 37, 22, 
         12, 5, 5, 11, 22, 35, 54, 83, 96, 67, 47, 32, 22, 16, 16, 21, 
         30, 44, 65, 92, 110, 83, 62, 45, 35, 29, 29, 34, 44, 59, 79, 107, 
         130, 101, 81, 65, 54, 48, 47, 52, 63, 77, 97, 127, 149, 125, 106, 89, 
         78, 72, 71, 77, 86, 101, 120, 148, 186, 149, 132, 116, 106, 99, 99, 103, 
         114, 128, 145, 178, 220, 195, 166, 150, 139, 135, 133, 141, 145, 159, 186, 223, 
         116, 117, 117, 116, 116, 117, 116, 116, 114, 114, 116, 117, 115, 118, 117, 117, 
         117, 117, 116, 116, 115, 116, 114, 114, 114, 117, 116, 117, 118, 118, 117, 116, 
         115, 114, 114, 115, 114, 116, 116, 117, 118, 118, 118, 116, 115, 114, 114, 113, 
         114, 116, 116, 118, 120, 120, 120, 118, 116, 115, 115, 116, 114, 117, 118, 120, 
         123, 124, 123, 121, 118, 116, 116, 114, 115, 118, 120, 122, 126, 127, 126, 124, 
         120, 118, 117, 117, 115, 119, 121, 124, 128, 129, 128, 126, 122, 120, 118, 116, 
         115, 119, 121, 124, 128, 129, 128, 126, 122, 120, 118, 117, 115, 118, 120, 123, 
         126, 128, 127, 125, 121, 119, 118, 116, 115, 118, 118, 120, 123, 124, 124, 121, 
         118, 117, 116, 116, 115, 117, 117, 118, 121, 121, 121, 119, 117, 116, 115, 115, 
         115, 117, 116, 118, 119, 120, 119, 118, 116, 115, 115, 116, 116, 117, 117, 117, 
         118, 118, 119, 117, 116, 115, 115, 114, 115, 118, 116, 117, 118, 118, 117, 117, 
         115, 116, 115, 115, 115, 116, 117, 116, 118, 116, 118, 116, 116, 114, 118, 115, 
         125, 128, 124, 124, 123, 125, 123, 125, 122, 125, 125, 128, 127, 126, 126, 125, 
         125, 125, 125, 124, 125, 126, 127, 124, 124, 127, 125, 125, 124, 125, 125, 124, 
         125, 125, 127, 126, 125, 126, 125, 125, 124, 125, 125, 124, 125, 125, 126, 123, 
         124, 126, 126, 126, 125, 126, 126, 125, 125, 125, 125, 122, 124, 125, 125, 126, 
         126, 127, 127, 126, 125, 125, 125, 122, 124, 125, 125, 126, 126, 127, 127, 126, 
         125, 125, 125, 122, 124, 125, 126, 127, 127, 128, 128, 126, 126, 125, 125, 121, 
         123, 125, 125, 127, 127, 128, 128, 127, 126, 125, 125, 122, 123, 124, 124, 125, 
         125, 127, 127, 126, 125, 124, 124, 122, 123, 124, 124, 125, 125, 127, 127, 126, 
         125, 125, 125, 121, 124, 125, 125, 125, 125, 127, 127, 125, 126, 126, 125, 122, 
         124, 126, 125, 125, 125, 127, 127, 126, 126, 126, 126, 123, 126, 126, 126, 126, 
         125, 126, 127, 126, 127, 126, 127, 123, 126, 127, 126, 126, 126, 127, 126, 127, 
         126, 127, 127, 125, 127, 127, 126, 125, 125, 123, 127, 125, 126, 126, 127, 128},
        {229, 201, 172, 157, 144, 141, 139, 144, 152, 165, 193, 223, 193, 157, 141, 123, 
         111, 107, 105, 109, 122, 132, 151, 187, 158, 130, 111, 93, 82, 76, 75, 80, 
         91, 106, 125, 153, 137, 104, 85, 68, 56, 51, 49, 55, 67, 80, 102, 134, 
         115, 84, 66, 47, 36, 32, 30, 35, 46, 61, 82, 113, 100, 69, 50, 33, 
         22, 18, 17, 22, 32, 45, 67, 98, 88, 59, 39, 23, 12, 7, 6, 12, 
         23, 36, 56, 86, 83, 53, 34, 18, 6, 2, 1, 6, 17, 31, 50, 82, 
         84, 53, 34, 18, 6, 2, 1, 5, 17, 30, 51, 81, 88, 58, 39, 23, 
         12, 6, 6, 11, 23, 35, 56, 87, 100, 69, 49, 32, 22, 17, 16, 21, 
         32, 45, 67, 96, 115, 84, 65, 46, 35, 31, 30, 35, 45, 60, 81, 111, 
         134, 104, 85, 67, 55, 50, 48, 53, 66, 79, 100, 133, 155, 128, 110, 91, 
         80, 75, 73, 79, 90, 103, 124, 151, 191, 153, 138, 121, 108, 104, 101, 106, 
         120, 130, 149, 187, 225, 199, 172, 154, 144, 140, 137, 143, 151, 162, 194, 217, 
         120, 116, 118, 116, 118, 117, 116, 115, 116, 116, 114, 126, 114, 117, 116, 116, 
         116, 117, 116, 116, 115, 115, 116, 113, 116, 115, 116, 116, 117, 117, 117, 116, 
         115, 115, 114, 119, 113, 116, 116, 117, 117, 118, 118, 117, 116, 115, 115, 114, 
         113, 117, 116, 118, 119, 120, 120, 118, 117, 116, 115, 117, 113, 117, 118, 120, 
         122, 123, 123, 121, 119, 117, 117, 115, 116, 117, 119, 122, 125, 127, 126, 123, 
         121, 119, 117, 118, 115, 118, 120, 124, 127, 129, 128, 126, 122, 120, 118, 118, 
         115, 119, 120, 124, 127, 129, 128, 126, 122, 120, 118, 118, 115, 118, 119, 122, 
         125, 127, 126, 124, 121, 119, 118, 117, 115, 117, 118, 120, 122, 124, 124, 121, 
         119, 118, 116, 117, 114, 117, 117, 119, 120, 121, 121, 119, 117, 116, 116, 115, 
         114, 117, 116, 117, 118, 119, 119, 118, 116, 116, 116, 115, 116, 116, 117, 117, 
         118, 118, 118, 117, 116, 116, 115, 116, 116, 117, 116, 117, 117, 118, 117, 117, 
         115, 115, 117, 112, 117, 117, 116, 116, 117, 117, 118, 114, 117, 116, 112, 128, 
         137, 135, 133, 130, 137, 132, 136, 133, 134, 132, 133, 145, 134, 135, 134, 135, 
         133, 134, 134, 134, 133, 136, 135, 134, 133, 134, 134, 133, 133, 133, 133, 132, 
         133, 133, 135, 135, 133, 134, 133, 133, 132, 132, 132, 131, 132, 134, 134, 134, 
         133, 133, 132, 131, 131, 131, 131, 130, 132, 133, 134, 133, 130, 132, 131, 131, 
         130, 129, 130, 129, 130, 132, 132, 131, 132, 131, 131, 129, 128, 128, 128, 128, 
         129, 131, 133, 131, 131, 132, 131, 130, 128, 128, 128, 127, 129, 131, 132, 132, 
         132, 131, 131, 129, 127, 128, 128, 128, 129, 131, 132, 131, 131, 131, 129, 129, 
         127, 127, 128, 127, 129, 131, 132, 131, 130, 131, 131, 129, 129, 130, 131, 129, 
         130, 131, 131, 132, 132, 132, 131, 131, 131, 132, 132, 131, 132, 133, 134, 131, 
         132, 134, 133, 132, 132, 133, 134, 133, 134, 133, 135, 132, 133, 135, 134, 134, 
         133, 135, 135, 134, 135, 136, 135, 133, 133, 135, 134, 135, 135, 135, 136, 135, 
         135, 135, 136, 131, 134, 133, 135, 135, 133, 134, 135, 133, 133, 136, 132, 143}
    },
    /* @m_pLSCProfileManual  Size: 1x576  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* manual profile */
    {73, 92, 75, 70, 64, 61, 61, 62, 68, 74, 84, 86, 90, 72, 62, 56, 
     52, 48, 48, 50, 54, 60, 67, 79, 70, 60, 52, 44, 39, 36, 36, 37, 
     42, 49, 56, 65, 63, 50, 41, 33, 28, 25, 25, 27, 31, 38, 47, 56, 
     54, 43, 32, 25, 20, 18, 17, 19, 23, 30, 39, 49, 50, 35, 25, 19, 
     14, 11, 11, 13, 17, 23, 31, 44, 45, 31, 22, 15, 9, 5, 5, 7, 
     14, 19, 28, 40, 43, 30, 20, 12, 6, 1, 0, 4, 11, 18, 26, 37, 
     43, 28, 20, 12, 6, 1, 0, 4, 11, 18, 26, 36, 45, 32, 22, 15, 
     9, 5, 5, 8, 13, 19, 28, 40, 50, 36, 25, 19, 13, 11, 10, 13, 
     17, 23, 31, 44, 57, 43, 32, 25, 20, 18, 18, 18, 23, 29, 39, 51, 
     63, 52, 42, 34, 28, 26, 25, 26, 31, 38, 47, 56, 71, 63, 52, 45, 
     39, 36, 37, 39, 43, 49, 56, 68, 90, 73, 64, 56, 52, 49, 49, 50, 
     54, 60, 67, 81, 87, 91, 78, 72, 65, 62, 62, 64, 68, 74, 85, 93, 
     137, 129, 131, 132, 133, 133, 132, 131, 130, 133, 131, 131, 131, 132, 131, 131, 
     131, 131, 131, 131, 131, 130, 131, 131, 132, 131, 131, 131, 131, 132, 132, 131, 
     131, 131, 131, 130, 131, 131, 131, 130, 131, 131, 131, 131, 131, 131, 131, 133, 
     131, 131, 130, 130, 130, 131, 131, 130, 131, 131, 130, 130, 131, 130, 130, 130, 
     130, 130, 130, 130, 129, 131, 131, 129, 132, 130, 129, 130, 130, 131, 131, 130, 
     130, 130, 130, 130, 131, 129, 130, 130, 130, 131, 131, 130, 130, 129, 130, 131, 
     130, 129, 129, 129, 129, 130, 131, 130, 130, 130, 130, 131, 129, 128, 129, 128, 
     128, 128, 130, 129, 130, 129, 129, 131, 128, 128, 128, 128, 128, 129, 129, 130, 
     130, 129, 130, 130, 128, 128, 127, 128, 128, 128, 129, 129, 129, 129, 129, 131, 
     128, 128, 128, 128, 127, 128, 128, 129, 129, 129, 130, 130, 129, 128, 128, 129, 
     128, 128, 128, 129, 130, 130, 130, 127, 130, 128, 129, 129, 129, 130, 129, 130, 
     129, 130, 129, 133, 130, 129, 128, 129, 129, 128, 129, 128, 130, 129, 130, 127, 
     160, 146, 150, 148, 149, 150, 147, 151, 147, 150, 151, 147, 146, 149, 147, 147, 
     146, 146, 147, 146, 148, 149, 150, 151, 149, 147, 147, 145, 144, 144, 143, 145, 
     146, 147, 149, 148, 148, 146, 144, 143, 141, 141, 142, 142, 143, 146, 147, 149, 
     146, 145, 143, 141, 140, 138, 139, 139, 142, 144, 146, 148, 147, 144, 141, 139, 
     135, 134, 134, 135, 139, 141, 144, 149, 146, 144, 140, 136, 133, 131, 130, 133, 
     137, 141, 144, 147, 145, 143, 139, 135, 131, 128, 129, 131, 135, 140, 144, 146, 
     145, 142, 139, 134, 131, 128, 129, 131, 135, 139, 143, 147, 144, 143, 140, 136, 
     132, 131, 130, 133, 136, 140, 144, 145, 147, 144, 141, 138, 136, 134, 134, 136, 
     139, 142, 144, 147, 145, 145, 142, 142, 139, 138, 139, 139, 141, 143, 146, 147, 
     149, 146, 145, 144, 143, 143, 143, 143, 144, 146, 147, 149, 147, 147, 145, 145, 
     145, 145, 145, 145, 145, 148, 148, 151, 151, 147, 148, 148, 147, 147, 147, 147, 
     148, 148, 150, 149, 148, 149, 149, 147, 148, 149, 148, 148, 147, 150, 148, 152},
    /* @m_pOTPProfile  Size: 1x576  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* otp profile */
    {73, 92, 75, 70, 64, 61, 61, 62, 68, 74, 84, 86, 90, 72, 62, 56, 
     52, 48, 48, 50, 54, 60, 67, 79, 70, 60, 52, 44, 39, 36, 36, 37, 
     42, 49, 56, 65, 63, 50, 41, 33, 28, 25, 25, 27, 31, 38, 47, 56, 
     54, 43, 32, 25, 20, 18, 17, 19, 23, 30, 39, 49, 50, 35, 25, 19, 
     14, 11, 11, 13, 17, 23, 31, 44, 45, 31, 22, 15, 9, 5, 5, 7, 
     14, 19, 28, 40, 43, 30, 20, 12, 6, 1, 0, 4, 11, 18, 26, 37, 
     43, 28, 20, 12, 6, 1, 0, 4, 11, 18, 26, 36, 45, 32, 22, 15, 
     9, 5, 5, 8, 13, 19, 28, 40, 50, 36, 25, 19, 13, 11, 10, 13, 
     17, 23, 31, 44, 57, 43, 32, 25, 20, 18, 18, 18, 23, 29, 39, 51, 
     63, 52, 42, 34, 28, 26, 25, 26, 31, 38, 47, 56, 71, 63, 52, 45, 
     39, 36, 37, 39, 43, 49, 56, 68, 90, 73, 64, 56, 52, 49, 49, 50, 
     54, 60, 67, 81, 87, 91, 78, 72, 65, 62, 62, 64, 68, 74, 85, 93, 
     137, 129, 131, 132, 133, 133, 132, 131, 130, 133, 131, 131, 131, 132, 131, 131, 
     131, 131, 131, 131, 131, 130, 131, 131, 132, 131, 131, 131, 131, 132, 132, 131, 
     131, 131, 131, 130, 131, 131, 131, 130, 131, 131, 131, 131, 131, 131, 131, 133, 
     131, 131, 130, 130, 130, 131, 131, 130, 131, 131, 130, 130, 131, 130, 130, 130, 
     130, 130, 130, 130, 129, 131, 131, 129, 132, 130, 129, 130, 130, 131, 131, 130, 
     130, 130, 130, 130, 131, 129, 130, 130, 130, 131, 131, 130, 130, 129, 130, 131, 
     130, 129, 129, 129, 129, 130, 131, 130, 130, 130, 130, 131, 129, 128, 129, 128, 
     128, 128, 130, 129, 130, 129, 129, 131, 128, 128, 128, 128, 128, 129, 129, 130, 
     130, 129, 130, 130, 128, 128, 127, 128, 128, 128, 129, 129, 129, 129, 129, 131, 
     128, 128, 128, 128, 127, 128, 128, 129, 129, 129, 130, 130, 129, 128, 128, 129, 
     128, 128, 128, 129, 130, 130, 130, 127, 130, 128, 129, 129, 129, 130, 129, 130, 
     129, 130, 129, 133, 130, 129, 128, 129, 129, 128, 129, 128, 130, 129, 130, 127, 
     160, 146, 150, 148, 149, 150, 147, 151, 147, 150, 151, 147, 146, 149, 147, 147, 
     146, 146, 147, 146, 148, 149, 150, 151, 149, 147, 147, 145, 144, 144, 143, 145, 
     146, 147, 149, 148, 148, 146, 144, 143, 141, 141, 142, 142, 143, 146, 147, 149, 
     146, 145, 143, 141, 140, 138, 139, 139, 142, 144, 146, 148, 147, 144, 141, 139, 
     135, 134, 134, 135, 139, 141, 144, 149, 146, 144, 140, 136, 133, 131, 130, 133, 
     137, 141, 144, 147, 145, 143, 139, 135, 131, 128, 129, 131, 135, 140, 144, 146, 
     145, 142, 139, 134, 131, 128, 129, 131, 135, 139, 143, 147, 144, 143, 140, 136, 
     132, 131, 130, 133, 136, 140, 144, 145, 147, 144, 141, 138, 136, 134, 134, 136, 
     139, 142, 144, 147, 145, 145, 142, 142, 139, 138, 139, 139, 141, 143, 146, 147, 
     149, 146, 145, 144, 143, 143, 143, 143, 144, 146, 147, 149, 147, 147, 145, 145, 
     145, 145, 145, 145, 145, 148, 148, 151, 151, 147, 148, 148, 147, 147, 147, 147, 
     148, 148, 150, 149, 148, 149, 149, 147, 148, 149, 148, 148, 147, 150, 148, 152}
},

//CDemosaicFirmwareFilter
{
    /* @m_bManualMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-auto mode, 1-manual mode */
    0,
    /* @m_bIfEdgeGenerate  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-edge info generation off, 1-edge info generation on */
    1,
    /* @m_bIfGbGrRebalance  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-gb/gr rebalance in demosaic off, 1-gb/gr rebalance in demosaic on */
    1,
    /* @m_bIfDNS  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-dns in demosaic off, 1-dns in demosaic on */
    0,
    /* @m_nInterpOffsetManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* demosaic interp noise offset for manual mode */
    16,
    /* @m_nInterpOffsetHVManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* demosaic interp h&v direction offset for manual mode */
    16,
    /* @m_nNoiseSTDManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* noise variance for manual mode */
    32,
    /* @m_nLowpassGLevelManual  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* low pass strength for manual mode */
    0,
    /* @m_nGbGrThrManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* gb/gr rebalance threshold for manual mode */
    64,
    /* @m_nSharpenStrengthManual  Size: 1x1  BitWidth: 32_u  Range~[0, 63]  Type: firmware */
    /* sharpen strength for manual mode */
    16,
    /* @m_nShpThresholdManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* sharpen threshold for manual mode */
    0,
    /* @m_nDenoiseThresholdManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* denoise threshold for manual mode */
    0,
    /* @m_nNoiseAddbackLevelManual  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* noise add back level for manual mode */
    0,
    /* @m_nDenoiseLumaStrengthManual  Size: 1x3  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* denoise threshold scale ratio for brightness [8, 16, 32] for manual mode, ratio 32 is always for brightness 64 */
    {12, 16, 24},
    /* @m_nChromaNoiseThresholdManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* chroma impulse noise threshold for manual mode */
    16,
    /* @m_pUSMFilterManual  Size: 1x3  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* USM filter = conv([c b a 64-2*(a+b+c) a b c], [1 2 1]) */
    {12, 0, 0},
    /* @m_pInterpOffset  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* demosaic interp noise offset for auto mode */
    {16, 16, 16, 32, 48, 64, 96, 128, 128, 128, 128, 128},
    /* @m_pInterpOffsetHV  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* demosaic interp h&v direction offset for auto mode */
    {16, 16, 16, 32, 48, 64, 96, 128, 128, 128, 128, 128},
    /* @m_pNoiseSTD  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* noise variance for auto mode */
    {32, 32, 32, 48, 64, 80, 96, 112, 112, 112, 112, 112},
    /* @m_pLowpassGLevel  Size: 1x12  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* low pass strength for auto mode */
    {16, 20, 24, 28, 32, 32, 32, 32, 32, 32, 32, 32},
    /* @m_pGbGrThr  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* gb/gr rebalance threshold for auto mode */
    {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64},
    /* @m_pSharpenStrength  Size: 1x12  BitWidth: 32_u  Range~[0, 63]  Type: firmware */
    /* sharpen strength for auto mode */
    {16, 12, 8, 4, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pShpThreshold  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* sharpen threshold for auto mode */
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pDenoiseThreshold  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* denoise threshold for auto mode */
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pNoiseAddbackLevel  Size: 1x12  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* noise add back level for auto mode */
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pDenoiseLumaStrength  Size: 12x3  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* denoise threshold scale ratio for brightness [8, 16, 32] for auto mode, ratio 32 is always for brightness 64 */
    {
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24},
        {12, 16, 24}
    },
    /* @m_pChromaNoiseThreshold  Size: 1x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* chroma impulse noise threshold for auto mode */
    {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
    /* @m_pUSMFilter  Size: 12x3  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* USM filter = conv([c b a 64-2*(a+b+c) a b c], [1 2 1]) for auto mode */
    {
        {12, 0, 0},
        {12, 0, 0},
        {12, 0, 0},
        {12, 0, 0},
        {12, 0, 0},
        {12, 6, 0},
        {12, 6, 0},
        {12, 6, 0},
        {12, 6, 0},
        {12, 6, 0},
        {12, 6, 0},
        {12, 6, 0}
    },
    /* @m_pHFSegShiftIndex  Size: 1x12  BitWidth: 32_u  Range~[0, 15]  Type: firmware */
    /* HF segment shift list for amplify */
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    /* @m_pHFSegGainIndex  Size: 1x13  BitWidth: 32_u  Range~[0, 63]  Type: firmware */
    /* HF gain list for amplify */
    {0, 8, 16, 24, 24, 20, 16, 8, 16, 20, 20, 20, 20}
},

//CRawDenoiseFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* raw dns enable */
    1,
    /* @m_bMergeEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* raw dns merge enable */
    1,
    /* @m_bLocalizedEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* raw dns localize enable */
    1,
    /* @m_bSpacialEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* raw dns spacial enable */
    1,
    /* @m_bSpacialAddbackEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* raw dns spacial add back enable */
    0,
    /* @m_nSpacialOffCenterPercentage  Size: 1x1  BitWidth: 32_u  Range~[0, 50]  Type: firmware */
    /* start denoise level enhancement beyond this percentage when off center */
    20,
    /* @m_pMaxSpacialDenoiseThreGain  Size: 1x12  BitWidth: 32_u  Range~[256, 1279]  Type: firmware */
    /* max denoise threshold enhancement gain, Q8 */
    {676, 676, 666, 647, 553, 449, 317, 256, 256, 256, 256, 256},
    /* @m_bManualMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* manual denoise enable */
    0,
    /* @m_nSigmaManual  Size: 1x1  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* manual denoise sigma */
    10,
    /* @m_nGnsManual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* manual green denoise strength */
    32,
    /* @m_nRbnsManual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* manual red/blue denoise strength */
    32,
    /* @m_nL0Manual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* manual denoise strength scaling factor, for 1.5% neutral gray */
    16,
    /* @m_nL1Manual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* manual denoise strength scaling factor, for 7.8% neutral gray */
    18,
    /* @m_nL2Manual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* manual denoise strength scaling factor, for 20% neutral gray */
    23,
    /* @m_nL3Manual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* manual denoise strength scaling factor, for 45% neutral gray */
    32,
    /* @m_pSigma  Size: 1x12  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* denoise sigma 0~511 */
    {51, 56, 70, 84, 108, 153, 192, 192, 256, 511, 511, 511},
    /* @m_pGns  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* green denoise strength 0~32 */
    {22, 22, 20, 18, 18, 18, 18, 18, 18, 18, 18, 18},
    /* @m_pRbns  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* red/blue denoise strength 0~32 */
    {22, 22, 20, 18, 18, 18, 18, 18, 18, 18, 18, 18},
    /* @m_pL0  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* denoise strength scaling factor, for 1.5% neutral gray */
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    /* @m_pL1  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* denoise strength scaling factor, for 7.8% neutral gray */
    {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
    /* @m_pL2  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* denoise strength scaling factor, for 20% neutral gray */
    {17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17},
    /* @m_pL3  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* denoise strength scaling factor, for 45% neutral gray */
    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32}
},

//CAFMFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable afm, 1: enable afm */
    1,
    /* @m_nAFStatMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: white-balanced, 1: not-white-balanced */
    1,
    /* @m_nWinStartXPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* The X permille coordinate of top left pixel in AF area configured by firmware */
    375,
    /* @m_nWinStartYPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* The Y permille coordinate of top left pixel in AF area configured by firmware */
    375,
    /* @m_nWinEndXPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* The X permille coordinate of bottom right pixel in AF area configured by firmware */
    625,
    /* @m_nWinEndYPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* The Y permille coordinate of bottom right pixel in AF area configured by firmware */
    625,
    /* @m_nMinWidthPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* the min permil of the statistical window width */
    150,
    /* @m_nMinHeightPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* the min permil of the statistical window height */
    150,
    /* @m_bConfigDone  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* after setting the window coordiate, set config done to 1 */
    0
},

//CPDCFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable pdc, 1: enable pdc */
    1,
    /* @m_bOut  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable pd dump, 1: enable pd dump */
    1,
    /* @m_nHOffset  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Horizontal offset for PD pixel location index */
    0,
    /* @m_nVOffset  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Vertical offset for PD pixel location index */
    0,
    /* @m_bLRAdjust  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: mirror off 1: mirror on */
    0,
    /* @m_bTBAdjust  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: flip off 1: flip on */
    0,
    /* @m_nFullWidth  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Width of pixel array */
    4208,
    /* @m_nFullHeight  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Height of pixel array */
    3120,
    /* @m_nWindowMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: calculate PD dumping area automatically, 1: calculate PD dumping area by using m_nWinStartXPermil,m_nWinStartYPermil, m_nWinEndXPermil and m_nWinEndYPermil */
    1,
    /* @m_nWindowScaleFactor  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* the scaling factor of the statistical window of AFM module */
    100,
    /* @m_nMinWidthPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* the min permil of the statistical window width */
    150,
    /* @m_nMinHeightPermil  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* the min permil of the statistical window height */
    150,
    /* @m_pPDFirstX  Size: 1x2  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Horizontal location index of the first and last PD pixel block */
    {0, 4208},
    /* @m_pPDFirstY  Size: 1x2  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Vertical location index of the first and last PD pixel block */
    {0, 3120},
    /* @m_pRatioA  Size: 1x4  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* Global reverse ratios for 4 channels */
    {64, 64, 64, 64},
    /* @m_pPixelMask  Size: 32x32  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* PD mask */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pPixelTypeMask  Size: 32x32  BitWidth: 32_u  Range~[0, 3]  Type: firmware */
    /* PD channel type */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pRatioBMap  Size: 36x9  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* 9x9 PD compensation ratio grid for 4 channels */
    {
        {68, 69, 70, 71, 71, 71, 72, 74, 75},
        {69, 70, 71, 71, 71, 71, 71, 73, 74},
        {70, 70, 71, 71, 71, 70, 71, 73, 74},
        {70, 71, 72, 71, 70, 70, 70, 72, 73},
        {71, 71, 72, 71, 70, 69, 69, 72, 73},
        {71, 72, 72, 72, 70, 69, 69, 71, 72},
        {71, 72, 72, 72, 70, 68, 68, 70, 71},
        {72, 72, 72, 72, 70, 68, 68, 69, 70},
        {72, 73, 73, 71, 70, 68, 68, 69, 70},
        {79, 78, 76, 74, 73, 72, 73, 75, 76},
        {79, 78, 76, 74, 73, 72, 73, 75, 76},
        {79, 79, 77, 74, 72, 71, 72, 74, 75},
        {81, 80, 77, 73, 71, 70, 71, 74, 75},
        {82, 80, 77, 73, 70, 69, 70, 73, 74},
        {82, 81, 77, 72, 69, 68, 69, 72, 74},
        {82, 81, 77, 72, 69, 67, 68, 72, 73},
        {82, 81, 77, 72, 68, 67, 68, 71, 73},
        {82, 81, 77, 72, 68, 66, 68, 71, 73},
        {67, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {68, 69, 71, 73, 74, 74, 74, 74, 74},
        {70, 69, 67, 66, 65, 65, 65, 65, 65},
        {70, 69, 67, 66, 65, 65, 65, 65, 65},
        {70, 69, 68, 66, 65, 65, 65, 65, 65},
        {70, 69, 68, 66, 65, 65, 65, 65, 65},
        {70, 70, 68, 66, 65, 65, 65, 65, 65},
        {70, 70, 68, 66, 65, 65, 65, 65, 65},
        {70, 70, 68, 66, 65, 65, 65, 65, 65},
        {70, 70, 68, 66, 65, 65, 65, 65, 65},
        {70, 70, 68, 66, 65, 65, 65, 65, 65}
    },
    /* @m_bSoftCompEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable soft compensate, 1: enable soft compensate */
    0
},

//CPDFFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable pdf, 1: enable pdf */
    1,
    /* @m_nExtPRm  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable singular PD pixel correction 1: enable singular PD pixel correction */
    1,
    /* @m_nWA  Size: 1x1  BitWidth: 32_u  Range~[0, 16]  Type: firmware */
    /* Center block weight */
    6,
    /* @m_nWB  Size: 1x1  BitWidth: 32_u  Range~[0, 16]  Type: firmware */
    /* Diagonal block weight */
    8,
    /* @m_nFullWidth  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Width of pixel array */
    4208,
    /* @m_nFullHeight  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Height of pixel array */
    3120,
    /* @m_nHOffset  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Horizontal offset for PD pixel location index */
    0,
    /* @m_nVOffset  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Vertical offset for PD pixel location index */
    0,
    /* @m_bRefRB  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: do not use chromatic information for green correction 1: use chromatic information for green correction */
    0,
    /* @m_bRefCnr  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: do not use corner information for green correction 1: use corner information for green correction */
    0,
    /* @m_nRefNoiseL  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* Noise floor for edge direction judgment */
    0,
    /* @m_nExtPThre  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* Singular PD pixel judgment threshold */
    16,
    /* @m_nExtPSft  Size: 1x1  BitWidth: 32_u  Range~[0, 7]  Type: firmware */
    /* Singular PD pixel judgment threshold soft transition width */
    4,
    /* @m_nExtPOpt  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Singular PD pixel correction option */
    0,
    /* @m_pPDFirstX  Size: 1x2  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Horizontal location index of the first and last PD pixel block */
    {0, 4208},
    /* @m_pPDFirstY  Size: 1x2  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* Vertical location index of the first and last PD pixel block */
    {0, 3120},
    /* @m_pPixelMask  Size: 32x32  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* PD mask */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    }
},

//CPDAFFirmwareFilter
{
    /* @m_bMirrorShift  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* mirror the direction of phase shift */
    1,
    /* @m_bShiftLutEn  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* shift lut enable */
    1,
    /* @m_pShiftLut  Size: 1x129  BitWidth: 32_s  Range~[-512, 512]  Type: firmware */
    /* shift lut value */
    {-512, -504, -496, -488, -480, -472, -464, -456, -448, -440, -432, -424, -416, -408, -400, -392, 
     -384, -376, -368, -360, -352, -344, -336, -328, -320, -312, -304, -296, -288, -280, -272, -264, 
     -256, -248, -228, -221, -213, -205, -198, -191, -184, -177, -170, -163, -157, -150, -144, -137, 
     -130, -124, -117, -111, -105, -98, -91, -84, -77, -70, -63, -55, -47, -39, -29, -19, 
     -9, 3, 15, 28, 39, 49, 59, 68, 76, 83, 90, 96, 103, 109, 116, 123, 
     130, 137, 144, 152, 159, 167, 176, 184, 192, 200, 209, 217, 225, 235, 241, 249, 
     257, 265, 273, 281, 289, 297, 305, 313, 321, 329, 337, 345, 353, 361, 369, 377, 
     385, 393, 401, 409, 417, 425, 433, 441, 449, 457, 465, 473, 481, 489, 497, 505, 
     512},
    /* @m_pLumThre  Size: 1x11  BitWidth: 32_u  Range~[0, 512]  Type: firmware */
    /* lum threshold */
    {16, 16, 16, 24, 24, 24, 32, 32, 32, 32, 32},
    /* @m_pGainThre  Size: 1x11  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* gain threshold */
    {20, 64, 120, 200, 640, 1200, 2000, 6400, 20000, 64000, 640000},
    /* @m_nErrorDistWeight  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* Weight of ErrorDist in final error */
    128,
    /* @m_nErrorDistCoef  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* coef of ErrorDist */
    102,
    /* @m_nErrorShpCoef  Size: 1x1  BitWidth: 32_u  Range~[0, 16384]  Type: firmware */
    /* coef of ErrorShp */
    512,
    /* @m_nErrorThre1  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* m_nErrorThre1 in error2conf */
    84,
    /* @m_nErrorThre2  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* m_nErrorThre2 in error2conf */
    96,
    /* @m_pSwingThre  Size: 1x11  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* swing threshold */
    {5, 5, 5, 7, 7, 7, 10, 10, 10, 10, 10},
    /* @m_bConfAdjust  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* conf adjust enable */
    0,
    /* @m_nConfOff  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* conf offset */
    0,
    /* @m_nConfLimit  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* conf limit */
    192,
    /* @m_nSearchRange  Size: 1x1  BitWidth: 32_u  Range~[0, 3]  Type: firmware */
    /* search range of pd shift(invalid in NEON mode) */
    0
},

//CWbFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - disable WB statistic, 1 - enable WB statistic */
    1,
    /* @m_bSyncWB  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - AWB calculate individually for HDR mode, 1 - use long exposure as AWB source for HDR mode */
    1,
    /* @m_bAutoWindow  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: fix window 1:aut calc window by zoom ratio */
    1,
    /* @m_nMode  Size: 1x1  BitWidth: 32_u  Range~[0, 9]  Type: firmware */
    /* 0: auto mode 1:custom 2:D75 3:D65 4:D50 5:CWF 6:TL84 7:A 8:H 9:lock */
    0,
    /* @m_nInitMode  Size: 1x1  BitWidth: 32_u  Range~[0, 7]  Type: firmware */
    /* awb enter init gain mode 0:custom 1:D75 2:D65 3:D50 4:CWF 5:TL84 6:A 7:H */
    0,
    /* @m_pManualGain  Size: 8x3  BitWidth: 15_u  Range~[4096, 32767]  Type: firmware */
    /* Manual WB gain for custom/D75/D65/D50/CWF/TL84/A/H */
    {
        {7264, 4096, 6336},
        {8780, 4096, 5150},
        {8660, 4096, 5450},
        {7040, 4096, 6210},
        {6890, 4096, 7470},
        {8110, 4096, 6140},
        {5060, 4096, 8440},
        {9220, 4096, 4900}
    },
    /* @m_nAWBStableRange  Size: 1x1  BitWidth: 32_u  Range~[0, 16384]  Type: firmware */
    /* AWB stable range in */
    80,
    /* @m_nAWBStableFrameNum  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* AWB stable reference frame number */
    4,
    /* @m_nAWBUnStableRange  Size: 1x1  BitWidth: 32_u  Range~[0, 16384]  Type: firmware */
    /* AWB stable range out */
    400,
    /* @m_nAWBUnStableFrameNum  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* AWB unstable reference frame number */
    8,
    /* @m_nAWBStep1  Size: 1x1  BitWidth: 32_u  Range~[0, 16]  Type: firmware */
    /* AWB iteration step in Q4 */
    4,
    /* @m_nAWBStep2  Size: 1x1  BitWidth: 32_u  Range~[0, 16384]  Type: firmware */
    /* AWB maximum gain change value in one iteration */
    1536,
    /* @m_nLowThr  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* AWB Block Statistic low thr, 8bit */
    2,
    /* @m_nHighThr  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* AWB Block Statistic high thr, 8bit */
    220
},

//CCTCalculatorFilter
{
    /* @m_nIterateNumber  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* iterate times when calculate color temperature */
    30,
    /* @m_nColorTemperatureLow  Size: 1x1  BitWidth: 32_u  Range~[0, 20000]  Type: firmware */
    /* color temperature low limit */
    2850,
    /* @m_nColorTemperatureHigh  Size: 1x1  BitWidth: 32_u  Range~[0, 20000]  Type: firmware */
    /* color temperature high limit */
    6500,
    /* @m_pCTMatrixLow  Size: 3x3  BitWidth: 32_fp  Range~[-32768.000000, 32767.000000]  Type: firmware */
    /* color temperature matrix low */
    {
        { 1.912078, -1.211287,  0.245800},
        {-0.352426,  1.316971,  0.463755},
        { 0.124928, -0.008208,  1.162228}
    },
    /* @m_pCTMatrixHigh  Size: 3x3  BitWidth: 32_fp  Range~[-32768.000000, 32767.000000]  Type: firmware */
    /* color temperature matrix high */
    {
        { 1.017682, -0.346087, -0.115089},
        {-0.215331,  1.001323,  0.258485},
        { 0.106983,  0.047955,  0.676944}
    }
},

//CRGB2YUVFirmwareFilter
{
    /* @m_nOutputColorSpace  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-Rec.601, 1-Rec.709 */
    1,
    /* @m_bManualMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-auto mode, 1-manual mode */
    0,
    /* @m_nGlobalSaturation  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* global saturation ratio in Q7 format */
    128,
    /* @m_nSaturationManual  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* manual saturation ratio in Q7 format */
    128,
    /* @m_pSaturationCP  Size: 1x12  BitWidth: 32_u  Range~[0, 128]  Type: firmware */
    /* saturation control points for auto mode, in Q7 format */
    {128, 128, 128, 128, 116, 108, 96, 96, 96, 96, 96, 96}
},

//CSpecialEffectFirmwareFilter
{
    /* @m_nEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0-sde off, 1-sde on */
    1,
    {
        {
            /* @m_bManualMode_0  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* manual sde enable */
            0,
            /* @m_bZoneEb_0  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* 0- zone_0 in sde off, 1- zone_0 in sde on */
            1,
            /* @m_pRyTable_0  Size: 1x3  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {255, 0, 0},
            /* @m_nSyTable_0  Size: 1x1  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            0,
            /* @m_pRuvTable_0  Size: 1x4  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {296, -40, 0, 296},
            /* @m_pSuvTable_0  Size: 1x2  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            {0, 0},
            /* @m_pMargin_0  Size: 1x6  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
            /*  */
            {4, 4, 4, 4, 4, 4},
            /* @m_nManualGainWeight_0  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            32,
            /* @m_pGainWeight_0  Size: 1x11  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            {0, 0, 0, 0, 0, 0, 0, 16, 24, 32, 32},
            /* @m_pYTable_0  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {96, 255},
            /* @m_pHTable_0  Size: 1x2  BitWidth: 9_u  Range~[0, 360]  Type: firmware */
            /*  */
            {180, 220},
            /* @m_pSTable_0  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {16, 255},
        },
        {
            /* @m_bManualMode_1  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* manual sde enable */
            0,
            /* @m_bZoneEb_1  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* 0- zone_1 in sde off, 1- zone_1 in sde on */
            1,
            /* @m_pRyTable_1  Size: 1x3  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {255, 0, 0},
            /* @m_nSyTable_1  Size: 1x1  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            0,
            /* @m_pRuvTable_1  Size: 1x4  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {256, 0, 16, 272},
            /* @m_pSuvTable_1  Size: 1x2  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            {0, 0},
            /* @m_pMargin_1  Size: 1x6  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
            /*  */
            {4, 4, 4, 4, 4, 4},
            /* @m_nManualGainWeight_1  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            32,
            /* @m_pGainWeight_1  Size: 1x11  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            {0, 0, 0, 0, 0, 0, 0, 16, 24, 32, 32},
            /* @m_pYTable_1  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
            /* @m_pHTable_1  Size: 1x2  BitWidth: 9_u  Range~[0, 360]  Type: firmware */
            /*  */
            {60, 80},
            /* @m_pSTable_1  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {96, 255},
        },
        {
            /* @m_bManualMode_2  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* manual sde enable */
            0,
            /* @m_bZoneEb_2  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* 0- zone_2 in sde off, 1- zone_2 in sde on */
            0,
            /* @m_pRyTable_2  Size: 1x3  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {255, 0, 0},
            /* @m_nSyTable_2  Size: 1x1  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            0,
            /* @m_pRuvTable_2  Size: 1x4  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {256, 256, 0, 0},
            /* @m_pSuvTable_2  Size: 1x2  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            {0, 0},
            /* @m_pMargin_2  Size: 1x6  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
            /*  */
            {4, 4, 4, 4, 4, 4},
            /* @m_nManualGainWeight_2  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            32,
            /* @m_pGainWeight_2  Size: 1x11  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            {32, 30, 28, 26, 24, 22, 20, 16, 12, 8, 4},
            /* @m_pYTable_2  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
            /* @m_pHTable_2  Size: 1x2  BitWidth: 9_u  Range~[0, 360]  Type: firmware */
            /*  */
            {0, 360},
            /* @m_pSTable_2  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
        },
        {
            /* @m_bManualMode_3  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* manual sde enable */
            0,
            /* @m_bZoneEb_3  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* 0- zone_3 in sde off, 1- zone_3 in sde on */
            0,
            /* @m_pRyTable_3  Size: 1x3  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {255, 0, 0},
            /* @m_nSyTable_3  Size: 1x1  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            0,
            /* @m_pRuvTable_3  Size: 1x4  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {256, 256, 0, 0},
            /* @m_pSuvTable_3  Size: 1x2  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            {0, 0},
            /* @m_pMargin_3  Size: 1x6  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
            /*  */
            {4, 4, 4, 4, 4, 4},
            /* @m_nManualGainWeight_3  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            32,
            /* @m_pGainWeight_3  Size: 1x11  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            {32, 30, 28, 26, 24, 22, 20, 16, 12, 8, 4},
            /* @m_pYTable_3  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
            /* @m_pHTable_3  Size: 1x2  BitWidth: 9_u  Range~[0, 360]  Type: firmware */
            /*  */
            {0, 360},
            /* @m_pSTable_3  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
        },
        {
            /* @m_bManualMode_4  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* manual sde enable */
            0,
            /* @m_bZoneEb_4  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* 0- zone_4 in sde off, 1- zone_4 in sde on */
            0,
            /* @m_pRyTable_4  Size: 1x3  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {255, 0, 0},
            /* @m_nSyTable_4  Size: 1x1  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            0,
            /* @m_pRuvTable_4  Size: 1x4  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {256, 256, 0, 0},
            /* @m_pSuvTable_4  Size: 1x2  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            {0, 0},
            /* @m_pMargin_4  Size: 1x6  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
            /*  */
            {4, 4, 4, 4, 4, 4},
            /* @m_nManualGainWeight_4  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            32,
            /* @m_pGainWeight_4  Size: 1x11  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            {32, 30, 28, 26, 24, 22, 20, 16, 12, 8, 4},
            /* @m_pYTable_4  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
            /* @m_pHTable_4  Size: 1x2  BitWidth: 9_u  Range~[0, 360]  Type: firmware */
            /*  */
            {0, 360},
            /* @m_pSTable_4  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
        },
        {
            /* @m_bManualMode_5  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* manual sde enable */
            0,
            /* @m_bZoneEb_5  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
            /* 0- zone_5 in sde off, 1- zone_5 in sde on */
            0,
            /* @m_pRyTable_5  Size: 1x3  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {255, 0, 0},
            /* @m_nSyTable_5  Size: 1x1  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            0,
            /* @m_pRuvTable_5  Size: 1x4  BitWidth: 10_s  Range~[-512, 511]  Type: firmware */
            /*  */
            {256, 256, 0, 0},
            /* @m_pSuvTable_5  Size: 1x2  BitWidth: 8_s  Range~[-128, 127]  Type: firmware */
            /*  */
            {0, 0},
            /* @m_pMargin_5  Size: 1x6  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
            /*  */
            {4, 4, 4, 4, 4, 4},
            /* @m_nManualGainWeight_5  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            32,
            /* @m_pGainWeight_5  Size: 1x11  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
            /*  */
            {32, 30, 28, 26, 24, 22, 20, 16, 12, 8, 4},
            /* @m_pYTable_5  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
            /* @m_pHTable_5  Size: 1x2  BitWidth: 9_u  Range~[0, 360]  Type: firmware */
            /*  */
            {0, 360},
            /* @m_pSTable_5  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
            /*  */
            {0, 255},
        },
    },
    /* @m_nLuxLUT  Size: 1x11  BitWidth: 32_u  Range~[0, 2147483648]  Type: firmware */
    /* LUT of lux */
    {20, 64, 120, 200, 640, 1200, 2000, 6400, 10000, 20000, 50000}
},

//CCurveFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - disable gtm1, 1 - enable gtm1 */
    1,
    /* @m_bEbGtmAfterLinearcurve  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - no modification of gtm1 curve, 1 - modify gtm1 curve with linear curve */
    0,
    /* @m_nCurveSelectOption  Size: 1x1  BitWidth: 32_u  Range~[0, 4]  Type: firmware */
    /* 0 - Auto gain switch, 1 - Use curve 0, 2 - Use curve 1, 3 - Use curve 2, 4 - Use A-Log curve for IPE */
    0,
    /* @m_nBacklightStrengthManual  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* backlight strength for manual control, 0->256 - strength increase, 0 - strenghth unchanged */
    0,
    /* @m_nContrastStrengthManual  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* contrast strength for manual control, 0->256 - strength increase, 128 - strenghth unchanged */
    128,
    /* @m_nBrightnessStrengthManual  Size: 1x1  BitWidth: 32_u  Range~[0, 65536]  Type: firmware */
    /* brightness strength for manual control, 0->4096 - strength increase, 4096 - strenghth unchanged */
    4096,
    /* @m_nAlpha  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* mode conversion speed: 255-max */
    255,
    /* @m_pBacklightCurveManual  Size: 1x129  BitWidth: 32_u  Range~[0, 1023]  Type: firmware */
    /* strengh adjustment curve for backlight */
    {0, 31, 63, 91, 115, 147, 171, 195, 219, 239, 259, 275, 291, 299, 311, 319, 
     327, 335, 339, 343, 343, 347, 355, 359, 359, 363, 367, 371, 375, 379, 383, 383, 
     387, 391, 395, 395, 399, 399, 403, 407, 407, 411, 415, 415, 419, 419, 423, 423, 
     431, 431, 435, 439, 443, 447, 451, 455, 459, 463, 471, 475, 483, 491, 495, 507, 
     511, 519, 531, 539, 543, 555, 563, 571, 579, 587, 595, 603, 611, 615, 627, 635, 
     639, 647, 655, 663, 671, 679, 687, 695, 703, 711, 719, 727, 735, 743, 751, 759, 
     767, 779, 783, 791, 803, 807, 815, 827, 831, 843, 851, 859, 867, 871, 883, 891, 
     895, 907, 915, 923, 931, 939, 947, 955, 963, 971, 979, 987, 995, 1003, 1011, 1019, 
     1023},
    /* @m_pContrastsCurveManual  Size: 1x129  BitWidth: 32_u  Range~[0, 1023]  Type: firmware */
    /* strengh adjustment curve for contrast */
    {0, 3, 7, 7, 7, 11, 11, 11, 11, 15, 15, 15, 19, 19, 23, 23, 
     27, 31, 31, 35, 39, 39, 43, 47, 51, 55, 59, 63, 67, 75, 79, 87, 
     91, 99, 107, 111, 119, 127, 135, 143, 155, 163, 171, 183, 195, 207, 215, 231, 
     243, 255, 271, 287, 303, 319, 335, 351, 367, 387, 403, 419, 443, 459, 479, 495, 
     515, 535, 551, 567, 587, 607, 627, 643, 659, 679, 691, 707, 727, 739, 755, 771, 
     783, 795, 811, 819, 835, 843, 855, 867, 879, 887, 895, 903, 911, 919, 927, 931, 
     939, 943, 951, 955, 963, 967, 971, 975, 979, 983, 987, 991, 991, 995, 999, 1003, 
     1003, 1007, 1007, 1007, 1011, 1011, 1015, 1015, 1015, 1015, 1019, 1019, 1019, 1019, 1019, 1023, 
     1023},
    /* @m_pGainIndex  Size: 1x3  BitWidth: 32_u  Range~[16, 32768]  Type: firmware */
    /* gain control points for global tone mapping strength */
    {128, 256, 512},
    /* @m_pGTMCurve0  Size: 1x129  BitWidth: 32_u  Range~[0, 1023]  Type: firmware */
    /* tone mapping curve 0 for different gain */
    {0, 34, 68, 103, 133, 160, 187, 213, 240, 267, 292, 317, 340, 362, 382, 402, 
     421, 439, 457, 473, 489, 505, 520, 535, 549, 563, 576, 589, 601, 613, 625, 636, 
     647, 657, 667, 677, 686, 695, 704, 712, 720, 728, 735, 742, 749, 756, 762, 768, 
     774, 779, 785, 790, 795, 800, 805, 810, 814, 819, 823, 827, 831, 835, 839, 843, 
     847, 851, 855, 858, 862, 866, 869, 873, 876, 880, 883, 886, 889, 893, 896, 899, 
     902, 905, 908, 910, 913, 916, 919, 921, 924, 927, 929, 932, 935, 937, 940, 943, 
     946, 948, 951, 954, 957, 959, 962, 965, 967, 970, 973, 975, 978, 980, 983, 985, 
     987, 990, 992, 994, 997, 999, 1002, 1004, 1007, 1009, 1012, 1014, 1016, 1018, 1020, 1022, 
     1023},
    /* @m_pGTMCurve1  Size: 1x129  BitWidth: 32_u  Range~[0, 1023]  Type: firmware */
    /* tone mapping curve 1 for different gain */
    {0, 34, 68, 103, 133, 160, 187, 213, 240, 267, 292, 317, 340, 362, 382, 402, 
     421, 439, 457, 473, 489, 505, 520, 535, 549, 563, 576, 589, 601, 613, 625, 636, 
     647, 657, 667, 677, 686, 695, 704, 712, 720, 728, 735, 742, 749, 756, 762, 768, 
     774, 779, 785, 790, 795, 800, 805, 810, 814, 819, 823, 827, 831, 835, 839, 843, 
     847, 851, 855, 858, 862, 866, 869, 873, 876, 880, 883, 886, 889, 893, 896, 899, 
     902, 905, 908, 910, 913, 916, 919, 921, 924, 927, 929, 932, 935, 937, 940, 943, 
     946, 948, 951, 954, 957, 959, 962, 965, 967, 970, 973, 975, 978, 980, 983, 985, 
     987, 990, 992, 994, 997, 999, 1002, 1004, 1007, 1009, 1012, 1014, 1016, 1018, 1020, 1022, 
     1023},
    /* @m_pGTMCurve2  Size: 1x129  BitWidth: 32_u  Range~[0, 1023]  Type: firmware */
    /* tone mapping curve 2 for different gain */
    {0, 34, 68, 103, 133, 160, 187, 213, 240, 267, 292, 317, 340, 362, 382, 402, 
     421, 439, 457, 473, 489, 505, 520, 535, 549, 563, 576, 589, 601, 613, 625, 636, 
     647, 657, 667, 677, 686, 695, 704, 712, 720, 728, 735, 742, 749, 756, 762, 768, 
     774, 779, 785, 790, 795, 800, 805, 810, 814, 819, 823, 827, 831, 835, 839, 843, 
     847, 851, 855, 858, 862, 866, 869, 873, 876, 880, 883, 886, 889, 893, 896, 899, 
     902, 905, 908, 910, 913, 916, 919, 921, 924, 927, 929, 932, 935, 937, 940, 943, 
     946, 948, 951, 954, 957, 959, 962, 965, 967, 970, 973, 975, 978, 980, 983, 985, 
     987, 990, 992, 994, 997, 999, 1002, 1004, 1007, 1009, 1012, 1014, 1016, 1018, 1020, 1022, 
     1023}
},

//CLTMFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable ltm, 1: enable ltm */
    1,
    /* @m_bHistEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable ltm hist, 1: enable ltm hist */
    1,
    /* @m_nOffsetX  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* image offset in horizontal direction, 2X */
    0,
    /* @m_nOffsetY  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* image offset in vertical direction, 2X */
    0,
    /* @m_nLtmStrength  Size: 1x1  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* Ltm strength, max:256 */
    256,
    /* @m_nCurveAlpha  Size: 1x1  BitWidth: 32_u  Range~[0, 8191]  Type: firmware */
    /* convergence rate of curve blend, 0: max */
    7000,
    /* @m_nSlopeThr  Size: 1x1  BitWidth: 32_u  Range~[16, 256]  Type: firmware */
    /* block Drc*Dark threshold, Q4 */
    32,
    /* @m_nPhicBeta  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* attenuation rate of photographic curve, 0:max */
    60,
    /* @m_nBlendCurveFP  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* The first knee point in blending DRC curve and DRCDark curve. */
    7,
    /* @m_nBlendCurveSP  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* The second knee point in blending DRC curve and DRCDark curve,BlendCurveFP <= BlendCurveSP. */
    15,
    /* @m_nSubDarkPercThrLow  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* Adjust drccurvek by using SubDarkPercThrLow, SubDarkPercThrHigh and SubDarkAdjMeanThr. */
    20,
    /* @m_nSubDarkPercThrHigh  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* The threshold of drccurvek adjustment,SubDarkPercThrLow < SubDarkPercThrHigh */
    50,
    /* @m_nSubDarkAdjMeanThr  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* The threshold of drccurvek adjustment,adjust drccurvek if subdarkmean > SubDarkAdjMeanThr */
    8,
    /* @m_nDarkPercThrLow  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* Adjust drccurvek by using DarkPercThrLow, DarkPercThrHigh and DarkPercThrHigh. */
    50,
    /* @m_nDarkPercThrHigh  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* The threshold of drccurvek adjustment,DarkPercThrLow < DarkPercThrHigh */
    80,
    /* @m_nPhCDarkMaxExtraRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* The maximum enhancement strength(1+PhCDarkMaxRatio/100) according to percentage of block dark. */
    30,
    /* @m_pDstAlphaGainIndex  Size: 1x12  BitWidth: 32_u  Range~[0, 32768]  Type: firmware */
    /* gain control points for local tone mapping strength */
    {16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768},
    /* @m_pDstAlphaIndex  Size: 1x12  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* intensity of ltm,work with DstAlphaGainIndex */
    {256, 232, 191, 127, 0, 0, 0, 0, 0, 0, 0, 0}
},

//CUVDenoiseFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* UVDenoise Enable 0:Disable 1:Enable */
    0,
    /* @m_bManualMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0-auto mode, 1-manual mode */
    0,
    /* @m_pNoiseH  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* h direction noise level */
    {64, 64},
    /* @m_nNoiseV  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* v direction noise level */
    10,
    /* @m_nDarkRatio  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* v direction dark region adopt weight */
    3,
    /* @m_pWeightP  Size: 1x2  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
    /* h direction position distance ratio */
    {6, 6},
    /* @m_pWeightY  Size: 1x2  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
    /* h direction y distance ratio */
    {7, 7},
    /* @m_pWeightC  Size: 1x2  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
    /* h direction uv distance ratio */
    {6, 6},
    /* @m_pLumaH0Manual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* h direction luma adopt weight */
    {10, 10, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pLumaH1Manual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* h direction luma adopt weight */
    {10, 10, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pRegionManual  Size: 1x2  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* h direction smooth strength */
    {64, 64},
    /* @m_nDCWeightHManual  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* h direction low chroma adapt weight */
    16,
    /* @m_nLumRatioThManual  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* h direction adjust luma for Thread */
    16,
    /* @m_nLumRatioRgManual  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* h direction adjust luma for regrion */
    0,
    /* @m_pLumaVManual  Size: 1x9  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* v direction luma adopt weight */
    {30, 30, 0, 0, 0, 0, 0, 0, 0},
    /* @m_nUVRatioVManual  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* v direction uv distance ratio */
    8,
    /* @m_nDCWeightVManual  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* v direction low chroma adapt weight */
    16,
    /* @m_nPreQManual  Size: 1x1  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* v direction smooth */
    10,
    /* @m_nVstrengthManual  Size: 1x1  BitWidth: 10_u  Range~[0, 30]  Type: firmware */
    /* v direction smooth strength */
    24,
    /* @m_pLumaH0  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* h direction luma adopt weight */
    {
        {10, 10, 10, 10, 10, 10, 10, 10, 64, 64, 64, 64},
        {10, 10, 10, 10, 10, 10, 10, 10, 64, 64, 64, 64},
        {0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48},
        {0, 0, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32},
        {0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 16},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pLumaH1  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* h direction luma adopt weight */
    {
        {10, 10, 10, 10, 10, 10, 10, 10, 64, 64, 64, 64},
        {10, 10, 10, 10, 10, 10, 10, 10, 64, 64, 64, 64},
        {0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 48, 48},
        {0, 0, 0, 0, 0, 0, 0, 0, 32, 32, 32, 32},
        {0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 16},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pRegion  Size: 2x12  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* h direction smooth strength */
    {
        {16, 16, 26, 36, 46, 56, 64, 64, 64, 64, 64, 64},
        {16, 16, 26, 36, 46, 56, 64, 64, 64, 64, 64, 64}
    },
    /* @m_nDCWeightH  Size: 1x12  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* h direction low chroma adapt weight */
    {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
    /* @m_nLumRatioTh  Size: 1x12  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* h direction adjust luma for Thread */
    {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
    /* @m_nLumRatioRg  Size: 1x12  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* h direction adjust luma for regrion */
    {0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
    /* @m_pLumaV  Size: 9x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* v direction luma adopt weight */
    {
        {10, 10, 10, 10, 10, 10, 10, 30, 30, 30, 30, 30},
        {10, 10, 10, 10, 10, 10, 10, 30, 30, 30, 30, 30},
        {0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 16, 16},
        {0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 8, 8},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_nUVRatioV  Size: 1x12  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* v direction uv distance ratio */
    {6, 6, 6, 7, 7, 7, 8, 8, 4, 4, 4, 4},
    /* @m_nDCWeightV  Size: 1x12  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* v direction low chroma adapt weight */
    {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
    /* @m_nPreQ  Size: 1x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* v direction smooth */
    {20, 20, 16, 16, 16, 16, 13, 10, 4, 4, 3, 3},
    /* @m_nVstrength  Size: 1x12  BitWidth: 10_u  Range~[0, 30]  Type: firmware */
    /* v direction smooth strength */
    {16, 16, 20, 21, 22, 23, 24, 24, 28, 28, 28, 28}
},

//CEELiteFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0--off 1--on */
    1,
    /* @m_pCurveLumaP  Size: 1x17  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* positive local lum curve */
    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 
     32},
    /* @m_pCurveLumaN  Size: 1x17  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* negative local lum curve  */
    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 
     32},
    /* @m_pCurveFreqTxP  Size: 1x17  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* positive Frequence curve */
    {8, 10, 12, 14, 16, 17, 18, 19, 20, 21, 23, 25, 27, 29, 30, 31, 
     31},
    /* @m_pCurveFreqTxN  Size: 1x17  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* negative Frequence curve */
    {4, 8, 12, 16, 16, 17, 18, 19, 20, 21, 23, 25, 27, 29, 30, 31, 
     31},
    /* @m_nNodeFreq  Size: 1x1  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /* segment point */
    6,
    /* @m_pGlobal_SharpenStrengthP  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* Positive EE Sharpen Strength */
    {50, 36, 32, 24, 18, 15, 15, 14, 13, 11, 8, 4},
    /* @m_pGlobal_SharpenStrengthN  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* Negative EE Sharpen Strength */
    {65, 50, 50, 35, 28, 22, 22, 22, 20, 18, 12, 8},
    /* @m_pGlobal_SharpenStrengthPCapture  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* Positive EE Sharpen Strength */
    {16, 16, 15, 14, 13, 12, 12, 11, 11, 9, 7, 5},
    /* @m_pGlobal_SharpenStrengthNCapture  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* Negative EE Sharpen Strength */
    {16, 16, 15, 14, 13, 12, 12, 11, 11, 9, 7, 5},
    /* @m_pLPF1  Size: 4x2  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* low pass filter1, filter is [a0 a1 256-2*(a0+a1) a1 a0] */
    {
        {0, 66},
        {6, 52},
        {13, 62},
        {33, 59}
    },
    /* @m_pLPF2  Size: 4x2  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* low pass filter2, filter is [a0 a1 256-2*(a0+a1) a1 a0] */
    {
        {51, 51},
        {51, 51},
        {51, 51},
        {51, 51}
    },
    /* @m_pLPF1Capture  Size: 4x2  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* low pass filter1, filter is [a0 a1 256-2*(a0+a1) a1 a0] */
    {
        {0, 0},
        {6, 58},
        {13, 62},
        {33, 59}
    },
    /* @m_pLPF2Capture  Size: 4x2  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* low pass filter2, filter is [a0 a1 256-2*(a0+a1) a1 a0] */
    {
        {51, 51},
        {51, 51},
        {51, 51},
        {51, 51}
    },
    /* @m_pFreqExpLevel1  Size: 1x12  BitWidth: 6_u  Range~[1, 63]  Type: firmware */
    /* frequence scaling 1 */
    {16, 16, 16, 16, 14, 12, 12, 12, 12, 12, 12, 12},
    /* @m_pFreqExpLevel2  Size: 1x12  BitWidth: 6_u  Range~[0, 63]  Type: firmware */
    /* frequence scaling 2 */
    {12, 12, 14, 16, 16, 16, 16, 16, 16, 16, 16, 16},
    /* @m_pFreqOffsetTx  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* frequence offset  */
    {0, 0, 7, 9, 10, 12, 14, 15, 16, 17, 17, 17},
    /* @m_pTxClipP  Size: 1x12  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* positive texutre threshold */
    {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
    /* @m_pTxClipN  Size: 1x12  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* negative texutre threshold */
    {60, 60, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48},
    /* @m_pTxThrdP  Size: 1x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* positive texutre clamp */
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    /* @m_pTxThrdN  Size: 1x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* negative texutre clamp */
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    /* @m_pClipPos  Size: 1x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* positive sharpen clamp */
    {32, 32, 32, 28, 28, 28, 28, 28, 28, 28, 28, 28},
    /* @m_pClipNeg  Size: 1x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* negative sharpen clamp */
    {32, 32, 32, 28, 28, 28, 28, 28, 28, 28, 28, 28},
    /* @m_pHCStrength  Size: 1x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* halo control strength */
    {8, 8, 8, 10, 12, 15, 15, 15, 16, 16, 16, 16},
    /* @m_pCoffW  Size: 2x12  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* halo control range */
    {
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64},
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
    },
    /* @m_bManualMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0--off 1--on */
    0,
    /* @m_nGlobal_SharpenStrengthP_manual  Size: 1x1  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* Positive EE Sharpen Strength (manual) */
    32,
    /* @m_nGlobal_SharpenStrengthN_manual  Size: 1x1  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* Negative EE Sharpen Strength (manual) */
    32,
    /* @m_pLPF1_manual  Size: 1x2  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* low pass filter1 a0+a1<=128 (manual) */
    {0, 0},
    /* @m_pLPF2_manual  Size: 1x2  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* low pass filter2 a0+a1<=128 (manual) */
    {51, 51},
    /* @m_nFreqExpLevel1_manual  Size: 1x1  BitWidth: 6_u  Range~[0, 63]  Type: firmware */
    /* frequence scaling (manual) */
    8,
    /* @m_nFreqExpLevel2_manual  Size: 1x1  BitWidth: 6_u  Range~[0, 63]  Type: firmware */
    /* frequence scaling (manual) */
    8,
    /* @m_nFreqOffsetTx_manual  Size: 1x1  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* frequence offset (manual) */
    0,
    /* @m_nTxClipP_manual  Size: 1x1  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* positive texutre threshold(manual) */
    35,
    /* @m_nTxClipN_manual  Size: 1x1  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /* negative texutre threshold(manual) */
    35,
    /* @m_nTxThrdP_manual  Size: 1x1  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* positive texutre clamp(manual) */
    0,
    /* @m_nTxThrdN_manual  Size: 1x1  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /* negative texutre clamp(manual) */
    0,
    /* @m_nClipPos_manual  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* positive sharpen clamp(manual) */
    127,
    /* @m_nClipNeg_manual  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* negative sharpen clamp(manual) */
    127,
    /* @m_nHCStrength_manual  Size: 1x1  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /* halo control strength(manual) */
    16,
    /* @m_pCoffW_manual  Size: 1x2  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* halo control range(manual) */
    {254, 255},
    /* @m_pGainIndex  Size: 1x4  BitWidth: 16_u  Range~[0, 32768]  Type: firmware */
    /* gain control points */
    {16, 256, 1024, 4096}
},

//CCropFirmwareFilter

//CBitDepthCompressionFirmwareFilter
{
    /* @m_bEnableDithering  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0-disable dithering, 1-enable dithering */
    1
},

//CFormatterFirmwareFilter
{
    /* @m_nSwingOption  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0 - full swing, 1 - studio swing */
    1,
    /* @m_bConvertDitheringEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0 - convert dithering off, 1 - convert dithering on */
    0,
    /* @m_bCompressDitheringEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 0 - studio swing dithering off, 1 - studio swing dithering on */
    0
},

//CDWTFirmwareFilter

//CEISFirmwareFilter
{
    /* @m_bEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* hardware statistic enable */
    0,
    /* @m_bCalcEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /*  firmware calculate enable */
    0,
    /* @m_bFilterEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* motion filter enable */
    0,
    /* @m_nRangeX  Size: 1x1  BitWidth: 7_u  Range~[0, 64]  Type: firmware */
    /* Detect range in X direction */
    32,
    /* @m_nRangeY  Size: 1x1  BitWidth: 7_u  Range~[0, 64]  Type: firmware */
    /* Detect range in Y direction */
    32,
    /* @m_nMarginX  Size: 1x1  BitWidth: 12_u  Range~[0, 4095]  Type: firmware */
    /* Margin in X direction */
    64,
    /* @m_nMarginY  Size: 1x1  BitWidth: 12_u  Range~[0, 4095]  Type: firmware */
    /* Margin in Y direction */
    64,
    /* @m_pFilterWeight  Size: 1x32  BitWidth: 32_u  Range~[0, 4096]  Type: firmware */
    /* Motion Filter Weight, vector sum should be 4096 */
    {30, 34, 38, 44, 49, 54, 60, 66, 73, 80, 87, 94, 102, 110, 118, 126, 
     134, 142, 150, 158, 165, 173, 179, 186, 192, 197, 202, 206, 209, 211, 213, 214},
    /* @m_pPeakConfLevel  Size: 1x12  BitWidth: 32_u  Range~[0, 65536]  Type: firmware */
    /* Peak Confidence Level Lut */
    {4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192},
    /* @m_pPeakErrorThre  Size: 1x12  BitWidth: 32_u  Range~[0, 65536]  Type: firmware */
    /* Peak Error Threshold Lut */
    {0, 0, 0, 32, 90, 256, 1024, 2048, 3072, 4096, 4096, 4096},
    /* @m_bReverseDirectionX  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Reverse Direction in horizontal direction */
    0,
    /* @m_bReverseDirectionY  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Reverse Direction in vertical direction */
    0,
    /* @m_nCenterStatRatio  Size: 1x1  BitWidth: 9_u  Range~[1, 256]  Type: firmware */
    /* statistic ratio of center 1080p, 256 is full 1080p */
    256
},

//CSimpleScalingFirmwareFilter

//CAECFilter
{
    /* @m_bManualAEEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 3]  Type: firmware */
    /* Enum: 0 - auto_ae, 1 - manual_ae, 2 - lock_ae, 3 - manual_expindex */
    0,
    /* @m_bAdvancedAECEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: use m_pTargetRange[1] as long frame target luma both in single and hdr, 1: dynamic calculate long frame target luma */
    1,
    /* @m_bAntiFlickerEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: disable antiflicker, 1: enable antiflicker */
    1,
    /* @m_bLumaCalcMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: rgb_max, 1: averaged_y */
    0,
    /* @m_bLumaSelectOption  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: exclude sub roi luma, 1: include face roi luma */
    0,
    /* @m_bHDRRatioMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: auto hdr, 1:manual hdr */
    0,
    /* @m_bHDRProcessOption  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: fixed hdr ratio first, then adjust short frame when long frame is stable, 1: adjust long/short frame separately */
    1,
    /* @m_bHDRCapRatioMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: auto capture hdr ratio, 1: manual capture hdr ratio */
    0,
    /* @m_nSensitivityRatio  Size: 1x1  BitWidth: 32_s  Range~[-1024, 1024]  Type: firmware */
    /* the sensitivity ratio between capture frame and preview frame, Q8 format */
    256,
    /* @m_nCompensation  Size: 1x1  BitWidth: 32_u  Range~[0, 512]  Type: firmware */
    /* the compensation of target luma */
    100,
    /* @m_nSmoothness  Size: 1x1  BitWidth: 32_u  Range~[1, 16]  Type: firmware */
    /* smoothness of two adjacent frames */
    16,
    /* @m_nAntiFlickerFreq  Size: 1x1  BitWidth: 32_u  Range~[50, 60]  Type: firmware */
    /* Enum: 50 - 50Hz, 60 - 60Hz. */
    50,
    /* @m_nStrategyMode  Size: 1x1  BitWidth: 32_u  Range~[0, 2]  Type: firmware */
    /* Enum: 0 - scene_auto, 1 - highlight_prior, 2 - lowlight_prior */
    0,
    /* @m_nMinHDRRatio  Size: 1x1  BitWidth: 32_u  Range~[1, 64]  Type: firmware */
    /* Limit: m_nMinHDRRatio <= m_nMaxHDRRatio. minimum hdr ratio */
    1,
    /* @m_nMaxHDRRatio  Size: 1x1  BitWidth: 32_u  Range~[1, 64]  Type: firmware */
    /* Limit: m_nMaxHDRRatio >= m_nMinHDRRatio. maximum hdr ratio */
    64,
    /* @m_nMidOffsetRatio  Size: 1x1  BitWidth: 32_u  Range~[1, 64]  Type: firmware */
    /* middle exposure control, long : middle : short = 1 : m_nMidOffsetRatio*sqrt(m_nCurHDRRatio) : m_nCurHDRRatio,Q4 format */
    16,
    /* @m_nHDRRatioManual  Size: 1x1  BitWidth: 32_u  Range~[1, 64]  Type: firmware */
    /* the manual ratio control of long/short */
    4,
    /* @m_nHDRCapSatRefBin  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* saturated reference bin in hdr capture */
    102,
    /* @m_pHDRCapSatRefPerThr  Size: 1x2  BitWidth: 32_u  Range~[0, 10000]  Type: firmware */
    /* saturated reference percentage low and high threshold in hdr capture */
    {500, 2000},
    /* @m_pHDRCapRatioManual  Size: 1x2  BitWidth: 32_fp  Range~[0.031250, 32.000000]  Type: firmware */
    /* [0]:long, [1]:short, manual ratio of long/short frame exposure relative to middle exposure */
    {4.000000, 0.250000},
    /* @m_pHDRCapRatioShortAuto  Size: 1x2  BitWidth: 32_fp  Range~[0.031250, 1.000000]  Type: firmware */
    /* auto ratio range of short frame exposure relative to middle exposure */
    {0.062500, 0.250000},
    /* @m_pRouteNode50Hz  Size: 16x3  BitWidth: 32_u  Range~[0, 524287]  Type: firmware */
    /* 50 Hz ae route */
    {
        {10000, 512, 256},
        {20000, 1024, 256},
        {30000, 1024, 256},
        {40000, 1024, 256},
        {50000, 1024, 256},
        {60000, 16384, 256},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    },
    /* @m_pRouteNode60Hz  Size: 16x3  BitWidth: 32_u  Range~[0, 524287]  Type: firmware */
    /* 60 Hz ae route */
    {
        {8333, 512, 256},
        {16666, 1024, 256},
        {24999, 1024, 256},
        {33332, 1024, 256},
        {49998, 1024, 256},
        {66664, 16384, 256},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    },
    /* @m_pTolerance  Size: 1x2  BitWidth: 32_u  Range~[0, 8]  Type: firmware */
    /* [0]:long, [1]:short, no adjustment when mean luma is between (target luma - m_nTolerance, target luma - m_nTolerance) */
    {2, 2},
    /* @m_pStableRange  Size: 1x2  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* [0]:long, [1]:short, the difference between mean luma and target luma used to determined whether to adjust again after the AE is stabilized */
    {4, 4},
    /* @m_pSatRefBin  Size: 1x2  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* [0]:long, [1]:short, saturated reference bin */
    {160, 36},
    /* @m_pSatRefPerThr  Size: 2x2  BitWidth: 32_u  Range~[0, 10000]  Type: firmware */
    /* [0][i]:long, [1][i]:short, [i][0]: saturated reference percentage low threshold, [i][1]: saturated reference percentage high threshold */
    {
        {40, 400},
        {78, 78}
    },
    /* @m_pStableRefFrame  Size: 1x2  BitWidth: 32_u  Range~[1, 31]  Type: firmware */
    /* [0]:long, [1]:short, stable reference frame number */
    {1, 1},
    /* @m_pUnStableRefFrame  Size: 1x2  BitWidth: 32_u  Range~[1, 31]  Type: firmware */
    /* [0]:long, [1]:short, unstable reference frame number */
    {1, 3},
    /* @m_pMinExpTime  Size: 1x2  BitWidth: 32_u  Range~[1, 2147483647]  Type: firmware */
    /* Limit: m_pMinExpTime <= m_pMaxExpTime. [0]:long, [1]:short, minimum exposure time, unit us */
    {50, 50},
    /* @m_pMaxExpTime  Size: 1x2  BitWidth: 32_u  Range~[1, 2147483647]  Type: firmware */
    /* Limit: m_pMaxExpTime >= m_pMinExpTime. [0]:long, [1]:short, maximum exposure time, unit us */
    {66752, 61999},
    /* @m_pMinAnaGain  Size: 1x2  BitWidth: 32_u  Range~[256, 256000]  Type: firmware */
    /* Limit: m_pMinAnaGain <= m_pMaxAnaGain. [0]:long, [1]:short, minimum analog gain, Q8 format */
    {256, 256},
    /* @m_pMaxAnaGain  Size: 1x2  BitWidth: 32_u  Range~[256, 256000]  Type: firmware */
    /* Limit: m_pMaxAnaGain >= m_pMinAnaGain. [0]:long, [1]:short, maximum analog gain, Q8 format */
    {3968, 3968},
    /* @m_pMinSnsDGain  Size: 1x2  BitWidth: 32_u  Range~[4096, 4096000]  Type: firmware */
    /* Limit: m_pMinSnsDGain <= m_pMaxSnsDGain. [0]:long, [1]:short, minimum sensor digital gain, Q12 format */
    {4096, 4096},
    /* @m_pMaxSnsDGain  Size: 1x2  BitWidth: 32_u  Range~[4096, 4096000]  Type: firmware */
    /* Limit: m_pMaxSnsDGain >= m_pMinSnsDGain. [0]:long, [1]:short, maximum sensor digital gain, Q12 format */
    {4096, 4096},
    /* @m_pMinTotalGain  Size: 1x2  BitWidth: 32_u  Range~[256, 524287]  Type: firmware */
    /* Limit: m_pMinTotalGain <= m_pMaxTotalGain. [0]:long, [1]:short, minimum total gain, Q8 format */
    {256, 256},
    /* @m_pMaxTotalGain  Size: 1x2  BitWidth: 32_u  Range~[256, 524287]  Type: firmware */
    /* Limit: m_pMaxTotalGain >= m_pMinTotalGain. [0]:long, [1]:short, maximum total gain, Q8 format */
    {16384, 253952},
    /* @m_pExpTimeManual  Size: 1x2  BitWidth: 32_u  Range~[1, 2147483647]  Type: firmware */
    /* [0]:long, [1]:short, manual exposure time */
    {20000, 1000},
    /* @m_pAnaGainManual  Size: 1x2  BitWidth: 32_u  Range~[256, 256000]  Type: firmware */
    /* [0]:long, [1]:short, manual analog gain, Q8 format */
    {992, 256},
    /* @m_pSnsDGainManual  Size: 1x2  BitWidth: 32_u  Range~[4096, 4096000]  Type: firmware */
    /* [0]:long, [1]:short, manual sensor digital gain, Q12 format */
    {4096, 4096},
    /* @m_pTotalGainManual  Size: 1x2  BitWidth: 32_u  Range~[256, 524287]  Type: firmware */
    /* [0]:long, [1]:short, manual total gain, Q8 format */
    {992, 256},
    /* @m_pExpIndexManual  Size: 1x2  BitWidth: 32_u  Range~[0, 4294967295]  Type: firmware */
    /* [0]:long, [1]:short, manual exposure index, Q4 format */
    {2560000, 2560000},
    /* @m_pExpIndexThre  Size: 1x4  BitWidth: 32_u  Range~[0, 2147483647]  Type: firmware */
    /* exp index threshold for calculate low luma weight, mid luma weight and high luma weight */
    {40000, 80000, 1280000, 2560000},
    /* @m_pLumaBlockWeight  Size: 4x3  BitWidth: 32_u  Range~[0, 128]  Type: firmware */
    /* [0~3][i] different exp index, [i][0]:low luma weight, [i][1]:mid luma weight, [i][2]:high luma weight */
    {
        {16, 16, 16},
        {16, 16, 16},
        {16, 16, 16},
        {16, 16, 16}
    },
    /* @m_pLumaBlockThre  Size: 1x4  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* luma threshold for calculating each block's weight, one block's luma is interpolated between low/mid/high luma weight */
    {8, 16, 208, 240},
    /* @m_pLuma7ZoneWeight  Size: 1x7  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* [0]:12x16 average luma; [1~5] 6 face roi luma */
    {16, 0, 0, 0, 0, 0, 0},
    /* @m_pTargetRange  Size: 1x2  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* Limit: m_pTargetRange[0] <= m_pTargetRange[1]. [0]:lower limit of target luma, [1]:upper limit of target luma */
    {16, 48},
    /* @m_pTargetDeclineRatio  Size: 1x16  BitWidth: 32_u  Range~[0, 128]  Type: firmware */
    /* the ratio of target luma declines along with gain */
    {128, 128, 128, 128, 128, 128, 122, 116, 110, 104, 98, 92, 86, 80, 74, 68},
    /* @m_pMeteringMatrix  Size: 12x16  BitWidth: 32_u  Range~[0, 128]  Type: firmware */
    /* metering matrix */
    {
        {1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1},
        {1, 1, 2, 2, 3, 3, 3, 4, 4, 3, 3, 3, 2, 2, 1, 1},
        {1, 2, 2, 3, 3, 4, 4, 5, 5, 4, 4, 3, 3, 2, 2, 1},
        {1, 2, 2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 3, 2, 2, 1},
        {1, 2, 3, 3, 4, 5, 6, 6, 6, 6, 5, 4, 3, 3, 2, 1},
        {2, 2, 3, 4, 5, 5, 6, 6, 6, 6, 5, 5, 4, 3, 2, 2},
        {2, 2, 3, 4, 5, 5, 6, 6, 6, 6, 5, 5, 4, 3, 2, 2},
        {1, 2, 3, 3, 4, 5, 6, 6, 6, 6, 5, 4, 3, 3, 2, 1},
        {1, 2, 2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 3, 2, 2, 1},
        {1, 2, 2, 3, 3, 4, 4, 5, 5, 4, 4, 3, 3, 2, 2, 1},
        {1, 1, 2, 2, 3, 3, 3, 4, 4, 3, 3, 3, 2, 2, 1, 1},
        {1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1}
    },
    /* @m_nDualTargetBlendWeight  Size: 1x1  BitWidth: 32_u  Range~[0, 16]  Type: firmware */
    /* previous target luma and current target luma blend weight */
    8,
    /* @m_pAjustSplitFrameNum  Size: 1x2  BitWidth: 32_u  Range~[1, 255]  Type: firmware */
    /* the number of frames to be split for each adjustment */
    {1, 1},
    /* @m_pSingleStepAdjustLumaThr  Size: 1x2  BitWidth: 32_u  Range~[1, 255]  Type: firmware */
    /* single adjust luma = max((target - mean)/AjustSplitFrameNum, SingleStepAdjustLumaThr) */
    {255, 255},
    /* @m_pFaceAjustSplitFrameNum  Size: 1x2  BitWidth: 32_u  Range~[1, 255]  Type: firmware */
    /* the number of frames to be split for each adjustment in face mode */
    {12, 12},
    /* @m_pFaceSingleStepAdjustLumaThr  Size: 1x2  BitWidth: 32_u  Range~[1, 255]  Type: firmware */
    /* single adjust luma = max((target - mean)/AjustSplitFrameNum, SingleStepAdjustLumaThr) in face mode */
    {2, 2},
    /* @m_pFastStep  Size: 1x2  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* fast step */
    {224, 224},
    /* @m_pFastStepRangePer  Size: 1x2  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* when the distance between the current luma and target luma is greater than (m_nFastStepRangePer*target luma), use fast step */
    {40, 40},
    /* @m_pFastStepMinRange  Size: 1x2  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* min fast step range */
    {12, 12},
    /* @m_pSlowStep  Size: 1x2  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* slow step */
    {160, 160},
    /* @m_pSlowStepRangePer  Size: 1x2  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* when the distance between the current luma and target luma is between (m_nFastStepRangePer*target luma,m_nSlowStepRangePer*target luma), use slow step */
    {20, 20},
    /* @m_pSlowStepMinRange  Size: 1x2  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* min slow step range */
    {5, 5},
    /* @m_pFineStep  Size: 1x2  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* fine step */
    {128, 128},
    /* @m_pMaxFastRatio  Size: 1x2  BitWidth: 32_u  Range~[256, 4096]  Type: firmware */
    /* max fast step ratio, Q8 format */
    {640, 640},
    /* @m_pMaxSlowRatio  Size: 1x2  BitWidth: 32_u  Range~[256, 4096]  Type: firmware */
    /* max slow step ratio, Q8 format */
    {512, 512},
    /* @m_pMinFineRatio  Size: 1x2  BitWidth: 32_u  Range~[256, 4096]  Type: firmware */
    /* min fine step ratio, Q8 format */
    {256, 256},
    /* @m_pMaxFineRatio  Size: 1x2  BitWidth: 32_u  Range~[256, 4096]  Type: firmware */
    /* max fine step ratio, Q8 format */
    {320, 320},
    /* @m_bLumaPredict  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - no luma correction when calculating drc gain, 1 - do luma correction when calculating drc gain */
    1,
    /* @m_nDarkRefBin  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* the dark reference bin */
    4,
    /* @m_nDarkPerThrL  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* dark percentage threshold low */
    4,
    /* @m_nDarkPerThrH  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* dark percentage threshold high */
    12,
    /* @m_nDarkTarget  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* the expcted target of dark area */
    8,
    /* @m_nMaxDRCGain  Size: 1x1  BitWidth: 32_u  Range~[16, 256]  Type: firmware */
    /* the max drc gain, Q4 format */
    48,
    /* @m_nMaxDRCGainDark  Size: 1x1  BitWidth: 32_u  Range~[16, 64]  Type: firmware */
    /* the max drc dark gain, Q4 format */
    48,
    /* @m_bQuickResponseEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0: normal speed ae , 1: quick response ae */
    0,
    /* @m_nCalibExposureIndex  Size: 1x1  BitWidth: 32_u  Range~[0, 4294967295]  Type: firmware */
    /* exposure index of calibrated scene */
    73515,
    /* @m_nCalibSceneLuma  Size: 1x1  BitWidth: 32_u  Range~[0, 65535]  Type: firmware */
    /* calibrate scene luminance, Q8 format */
    19350,
    /* @m_nCalibSceneLux  Size: 1x1  BitWidth: 32_u  Range~[0, 4294967295]  Type: firmware */
    /* calibrate scene lux */
    800
},

//CAFFilter
{
    /* @m_nAFMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - SAF, 1 - CAF */
    1,
    /* @m_bHybridAFEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - disable, 1 - enable. 0:disable hybrid AF with PD information, 1:enable hybrid AF with PD information */
    1,
    /* @m_bAFTrigger  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* auto focus trigger */
    1,
    /* @m_bMotorManualTrigger  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* manual position trigger */
    0,
    /* @m_nManualMotorPosition  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* manual motor position */
    290,
    /* @m_nMinMotorPosition  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* the actual min motor position that the motor starts to move */
    290,
    /* @m_nMaxMotorPosition  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* the acutal max motor position that the motor stops to move */
    710,
    /* @m_nFirstStepDirectionJudgeRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* for first step direction judgement */
    70,
    /* @m_bPreMoveMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* according to fisrt step direction judge ratio and Initial position, decide whether to start moving from the min or max motor position. Enum: 0 - start_from_current_position , 1 - pre_move_to_dedicated_start_position */
    0,
    /* @m_bPreMoveToInfMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* whether to force movement from the min motor position. Enum: 0 - non_pre_move_to_min_position, 1 - pre_move_to_min_position */
    0,
    /* @m_bStartFromTrueCurrent  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* if Initial position is closer to max motor position, decide whether to start from nearest coarse step position or true current.Enum: 0 - start_from_nearest_coarse_step_position, 1 - start_from_true_current_position */
    1,
    /* @m_nBackTimeRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* big step skip frame control */
    1,
    /* @m_nBackTimeDivisor  Size: 1x1  BitWidth: 32_u  Range~[1, 1000]  Type: firmware */
    /* skip frame control for first movement to predetermined position */
    9,
    /* @m_nPreMoveTimeRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* pre move step skip frame control */
    1,
    /* @m_nFrameRate  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* frame rate */
    30,
    /* @m_nMotorResponseTime  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* motor response time in ms */
    30,
    /* @m_nMaxSkipFrame  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* maximum skipped frame number for AF speed control */
    8,
    /* @m_nSoftwareMotorCtrlMode  Size: 1x1  BitWidth: 32_u  Range~[0, 2]  Type: firmware */
    /* the way of reaching the target position. Enum: 0 - phase_software_moving_control, 1 - fixed_step_software_moving_control, 2 - disable_software_moving_control */
    2,
    /* @m_nMinSafePosition  Size: 1x1  BitWidth: 32_u  Range~[0, 2048]  Type: firmware */
    /* min safe position for software motor control, when move to infinity */
    0,
    /* @m_nMinStepRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 2048]  Type: firmware */
    /* step number of max safe step for software motor control, when move to infinity */
    1,
    /* @m_nMaxSafeStep  Size: 1x1  BitWidth: 32_u  Range~[0, 2048]  Type: firmware */
    /* max safe step for software motor control, when move to infinity */
    28,
    /* @m_nMinSafePositionMacro  Size: 1x1  BitWidth: 32_u  Range~[0, 2048]  Type: firmware */
    /* min safe position for software motor control, when move to macro */
    1024,
    /* @m_nMinStepRatioMacro  Size: 1x1  BitWidth: 32_u  Range~[0, 2048]  Type: firmware */
    /* step number of max safe step for software motor control, when move to macro */
    1,
    /* @m_nMaxSafeStepMacro  Size: 1x1  BitWidth: 32_u  Range~[0, 2048]  Type: firmware */
    /* max safe step for software motor control, when move to macro */
    28,
    /* @m_nMinMacroReverseStepNum  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* minimum required step number when moving from macro and FV decrease detected */
    1,
    /* @m_nMinReverseStepNum  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* minimum required step number when moving from inf and FV decrease detected */
    1,
    /* @m_nFineStepSearchNum  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* fine step search number,typical value = 2*m_nCoarseStep/m_nFineStep - 1 */
    2,
    /* @m_bAdaptiveStep  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - fixed_step, 1 - adaptive_step */
    0,
    /* @m_nCoarseStep  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* coarse step */
    28,
    /* @m_nFineStep  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* fine step */
    14,
    /* @m_nVCMStep1Ratio  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* step 1 ratio for adaptive step mode */
    8,
    /* @m_nVCMStep2Ratio  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* step 2 ratio for adaptive step mode */
    8,
    /* @m_nVCMCoarseStep1  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* coarse step in small position area for adaptive step mode */
    2,
    /* @m_nVCMCoarseStep2  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* coarse step in large position area for adaptive step mode */
    2,
    /* @m_nVCMFineStep1  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* fine step in small position area for adaptive step mode */
    1,
    /* @m_nVCMFineStep2  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* fine step in large position area for adaptive step mode */
    1,
    /* @m_nFailMotorPositionOption  Size: 1x1  BitWidth: 32_u  Range~[0, 5]  Type: firmware */
    /*  motor stop position choice when AF fail, when auto select, hyperfocal postion should be set correctly. Enum: 0 - auto_select, 1 - sharpest_position, 2 - infinity_position, 3 - hyperfocal_position, 4 - macro_position, 5 - current_position */
    0,
    /* @m_nHyperFocalMotorPosition  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* hyperfocal position */
    325,
    /* @m_pFVDropPercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* FV drop percentage for direction detection */
    {
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90}
    },
    /* @m_pCurrentStartFVDropPercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* FV drop percentage for direction detection, if start from current position */
    {
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90}
    },
    /* @m_pFVFailPercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* FV change percentage for failure judgement */
    {
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93}
    },
    /* @m_pCurrentStartFVFailPercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* FV change percentage for failure judgement, if start from current position */
    {
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93},
        {93, 93, 93, 93, 93, 93}
    },
    /* @m_pLastStepChangePercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* FV change percentage for failure judgement, for beyond macro detection */
    {
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75},
        {75, 75, 75, 75, 75, 75}
    },
    /* @m_pWindowWeightMatrix  Size: 5x5  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* fv window weight matrix */
    {
        {1, 2, 3, 2, 1},
        {2, 4, 6, 4, 2},
        {3, 6, 9, 6, 3},
        {2, 4, 6, 4, 2},
        {1, 2, 3, 2, 1}
    },
    /* @m_bPDReverseDirectionFlag  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* 0 - keep step direction calculated by PD shift, 1 - reverse step direction calculated by PD shift */
    0,
    /* @m_nPDDirectConfThrRatio  Size: 1x1  BitWidth: 32_u  Range~[100, 1000]  Type: firmware */
    /* the ratio of pd confidence threshold that pd step will be directly taken out */
    150,
    /* @m_nPDTryStepRatio  Size: 1x1  BitWidth: 32_u  Range~[100, 1000]  Type: firmware */
    /* the ratio relative to m_nCoarseStep.A stride is attempted first before moving the step calculated by PD shift when m_nHybrideMode equals 1 */
    150,
    /* @m_nPDCoarseStep  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* pd coarse step */
    14,
    /* @m_nPDFineStep  Size: 1x1  BitWidth: 32_u  Range~[0, 1024]  Type: firmware */
    /* pd fine step */
    7,
    /* @m_nPDStepDiscountRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* discount ratio of step calculated by pd shift */
    70,
    /* @m_pPDConfThr  Size: 1x12  BitWidth: 32_u  Range~[0, 512]  Type: firmware */
    /* PD confidence threshold for PD information use or not */
    {10, 20, 30, 40, 60, 80, 100, 120, 120, 120, 120, 120},
    /* @m_pPDFVIncreaseRatio  Size: 1x6  BitWidth: 32_u  Range~[0, 512]  Type: firmware */
    /* FV value increase ratio for hybrid AF direction judgement */
    {102, 102, 102, 102, 102, 102},
    /* @m_pPDFVDropPercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* FV drop percentage for direction detection, for hybrid AF */
    {
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95},
        {95, 95, 95, 95, 95, 95}
    },
    {
        /* @m_pPDShiftPositionLUT_0_0  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [0,0] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-603, 0, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 
             603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603, 603}
        },
        /* @m_pPDShiftPositionLUT_0_1  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [0,1] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-455, 0, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 
             455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455, 455}
        },
        /* @m_pPDShiftPositionLUT_0_2  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [0,2] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-433, 0, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 
             433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433, 433}
        },
        /* @m_pPDShiftPositionLUT_0_3  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [0,3] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-444, 0, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 
             444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444}
        },
        /* @m_pPDShiftPositionLUT_0_4  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [0,4] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-586, 0, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 
             586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586, 586}
        },
        /* @m_pPDShiftPositionLUT_1_0  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [1,0] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-554, 0, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 
             554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554, 554}
        },
        /* @m_pPDShiftPositionLUT_1_1  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [1,1] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-439, 0, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 
             439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439, 439}
        },
        /* @m_pPDShiftPositionLUT_1_2  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [1,2] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-427, 0, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 
             427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427, 427}
        },
        /* @m_pPDShiftPositionLUT_1_3  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [1,3] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-444, 0, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 
             444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444, 444}
        },
        /* @m_pPDShiftPositionLUT_1_4  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [1,4] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-518, 0, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 
             518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518, 518}
        },
        /* @m_pPDShiftPositionLUT_2_0  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [2,0] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-558, 0, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 
             558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558, 558}
        },
        /* @m_pPDShiftPositionLUT_2_1  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [2,1] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-456, 0, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 
             456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456}
        },
        /* @m_pPDShiftPositionLUT_2_2  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [2,2] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-425, 0, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 
             425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425, 425}
        },
        /* @m_pPDShiftPositionLUT_2_3  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [2,3] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-443, 0, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 
             443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443, 443}
        },
        /* @m_pPDShiftPositionLUT_2_4  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [2,4] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-530, 0, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 
             530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530, 530}
        },
        /* @m_pPDShiftPositionLUT_3_0  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [3,0] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-556, 0, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 
             556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 556}
        },
        /* @m_pPDShiftPositionLUT_3_1  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [3,1] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-446, 0, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 
             446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446, 446}
        },
        /* @m_pPDShiftPositionLUT_3_2  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [3,2] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-411, 0, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 
             411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411, 411}
        },
        /* @m_pPDShiftPositionLUT_3_3  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [3,3] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-448, 0, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 
             448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448}
        },
        /* @m_pPDShiftPositionLUT_3_4  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [3,4] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-525, 0, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 
             525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525, 525}
        },
        /* @m_pPDShiftPositionLUT_4_0  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [4,0] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-560, 0, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 
             560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560}
        },
        /* @m_pPDShiftPositionLUT_4_1  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [4,1] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-452, 0, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 
             452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452}
        },
        /* @m_pPDShiftPositionLUT_4_2  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [4,2] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-430, 0, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 
             430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430, 430}
        },
        /* @m_pPDShiftPositionLUT_4_3  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [4,3] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-434, 0, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 
             434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434, 434}
        },
        /* @m_pPDShiftPositionLUT_4_4  Size: 2x31  BitWidth: 32_s  Range~[-32768, 32767]  Type: firmware */
        /* PD shift/step look up table for AF window position [4,4] */
        {
            {-512, 0, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 
             512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512},
            {-538, 0, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 
             538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538, 538}
        },
    },
    /* @m_bCAFForce  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* interrupt the processing of caf and trigger a single focus */
    1,
    /* @m_bCAFHold  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* af holds the current status */
    0,
    /* @m_nCAFHoldPDShiftThr  Size: 1x1  BitWidth: 32_u  Range~[0, 512]  Type: firmware */
    /* Limit: m_nPDShiftStableThr <= m_nPDShiftChangeThr. the pd shift threshold to determine whether the scene is not changed in CAF */
    35,
    /* @m_nCAFHoldPDConfThr  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* the pd confidence threshold to determine whether the scene is not changed in CAF */
    80,
    /* @m_nPreFocusMode  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - disable, 1 - semi_tracking. pre-focus on scene changes, only valid when m_bHybridAFEnable equals 1 */
    0,
    /* @m_nPFPDStepDiscountRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* discount ratio of step in pre-focus mode calculated by pd shift in CAF */
    80,
    /* @m_nLumaCalcOpt  Size: 1x1  BitWidth: 32_u  Range~[0, 2]  Type: firmware */
    /* Enum: 0 - 3_channels_separated, 1 - rgb_max, 2 - weighted_average_y */
    0,
    /* @m_nFlatSceneVarThr  Size: 1x1  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* the threshold of variance of the thumbnail to determine whether the scene is flat in CAF */
    4,
    /* @m_nFlatSceneLumaThr  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* the threshold of luma of the thumbnail to determine whether the scene is flat in CAF */
    4,
    /* @m_bReFocusEnable  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - disable, 1 - enable.  */
    1,
    /* @m_pRefocusLumaSADThr  Size: 1x12  BitWidth: 32_u  Range~[0, 19125]  Type: firmware */
    /* the luma sad threshold to decide whether to force trigger af in the saf process triggered by CAF */
    {400, 500, 600, 700, 800, 900, 1000, 1000, 1000, 1000, 1000, 1000},
    /* @m_bStableJudgeOpt  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - fv_luma_one_met, 1 - fv_luma_all_met */
    1,
    /* @m_nRefStableFrameNum  Size: 1x1  BitWidth: 32_u  Range~[0, 14]  Type: firmware */
    /* the number of frame to determine whether the scene is stable in reference state in CAF */
    5,
    /* @m_nDetStableFrameNum  Size: 1x1  BitWidth: 32_u  Range~[0, 14]  Type: firmware */
    /* the number of frame to determine whether the scene is stable in detect state in CAF */
    8,
    /* @m_pStableExpIndexPercentage  Size: 1x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* the tolerance of exposure index to determine whether the scene is stable in CAF */
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    /* @m_pStableFVSADPercentage  Size: 1x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* the fv sad threshold to determine whether the scene is stable in CAF */
    {15, 16, 17, 18, 19, 20, 20, 20, 20, 20, 20, 20},
    /* @m_pStableLumaSADThr  Size: 1x12  BitWidth: 32_u  Range~[0, 19125]  Type: firmware */
    /* the luma sad threshold to determine whether the scene is stable in CAF */
    {300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300},
    /* @m_bChangeJudgeOpt  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - fv_luma_one_met, 1 - fv_luma_all_met */
    0,
    /* @m_nChangeFrameNum  Size: 1x1  BitWidth: 32_u  Range~[0, 15]  Type: firmware */
    /* the number of frame to determine whether the scene is changed in CAF */
    5,
    /* @m_nChangeStatAreaPercentage  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* the afm stat window area change percentage to determine whether the scene is changed in CAF, only valid in face mode */
    40,
    /* @m_nChangeStatCenterPercentage  Size: 1x1  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* the afm stat window center change percentage to determine whether the scene is changed in CAF, only valid in face mode */
    20,
    /* @m_pChangeExpIndexPercentage  Size: 1x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* the exposure index change percentage to determine whether the scene is changed in CAF */
    {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},
    /* @m_pChangeFVSADPercentage  Size: 1x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* the fv change percentage to determine whether the scene is changed in CAF */
    {20, 21, 22, 23, 24, 25, 25, 25, 25, 25, 25, 25},
    /* @m_pChangeLumaSADThr  Size: 1x12  BitWidth: 32_u  Range~[0, 19125]  Type: firmware */
    /* the luma change percentage to determine whether the scene is changed in CAF */
    {800, 800, 800, 800, 1000, 1200, 1600, 1600, 1600, 1600, 1600, 1600},
    /* @m_pChangePDShiftThr  Size: 1x12  BitWidth: 32_u  Range~[0, 512]  Type: firmware */
    /* the pd shift threshold to determine whether the scene is changed in CAF */
    {60, 60, 70, 70, 80, 80, 80, 80, 80, 80, 80, 80},
    /* @m_bForeGroundTrackInCoarse  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - disable, 1 - enable. disable/enable foreground track in coarse step.  */
    0,
    /* @m_bForeGroundTrackInFine  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enum: 0 - disable, 1 - enable. disable/enable foreground track in fine step.  */
    1,
    /* @m_nForeGroundTrackWindow  Size: 1x1  BitWidth: 32_u  Range~[3, 5]  Type: firmware */
    /* Enum: 3 - 3x3_tracking, 4 - 4x4_tracking, 5 - 5x5_tracking. */
    4,
    /* @m_pFVBlkDropPercentage  Size: 12x6  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* block fv drop percentage for direction detection, used in fore ground trach function */
    {
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90},
        {90, 90, 90, 90, 90, 90}
    },
    /* @m_pFVBlkIncreasePercentage  Size: 12x6  BitWidth: 32_u  Range~[100, 200]  Type: firmware */
    /* block fv rise percentage for direction detection, used in fore ground trach function */
    {
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107},
        {107, 107, 107, 107, 107, 107}
    },
    /* @m_pFineStepStartPosSelectConf  Size: 1x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* before fine step start, the confidence level of the start position obtained by using the block fv, used in fore ground track function */
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    /* @m_pFineStepEndPosSelectConf  Size: 1x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* after fine step ends, the confidence level of the end position obtained by using the block fv, used in fore ground track function */
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}
},

//CAWBFilter
{
    /* @m_bGrayWorldEn  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* gray world mode enable */
    0,
    /* @m_pRoiBound  Size: 16x4  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* ROI boundary : x_high x_low y_high y_low */
    {
        {532, 371, 669, 438},
        {362, 307, 1007, 669},
        {469, 362, 1007, 669},
        {583, 407, 438, 323},
        {433, 348, 1373, 1007},
        {433, 348, 1687, 1373},
        {433, 348, 2726, 1687},
        {348, 265, 1800, 1373},
        {514, 433, 1373, 1007},
        {348, 265, 1373, 1007},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    /* @m_pRoiBoundG  Size: 1x4  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* ROI boundary of G: x_high x_low y_high y_low */
    {265, 145, 1687, 733},
    /* @m_pRoiLumLutHigh  Size: 16x11  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* high threshold for lum of each exposure level */
    {
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {24, 24, 24, 28, 200, 200, 200, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
        {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240}
    },
    /* @m_pRoiLumLutLow  Size: 16x11  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* low threshold for lum of each exposure level */
    {
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
    },
    /* @m_pRoiLumLutHighG  Size: 1x11  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* high threshold for lum of each exposure level in G ROI */
    {240, 240, 240, 240, 240, 240, 240, 240, 240, 240, 240},
    /* @m_pRoiLumLutLowG  Size: 1x11  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* low threshold for lum of each exposure level in G ROI */
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    /* @m_pRoiEn  Size: 1x16  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* enable of each ROI */
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    /* @m_pRoiWeightLut  Size: 16x11  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* weight LUT of each ROI */
    {
        {0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2},
        {0, 0, 0, 0, 16, 16, 16, 16, 16, 16, 16},
        {0, 0, 0, 0, 16, 16, 16, 16, 16, 16, 16},
        {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
        {255, 255, 255, 255, 255, 192, 128, 128, 128, 128, 128},
        {0, 0, 128, 255, 255, 192, 128, 128, 128, 128, 128},
        {255, 128, 64, 64, 64, 128, 128, 128, 128, 128, 32},
        {0, 0, 0, 0, 0, 64, 64, 64, 64, 64, 64},
        {0, 0, 0, 0, 0, 0, 64, 128, 128, 128, 128},
        {0, 0, 0, 0, 0, 64, 64, 64, 64, 64, 64},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pRoiLumThre  Size: 1x11  BitWidth: 32_u  Range~[0, 2147483648]  Type: firmware */
    /* lum level threshold (lux) */
    {60000, 30000, 20000, 10000, 5000, 1600, 1000, 200, 90, 32, 20},
    /* @m_bRoiLimitManual  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* manual mode for ROI Limit */
    0,
    /* @m_nRoiCtHigh  Size: 1x1  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature high boundary */
    2000,
    /* @m_nRoiCtLow  Size: 1x1  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature low boundary */
    600,
    /* @m_nRoiXMax  Size: 1x1  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature x max boundary */
    440,
    /* @m_nRoiXMin  Size: 1x1  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature x min boundary */
    380,
    /* @m_pRoiCtHighAuto  Size: 1x11  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature high boundary in different lum */
    {1500, 1600, 1600, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000},
    /* @m_pRoiCtLowAuto  Size: 1x11  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature low boundary in different lum */
    {1300, 1300, 1000, 800, 600, 600, 600, 600, 600, 600, 600},
    /* @m_pRoiXMaxAuto  Size: 1x11  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature x max boundary in different lum */
    {413, 413, 413, 440, 440, 440, 440, 440, 440, 440, 440},
    /* @m_pRoiXMinAuto  Size: 1x11  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature x min boundary in different lum */
    {382, 382, 350, 320, 289, 289, 289, 289, 289, 289, 289},
    /* @m_pAWBGainLimit  Size: 1x4  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature limit of AWB Gain [low, high, x_min, x_max] */
    {0, 4095, 0, 4095},
    /* @m_nAWBCTShift  Size: 1x1  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* awb ct shift range for low ct */
    0,
    /* @m_pAWBCTShiftThr  Size: 1x2  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature limit for ct shift */
    {1000, 1200},
    /* @m_pLowCtThr  Size: 1x8  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* color temperature threshold for low ct protection */
    {669, 1007, 1050, 1100, 1150, 1200, 1400, 1600},
    /* @m_pLowCtNumThr  Size: 1x2  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* ratio threshold of low ct blocks to enable low ct protection, in permillage */
    {100, 500},
    /* @m_pLowCtProtectRatio  Size: 1x7  BitWidth: 32_u  Range~[0, 256]  Type: firmware */
    /* 0~256, 256 means no protection */
    {64, 64, 32, 16, 8, 8, 8},
    /* @m_sRoiBoundDayLight  Size: 1x4  BitWidth: 32_u  Range~[0, 4095]  Type: firmware */
    /* ROI boundary of Day Light: x_high x_low y_high y_low */
    {4095, 0, 2700, 1200},
    /* @m_pDayLightNumThr  Size: 1x2  BitWidth: 32_u  Range~[0, 1000]  Type: firmware */
    /* ratio threshold of day light blocks to enable low ct protection, in permillage */
    {100, 1000},
    /* @m_bGreenShiftEn  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* green shift enable */
    1,
    /* @m_pGreenLumThre  Size: 1x11  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* Green Shift Weight */
    {0, 0, 0, 0, 0, 8, 16, 16, 8, 0, 0},
    /* @m_nGreenShiftMax  Size: 1x1  BitWidth: 32_u  Range~[0, 32]  Type: firmware */
    /* green shift max weight */
    32,
    /* @m_pGreenNumThre  Size: 1x2  BitWidth: 32_u  Range~[0, 768]  Type: firmware */
    /* green number threshold */
    {256, 50},
    /* @m_pOutdoorGain  Size: 1x3  BitWidth: 32_u  Range~[0, 65536]  Type: firmware */
    /* outdoor gain */
    {8192, 4096, 5398},
    /* @m_nValidNum  Size: 1x1  BitWidth: 32_u  Range~[0, 768]  Type: firmware */
    /* valid threshold for ROI Sum */
    4,
    /* @m_bWeightOnSum  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* weight on sum or gain */
    1,
    /* @m_nLog2CwtOverA  Size: 1x1  BitWidth: 32_u  Range~[0, 8]  Type: firmware */
    /* log2(CWT_weight/A_weight) */
    3
},
