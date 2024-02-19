struct streamDecodeState_t
{
    void* callbackParm; // Offset: 0x0

    void* parms; // Offset: 0x8

    void* context; // Offset: 0x10

    unsigned char* workingStorage; // Offset: 0x18

    unsigned int workingStorageCapacity; // Offset: 0x20

}; // Size: 0x28
