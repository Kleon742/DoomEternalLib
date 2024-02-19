struct swfBevelData_t : swfFilter_t
{
    swfColorRGBA_t shadowColor; // Offset: 0x1

    swfColorRGBA_t highlightColor; // Offset: 0x5

    float blurX; // Offset: 0xC

    float blurY; // Offset: 0x10

    float angle; // Offset: 0x14

    float distance; // Offset: 0x18

    float strength; // Offset: 0x1C

    bool innerShadow; // Offset: 0x20

    bool knockout; // Offset: 0x21

    // Always 1
    bool compositeSource; // Offset: 0x22

    bool onTop; // Offset: 0x23

    unsigned char numPasses; // Offset: 0x24

}; // Size: 0x28
