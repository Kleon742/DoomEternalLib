struct avoidDebugSphere_t
{
    idObstacleAvoidanceCore::avoidColor_t color; // Offset: 0x0

    // {{ units = m }}
    idVec3 origin; // Offset: 0x4

    // {{ units = m }}
    float radius; // Offset: 0x10

    int lifetime; // Offset: 0x14

}; // Size: 0x18
