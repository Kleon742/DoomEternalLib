struct rewardData_t
{
    // How many extra lives are required to unlock this reward.
    int livesNeeded; // Offset: 0x0

    // Whether this reward is actually rewarded by a separate milestone. The reward needs to be populated here so the UI can show which rewards will be given.
    bool awardedByMilestone; // Offset: 0x4

    // The offline warehouse container to reward.
    idDeclWarehouseOfflineContainer* reward; // Offset: 0x8

}; // Size: 0x10
