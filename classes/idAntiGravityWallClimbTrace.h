struct idAntiGravityWallClimbTrace
{
    idHavokQueryId query; // Offset: 0x0

    trace_t trace; // Offset: 0x8

    int resolveFrame; // Offset: 0x88

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x8C

    // {{ units = m }}
    idVec3 endPos; // Offset: 0x98

}; // Size: 0xA8
