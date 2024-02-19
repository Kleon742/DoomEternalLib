struct idStatusInventoryItem
{
    // which item
    idDeclInventory* item; // Offset: 0x0

    // how many
    int count; // Offset: 0x8

    // if true then use the exact 'count' value and not 'count' * stack size
    bool forceCount; // Offset: 0xC

    // whether this item is equipped
    bool equip; // Offset: 0xD

    // if there is a reserve slot, equip this item there
    bool equip_reserve; // Offset: 0xE

    // if this item has an intro animation allow it to play
    bool canIntro; // Offset: 0xF

}; // Size: 0x10
