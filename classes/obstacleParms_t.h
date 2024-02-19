struct obstacleParms_t
{
    // axis aligned bounding box used for collision detection
    idBounds aas_bbox; // Offset: 0x0

    // for path bounds test
    idBounds pathBoundsBox; // Offset: 0x18

    // gravity direction
    idVec3 gravity; // Offset: 0x30

    // current character direction
    idVec3 currentDir; // Offset: 0x3C

    // last movement direction
    idVec3 lastDir; // Offset: 0x48

    // last corner being circled {{ units = m }}
    idVec4 lastCorner; // Offset: 0x54

    // radius within which obstacle avoidance is considered {{ units = m }}
    float obstacleRadius; // Offset: 0x64

    // movement speed in units per frame {{ units = m }}
    float frameMoveDist; // Offset: 0x68

    // radius of circular obstacle placed on the AI's next corner {{ units = m }}
    float cornerCircleRadius; // Offset: 0x6C

    // distance along path to check bbox {{ units = m }}
    float pathBoundsDistance; // Offset: 0x70

    // last speed of character
    float lastSpeed; // Offset: 0x74

    // inside of this radius from start point, add extra inertia penalty to direction changes {{ units = m }}
    float speedApplicationDist; // Offset: 0x78

    // magic number, sort-of-ish like the mass of the character {{ units = m }}
    float inertiaFactor; // Offset: 0x7C

    int flags; // Offset: 0x80

    // replaces REACHED_EPSILON {{ units = m }}
    float reachedEpsilon; // Offset: 0x84

    int numObstacles; // Offset: 0x88

    int numVertices; // Offset: 0x8C

    int numEdges; // Offset: 0x90

    int numCorners; // Offset: 0x94

    int numTraces; // Offset: 0x98

    int maxDebugLines; // Offset: 0x9C

    int maxDebugText; // Offset: 0xA0

    int maxDebugSpheres; // Offset: 0xA4

    void* temp; // Offset: 0xA8

    int tempSize; // Offset: 0xB0

    obstacleRoute_t* route; // Offset: 0xB8

    obstacleBox_t* obstacles; // Offset: 0xC0

    obstacleVertex_t* vertices; // Offset: 0xC8

    obstacleEdge_t* edges; // Offset: 0xD0

    obstacleCorner_t* corners; // Offset: 0xD8

    obstacleTrace_t* traces; // Offset: 0xE0

    float* traceFractions; // Offset: 0xE8

    obstaclePath_t* path; // Offset: 0xF0

    avoidDebugLine_t* debugLines; // Offset: 0xF8

    avoidDebugText_t* debugText; // Offset: 0x100

    avoidDebugSphere_t* debugSpheres; // Offset: 0x108

    obstacleAnim_t* anims; // Offset: 0x110

    int numAnims; // Offset: 0x118

    oaAnimQueryParms_t* animParms; // Offset: 0x120

    oaAnimQueryResult_t* animResults; // Offset: 0x128

    int numAnimQueries; // Offset: 0x130

    int pathBoundsClear; // Offset: 0x134

    idRenderDebug* renderDebug; // Offset: 0x138

}; // Size: 0x140
