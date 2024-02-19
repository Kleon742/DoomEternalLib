struct idSWFShapeDrawLine
{
    swfLineStyle_t style; // Offset: 0x0

    idList < idVec2 , TAG_SWF , false > startVerts; // Offset: 0x10

    idList < idVec2 , TAG_SWF , false > endVerts; // Offset: 0x28

    idList < unsigned short , TAG_SWF , false > indices; // Offset: 0x40

}; // Size: 0x58
