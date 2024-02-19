struct swfBlurData_t : swfFilter_t
{
    float blurX; // Offset: 0x4

    float blurY; // Offset: 0x8

    // 5 bits
    unsigned char passes; // Offset: 0xC

    // 3 bits
    unsigned char reserved; // Offset: 0xD

}; // Size: 0x10
