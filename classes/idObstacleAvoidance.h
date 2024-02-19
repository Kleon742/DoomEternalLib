struct idObstacleAvoidance
{
    idObstacleBuffers* buffers; // Offset: 0x0

    // from previous frame to avoid erratic direction changes
    idVec3 lastDir; // Offset: 0x8

    // from previous frame to circle around a just cleared corner {{ units = m }}
    idVec4 lastCorner; // Offset: 0x14

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTime; // Offset: 0x28

    // {{ units = m }}
    float speedApplicationDist; // Offset: 0x30

    // {{ units = m }}
    float inertia; // Offset: 0x34

}; // Size: 0x38
