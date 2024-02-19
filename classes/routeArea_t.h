struct routeArea_t
{
    // area number this part of the route is in
    unsigned short areaNum; // Offset: 0x0

    // if false, obstacle avoidance should ignore this area and all areas after it in the route
    bool optimizable; // Offset: 0x2

    // nothing... padding
    bool pad; // Offset: 0x3

    // point where we entered the area (end point of the reach entering the area) {{ units = m }}
    idVec3 start; // Offset: 0x4

    // point were we exit the area (start point of the reach exiting the area) {{ units = m }}
    idVec3 end; // Offset: 0x10

}; // Size: 0x1C
