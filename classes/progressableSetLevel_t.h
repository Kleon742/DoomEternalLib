struct progressableSetLevel_t
{
    // XP required for the reward. !!! Actual value is server authoritative !!!
    int xpRequired; // Offset: 0x0

    // rewards for reaching this level
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x8

}; // Size: 0x20
