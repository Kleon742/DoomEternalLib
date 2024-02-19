struct pvpProgressInfo_t
{
    gameTeam_t team; // Offset: 0x0

    int xpGainOverride; // Offset: 0x4

    battlemodePlayerStreak_t streakPrevious; // Offset: 0x8

    battlemodePlayerStreak_t streakCurrent; // Offset: 0x18

    int streakShift; // Offset: 0x28

    bool hotStreakComplete; // Offset: 0x2C

    int nextRank; // Offset: 0x30

    challengeInfo_t nextRankInfo; // Offset: 0x38

    int nextRankNewProgress; // Offset: 0x1E8

    int demonTickets; // Offset: 0x1EC

    int slayerTickets; // Offset: 0x1F0

}; // Size: 0x1F8
