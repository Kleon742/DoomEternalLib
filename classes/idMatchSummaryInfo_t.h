struct idMatchSummaryInfo_t
{
    gameTeam_t winningTeam; // Offset: 0x0

    gameTeam_t localTeam; // Offset: 0x4

    bool localWon; // Offset: 0x8

    bool ranked; // Offset: 0x9

    idArray < gameTeam_t , 5 > roundWinner; // Offset: 0xC

    idScoreInfo_t matchScore; // Offset: 0x20

    idArray < idScoreInfo_t , 5 > rounds; // Offset: 0x28

    int seasonXpEarned; // Offset: 0x50

    int doomLevelXpEarned; // Offset: 0x54

    int damageDealt; // Offset: 0x58

}; // Size: 0x5C
