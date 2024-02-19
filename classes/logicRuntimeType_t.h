struct logicRuntimeType_t
{
    char* typeName; // Offset: 0x0

    char* rawTypeName; // Offset: 0x8

    int size; // Offset: 0x10

    int align; // Offset: 0x14

    char* description; // Offset: 0x18

    bool isList; // Offset: 0x20

    logicRuntimeType_t* listType; // Offset: 0x28

    logicRuntimeType_t* elementType; // Offset: 0x30

    logicCommonTypeFunctions_t commonFunctions; // Offset: 0x38

    logicListTypeFunctions_t listFunctions; // Offset: 0x68

}; // Size: 0xA8
