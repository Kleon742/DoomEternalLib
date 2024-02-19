struct obstacleRoute_t
{
    int numAreas; // Offset: 0x0

    int pad[2]; // Offset: 0x4

    // desired facing at the final destination
    idVec3 endAlignDir; // Offset: 0xC

    // turn radius towards final destination {{ units = m }}
    float endTurnRadius; // Offset: 0x18

    idArray < routeArea_t , 11 > areas; // Offset: 0x1C

}; // Size: 0x150
