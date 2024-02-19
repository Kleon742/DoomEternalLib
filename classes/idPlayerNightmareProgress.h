struct idPlayerNightmareProgress : idPlayerLeaderboardData
{
    // Progress that can be shared
    idPlayerNightmareProgressShared sharedProgress; // Offset: 0x2D8

    // the furthest it has been in the current game
    bool isBestRun; // Offset: 0x460

    // this is a public death entry
    bool isPublic; // Offset: 0x461

}; // Size: 0x468
