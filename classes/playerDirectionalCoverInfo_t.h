struct playerDirectionalCoverInfo_t
{
    // this test is disabled
    bool disabled; // Offset: 0x0

    // whether we're blocked in the forward direction in the given test direction
    bool blockedForward; // Offset: 0x1

    // how far forward the blockage is in the given test direction {{ units = m }}
    float blockedDistForward; // Offset: 0x4

    // minimum block dist forward over all the samples {{ units = m }}
    float blockedDistForwardMin; // Offset: 0x8

    // whether we've detected an edge or not in the specified test direction
    bool foundEdge; // Offset: 0xC

    // how far from the edge of cover we are with respect to the specified test direction {{ units = m }}
    float edgeDist; // Offset: 0x10

    // an actual point on the edge {{ units = m }}
    idVec3 edgePos; // Offset: 0x14

    // the test direction associated with the edge
    idVec3 edgeTestDir; // Offset: 0x20

    // indicates whether the detected edge, if any, is near enough to count as cover
    bool inCover; // Offset: 0x2C

}; // Size: 0x30
