struct idFieldOfView
{
    // maximum distance of field of view {{ units = m }}
    float radius; // Offset: 0x0

    // fov in pitch axis
    idTypesafeNumber < float , DegreesUnique_t > pitchFoV; // Offset: 0x4

    // fov in yaw axis
    idTypesafeNumber < float , DegreesUnique_t > yawFoV; // Offset: 0x8

}; // Size: 0xC
