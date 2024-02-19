struct swfFillStyle_t
{
    // 0 = solid, 1 = gradient, 4 = bitmap
    unsigned char type; // Offset: 0x0

    // 0 = linear, 2 = radial, 3 = focal; 0 = repeat, 1 = clamp, 2 = near repeat, 3 = near clamp
    unsigned char subType; // Offset: 0x1

    // if type = 0
    swfColorRGBA_t startColor; // Offset: 0x2

    // if type = 0
    swfColorRGBA_t endColor; // Offset: 0x6

    // if type > 0
    swfMatrix_t startMatrix; // Offset: 0xC

    // if type > 0
    swfMatrix_t endMatrix; // Offset: 0x24

    // if type = 1
    swfGradient_t gradient; // Offset: 0x3C

    // if type = 1 and subType = 3
    float focalPoint; // Offset: 0xE0

    // if type = 4
    unsigned short bitmapID; // Offset: 0xE4

}; // Size: 0xE8
