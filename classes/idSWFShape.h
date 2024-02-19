struct idSWFShape
{
    swfRect_t startBounds; // Offset: 0x0

    swfRect_t endBounds; // Offset: 0x10

    idList < idSWFShapeDrawFill , TAG_SWF , false > fillDraws; // Offset: 0x20

    idList < idSWFShapeDrawLine , TAG_SWF , false > lineDraws; // Offset: 0x38

}; // Size: 0x50
