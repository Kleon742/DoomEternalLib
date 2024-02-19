struct materialImageOpts_TypeInfoHelper_t
{
    // type
    textureType_t type; // Offset: 0x0

    // filter
    textureFilter_t filter; // Offset: 0x4

    // repeat
    textureRepeat_t repeat; // Offset: 0x8

    // format
    textureFormat_t format; // Offset: 0xC

    // padding
    unsigned short atlasPadding; // Offset: 0x10

    // minimum Mip
    int minMip; // Offset: 0x14

    // bias
    bool fullScaleBias; // Offset: 0x18

    // nomips
    bool noMips; // Offset: 0x19

    // fftbloom
    bool fftBloom; // Offset: 0x1A

}; // Size: 0x1C
