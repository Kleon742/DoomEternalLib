struct idSerializeTreeNode
{
    char* typeName; // Offset: 0x0

    char* instanceName; // Offset: 0x8

    int startBits; // Offset: 0x10

    int endBits; // Offset: 0x14

    int parentIndex; // Offset: 0x18

    idList < int , TAG_IDLIST , false > children; // Offset: 0x20

    short containerIndex; // Offset: 0x38

    bool isClassNode; // Offset: 0x3A

}; // Size: 0x40
