struct declFileParseResult_t
{
    bool addDecl; // Offset: 0x0

    idDeclInfo* declType; // Offset: 0x8

    idStrDynStatic < 64 > canonicalName; // Offset: 0x10

    idStrDynStatic < 64 > nonCanonicalName; // Offset: 0x80

    int sourceLine; // Offset: 0xF0

    int offset; // Offset: 0xF4

    int length; // Offset: 0xF8

    unsigned int sourceChecksum; // Offset: 0xFC

}; // Size: 0x100
