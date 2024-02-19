struct oaAnimQueryParms_t
{
    // location to test from {{ units = m }}
    idVec2 sourceOrigin1; // Offset: 0x0

    // second point on line segment to test from ( optional ) {{ units = m }}
    idVec2 sourceOrigin2; // Offset: 0x8

    idVec2 sourceAxis; // Offset: 0x10

    // {{ units = m }}
    idVec2 destinationOrigin; // Offset: 0x18

    idVec2 destinationAxis; // Offset: 0x20

    // {{ units = m }}
    float radius; // Offset: 0x28

    float minAlignDot_move; // Offset: 0x2C

    float minAlignDot_body; // Offset: 0x30

    // {{ units = m }}
    float totalDeltaBias_minDist; // Offset: 0x34

    // {{ units = m }}
    float totalDeltaBias_normalizationDist; // Offset: 0x38

    float totalDeltaBias_factor; // Offset: 0x3C

    int suggestedFlags; // Offset: 0x40

    int debugDrawTime; // Offset: 0x44

    // starting index of anims in array
    int animStartIndex; // Offset: 0x48

    // number of animations in this run
    int numAnims; // Offset: 0x4C

    // index of this run in the aimanager's cache
    int cacheID; // Offset: 0x50

    animQueryFlags_t flags; // Offset: 0x54

}; // Size: 0x58
