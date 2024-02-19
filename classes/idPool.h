struct idPool
{
    interlockedInt64_t next; // Offset: 0x0

    unsigned char* data; // Offset: 0x8

    int elementSize; // Offset: 0x10

    int capacity; // Offset: 0x14

    // only utilized when ID_POOL_TRACK_USAGE is enabled
    interlockedInt_t num; // Offset: 0x18

    int peak; // Offset: 0x1C

}; // Size: 0x20
