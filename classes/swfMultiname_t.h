struct swfMultiname_t
{
    swfConstantType_t kind; // Offset: 0x0

    // Constant pool string index
    unsigned int nameIndex; // Offset: 0x4

    // Constant pool namespace index or namespace set index, based on kind value
    unsigned int namespaceIndex; // Offset: 0x8

    unsigned int subKind; // Offset: 0xC

}; // Size: 0x10
