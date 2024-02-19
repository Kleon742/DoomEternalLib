struct idSWFFontGlyph
{
    unsigned short code; // Offset: 0x0

    short advance; // Offset: 0x2

    idList < idVec2 , TAG_SWF , false > verts; // Offset: 0x8

    idList < unsigned short , TAG_SWF , false > indices; // Offset: 0x20

}; // Size: 0x38
