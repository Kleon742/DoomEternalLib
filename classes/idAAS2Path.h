struct idAAS2Path
{
    // path type
    int type; // Offset: 0x0

    // point the AI can move towards {{ units = m }}
    idVec3 moveGoal; // Offset: 0x4

    // the next point, after moveGoal, that the AI can move towards. {{ units = m }}
    idVec3 moveGoal2; // Offset: 0x10

    // number of the area the AI can move towards
    int moveAreaNum; // Offset: 0x1C

    // first edge crossed
    aas2EdgeCrossed_t firstEdge; // Offset: 0x20

    // index of the next reachability in the path ( < 0 means no reachability )
    idIndex < int , invalidReachability_t , - 1 > reachIndex; // Offset: 0x34

    // how long to get from start to goal end
    int travelTime; // Offset: 0x38

    // index of traversal in the AAS file ( <= 0 means no traversal )
    idIndex < short , invalidAASTraversalIndex_t , 0 > traversalIndex; // Offset: 0x3C

    // traversal start point if next point in the path is a traversal ( if traversalIndex > 0 ) {{ units = m }}
    idVec3 traversalStart; // Offset: 0x40

    // traversal end point if the next point in the path is a traversal ( if traversalIndex > 0) {{ units = m }}
    idVec3 traversalEnd; // Offset: 0x4C

    // index of the traversal dependency in the AAS file ( <= 0 means no dependency )
    idIndex < short , invalidAASDependencyIndex_t , - 1 > dependencyIndex; // Offset: 0x58

    // point the obstacle avoidance should try to move towards {{ units = m }}
    idVec3 obstacleGoal; // Offset: 0x5C

    // number of the area the obstacle avoidance should try to move towards
    int obstacleAreaNum; // Offset: 0x68

    // Highest z value on path - useful for flying paths {{ units = m }}
    float pathMaxHeight; // Offset: 0x6C

    // unbounded version of obstacle route
    obstacleRoute_Big_t obstacleRoute; // Offset: 0x70

    // list of all traversal indices on the path, where first index is next traversal
    idStaticList < idIndex < short , invalidAASTraversalIndex_t , INVALID_AAS_TRAVERSAL_INDEX > , 64 , false , TAG_IDLIST > traversals; // Offset: 0x1CA8

    // list of reachabilities, corresponds to above traversals
    idStaticList < idIndex < int , invalidReachability_t > , 64 , false , TAG_IDLIST > traversalReaches; // Offset: 0x1D40

    // whether or not to fill the above list
    bool fillTraversals; // Offset: 0x1E58

}; // Size: 0x1E60
