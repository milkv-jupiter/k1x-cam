
//ASR_CPP_Firmware_V0.1
{
    /* @m_nRevisionNumber  Size: 1x1  BitWidth: 32_u  Range~[0, 262144]  Type: fw_info */
    /* CPP Firmware revision number */
    7935
},

//CCppTopFirmwareFilter

//C3DNRFirmwareFilter
{
    /* @m_pMax_diff_thr  Size: 5x12  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* m_pMax_diff_thr for max different gain when dynamic sigma gain */
    {
        {62, 69, 75, 82, 88, 95, 101, 255, 255, 255, 255, 255},
        {54, 62, 69, 76, 84, 91, 98, 255, 255, 255, 255, 255},
        {42, 47, 51, 55, 59, 64, 68, 255, 255, 255, 255, 255},
        {32, 36, 39, 42, 45, 48, 51, 54, 57, 60, 64, 67},
        {28, 31, 33, 35, 37, 40, 42, 44, 46, 48, 51, 53}
    },
    /* @m_pSig_gain  Size: 5x12  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* m_pSig_gain for different gain */
    {
        {2, 2, 4, 4, 4, 4, 4, 10, 10, 10, 10, 10},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pAback_alpha  Size: 5x12  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* m_pAback_alpha for different gain */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8},
        {0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 16, 8},
        {0, 0, 0, 0, 0, 0, 0, 24, 24, 16, 16, 16},
        {0, 0, 0, 0, 0, 0, 0, 24, 24, 16, 16, 16}
    },
    /* @m_pCnrSig_y  Size: 5x12  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* m_pCnrSig_y for different gain */
    {
        {40, 40, 40, 40, 40, 50, 50, 50, 50, 50, 50, 50},
        {40, 40, 40, 40, 40, 50, 50, 50, 50, 50, 50, 50},
        {0, 0, 0, 0, 0, 50, 50, 50, 50, 50, 50, 50},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pCnrSig_uv  Size: 5x12  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* m_pCnrSig_uv for different gain */
    {
        {4, 4, 5, 6, 8, 10, 10, 10, 10, 10, 10, 10},
        {4, 4, 5, 6, 8, 8, 8, 8, 8, 8, 8, 8},
        {0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pCnrAback_alpha  Size: 5x12  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* m_pCnrAback_alpha for different gain */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pCnrSig_uv_shift  Size: 5x12  BitWidth: 32_u  Range~[0, 3]  Type: firmware */
    /* m_pCnrSig_uv_shift for different gain */
    {
        {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
        {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pGainIndex  Size: 1x12  BitWidth: 16_u  Range~[0, 32768]  Type: firmware */
    /* gain control points for nr */
    {16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768},
    /* @m_bDynamic_en  Size: 1x5  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_bDynamic_en */
    {1, 0, 0, 0, 0},
    /* @m_bLuma_en  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_bLuma_en */
    1,
    /* @m_pLuma_sig  Size: 17x12  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* m_pLuma_sig */
    {
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15}
    },
    /* @m_bCnrLuma_en  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_bCnrLuma_en */
    1,
    /* @m_pCnrLuma_sig  Size: 17x12  BitWidth: 4_u  Range~[0, 15]  Type: firmware */
    /* m_pCnrLuma_sig */
    {
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
        {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15}
    },
    /* @m_bRadial_en  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_bRadial_en for Radial enable */
    0,
    /* @m_pRadial_ratio  Size: 5x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* m_pRadial_ratio for different gain */
    {
        {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48},
        {0, 16, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32},
        {0, 0, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},
        {0, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6}
    },
    /* @m_bCnrRadial_en  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_bCnrRadial_en for CnrRadial enable */
    0,
    /* @m_pCnrRadial_ratio  Size: 5x12  BitWidth: 32_u  Range~[0, 100]  Type: firmware */
    /* m_pCnrRadial_ratio for different gain */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @eb  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* fd eb */
    1,
    /* @uv_mode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* fd uv_mode */
    0,
    /* @m_ppf_en  Size: 1x5  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_ppf_en */
    {0, 0, 0, 0, 0},
    /* @m_nwp_en  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_nwp_en */
    0,
    /* @m_nwp_th  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* m_nwp_th */
    32,
    /* @m_nnum_wp_min  Size: 1x1  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* m_nnum_wp_min */
    16,
    /* @m_nnum_wp_step  Size: 1x1  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
    /* m_nnum_wp_step */
    5,
    /* @m_nhue_pf_min  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* m_nhue_pf_min */
    145,
    /* @m_nhue_pf_max  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* m_nhue_pf_max */
    175,
    /* @m_nhue_pf_tr_step  Size: 1x1  BitWidth: 3_u  Range~[0, 7]  Type: firmware */
    /* m_nhue_pf_tr_step */
    4,
    /* @m_nuv_wp_gain  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* m_nuv_wp_gain for different gain */
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_nuv_pf_gain  Size: 1x12  BitWidth: 7_u  Range~[0, 127]  Type: firmware */
    /* m_nuv_pf_gain for different gain */
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    /* @m_nGlobalYnrStrength  Size: 1x1  BitWidth: 10_u  Range~[0, 1023]  Type: firmware */
    /* m_nGlobalYnrStrength */
    512,
    /* @m_nGlobalCnrStrength  Size: 1x1  BitWidth: 10_u  Range~[0, 1023]  Type: firmware */
    /* m_nGlobalCnrStrength */
    512,
    /* @m_nTnrEb  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /*  */
    1,
    /* @m_pTnrDAvg  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pTnrWAvg  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
    },
    /* @m_pTnrQWeightAvg  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
        {31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
        {31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
        {31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31},
        {31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31}
    },
    /* @m_pTnrDSad  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pTnrWSad  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
    },
    /* @m_pTnrQWeightSad  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16}
    },
    /* @m_pTnrDuv  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pTnrWuv  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16}
    },
    /* @m_pTnrQWeightUV  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16}
    },
    /* @m_nTnrLumaWeight  Size: 1x12  BitWidth: 5_u  Range~[0, 16]  Type: firmware */
    /*  */
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_pTnrBlockWeight0  Size: 9x3  BitWidth: 7_u  Range~[0, 64]  Type: firmware */
    /*  */
    {
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0}
    },
    /* @m_pTnrBlockWeight1  Size: 9x3  BitWidth: 7_u  Range~[0, 64]  Type: firmware */
    /*  */
    {
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0}
    },
    /* @m_pTnrBlockWeight234  Size: 9x3  BitWidth: 7_u  Range~[0, 64]  Type: firmware */
    /*  */
    {
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0},
        {64, 0, 0}
    },
    /* @m_pTnrLumaBase  Size: 5x12  BitWidth: 6_u  Range~[0, 63]  Type: firmware */
    /*  */
    {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    },
    /* @m_pTnrLuma  Size: 16x12  BitWidth: 6_u  Range~[0, 63]  Type: firmware */
    /*  */
    {
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 8, 8, 8, 12, 12, 12, 12, 12, 12},
        {8, 8, 8, 8, 8, 8, 12, 12, 12, 12, 12, 12},
        {8, 8, 8, 8, 8, 8, 12, 12, 12, 12, 12, 12},
        {8, 8, 8, 8, 8, 8, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 12, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 12, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 12, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 12, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 12, 16, 16, 16, 16, 16, 16},
        {8, 8, 8, 8, 8, 12, 16, 16, 16, 16, 16, 16}
    },
    /* @m_pTnr3dYEb  Size: 5x12  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pTnr3dUVEb  Size: 5x12  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pTnrYStrengthQ6  Size: 5x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /*  */
    {
        {0, 0, 12, 12, 18, 24, 24, 24, 24, 24, 24, 24},
        {0, 0, 12, 12, 18, 24, 24, 24, 24, 24, 24, 24},
        {0, 0, 12, 12, 18, 24, 24, 24, 24, 24, 24, 24},
        {0, 0, 12, 12, 18, 24, 24, 24, 24, 24, 24, 24},
        {0, 0, 12, 12, 18, 24, 24, 24, 24, 24, 24, 24}
    },
    /* @m_pTnrUVStrengthQ6  Size: 5x12  BitWidth: 6_u  Range~[0, 32]  Type: firmware */
    /*  */
    {
        {20, 20, 20, 20, 25, 25, 28, 28, 28, 28, 28, 28},
        {20, 20, 20, 20, 25, 25, 28, 28, 28, 28, 28, 28},
        {20, 20, 20, 20, 25, 25, 28, 28, 28, 28, 28, 28},
        {20, 20, 20, 20, 25, 25, 28, 28, 28, 28, 28, 28},
        {20, 20, 20, 20, 25, 25, 28, 28, 28, 28, 28, 28}
    },
    /* @m_pTnr2dYEb  Size: 5x12  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pTnr2dMappingCurve  Size: 1x17  BitWidth: 9_u  Range~[0, 256]  Type: firmware */
    /*  */
    {0, 128, 144, 160, 176, 192, 208, 224, 256, 256, 256, 256, 256, 256, 256, 256, 
     256},
    /* @m_pStrongSig_gain  Size: 5x12  BitWidth: 9_u  Range~[0, 511]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32},
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_pStrongAback_alpha  Size: 5x12  BitWidth: 5_u  Range~[0, 31]  Type: firmware */
    /*  */
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    /* @m_nClipMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* if clipmode set 1, y output 16~240  uv output 16~235, else ouptut 0~255 */
    0,
    /* @m_bManualMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Manual Mode Enable */
    0,
    /* @m_nCpp_nr_en_Manual  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* m_nCpp_nr_en_Manual for nr enable */
    1,
    /* @m_pMax_diff_thr_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* Manual Mode m_pMax_diff_thr */
    {120, 100, 90, 80, 60},
    /* @m_pSig_gain_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* Manual Mode m_pSig_gain */
    {26, 26, 14, 13, 10},
    /* @m_pAlpha_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* Manual Mode m_pAlpha */
    {0, 1, 1, 1, 1},
    /* @m_pAback_alpha_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* Manual Mode m_pAback_alpha */
    {20, 15, 15, 10, 5},
    /* @m_pCnrSig_y_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* Manual Mode m_pCnrSig_y */
    {256, 256, 192, 96, 96},
    /* @m_pCnrSig_uv_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 511]  Type: firmware */
    /* Manual Mode m_pCnrSig_uv */
    {64, 96, 96, 96, 96},
    /* @m_pCnrAback_alpha_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* Manual Mode m_pCnrAback_alpha */
    {0, 0, 0, 0, 0},
    /* @m_pCnrSig_uv_shift_Manual  Size: 1x5  BitWidth: 32_u  Range~[0, 3]  Type: firmware */
    /* Manual Mode m_pCnrSig_uv_shift_Manual */
    {3, 2, 1, 0, 0},
    /* @m_pSig_gainRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pSig_gainRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pAback_alphaRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pAback_alphaRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pCnrSig_yRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pCnrSig_yRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pCnrSig_uvRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pCnrSig_uvRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pCnrAback_alphaRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pCnrAback_alphaRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pTnrYStrengthQ6Ratio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pTnrYStrengthQ6Ratio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pTnrUVStrengthQ6Ratio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pTnrUVStrengthQ6Ratio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pStrongSig_gainRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pStrongSig_gainRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
    /* @m_pStrongAback_alphaRatio  Size: 1x12  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Night Mode m_pStrongAback_alphaRatio */
    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256}
},

//CNRDecoderFirmwareFilter

//CTNRDecoderFirmwareFilter

//CTNREncoderFirmwareFilter

//CCommandQCmdFirmwareFilter

//CCommandQFirmwareFilter
