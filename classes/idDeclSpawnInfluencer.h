struct idDeclSpawnInfluencer : idGameDeclTypeInfo
{
    enum teamFilter_t : int
    {
        TEAM_FILTER_ALL = 0,
        TEAM_FILTER_HOSTILE = 1,
        TEAM_FILTER_FRIENDLY = 2,
        TEAM_FILTER_TEAM_NONE = 3
    };

    struct influenceKeyframe_t
    {
        // How far from shape? (0.0 to 1.0) (center of sphere, or axis of cone or cylinder)
        float distancePercent; // Offset: 0x0

        // How much influence at that distance?
        float influence; // Offset: 0x4

    }; // Size: 0x8

    // apply influencer for these teams.
    idDeclSpawnInfluencer::teamFilter_t applyToTeam; // Offset: 0x90

    // if true, rotate the influencer to face the look direction of it's owner.
    bool rotateToLookDir; // Offset: 0x94

    // local space offset {{ units = m }}
    idVec3 offset; // Offset: 0x98

    // radius of the sphere of influence. {{ units = m }}
    float sphereRadius; // Offset: 0xA4

    // angle from axis at point of cone (where radius would be 0), to edge, in degrees.
    float coneAngle; // Offset: 0xA8

    // how tall is cone {{ units = m }}
    float coneHeight; // Offset: 0xAC

    // radius of cylinder {{ units = m }}
    float cylinderRadius; // Offset: 0xB0

    // height of cylinder. {{ units = m }}
    float cylinderHeight; // Offset: 0xB4

    // if true, cylinder is centered at it's position. if false, it's position is the base of the cylinder.
    bool cylinderCentered; // Offset: 0xB8

    // DEPRECATED: amount of influence added. (Can be negative.)
    float influence; // Offset: 0xBC

    // what type of influence we apply
    spawnInfluenceScoreType_t influenceType; // Offset: 0xC0

    // Defines influences at different distances. Should be sorted by distance, ascending.
    idList < idDeclSpawnInfluencer::influenceKeyframe_t , TAG_IDLIST , false > influenceKeyframes; // Offset: 0xC8

    // used with g_debugSpawnInfluencerGroup to show only certain spawn influencers
    int debugGroup; // Offset: 0xE0

}; // Size: 0xE8
