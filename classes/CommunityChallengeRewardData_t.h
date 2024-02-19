struct CommunityChallengeRewardData_t
{
    // The progress required to unlock that level
    long long threshold; // Offset: 0x0

    // The list of item ids to grant.
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > gate; // Offset: 0x8

}; // Size: 0x20
