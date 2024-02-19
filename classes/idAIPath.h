struct idAIPath
{
    enum pathType_t : int
    {
        PATH_EMPTY = 0,
        PATH_DISCRETE = 1,
        PATH_SPLINE = 2,
        PATH_TYPE_MAX = 3
    };

    // underlying spline path we can follow through the world {{ ___ts = m }}
    idCurve_CatmullRomSpline < idVec3 > splinePath; // Offset: 0x0

    // underlying route we got from AAS routing
    navPath_t route; // Offset: 0x60

    // list of pathable points we can follow in the world
    idStaticList < idCornerInfo , 128 , false , TAG_IDLIST > corners; // Offset: 0x8B0

    // index of traversal in the route
    int traversalRouteIndex; // Offset: 0x10C8

    // index of traversal in the AAS file ( <= 0 means no traversal )
    idNavIndex < invalidReach_t > traversalReachIndex; // Offset: 0x10CC

    // traversal start point if next point in the path is a traversal ( if traversalIndex > 0 ) {{ units = m }}
    idVec3 traversalStart; // Offset: 0x10D0

    // traversal end point if the next point in the path is a traversal ( if traversalIndex > 0) {{ units = m }}
    idVec3 traversalEnd; // Offset: 0x10DC

    float lastPathTime; // Offset: 0x10E8

    // {{ units = m }}
    float splineLength; // Offset: 0x10EC

    // type of this path
    idAIPath::pathType_t type; // Offset: 0x10F0

    bool dirty; // Offset: 0x10F4

}; // Size: 0x10F8
