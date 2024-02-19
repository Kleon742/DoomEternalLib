struct idEntityAttachmentDef
{
    // tag to attach to entity to ( not used if slot != EQUIP_NONE )
    idStr tag; // Offset: 0x0

    // entity def for this attachment ( overrides inventoryDecl if set )
    idDeclEntityDef* entityDef; // Offset: 0x30

    // hides the entity attachment after it has been attached during spawn
    bool hideOnSpawn; // Offset: 0x0

}; // Size: 0x40
