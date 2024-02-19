struct modelParticleParms_t
{
    int stopTime; // Offset: 0x0

    float timeOffset; // Offset: 0x4

    int diversity; // Offset: 0x8

    float coverage; // Offset: 0xC

    idVec4 color; // Offset: 0x10

    idVec3 distribScale; // Offset: 0x20

    idVec3 origin; // Offset: 0x2C

    idVec3 directionOrigin; // Offset: 0x38

    idMat3 axis; // Offset: 0x44

    idVec3 scale; // Offset: 0x68

    idVec3 velocity; // Offset: 0x74

    idVec2 lightFadeOutRange; // Offset: 0x80

    float alphaScaleOverride; // Offset: 0x88

    lightParticleEffect_t particleLightEffect; // Offset: 0x8C

    float particleLightScale; // Offset: 0x90

    unsigned char lod; // Offset: 0x94

    bool disableParticleLight; // Offset: 0x95

    bool justSpawned; // Offset: 0x96

}; // Size: 0xDC
