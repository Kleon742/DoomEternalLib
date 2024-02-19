struct lightParms_t
{
    idColor lightColor; // Offset: 0x0

    idVec3 lightRadius; // Offset: 0x10

    idVec3 lightCenter; // Offset: 0x1C

    idVec3 spotLightTarget; // Offset: 0x28

    idVec3 spotLightRight; // Offset: 0x34

    idVec3 spotLightUp; // Offset: 0x40

    idVec3 spotLightStart; // Offset: 0x4C

    idVec3 spotLightEnd; // Offset: 0x58

    idVec3 dynamicModelLightScale; // Offset: 0x64

    idStr lightMaterial; // Offset: 0x70

    float lightIntensity; // Offset: 0xA0

    float lightFalloff; // Offset: 0xA4

    float clipVolumeFalloff; // Offset: 0xA8

    float dynamicSpecularScale; // Offset: 0xAC

    float staticLightMapScale; // Offset: 0xB0

    float lightGenAreaScale; // Offset: 0xB4

    int lightType; // Offset: 0xB8

    bool castShadows; // Offset: 0xBC

    bool staticLight; // Offset: 0xBD

    bool contributesToLightProbe; // Offset: 0xBE

    bool contributesToAmbient; // Offset: 0xBF

    bool dynamicOnly; // Offset: 0xC0

    bool allowEnvOverrides; // Offset: 0xC1

    bool startOff; // Offset: 0xC2

    // Added for Umbra
    bool stationary; // Offset: 0xC3

    bool stationaryProbe; // Offset: 0xC4

    bool controlledBySceneDirector; // Offset: 0xC5

}; // Size: 0xC8
