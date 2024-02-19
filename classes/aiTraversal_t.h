struct aiTraversal_t
{
    idSpawnId spawnID; // Offset: 0x0

    // {{ units = m }}
    idVec3 startPoint; // Offset: 0x4

    // {{ units = m }}
    idVec3 endPoint; // Offset: 0x10

    idVec3 orientationFwd; // Offset: 0x1C

    idVec3 extrusionFwd; // Offset: 0x28

    int animIndex; // Offset: 0x34

    // {{ units = m }}
    float extrusionDistance; // Offset: 0x38

    idIndex < int , invalidTraversal_t , - 1 > traversalIndex; // Offset: 0x3C

    idNavIndex < invalidReach_t > reachabilityIndex; // Offset: 0x40

    unsigned int flags; // Offset: 0x44

    float travelTimeScale; // Offset: 0x48

    idTypesafeTime < float , secondUnique_t , 1 > travelTime; // Offset: 0x4C

}; // Size: 0x50
