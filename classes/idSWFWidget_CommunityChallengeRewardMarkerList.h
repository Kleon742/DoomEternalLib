struct idSWFWidget_CommunityChallengeRewardMarkerList : idSWFWidget
{
    struct communityChallengeReward_t
    {
        idDeclWarehouseItem* rewardItem; // Offset: 0x0

        long long threshold; // Offset: 0x8

    }; // Size: 0x10

    struct idSort_communityChallengeReward_t : idSort_Quick < idSWFWidget_CommunityChallengeRewardMarkerList::communityChallengeReward_t , idSWFWidget_CommunityChallengeRewardMarkerList::idSort_communityChallengeReward_t >
    {
    }; // Size: 0x8

    idList < idSWFWidget_CommunityChallengeRewardMarkerList::communityChallengeReward_t , TAG_IDLIST , false > rewards; // Offset: 0x180

    bool needsRebuild; // Offset: 0x198

    long long progress; // Offset: 0x1A0

    long long goal; // Offset: 0x1A8

    idSWFWidget_CommunityChallengeRewardMarkerList::anon_26 sprites; // Offset: 0x1B0

}; // Size: 0x240
