struct idEndOfLevel_MasterLevel : idMenuElement
{
    struct completionInfo_t
    {
        idStrId challengeName; // Offset: 0x0

        idMaterial2* challengeIcon; // Offset: 0x8

        idList < int , TAG_IDLIST , false > rewardableDifficulties; // Offset: 0x10

        idList < const idDeclWarehouseOfflineContainer * , TAG_IDLIST , false > earnedContainers; // Offset: 0x28

    }; // Size: 0x40

    idDeferredFuncList deferred; // Offset: 0x100

    idDeclUICustomData_EndOfLevel_MasterLevel* uiData; // Offset: 0x148

    idSWFWidget_EOL_MasterLevelChallenge* challenge; // Offset: 0x150

    idSWFWidget_EOL_MasterLevelProgress* progress; // Offset: 0x158

    idSWFWidget_EOL_MasterLevelReward* reward; // Offset: 0x160

    idDeclMapLoad* mapLoadInfo; // Offset: 0x168

    int difficulty; // Offset: 0x170

    idEndOfLevel_MasterLevel::completionInfo_t completionInfo; // Offset: 0x178

}; // Size: 0x1B8
