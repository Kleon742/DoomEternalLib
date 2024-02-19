struct idFont : idResource
{
    struct idFontRange
    {
        idFont* fontInfo; // Offset: 0x0

        unsigned int minRange; // Offset: 0x8

        unsigned int maxRange; // Offset: 0xC

    }; // Size: 0x10

    // Fonts can be aliases to other fonts when we remap for other locales
    idFont* alias; // Offset: 0x58

    // If the font is NOT an alias, this is where the font data is located
    fontInfo_t* fontInfo; // Offset: 0x60

    // store a hash of the name of the font
    int fontNameHash; // Offset: 0x68

    idFont* boldFont; // Offset: 0x70

    idFont* italicFont; // Offset: 0x78

    bool allowUnderline; // Offset: 0x80

    idList < idFont::idFontRange , TAG_IDLIST , false > altGlyphs; // Offset: 0x88

}; // Size: 0xA0
