struct compressedWeights_t
{
    // 7 bits available, top-most bit is used for bi-tangent sign
    unsigned char high; // Offset: 0x0

    // 8 bits available
    unsigned char low; // Offset: 0x1

}; // Size: 0x2
