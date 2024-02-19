struct streamIoEvent_t
{
    void* cbParm; // Offset: 0x0

    void* block; // Offset: 0x8

    streamIoEventKind_t kind; // Offset: 0x10

    unsigned int blockLen; // Offset: 0x14

    unsigned int offs; // Offset: 0x18

}; // Size: 0x20
