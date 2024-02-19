struct aas2TraceFloor_t
{
    // fraction of trace completed
    float fraction; // Offset: 0x0

    // end position of trace {{ units = m }}
    idVec3 endpos; // Offset: 0x4

    // last area the trace went through
    int lastAreaNum; // Offset: 0x10

    // first edge crossed
    aas2EdgeCrossed_t firstEdge; // Offset: 0x14

    // last edge crossed
    aas2EdgeCrossed_t lastEdge; // Offset: 0x28

    int maxAreas; // Offset: 0x3C

    int numAreas; // Offset: 0x40

    int maxReachIndices; // Offset: 0x44

    int numReachIndices; // Offset: 0x48

    int* areas; // Offset: 0x50

    idIndex < int , invalidReachability_t , - 1 >* reachIndices; // Offset: 0x58

}; // Size: 0x60
