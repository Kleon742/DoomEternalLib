struct obstacleRoute_Big_t
{
    int numAreas; // Offset: 0x0

    int pad[2]; // Offset: 0x4

    // desired facing at the final destination
    idVec3 endAlignDir; // Offset: 0xC

    // turn radius towards final destination {{ units = m }}
    float endTurnRadius; // Offset: 0x18

    // FIXME -- need to make this an idStaticList for safety checks, but header include order is thwarting me currently
    idStaticList < routeArea_t , 256 , false , TAG_IDLIST > areas; // Offset: 0x20

}; // Size: 0x1C38
