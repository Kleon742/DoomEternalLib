struct streamDatabaseHeader_t
{
    unsigned long long magic; // Offset: 0x0

    unsigned int headerLength; // Offset: 0x8

    unsigned int pad0; // Offset: 0xC

    unsigned int pad1; // Offset: 0x10

    unsigned int pad2; // Offset: 0x14

    unsigned int numEntries; // Offset: 0x18

    unsigned int flags; // Offset: 0x1C

}; // Size: 0x20
