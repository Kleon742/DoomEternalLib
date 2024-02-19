struct idSharedPtrData
{
    interlockedInt_t sharedRefs; // Offset: 0x0

    // Data refs include shared refs, so they should be greater than or equal at all times
    interlockedInt_t dataRefs; // Offset: 0x4

    void* pointer; // Offset: 0x8

    Deleter deleter; // Offset: 0x10

}; // Size: 0x18
