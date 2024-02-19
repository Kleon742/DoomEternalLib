struct leaderboardIndex_t
{
    int currentVersion; // Offset: 0x0

    int previousVersion; // Offset: 0x4

    idStr statName; // Offset: 0x8

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > previousEndTime; // Offset: 0x38

    idTypestrictTimePoint < typestrictWallClockTimestampUnique > currentEndTime; // Offset: 0x40

}; // Size: 0x48
