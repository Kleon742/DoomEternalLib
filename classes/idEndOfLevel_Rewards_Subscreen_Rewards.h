struct idEndOfLevel_Rewards_Subscreen_Rewards : idEndOfLevel_Rewards_Subscreen
{
    idSWFWidget_Seasons_RewardList* rewardList; // Offset: 0x188

    bool rewardListBuilt; // Offset: 0x190

    bool rewardsLoaded; // Offset: 0x191

    asyncio::idTaskResultPtr < bool , bool > rewardsProgressUpdate; // Offset: 0x198

}; // Size: 0x1A0
