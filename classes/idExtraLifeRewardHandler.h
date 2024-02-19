struct idExtraLifeRewardHandler
{
    // Player life count tracking
    int numLivesDeposited; // Offset: 0x0

    int numLivesAvailable; // Offset: 0x4

    // Reward tracking
    int currentBestUnlockedReward; // Offset: 0x8

    idDeclExtraLifeExchangeRewards* rewardsDecl; // Offset: 0x10

    // Owner (similar to how settings data sources function, this is so I can update the UI on an as-needed basis)
    idHUDMenu_ExtraLifeExchange* owner; // Offset: 0x18

    idProxyPtr < idExtraLifeRewardHandler > proxyPtr; // Offset: 0x20

}; // Size: 0x28
