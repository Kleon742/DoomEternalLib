struct instancedItem_t
{
    // Decl associated with the instanced item
    idDeclWarehouseItem* associatedItem; // Offset: 0x0

    // Service identifier
    idStr instanceID; // Offset: 0x8

    // How many uses the item has left. -1 is infinite or not applicable
    int remainingUses; // Offset: 0x38

    // When the item was originally purchased
    idTypestrictTimePoint < typestrictWallClockTimestampUnique > purchaseDate; // Offset: 0x40

    // Generic holder for custom data of the block
    Json::Value customData; // Offset: 0x48

}; // Size: 0x60
