struct idRibbon2
{
    struct pointSubset_t
    {
        int identifier; // Offset: 0x0

        int start; // Offset: 0x4

        int end; // Offset: 0x8

        idVec3 tracerStartPos; // Offset: 0xC

        idMat3 invRot; // Offset: 0x18

        idVec3 acceleration; // Offset: 0x3C

        float baseLength; // Offset: 0x48

        idArray < float , 8 > texCoordOffsetsPerFace; // Offset: 0x4C

    }; // Size: 0x6C

    idRibbonManager* ribbonManager; // Offset: 0x0

    idDeclRibbon2* declRibbon; // Offset: 0x8

    bool updateStarted; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSimulationUpdateTime; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastPositionUpdateTime; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > emissionStartTime; // Offset: 0x30

    idVec3 lastUpdatePosition; // Offset: 0x38

    idMat3 lastUpdateOrientation; // Offset: 0x44

    idVec3 start; // Offset: 0x68

    idVec3 end; // Offset: 0x74

    float trailDistanceRemainder; // Offset: 0x80

    float trailTimeRemainder; // Offset: 0x84

    bool trailIsEmitting; // Offset: 0x88

    bool trailWasEmitting; // Offset: 0x89

    float trailLength; // Offset: 0x8C

    idVec2 trailTurbulenceOffset; // Offset: 0x90

    idVec2 trailNoiseOffset; // Offset: 0x98

    float alphaMultiplier; // Offset: 0xA0

    float cameraDistance; // Offset: 0xA4

    idRibbonSimulationPointAllocator* simPointAllocator; // Offset: 0xA8

    idList < ribbonSimulationPoint_t * , TAG_IDLIST , false > points; // Offset: 0xB0

    idList < idRibbon2::pointSubset_t , TAG_IDLIST , false > pointSubsets; // Offset: 0xC8

    int pointSubsetID; // Offset: 0xE0

    int pointIndex; // Offset: 0xE4

    int activeTrailSubset; // Offset: 0xE8

    idRandom random; // Offset: 0xEC

    ribbonSpawnControl_t lastSpawnControl; // Offset: 0xF0

    idVec3 lastVelocityOrNormal; // Offset: 0x108

}; // Size: 0x118
