struct idAnimWebBlendEquation
{
    enum result_t : int
    {
        PARSE_OK = 0,
        PARSE_ERROR_UNKNOWN_TOKEN = 1,
        PARSE_SYNTAX_ERROR = 2,
        PARSE_MISSING_CURLY_OPEN_BRACE = 3,
        PARSE_MISSING_CURLY_CLOSE_BRACE = 4,
        PARSE_MISSING_COMMA = 5,
        PARSE_UNKNOWN_SCALAR = 6,
        PARSE_UNKNOWN_ANIMATION = 7,
        PARSE_OUT_OF_MIXERS = 8,
        PARSE_UNSUPPORTED_VARIABLE_REFERENCE = 9,
        PARSE_MAX = 10
    };

    struct animList_t
    {
        idStaticList < idMD6Filter * , 10 , false , TAG_IDLIST > filterList; // Offset: 0x0

        idStaticList < idMD6Node * , 256 , false , TAG_IDLIST > animList; // Offset: 0x68

        idStaticList < unsigned int , 256 , false , TAG_IDLIST > tagList; // Offset: 0x880

        idStaticList < int , 256 , false , TAG_IDLIST > animPropIndex; // Offset: 0xC98

    }; // Size: 0x10B0

    struct existingNode_t
    {
        char name[8]; // Offset: 0x0

        idMD6Node* node; // Offset: 0x8

    }; // Size: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ticksPerSec; // Offset: 0x8

    idStaticList < idMD6Node * , 64 , false , TAG_IDLIST > allocatedNodes; // Offset: 0x10

    int expressionLevel; // Offset: 0x228

}; // Size: 0x230
