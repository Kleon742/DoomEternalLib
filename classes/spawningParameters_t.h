struct spawningParameters_t
{
    // > 0 for PSPAWN_MODE_INSTANT, < 0 for PSPAWN_MODE_AMOUNT
    int particlesPerCycle; // Offset: 0x0

    int cycles; // Offset: 0x4

    float emissionTime; // Offset: 0x8

    float deadTime; // Offset: 0xC

    float offsetTime; // Offset: 0x10

    prtSpawnMode_t spawnMode; // Offset: 0x14

    idParticleScalar spawnRate; // Offset: 0x18

}; // Size: 0x38
