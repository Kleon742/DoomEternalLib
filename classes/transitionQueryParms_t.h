struct transitionQueryParms_t
{
    // {{ units = m }}
    idStaticList < idVec3 , 128 , false , TAG_IDLIST > cachedCorners; // Offset: 0x0

    idMat3 sourceAxis; // Offset: 0x618

    idMat3 destinationAxis; // Offset: 0x63C

    // location to test from {{ units = m }}
    idVec3 sourceOrigin1; // Offset: 0x660

    // second point on line segment to test from ( optional ) {{ units = m }}
    idVec3 sourceOrigin2; // Offset: 0x66C

    // {{ units = m }}
    idVec3 destinationOrigin; // Offset: 0x678

    idStr injuredStateName; // Offset: 0x688

    // {{ units = m }}
    float arrivalRadius; // Offset: 0x6B8

    // {{ units = m }}
    float totalPathDistance; // Offset: 0x6BC

    // max straight line distance along the source axis(to the goal or on the navigation) {{ units = m }}
    float pathDistanceAlongAxis; // Offset: 0x6C0

    int debugDrawTime; // Offset: 0x6C4

    aiAnimQueryFlags_t flags; // Offset: 0x6C8

}; // Size: 0x6D0
