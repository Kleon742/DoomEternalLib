struct swfGradientGlowData_t : swfFilter_t
{
    unsigned char numColors; // Offset: 0x1

    idList < swfColorRGBA_t , TAG_IDLIST , false > colors; // Offset: 0x8

    idList < unsigned char , TAG_IDLIST , false > ratios; // Offset: 0x20

    float blurX; // Offset: 0x38

    float blurY; // Offset: 0x3C

    float angle; // Offset: 0x40

    float distance; // Offset: 0x44

    float strength; // Offset: 0x48

    bool innerShadow; // Offset: 0x4C

    bool knockout; // Offset: 0x4D

    // Always 1
    bool compositeSource; // Offset: 0x4E

    bool onTop; // Offset: 0x4F

    unsigned char numPasses; // Offset: 0x50

}; // Size: 0x58
