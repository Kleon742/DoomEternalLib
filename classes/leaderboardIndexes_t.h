struct leaderboardIndexes_t
{
    // Horde
    leaderboardIndex_t hordeEasyIndex; // Offset: 0x0

    leaderboardIndex_t hordeMediumIndex; // Offset: 0x48

    leaderboardIndex_t hordeHardIndex; // Offset: 0x90

    leaderboardIndex_t hordeNightmareIndex; // Offset: 0xD8

    // Battlemode
    leaderboardIndex_t battlemodeSlayerIndex; // Offset: 0x120

    leaderboardIndex_t battlemodeDemonIndex; // Offset: 0x168

    // Battlemode rewards
    idList < leaderboardRewardsData_t , TAG_IDLIST , false > slayerCurrentLeaderboardRewards; // Offset: 0x1B0

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > slayerPreviousLeaderboardRewards; // Offset: 0x1C8

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > demonCurrentLeaderboardRewards; // Offset: 0x1E0

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > demonPreviousLeaderboardRewards; // Offset: 0x1F8

    // horde rewards
    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordeRewardsEasy; // Offset: 0x210

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordePreviousRewardsEasy; // Offset: 0x228

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordeRewardsMedium; // Offset: 0x240

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordePreviousRewardsMedium; // Offset: 0x258

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordeRewardsHard; // Offset: 0x270

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordePreviousRewardsHard; // Offset: 0x288

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordeRewardsNightmare; // Offset: 0x2A0

    idList < leaderboardRewardsData_t , TAG_IDLIST , false > hordePreviousRewardsNightmare; // Offset: 0x2B8

}; // Size: 0x2D0
