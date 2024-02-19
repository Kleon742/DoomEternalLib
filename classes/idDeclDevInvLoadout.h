struct idDeclDevInvLoadout : idDeclTypeInfo
{
    // starting inventory to give the player
    idList < devInventoryLoadoutItem_t , TAG_IDLIST , false > startingInventory; // Offset: 0x88

    // starting currency
    idList < playerCurrency_t , TAG_IDLIST , false > currencyToGive; // Offset: 0xA0

    // starting stats
    idList < gameStat_t , TAG_IDLIST , false > statsToGive; // Offset: 0xB8

    // starting codex entries
    idList < const idDeclCodexEntry * , TAG_IDLIST , false > codexEntriesToGive; // Offset: 0xD0

    // clear all previous inventory before giving startingInventory
    bool clearAllBeforeApply; // Offset: 0xE8

}; // Size: 0xF0
