struct idTarget_RemoveItems : idTarget
{
    struct itemListElement_t
    {
        // Item to be removed
        idDeclInventory* item; // Offset: 0x0

        // Count to be removed
        int count; // Offset: 0x8

        // it true and if the item is current equipped then don't remove it instantly
        bool removeAfterUnequip; // Offset: 0xC

    }; // Size: 0x10

    // list of items to remove
    idList < idTarget_RemoveItems::itemListElement_t , TAG_IDLIST , false > itemList; // Offset: 0xB88

}; // Size: 0xBA0
