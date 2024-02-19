struct idSWFWidget_EOL_DoomLevelProgressTally : idSWFWidget
{
    pvpProgressInfo_t pvpProgressInfo; // Offset: 0x180

    idSWFWidget_Seasons_XP_Counter* xpCounter; // Offset: 0x378

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x380

    playerBadgeDisplayStyle_t playerBadgeDisplayStyle; // Offset: 0x388

    idSWFWidget_PVPSeries_RankDetails* rankProgress; // Offset: 0x390

    idSWFWidget_RankBadge* rankBadge; // Offset: 0x398

    bool animationEnabled; // Offset: 0x3A0

    bool animateDoomLevelOnly; // Offset: 0x3A1

    idSWFWidget_EOL_DoomLevelProgressTally::anon_38 sprites; // Offset: 0x3A8

    idSWFWidget_Seasons_XP_Counter* hotStreakCounterLeft; // Offset: 0x4C8

    idSWFWidget_Seasons_XP_Counter* hotStreakCounterRight; // Offset: 0x4D0

    idSWFWidget_EOL_DoomLevelProgressTally::anon_39 logicEvents; // Offset: 0x4D8

    idSWFWidget_EOL_DoomLevelProgressTally::anon_40 logicProperties; // Offset: 0x4F8

}; // Size: 0x7B8
