struct idFakePath
{
    enum fakePathState_t : int
    {
        PATH_NONE = 0,
        PATH_PREP = 1,
        PATH_IDLE = 2,
        PATH_START = 3,
        PATH_MOVE = 4,
        PATH_STOP = 5,
        PATH_STATE_MAX = 6
    };

    // idList< fakePathBreadcrumb_t >breadcrumbs;
    idMat3 pathAxis; // Offset: 0x0

    idAIAnimWebState startTransitionState; // Offset: 0x28

    idAIAnimWebState stopTransitionState; // Offset: 0x58

    idAIAnimWebState moveCycleState; // Offset: 0x88

    // {{ units = m }}
    idVec3 stopTransitionOrigin; // Offset: 0xB8

    idVec3 startOrigin; // Offset: 0xC4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startSplineMoveTime; // Offset: 0xD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > desiredSplineMoveDuration; // Offset: 0xE0

    idFakePath::fakePathState_t state; // Offset: 0xE8

    int startTransitionIndex; // Offset: 0xEC

    int stopTransitionIndex; // Offset: 0xF0

    // {{ units = m }}
    float stopTransitionDistance; // Offset: 0xF4

}; // Size: 0xF8
