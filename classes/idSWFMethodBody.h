struct idSWFMethodBody
{
    // Index into the method signature list this body belongs to
    unsigned int signatureIndex; // Offset: 0x8

    // Maximum number of evaluation stack slots used
    unsigned int maxStack; // Offset: 0xC

    // Index of the highest-numbered register this method will use, plus one
    unsigned int localCount; // Offset: 0x10

    // Minimum scope depth, relative to maxScopeDepth, that can be accessed
    unsigned int initScopeDepth; // Offset: 0x14

    // Maximum scope depth, determines size of local scope stack
    unsigned int maxScopeDepth; // Offset: 0x18

    // Number of bytes of code
    unsigned int codeLength; // Offset: 0x1C

    // Code data
    unsigned char* code; // Offset: 0x20

    // Exception list
    idList < swfException_t , TAG_SWF , false > exceptions; // Offset: 0x28

    // Traits for this method
    idGrowableList < idSWFTrait , 2 , TAG_SWF > traits; // Offset: 0x40

}; // Size: 0x88
