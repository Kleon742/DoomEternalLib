struct idDeclDevInvLoadoutOverride : idDeclTypeInfo
{
    // if this item is in the player's inventory, then this override is active
    idDeclInventory* inventoryItem; // Offset: 0x88

    // override item
    devInventoryLoadoutItem_t item; // Offset: 0x90

}; // Size: 0xD8
