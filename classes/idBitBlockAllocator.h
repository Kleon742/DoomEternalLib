struct idBitBlockAllocator
{
    // 4k
    int width; // Offset: 0x0

    // 4k
    int height; // Offset: 0x4

    // padded with 0 bits to a byte boundary
    unsigned char* bits; // Offset: 0x8

}; // Size: 0x10
