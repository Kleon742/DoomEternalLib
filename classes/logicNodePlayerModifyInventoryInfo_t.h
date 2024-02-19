struct logicNodePlayerModifyInventoryInfo_t
{
    // item we're dealing with
    idDeclInventory* inventoryItem; // Offset: 0x0

    // number of items that should be in the inventory (ignore this field when -1)
    int desiredCount; // Offset: 0x8

    // throw this notification.
    idDeclNotification* notification; // Offset: 0x10

}; // Size: 0x18
