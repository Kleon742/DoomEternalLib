struct idSWFWidget_PVPSeries_RankProgress : idSWFWidget
{
    idStr title; // Offset: 0x180

    int numRanks; // Offset: 0x1B0

    int currentRank; // Offset: 0x1B4

    int currentRankProgress; // Offset: 0x1B8

    int currentRankGoal; // Offset: 0x1BC

    bool isDemon; // Offset: 0x1C0

    idSWFWidget_PVPSeries_RankProgress::anon_32 sprites; // Offset: 0x1C8

    idSWFWidget_RankBadge* currentRankBadge; // Offset: 0x2B8

    idArray < idSWFWidget_RankBadge * , 10 > rankBadges; // Offset: 0x2C0

}; // Size: 0x310
