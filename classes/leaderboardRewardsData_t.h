struct leaderboardRewardsData_t
{
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x0

    idStr description; // Offset: 0x18

    int tier; // Offset: 0x48

    int minRank; // Offset: 0x4C

    int maxRank; // Offset: 0x50

}; // Size: 0x58
