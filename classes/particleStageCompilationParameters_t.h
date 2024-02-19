struct particleStageCompilationParameters_t
{
    int maxCpuSpawnedParticles; // Offset: 0x0

    int maxGpuSpawnedParticles; // Offset: 0x4

    int maxIndices; // Offset: 0x8

    float lifeTime; // Offset: 0xC

    bool isMergeable; // Offset: 0x10

    spawningParameters_t spawningParameters; // Offset: 0x18

    renderingParameters_t renderingParameters; // Offset: 0x50

    allocationParameters_t allocationParameters; // Offset: 0x108

}; // Size: 0x110
