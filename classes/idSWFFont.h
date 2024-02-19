struct idSWFFont
{
    idFont* fontID; // Offset: 0x0

    short ascent; // Offset: 0x8

    short descent; // Offset: 0xA

    short leading; // Offset: 0xC

    idList < idSWFFontGlyph , TAG_SWF , false > glyphs; // Offset: 0x10

}; // Size: 0x28
