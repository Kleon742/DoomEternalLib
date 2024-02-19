struct idGpuParticleRuntimeHandleUpdate_t
{
    int stageIndex; // Offset: 0x0

    idVec3 origin; // Offset: 0x4

    idMat3 axis; // Offset: 0x10

    idVec4 color; // Offset: 0x34

    idVec3 worldVelocity; // Offset: 0x44

    idVec3 targetPosition; // Offset: 0x50

    idVec3 angularVelocity; // Offset: 0x5C

    float soundAmplitude; // Offset: 0x68

    particleExposedScalar_t scalar; // Offset: 0x70

    particleExposedScalar_t* overrides; // Offset: 0x80

    int overrideCount; // Offset: 0x88

    float distanceScale; // Offset: 0x8C

    idVec3 scale; // Offset: 0x90

    float maxEmitterDistance; // Offset: 0x9C

    bool needsFovScreenScale; // Offset: 0xA0

    idHeightmapVolume* heightmapVolume; // Offset: 0xA8

}; // Size: 0xB0
