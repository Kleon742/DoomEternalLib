struct idDeclFontFX : idDeclTypeInfo
{
    struct fontFXMaterialPair_t
    {
        // FX identifier
        swfFontEffects_t effect; // Offset: 0x0

        // Material used to apply the FX
        idMaterial2* material; // Offset: 0x8

    }; // Size: 0x10

    // Font to apply to
    swfUsedFonts_t font; // Offset: 0x88

    // What material to use for each FX
    idList < idDeclFontFX::fontFXMaterialPair_t , TAG_IDLIST , false > materialData; // Offset: 0x90

    // Font to use for bold modifier
    idDeclFontFX* boldFont; // Offset: 0xA8

    // Use a faux italic effect if no bold font
    bool allowFauxBold; // Offset: 0xB0

    // Font to use for italic modifier
    idDeclFontFX* italicFont; // Offset: 0xB8

    // Use a faux italic effect if no italic font
    bool allowFauxItalic; // Offset: 0xC0

    // Underline modifier allowed
    bool allowUnderline; // Offset: 0xC1

    bool applyGuard; // Offset: 0xC2

    bool fontModifiersProcessed; // Offset: 0xC3

}; // Size: 0xC8
