struct idDeclSWFResources : idDeclTypeInfo
{
    struct swfSoundResource_t
    {
        // Sound identifier
        swfSoundType_t soundType; // Offset: 0x0

        // Sound to be played
        idSoundEvent* soundEvent; // Offset: 0x8

    }; // Size: 0x10

    // swf files this should be used with
    idList < const idSWFResource * , TAG_IDLIST , false > swfNames; // Offset: 0x88

    // Sound associations for the swf
    idList < idDeclSWFResources::swfSoundResource_t , TAG_IDLIST , false > sounds; // Offset: 0xA0

    // Font FX associations for the swf
    idList < const idDeclFontFX * , TAG_IDLIST , false > fontFXs; // Offset: 0xB8

}; // Size: 0xD0
