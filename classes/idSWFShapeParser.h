struct idSWFShapeParser
{
    struct swfSPEdge_t
    {
        unsigned short v0; // Offset: 0x0

        unsigned short v1; // Offset: 0x2

        // control point if this is a curve, 0xFFFF otherwise
        unsigned short cp; // Offset: 0x4

    }; // Size: 0x6

    struct swfSPMorphEdge_t
    {
        idSWFShapeParser::swfSPEdge_t start; // Offset: 0x0

        idSWFShapeParser::swfSPEdge_t end; // Offset: 0x6

    }; // Size: 0xC

    struct swfSPLineLoop_t
    {
        bool hole; // Offset: 0x0

        idList < unsigned short , TAG_SWF , false > vindex1; // Offset: 0x8

        idList < unsigned short , TAG_SWF , false > vindex2; // Offset: 0x20

    }; // Size: 0x38

    struct swfSPDrawFill_t
    {
        swfFillStyle_t style; // Offset: 0x0

        idList < idSWFShapeParser::swfSPMorphEdge_t , TAG_SWF , false > edges; // Offset: 0xE8

        idList < idSWFShapeParser::swfSPLineLoop_t , TAG_SWF , false > loops; // Offset: 0x100

    }; // Size: 0x118

    struct swfSPDrawLine_t
    {
        swfLineStyle_t style; // Offset: 0x0

        idList < idSWFShapeParser::swfSPMorphEdge_t , TAG_SWF , false > edges; // Offset: 0x10

    }; // Size: 0x28

    bool extendedCount; // Offset: 0x0

    bool rgba; // Offset: 0x1

    bool morph; // Offset: 0x2

    bool lineStyle2; // Offset: 0x3

    idList < idVec2 , TAG_SWF , false > verts; // Offset: 0x8

    idList < idSWFShapeParser::swfSPDrawFill_t , TAG_SWF , false > fillDraws; // Offset: 0x20

    idList < idSWFShapeParser::swfSPDrawLine_t , TAG_SWF , false > lineDraws; // Offset: 0x38

}; // Size: 0x50
