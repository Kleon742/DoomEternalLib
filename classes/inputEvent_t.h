struct inputEvent_t
{
    inputEventType_t evType; // Offset: 0x0

    int evValue; // Offset: 0x4

    int evValue2; // Offset: 0x8

    // bytes of data pointed to by evPtr, for journaling
    int evPtrLength; // Offset: 0xC

    // this must be manually freed if not NULL
    void* evPtr; // Offset: 0x10

    int inputDevice; // Offset: 0x18

}; // Size: 0x20
