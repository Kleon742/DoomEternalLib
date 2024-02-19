struct swfDisplayEntry_t
{
    unsigned short characterID; // Offset: 0x0

    unsigned short depth; // Offset: 0x2

    unsigned short clipDepth; // Offset: 0x4

    unsigned char blendMode; // Offset: 0x6

    int flatIndex; // Offset: 0x8

    swfColorXform_t cxf; // Offset: 0xC

    float ratio; // Offset: 0x2C

    // if this entry is a sprite, then this will point to the specific instance of that sprite
    idSWFSpriteInstance* spriteInstance; // Offset: 0x30

    // if this entry is text, then this will point to the specific instance of the text
    idSWFTextInstance* textInstance; // Offset: 0x38

}; // Size: 0x40
