struct idMD6BestLeaf : idMD6Node
{
    // Current max I've found is 7
    idGrowableList < idMD6Node * , 7 , TAG_ANIMATION > leafList; // Offset: 0x10

    // Current max I've found is 7
    idGrowableList < unsigned int , 7 , TAG_ANIMATION > tagList; // Offset: 0x60

    // Current max I've found is 4
    idGrowableList < idMD6Filter * , 4 , TAG_ANIMATION > filterList; // Offset: 0x98

    idMD6TagFilter tagGroupFilter; // Offset: 0xD0

    idMD6DebugFilterLogicHelper_t debugFilterLogicHelper; // Offset: 0xF0

    idDeclAnimWebTagGroup* tagGroup; // Offset: 0xF8

    unsigned int desiredTag; // Offset: 0x100

    unsigned int activeTag; // Offset: 0x104

    unsigned int defaultTag; // Offset: 0x108

    unsigned short bestLeafIndex; // Offset: 0x10C

    unsigned char tagBias; // Offset: 0x10E

    unsigned char tagGroupIndex; // Offset: 0x10F

}; // Size: 0x110
