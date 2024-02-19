struct idObstacleAvoidanceCore
{
    enum avoidColor_t : int
    {
        COLOR_INVALID = 0,
        COLOR_WHITE = 1,
        COLOR_GRAY = 2,
        COLOR_RED = 3,
        COLOR_BLUE = 4,
        COLOR_GREEN = 5,
        COLOR_YELLOW = 6,
        COLOR_ORANGE = 7,
        COLOR_PURPLE = 8,
        COLOR_CYAN = 9,
        COLOR_MAGENTA = 10
    };

    struct expandedObstacle_t
    {
        // two-dimensional bounds (in x-y plane) for obstacle {{ units = m }}
        idVec2 bounds[2]; // Offset: 0x0

        // two-dimensional winding (in x-y plane) for obstacle {{ units = m }}
        idVec2* winding; // Offset: 0x10

        // min and max z values along this obstacle {{ units = m }}
        idVec2 verticalExtents; // Offset: 0x18

        // number of points on the winding
        int numPoints; // Offset: 0x20

        // obstacle id
        int id; // Offset: 0x24

        // true if the is a soft obstacle
        bool soft; // Offset: 0x28

        // true if it is ignored
        bool ignored; // Offset: 0x29

        // true if this obstacle ever passed any vertical extents check
        bool passedAnyVerticalTest; // Offset: 0x2A

        // padding
        unsigned char pad[1]; // Offset: 0x2B

    }; // Size: 0x30

    struct bspNode_t
    {
        int axis; // Offset: 0x0

        // {{ units = m }}
        float dist; // Offset: 0x4

        short children[2]; // Offset: 0x8

        short indexOffset; // Offset: 0xC

        short numIndices; // Offset: 0xE

    }; // Size: 0x10

    struct pathNode_t
    {
        // 0 = left, 1 = right
        int dir; // Offset: 0x0

        // {{ units = m }}
        idVec2 pos; // Offset: 0x4

        // {{ units = m }}
        idVec2 delta; // Offset: 0xC

        // {{ units = m }}
        idVec2 verticalExtents; // Offset: 0x14

        // {{ units = m * m }}
        float targetDistSqr; // Offset: 0x1C

        int obstacle; // Offset: 0x20

        int edgeNum; // Offset: 0x24

        int numNodes; // Offset: 0x28

        idObstacleAvoidanceCore::pathNode_t* parent; // Offset: 0x30

        idObstacleAvoidanceCore::pathNode_t* children[2]; // Offset: 0x38

        // idQueueNode<pathNode_t>queueNode;
        int queueNext; // Offset: 0x48

    }; // Size: 0x50

    idObstacleAvoidanceCore::bspNode_t* bspNodes; // Offset: 0x0

    int numBspNodes; // Offset: 0x8

    short* obstacleIndices; // Offset: 0x10

    idObstacleAvoidanceCore::expandedObstacle_t* expandedObstacles; // Offset: 0x18

    int maxExpandedObstacles; // Offset: 0x20

    int numExpandedObstacles; // Offset: 0x24

    // {{ units = m }}
    idVec2* windingPoints; // Offset: 0x28

    int maxWindingPoints; // Offset: 0x30

    int numWindingPoints; // Offset: 0x34

    unsigned char* tempMemory; // Offset: 0x38

    int tempMemorySize; // Offset: 0x40

    unsigned char* tempMemoryStart; // Offset: 0x48

    unsigned char* tempMemoryEnd; // Offset: 0x50

    idObstacleAvoidanceCore::pathNode_t* pathNodes; // Offset: 0x58

    int maxPathNodes; // Offset: 0x60

    int numPathNodes; // Offset: 0x64

    avoidDebugLine_t* debugLines; // Offset: 0x68

    int maxDebugLines; // Offset: 0x70

    int numDebugLines; // Offset: 0x74

    // if non-NULL, we can use this instead of the hacky debug lines
    idRenderDebug* renderDebug; // Offset: 0x78

    avoidDebugText_t* debugText; // Offset: 0x80

    int maxDebugText; // Offset: 0x88

    int numDebugText; // Offset: 0x8C

    avoidDebugSphere_t* debugSpheres; // Offset: 0x90

    int maxDebugSpheres; // Offset: 0x98

    int numDebugSpheres; // Offset: 0x9C

    bool inputTransformValid; // Offset: 0xA0

    idMat3x4 inputTransform; // Offset: 0xA4

    int flags; // Offset: 0xD4

    int numOptimizableRouteAreas; // Offset: 0xD8

}; // Size: 0xE0
