struct idPinkyCombat_Charge : idAIState
{
    idVec3 startingOrigin; // Offset: 0x130

    // {{ units = m }}
    idVec3 previousOrigin; // Offset: 0x13C

    // {{ units = m }}
    idVec3 lastEnemyLocation; // Offset: 0x148

    // {{ units = m }}
    idVec3 scriptedChargeLocation; // Offset: 0x154

    idEntityPtr_ThreadSafe < idEntity > objectEntity; // Offset: 0x160

    // query to check for obstacle on the way
    idHavokQueryId obstacleQuery; // Offset: 0x178

    // query to check for fall down starting moment
    idHavokQueryId fallStartQuery; // Offset: 0x180

    // query to check for fall down landing
    idHavokQueryId fallStopQuery; // Offset: 0x188

    // query to check for anything on the way to fall down starting position
    idHavokQueryId toFallStartQuery; // Offset: 0x190

    // query to check for anything on the way from fall down starting position to landing
    idHavokQueryId toFallStopQuery; // Offset: 0x198

    // overshoot distance {{ units = m }}
    float overshootDistance; // Offset: 0x1A0

    // arrival tolerance {{ units = m }}
    float arrivalTolerance; // Offset: 0x1A4

    // min dot to enemy for triggering arrival
    float minArrivalDotToEnemy; // Offset: 0x1A8

    // no steering if closer than this
    float noTurnDistanceDuringArrival; // Offset: 0x1AC

    // max degrees per meter during arrival
    float maxDegreesPerMeterDuringArrival; // Offset: 0x1B0

    // re-target tolerance {{ units = m }}
    float retargetTolerance; // Offset: 0x1B4

    // obstacle test distance {{ units = m }}
    float traceDistance; // Offset: 0x1B8

    // nav mesh bounds scale
    float boundsScaleXY; // Offset: 0x1BC

    // nav mesh Z scale
    float boundsScaleZ; // Offset: 0x1C0

    // min dot with a closer Pinky that blocks charge
    float minBlockingDot; // Offset: 0x1C4

    // the pinky must move at least this distance to be stunned after hitting a wall
    float minDistanceForWallHitStun; // Offset: 0x1C8

    // true if charged location is defined as info path or goal
    bool hasScriptedChargeLocation; // Offset: 0x1CC

    float nextBlockingTestTime; // Offset: 0x1D0

    bool arrivalStarted; // Offset: 0x1D4

    bool hitObstacle; // Offset: 0x1D5

    bool fellFromLedge; // Offset: 0x1D6

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cumulativeTimeOnGoal; // Offset: 0x1D8

}; // Size: 0x1E0
