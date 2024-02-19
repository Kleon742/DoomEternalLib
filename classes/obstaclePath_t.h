struct obstaclePath_t
{
    enum radarDirection_t : int
    {
        RADAR_BACKWARD = 0,
        RADAR_LEFT = 1,
        RADAR_RIGHT = 2,
        RADAR_FORWARD_LEFT = 3,
        RADAR_FORWARD_RIGHT = 4,
        RADAR_BACKWARD_LEFT = 5,
        RADAR_BACKWARD_RIGHT = 6,
        RADAR_FORWARD = 7,
        RADAR_MAX = 8
    };

    struct radar_t
    {
        // {{ units = m }}
        idVec3 direction; // Offset: 0x0

        int obstacle; // Offset: 0xC

    }; // Size: 0x10

    // first and next seek position avoiding obstacles are index 0 and 1, numCorners - 1 is always final goal {{ units = m }}
    idVec3 seekPos[31]; // Offset: 0x0

    int numSeekPos; // Offset: 0x174

    // plane used to select one of the two seek positions
    idPlane seekPosPlane; // Offset: 0x178

    // position where the original path first intersected an obstacle {{ units = m }}
    idVec3 firstObstaclePosition; // Offset: 0x188

    // if != OBSTACLE_ID_INVALID the first obstacle along the path
    int firstObstacle; // Offset: 0x194

    // start position outside obstacles {{ units = m }}
    idVec3 startPosOutsideObstacles; // Offset: 0x198

    // if != OBSTACLE_ID_INVALID the obstacle containing the start position
    int startPosObstacle; // Offset: 0x1A4

    // seek position outside obstacles {{ units = m }}
    idVec3 seekPosOutsideObstacles; // Offset: 0x1A8

    // if != OBSTACLE_ID_INVALID the obstacle containing the seek position
    int seekPosObstacle; // Offset: 0x1B4

    // how close the path around obstacles gets to the target {{ units = m }}
    float targetDist; // Offset: 0x1B8

    // length of the path {{ units = m }}
    float pathLength; // Offset: 0x1BC

    // position of the next corner (only valid if nextCorner.w != 0.0f) {{ units = m }}
    idVec4 nextCorner; // Offset: 0x1C0

    // angle at the next corner
    float nextCornerAngle; // Offset: 0x1D0

    // {{ units = m }}
    idVec3 wallCorners[2]; // Offset: 0x1D4

    obstaclePath_t::radar_t radar[8]; // Offset: 0x1EC

    // if true, use "radarForward" instead of next path point. Also provides padding to make sizeof( obstaclePath_t ) a 16 byte multiple.
    bool useRadarForward; // Offset: 0x26C

    // use this as the radars "forward" - useful if want to set the forward to the AI facing.
    idVec3 radarForward; // Offset: 0x270

    // true if a valid path was found
    bool hasValidPath; // Offset: 0x27C

    // if false no valid position outside obstacles was found for the start position
    bool startPosValid; // Offset: 0x27D

    // if false no valid position outside obstacles was found for the seek position
    bool seekPosValid; // Offset: 0x27E

    bool done; // Offset: 0x27F

    // if true, character bounds projected on path is clear for at least 2x bounds length along path
    bool pathBoundsClear; // Offset: 0x280

    unsigned char pad[15]; // Offset: 0x281

}; // Size: 0x290
