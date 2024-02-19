struct idPlayerMechanicLedgeInfo
{
    enum edgeType_t : int
    {
        EDGE_TYPE_SQUARE = 0,
        EDGE_TYPE_ROUNDED = 1,
        EDGE_TYPE_ANGLED = 2
    };

    // whether we're blocked in the forward direction in the given test direction
    bool blockedForward; // Offset: 0x0

    // whether the angles of the ledge face allow it to be valid
    bool validFace; // Offset: 0x1

    // whether the angles of the ledge surface allow it to be valid
    bool validSurface; // Offset: 0x2

    // how far forward the blockage is in the given test direction {{ units = m }}
    float blockDistForward; // Offset: 0x4

    // how far the ledge is clear past the front edge {{ units = m }}
    float clearDistUpForward; // Offset: 0x8

    // whether there is a ledge ahead
    bool ledgeForward; // Offset: 0xC

    // height of the ledge relative to the test position {{ units = m }}
    float ledgeDeltaHeight; // Offset: 0x10

    // height of the ledge above the ground {{ units = m }}
    float ledgeHeightAboveGround; // Offset: 0x14

    // clear depth of the ledge in the direction of the forward test axis ABOVE the ledge surface {{ units = m }}
    float ledgeDepth; // Offset: 0x18

    // thickness of the ledge in the direction of the forward test axis (requires a back face) {{ units = m }}
    float ledgeThickness; // Offset: 0x1C

    // normal to the face of the ledge
    idVec3 ledgeFaceNormal; // Offset: 0x20

    // normal at the surface of the ledge
    idVec3 ledgeSurfaceNormal; // Offset: 0x2C

    // whether the player can stand on the ledge or not
    bool canStand; // Offset: 0x38

    // the delta height between the start ground and the end ground {{ units = m }}
    float landingDeltaHeight; // Offset: 0x3C

    // position detected on ledge, if any {{ units = m }}
    idVec3 ledgePos; // Offset: 0x40

    // spawnId of the ledge
    idSpawnId ledgeSpawnId; // Offset: 0x4C

    idPlayerMechanicLedgeInfo::edgeType_t edgeType; // Offset: 0x50

}; // Size: 0x54
