struct idUseableAmmoComponent : idUseableItemComponent
{
    // flag for whether this can trigger overammo
    bool canTriggerOverammo; // Offset: 0x190

    // This will also be considered.
    idList < const idDeclInventory * , TAG_IDLIST , false > alternateAmmoDecls; // Offset: 0x198

}; // Size: 0x1B0
