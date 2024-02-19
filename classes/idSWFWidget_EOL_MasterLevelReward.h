struct idSWFWidget_EOL_MasterLevelReward : idSWFWidget
{
    idSWFWidget_EOL_MasterLevelReward::anon_33 sprites; // Offset: 0x180

    idProxyPtr < idSWFWidget_EOL_MasterLevelReward > proxyPtr; // Offset: 0x330

    idDeferredFuncList deferred; // Offset: 0x338

    idSWFWidget_Seasons_RewardListItem* rewardItem; // Offset: 0x380

    idSWFWidget_Seasons_RewardListDetails* rewardDetails; // Offset: 0x388

    idSWFWidget_EOL_MasterLevelRewardPips* selectionPips; // Offset: 0x390

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x398

    int rewardIndex; // Offset: 0x3B0

    int rewardProgress; // Offset: 0x3B4

    int rewardGoal; // Offset: 0x3B8

    bool rewardLocked; // Offset: 0x3BC

    bool waitingForContainersToOpen; // Offset: 0x3BD

    char* infoFrameName; // Offset: 0x3C0

    bool infoFramePlay; // Offset: 0x3C8

}; // Size: 0x3D0
