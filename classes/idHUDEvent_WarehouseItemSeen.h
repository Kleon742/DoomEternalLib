struct idHUDEvent_WarehouseItemSeen
{
    struct warehouseItemSeenData_t
    {
        // Item that was just seen by the player
        idDeclWarehouseItem* seenItem; // Offset: 0x0

    }; // Size: 0x8

    idHUDEvent_WarehouseItemSeen::warehouseItemSeenData_t info; // Offset: 0x0

}; // Size: 0x8
