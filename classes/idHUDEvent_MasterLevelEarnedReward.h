struct idHUDEvent_MasterLevelEarnedReward
{
    struct earnedRewardData_t
    {
        idDeclWarehouseOfflineContainer* rewardContainer; // Offset: 0x0

        bool isNewReward; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_MasterLevelEarnedReward::earnedRewardData_t info; // Offset: 0x0

}; // Size: 0x10
