
//CFlickerDetFilter
{
    /* @m_bEn  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enable */
    1,
    /* @m_bAutoParamByFps  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enable of Auto set the framerate-related parameters */
    1,
    /* @m_nSkipFrameDet  Size: 1x1  BitWidth: 32_u  Range~[0, 4096]  Type: firmware */
    /* the number of frames to be skipped between each detection */
    0,
    /* @m_nSkipFrameDiff  Size: 1x2  BitWidth: 32_u  Range~[0, 16]  Type: firmware */
    /* the number of frames to be skipped to calculate the frame diff */
    {0, 5},
    /* @m_nScaleTapNum  Size: 1x1  BitWidth: 32_u  Range~[0, 64]  Type: firmware */
    /* the number of taps in the scale engine */
    8,
    /* @m_nDiffSatThr  Size: 1x1  BitWidth: 32_u  Range~[0, 255]  Type: firmware */
    /* saturate threshold for pixel difference */
    5,
    /* @m_nConnectNumThrRatio  Size: 1x1  BitWidth: 32_u  Range~[0, 16]  Type: firmware */
    /* the ratio of threshold to judge a slope, only valid in auto mode */
    8,
    /* @m_nSwingThr  Size: 1x1  BitWidth: 32_u  Range~[0, 65535]  Type: firmware */
    /* swing threshold beyween the dark band and light band */
    1000,	
    /* @m_bFftEn  Size: 1x1  BitWidth: 32_u  Range~[0, 1]  Type: firmware */
    /* Enable of FFT */
    1,
    /* @m_nFftPeakRatioThr  Size: 1x1  BitWidth: 32_u  Range~[0, 128]  Type: firmware */
    /* the threshold of ratio of FFT Peak */
    75,
    /* @m_nMultiDetLen  Size: 1x1  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* the length of each group of multiple detection */
    16,
    /* @m_nMultiDetThr  Size: 1x1  BitWidth: 32_u  Range~[0, 31]  Type: firmware */
    /* the threshold of each group of multiple detection */
    8,
    /* @m_nManualConnectNumThr  Size: 1x1  BitWidth: 32_u  Range~[0, 63]  Type: firmware */
    /* manual threshold to judge a slope, only valid in manual mode */
    10,
    /* @m_nManualSlopeNumThr  Size: 1x1  BitWidth: 32_u  Range~[0, 15]  Type: firmware */
    /* manual threshold of slope number, only valid in manual mode */
    5,
    /* @m_nManualFftPeakMin  Size: 1x1  BitWidth: 32_u  Range~[0, 15]  Type: firmware */
    /* manual min threshold of FFT Peak */
    2,
    /* @m_nManualFftPeakMax  Size: 1x1  BitWidth: 32_u  Range~[0, 15]  Type: firmware */
    /* manual max threshold of FFT Peak */
    5
},
