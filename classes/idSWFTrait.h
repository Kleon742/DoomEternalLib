struct idSWFTrait
{
    // Constant pool multiname index
    unsigned int name; // Offset: 0x8

    // Lower 4 bits are kind, Upper 4 bits are flags
    unsigned char flags; // Offset: 0xC

    // Type specific trait data
    idSWFTraitData* data; // Offset: 0x10

}; // Size: 0x18
