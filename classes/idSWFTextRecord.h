struct idSWFTextRecord
{
    unsigned short fontID; // Offset: 0x0

    swfColorRGBA_t color; // Offset: 0x2

    short xOffset; // Offset: 0x6

    short yOffset; // Offset: 0x8

    unsigned short textHeight; // Offset: 0xA

    unsigned short firstGlyph; // Offset: 0xC

    unsigned char numGlyphs; // Offset: 0xE

}; // Size: 0x10
