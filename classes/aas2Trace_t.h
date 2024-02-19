struct aas2Trace_t
{
    // -----------------------  Parameters ----------------------- areas with these flags block the trace
    int flags; // Offset: 0x0

    // areas with these travel flags block the trace
    int travelFlags; // Offset: 0x4

    // size of the 'areas' array
    int maxAreas; // Offset: 0x8

    // trace out of solid if the trace starts in solid
    int getOutOfSolid; // Offset: 0xC

    // -----------------------  Output ----------------------- fraction of trace completed
    float fraction; // Offset: 0x10

    // end position of trace {{ units = m }}
    idVec3 endpos; // Offset: 0x14

    // plane hit
    int planeNum; // Offset: 0x20

    // number of last area the trace went through
    int lastAreaNum; // Offset: 0x24

    // area that could not be entered
    int blockingAreaNum; // Offset: 0x28

    // number of areas the trace went through
    int numAreas; // Offset: 0x2C

    // array to store areas the trace went through
    int* areas; // Offset: 0x30

    // points where the trace entered each new area {{ units = m }}
    idVec3* points; // Offset: 0x38

}; // Size: 0x40
