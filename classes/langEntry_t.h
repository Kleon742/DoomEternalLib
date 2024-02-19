struct langEntry_t
{
    // Generated from the key, must be unique, serialized across the network
    unsigned int id; // Offset: 0x0

    idAtomicString key; // Offset: 0x8

    idAtomicString value; // Offset: 0x10

    idAtomicString source; // Offset: 0x18

    unsigned int maxLen; // Offset: 0x20

}; // Size: 0x28
