struct scalarComputeContext_t
{
    float ageParticle; // Offset: 0x0

    float ageCycle; // Offset: 0x4

    float ageEmitter; // Offset: 0x8

    float spawnFraction; // Offset: 0xC

    float ribbonFraction; // Offset: 0x10

    int seedEmitter; // Offset: 0x14

    int seedParticle; // Offset: 0x18

    idRandom random; // Offset: 0x1C

    float distanceScale; // Offset: 0x20

    float emitterVelocityLength; // Offset: 0x24

}; // Size: 0x28
