struct idAAS2PathPoint
{
    // area path goes through
    int areaNum; // Offset: 0x0

    // position in this area {{ units = m }}
    idVec3 origin; // Offset: 0x4

    // index of the reachability that goes to the next point
    idIndex < int , invalidReachability_t , - 1 > nextReachIndex; // Offset: 0x10

    // travel time to this area
    int travelTime; // Offset: 0x14

}; // Size: 0x18
