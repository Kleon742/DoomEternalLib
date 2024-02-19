struct idDeclWarehouseItem : idGameDeclTypeInfo
{
    // The item class this warehouse item belongs to
    warehouseItemClass_t warehouseItemClass; // Offset: 0x90

    // If the item can be awarded by the client (defaults to server awarded)
    bool clientAwarded; // Offset: 0x94

    // If the item is included in the initial install chunk
    bool initialChunk; // Offset: 0x95

    // The quality tier of the item
    qualityTier_t qualityTier; // Offset: 0x98

    // Display name
    idStrId displayName; // Offset: 0x9C

    // Description
    idStrId description; // Offset: 0xA0

    // Icon to show in the menus
    idMaterial2* icon; // Offset: 0xA8

    // Large icon (used for the master level map image)
    idMaterial2* iconLarge; // Offset: 0xB0

    // The progress information ( if WIC_PROGRESSABLE_SET )
    progressableSet_t itemProgressableSet; // Offset: 0xB8

    // The game item corresponding to the warehouse item
    idDeclGameItem* gameItemPtr; // Offset: 0xD0

    // The game item corresponding to the warehouse item
    idDeclGameItemRef gameItem; // Offset: 0xD8

    // The X offset to use in menus in the UI
    float iconXOffset; // Offset: 0xE0

    // The Y offset to use in menus in the UI
    float iconYOffset; // Offset: 0xE4

}; // Size: 0xE8
