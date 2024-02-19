struct avoidDebugText_t
{
    char text[32]; // Offset: 0x0

    // {{ units = m }}
    idVec3 pos; // Offset: 0x20

    idObstacleAvoidanceCore::avoidColor_t color; // Offset: 0x2C

    int lifetime; // Offset: 0x30

}; // Size: 0x34
