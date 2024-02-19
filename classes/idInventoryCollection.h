struct idInventoryCollection
{
    struct net_itemTransaction_t
    {
        idDeclInventory* itemDecl; // Offset: 0x0

        unsigned char count; // Offset: 0x8

        // if setCount is true, then we are setting count of item (if it exists). If its false (default) we are adding count to inventory
        bool setCount; // Offset: 0x9

        // hack for picking up weapon in middle of adding process :(
        bool clearAmmoInMiddleOfAdd; // Offset: 0xA

    }; // Size: 0x10

    idList < idManagedClassPtr < idInventoryItem > , TAG_IDLIST , false > inventory; // Offset: 0x0

    bool readingFromFile; // Offset: 0x18

    idInventoryCollection::net_itemTransaction_t net_addedItems[40]; // Offset: 0x20

    idInventoryCollection::net_itemTransaction_t net_deletedItems[40]; // Offset: 0x2A0

    unsigned short net_itemAddIndex; // Offset: 0x520

    unsigned short net_itemRemoveIndex; // Offset: 0x522

    unsigned short net_lastItemAddIndex; // Offset: 0x524

    unsigned short net_lastItemRemoveIndex; // Offset: 0x526

    // Event flags should only be set to true during serialization.
    bool net_serializeInventoryChanges; // Offset: 0x528

    // Free all items
    idInstantNetEvent < 15 > net_freeAllItems; // Offset: 0x52C

    // the table to use in order to convert elements to other elements
    idDeclInventoryConvTable* conversionTable; // Offset: 0x538

    // whether we want this inventory to auto convert when adding items into the simple conversion table
    bool autoConvertSimpleItems; // Offset: 0x540

    // whether we want this inventory to auto convert when adding items into the complex conversion table
    bool autoConvertComplexItems; // Offset: 0x541

    int snapMaxWeaponSlots; // Offset: 0x544

    idManagedClassPtr < idEntity > owner; // Offset: 0x548

}; // Size: 0x568
