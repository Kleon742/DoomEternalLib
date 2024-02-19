struct idMidnightLightTangentData
{
    // position of the light {{ units = m }}
    idVec3 position; // Offset: 0x0

    // the color of the light
    idColor lightColor; // Offset: 0xC

    // The intensity of the light
    float lightIntensity; // Offset: 0x1C

}; // Size: 0x20
