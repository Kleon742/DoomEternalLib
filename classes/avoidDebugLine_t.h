struct avoidDebugLine_t
{
    idObstacleAvoidanceCore::avoidColor_t color; // Offset: 0x0

    // {{ units = m }}
    idVec3 start; // Offset: 0x4

    // {{ units = m }}
    idVec3 end; // Offset: 0x10

    int lifetime; // Offset: 0x1C

}; // Size: 0x20
