struct streamDecodeCallbacks_t
{
    void (*sourceBlockCompleteCb)(void * , const void * sourceBlock); // Offset: 0x0

    void (*completeCb)(void * , streamDecodeError_t err); // Offset: 0x8

}; // Size: 0x10
