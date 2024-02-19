struct streamRead_t
{
    idFile* file; // Offset: 0x0

    unsigned long long fileOffs; // Offset: 0x8

    unsigned int fileLen; // Offset: 0x10

    unsigned int priority; // Offset: 0x14

    streamIoClass_t ioClass; // Offset: 0x18

    void (*eventCb)(const streamIoEvent_t * evs , int num); // Offset: 0x20

    void* cbParm; // Offset: 0x28

}; // Size: 0x30
