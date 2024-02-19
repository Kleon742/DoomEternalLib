struct seasonLevelDefinition_t
{
    // XP required for the reward.
    int xpRequired; // Offset: 0x0

    // all the rewards you can get.
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x8

}; // Size: 0x20
