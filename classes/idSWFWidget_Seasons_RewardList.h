struct idSWFWidget_Seasons_RewardList : idSWFWidget
{
    idProxyPtr < idSWFWidget_Seasons_RewardList > proxyPtr; // Offset: 0x180

    idSWFWidget_Seasons_RewardListItem* selectedReward; // Offset: 0x188

    idSWFWidget_Seasons_RewardListDetails* selectedRewardDetails; // Offset: 0x190

    idArray < idSWFWidget_Seasons_RewardListItem * , 6 > rewardWidgets; // Offset: 0x198

    idSWFWidget_Button* btnPreviousPage; // Offset: 0x1C8

    idSWFWidget_Button* btnNextPage; // Offset: 0x1D0

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x1D8

    bool rewardsSelectable; // Offset: 0x1F0

    bool waitingForWarehouseRefresh; // Offset: 0x1F1

    bool waitingForContainersToOpen; // Offset: 0x1F2

    bool resetRequested; // Offset: 0x1F3

    bool pageButtonsEnabled; // Offset: 0x1F4

    int pageIndex; // Offset: 0x1F8

    swfPlatform_t currentPlatform; // Offset: 0x1FC

    bool animateOnRefresh; // Offset: 0x200

    int animateReward; // Offset: 0x204

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animateUnlockTime; // Offset: 0x208

    swfSoundType_t animationStartSound; // Offset: 0x210

    swfSoundType_t animationUnlockSound; // Offset: 0x214

    swfSoundType_t animationCompleteSound; // Offset: 0x218

    bool resetSelectableAfterAnimation; // Offset: 0x21C

}; // Size: 0x220
