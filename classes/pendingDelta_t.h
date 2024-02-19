struct pendingDelta_t
{
    // Offset into pendingMem
    int offset; // Offset: 0x0

    // compressed size
    int size; // Offset: 0x4

    // size of delta header
    int headerSize; // Offset: 0x8

    int snapSequence; // Offset: 0xC

}; // Size: 0x10
