struct ribbonTextureSettings_t
{
    // how to generate uv coords
    ribbonTextureMode_t mode; // Offset: 0x0

    // size of texture along ribbon (m)
    float tileLength; // Offset: 0x4

    // animation of texture coordinate along ribbon (texture units/s)
    float panSpeed; // Offset: 0x8

    // offset the v texture coordinate by this amount per second
    float offsetVOverTime; // Offset: 0xC

    // offset the v texture coordinate by this amount per meter
    float offsetVOverDistance; // Offset: 0x10

    // picks a random value between the specified min and max values and uses that as texture offset for the whole ribbon.
    interval_t < float > randomOffset; // Offset: 0x14

    // texture animation parms
    ribbonTextureAnimation_t animation; // Offset: 0x1C

}; // Size: 0x2C
