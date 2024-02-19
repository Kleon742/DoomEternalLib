struct idColor
{
    // ------------------------ order and locality of rgba is important for Parse1DMatrix and FloatArrayToString. ------------------------ red
    float r; // Offset: 0x0

    // green
    float g; // Offset: 0x4

    // blue
    float b; // Offset: 0x8

    // alpha
    float a; // Offset: 0xC

}; // Size: 0x10
