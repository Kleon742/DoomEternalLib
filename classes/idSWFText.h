struct idSWFText
{
    swfRect_t bounds; // Offset: 0x0

    swfMatrix_t matrix; // Offset: 0x10

    idList < idSWFTextRecord , TAG_SWF , false > textRecords; // Offset: 0x28

    idList < swfGlyphEntry_t , TAG_SWF , false > glyphs; // Offset: 0x40

}; // Size: 0x58
