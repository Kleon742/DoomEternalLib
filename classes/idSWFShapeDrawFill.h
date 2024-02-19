struct idSWFShapeDrawFill
{
    swfFillStyle_t style; // Offset: 0x0

    idList < idVec2 , TAG_SWF , false > startVerts; // Offset: 0xE8

    idList < idVec2 , TAG_SWF , false > endVerts; // Offset: 0x100

    idList < unsigned short , TAG_SWF , false > indices; // Offset: 0x118

}; // Size: 0x130
