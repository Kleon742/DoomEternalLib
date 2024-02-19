struct _processorInfo_t
{
    char manufacturer[64]; // Offset: 0x0

    char name[128]; // Offset: 0x40

    processorArchitecture_t architecture; // Offset: 0xC0

    unsigned int addressWidth; // Offset: 0xC4

    unsigned int clockSpeedMHz; // Offset: 0xC8

    unsigned int l1CacheSizeKB; // Offset: 0xCC

    unsigned int l2CacheSizeKB; // Offset: 0xD0

    unsigned int l3CacheSizeKB; // Offset: 0xD4

    unsigned int numPhysicalCores; // Offset: 0xD8

    unsigned int numLogicalCores; // Offset: 0xDC

}; // Size: 0xE0
