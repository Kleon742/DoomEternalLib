struct aiIntent_t
{
    // {{ units = m }}
    idVec3 origin; // Offset: 0x0

    // {{ units = m }}
    idVec3 targetOrigin; // Offset: 0xC

    idSpawnId spawnId; // Offset: 0x18

    idTypesafeNumber < float , DegreesUnique_t > attackArc; // Offset: 0x1C

    // {{ units = m }}
    float attackRadius; // Offset: 0x20

    aiIntentType_t type; // Offset: 0x24

    float probability; // Offset: 0x28

}; // Size: 0x2C
