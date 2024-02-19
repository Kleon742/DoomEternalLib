struct idDeclMasterLevelChallengeRewards : idGameDeclTypeInfo
{
    struct standardReward_t
    {
        // difficulty required to give this reward ( will loop through lower difficulties and give rewards as well )
        gameDifficulty_t requiredDifficulty; // Offset: 0x0

        // rewards to give when map is complete
        idList < idDeclWarehouseOfflineContainer * , TAG_IDLIST , false > mapRewards; // Offset: 0x8

    }; // Size: 0x20

    struct mutatorReward_t
    {
        // mutator required to give this reward ( if any )
        eGameMutatorType requiredMutator; // Offset: 0x0

        // rewards to give when map is complete
        idList < idDeclWarehouseOfflineContainer * , TAG_IDLIST , false > mapRewards; // Offset: 0x8

    }; // Size: 0x20

    struct challengeStat_t
    {
        // stat to increment on level completion
        gameStat_t statToIncrement; // Offset: 0x0

        // mutator required to increment stat
        eGameMutatorType requiredMutator; // Offset: 0x4

    }; // Size: 0x8

    struct finalReward_t
    {
        // stats required to be > 0 to give reward
        idList < gameStat_t , TAG_IDLIST , false > requiredStats; // Offset: 0x0

        // reward container for final reward
        idDeclWarehouseOfflineContainer* rewardContainer; // Offset: 0x18

    }; // Size: 0x20

    // final reward for completing master level w/ all challenges
    idDeclMasterLevelChallengeRewards::finalReward_t allChallengesCompleteReward; // Offset: 0x90

    // list of master level rewards by challenge and difficulty
    idList < idDeclMasterLevelChallengeRewards::standardReward_t , TAG_IDLIST , false > standardRewards; // Offset: 0xB0

    // list of master level rewards by challenge and difficulty
    idList < idDeclMasterLevelChallengeRewards::standardReward_t , TAG_IDLIST , false > extraLifeRewards; // Offset: 0xC8

    // list of master level rewards by challenge and difficulty
    idList < idDeclMasterLevelChallengeRewards::mutatorReward_t , TAG_IDLIST , false > mutatorRewards; // Offset: 0xE0

    // stats to increment when map is completed with certain challenges active
    idList < idDeclMasterLevelChallengeRewards::challengeStat_t , TAG_IDLIST , false > mapChallengeStats; // Offset: 0xF8

    // Stat to set when completed on nightmare
    gameStat_t nightmareCompleteStat; // Offset: 0x110

    // Stat to set when completed on nightmare in extra life mode
    gameStat_t extraLifeNightmareCompleteStat; // Offset: 0x114

    // Stat to set when completed on ultra-nightmare
    gameStat_t unmCompleteStat; // Offset: 0x118

}; // Size: 0x120
