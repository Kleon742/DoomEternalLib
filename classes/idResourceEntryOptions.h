struct idResourceEntryOptions
{
    // size of resource uncompressed data
    unsigned long long uncompressedSize; // Offset: 0x0

    // checksum of resource data
    unsigned long long dataCheckSum; // Offset: 0x8

    // time of generation in us since epoch
    unsigned long long generationTimeStamp; // Offset: 0x10

    // default hash to use for stale checks
    unsigned long long defaultHash; // Offset: 0x18

    // resource version
    unsigned int version; // Offset: 0x20

    // resource flags
    unsigned int flags; // Offset: 0x24

    // compression mode
    unsigned char compMode; // Offset: 0x28

    unsigned char reserved0; // Offset: 0x29

    // variation
    unsigned short variation; // Offset: 0x2A

    unsigned int reserved2; // Offset: 0x2C

    // reserved for variations
    unsigned long long reservedForVariations; // Offset: 0x30

}; // Size: 0x38
