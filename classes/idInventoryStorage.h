struct idInventoryStorage : idBloatedEntity
{
    // everything in the locker
    idInventoryCollection inventory; // Offset: 0xB88

    // inventory this entity will spawn with
    idList < idInventoryAttachmentDef , TAG_IDLIST , false > startingInventory; // Offset: 0x10F0

}; // Size: 0x1108
