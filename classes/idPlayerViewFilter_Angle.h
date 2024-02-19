struct idPlayerViewFilter_Angle : idPlayerViewFilter_Base
{
    // {{ units = m }}
    idVec3 position; // Offset: 0x10

    idVec3 lookDirection; // Offset: 0x1C

    float degreesFromAxis; // Offset: 0x28

    float lookDotThreshold; // Offset: 0x2C

}; // Size: 0x30
