struct swfConvolutionData_t : swfFilter_t
{
    unsigned char matrixX; // Offset: 0x1

    unsigned char matrixY; // Offset: 0x2

    float divisor; // Offset: 0x4

    float bias; // Offset: 0x8

    float* matrix; // Offset: 0x10

    swfColorRGBA_t defaultColor; // Offset: 0x18

    bool clamp; // Offset: 0x1C

    bool preserveAlpha; // Offset: 0x1D

}; // Size: 0x20
