struct idAIHintPrimitive
{
    // indicates the type of primitive
    aiHintPrimitive_t type; // Offset: 0x0

    // the radius of the circle or sphere {{ units = m }}
    float radius; // Offset: 0x4

    // the height of the cylinder {{ units = m }}
    float height; // Offset: 0x8

    // the length of the arc in degrees
    idTypesafeNumber < float , DegreesUnique_t > arcLen; // Offset: 0xC

    // volume used for inside tests
    idManagedClassPtr < idVolume > volume; // Offset: 0x10

}; // Size: 0x30
