
//CNightModeFilter
{
    /* @m_nWrapEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Wrap Enable 0:Disable 1:Enable */
    1,
    /* @m_n4x4BlockEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* 4X4 Block Enable 0:Disable 1:Enable */
    1,
    /* @m_nFalseMatchEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* False Match Enable 0:Disable 1:Enable */
    0,
    /* @m_nLastRansacEnable  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Last Global Ransac 0:Disable 1:Enable */
    1,
    /* @m_nKeyPointMode  Size: 1x1  BitWidth: 1_u  Range~[0, 1]  Type: firmware */
    /* Key Point Compare Number 0:3x3  1:1x1 */
    0,
    /* @m_nBlockOverlap  Size: 1x1  BitWidth: 10_u  Range~[0, 1023]  Type: firmware */
    /* Block Overlap */
    64,
    /* @m_nKeyPointPercent  Size: 1x9  BitWidth: 7_u  Range~[0, 100]  Type: firmware */
    /* Key Point Percent of Value */
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    /* @m_nKeyPointThreshold  Size: 1x9  BitWidth: 10_u  Range~[0, 1023]  Type: firmware */
    /* Key Point Percent of Threshold */
    {30, 30, 30, 30, 30, 40, 50, 60, 60},
    /* @m_nKeyPointDistanceThreshold  Size: 1x1  BitWidth: 8_u  Range~[0, 255]  Type: firmware */
    /* Key Point Distance of Threshold, Max suppression, two key point need bigger than distance */
    7,
    /* @m_nBlockMaxDesCount  Size: 1x1  BitWidth: 8_u  Range~[0, 128]  Type: firmware */
    /* Max Descriptor Count of Single Block (4x4) */
    64,
    /* @m_nMaxMatchNumber  Size: 1x1  BitWidth: 9_u  Range~[0, 256]  Type: firmware */
    /* Max Match Number of Two Descriptor, Smaller than Number is good match */
    40,
    /* @m_nInnerPointThreshold  Size: 1x1  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* Inner Point Threshold, Smaller than Threshold is Inner Point */
    9,
    /* @m_nFalseMatchThreshold  Size: 1x9  BitWidth: 16_u  Range~[0, 65535]  Type: firmware */
    /* avg_ydiff * FalseMatchThr / 64, Bigger than Threshold is false match */
    {512, 512, 512, 256, 128, 128, 64, 64, 64}
},
