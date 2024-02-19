struct swfDropShadowData_t : swfFilter_t
{
    swfColorRGBA_t color; // Offset: 0x1

    float blurX; // Offset: 0x8

    float blurY; // Offset: 0xC

    float angle; // Offset: 0x10

    float distance; // Offset: 0x14

    float strength; // Offset: 0x18

    bool innerShadow; // Offset: 0x1C

    bool knockout; // Offset: 0x1D

    // Always 1
    bool compositeSource; // Offset: 0x1E

    unsigned char numPasses; // Offset: 0x1F

}; // Size: 0x20
