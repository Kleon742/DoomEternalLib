struct idInventoryAttachmentDef
{
    enum startingSlot_t : int
    {
        BACKPACK = 0,
        HOLSTERED = 1,
        EQUIPPED = 2
    };

    // whether to holster the item, equip it for use, or put it in the actor's pack
    idInventoryAttachmentDef::startingSlot_t startSlot; // Offset: 0x0

    // number of items for stackable items ( has no effect for non-stackables )
    int count; // Offset: 0x4

    // is this item lootable
    bool lootable; // Offset: 0x8

    // if true, attach and show the item when it's holstered
    bool showHolstered; // Offset: 0x9

    // inventory decl for this attachment ( not used if entityDef is set )
    idDeclInventory* inventoryDecl; // Offset: 0x10

    // entity decl for this attachment
    idDeclEntityDef* entityDef; // Offset: 0x18

}; // Size: 0x20
