struct idSWFFloatingText_Info
{
    idSWFFloatingText_SpriteInfo spriteInfo; // Offset: 0x0

    swfFloatingTextTypes_t type; // Offset: 0x18

    idStr text; // Offset: 0x20

    // {{ units = m }}
    idVec3 origin; // Offset: 0x50

}; // Size: 0x60
