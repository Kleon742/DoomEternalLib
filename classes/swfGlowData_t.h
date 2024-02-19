struct swfGlowData_t : swfFilter_t
{
    swfColorRGBA_t color; // Offset: 0x1

    float blurX; // Offset: 0x8

    float blurY; // Offset: 0xC

    float strength; // Offset: 0x10

    unsigned char innerShadow; // Offset: 0x14

    unsigned char knockout; // Offset: 0x15

    // Always 1
    unsigned char compositeSource; // Offset: 0x16

    unsigned char numPasses; // Offset: 0x17

}; // Size: 0x18
