struct idAASObstacle : idBloatedEntity
{
    enum cuttingType_t : int
    {
        CUT_NONE = 0,
        CUT_STATIC = 1,
        CUT_DYNAMIC = 2
    };

    // AAS travels flags to use when the obstacle is triggered "on". Defaults to "AAS_TFL_INVALID", i.e. not valid for pathing.
    aas2TravelFlag_t travelFlags; // Offset: 0xB88

    // none = does not cut navmesh, static = pre-cuts navmesh at gen time ( old style ), dynamic = cuts navmesh at runtime ( new )
    idAASObstacle::cuttingType_t cutType; // Offset: 0xB8C

    int obstacleHandle; // Offset: 0xB90

    // select which nav sizes to put this obstacle on
    navSizeBits_t navSizes; // Offset: 0xB94

    // start with the obstacle on which means AI can't path through the area
    bool startOn; // Offset: 0x0

    // if true, block traversals when non-cutting
    bool blockTraversalsNonCutting; // Offset: 0x0

    // use new fix to prevent traversal corrpution
    bool useNewFix; // Offset: 0x0

    // the current state of the AAS obstacle.
    bool enabled; // Offset: 0x0

}; // Size: 0xBA0
