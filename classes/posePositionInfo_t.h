struct posePositionInfo_t
{
    // keep track of this so we can align precisely at the start of animations
    idMat3 startAxis; // Offset: 0x0

    idMat3 axis; // Offset: 0x24

    // {{ units = m }}
    idVec3 origin_raw; // Offset: 0x48

    // {{ units = m }}
    idVec3 aasReachableOrigin; // Offset: 0x54

    // {{ units = m }}
    idVec3 silhouetteDirection; // Offset: 0x60

    // {{ units = m }}
    idVec3 enemyEyeOrigin; // Offset: 0x6C

    // {{ units = m }}
    idVec3 aimOrigin; // Offset: 0x78

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > oldestLocationTime; // Offset: 0x88

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x90

    idFlags flags; // Offset: 0x98

    idIndex < int , invalidAIDataID_t , - 1 > queryID; // Offset: 0x9C

    idIndex < int , invalidAIDataID_t , - 1 > pathDataID; // Offset: 0xA0

    animQueryTestTypes_t passedTestTypes; // Offset: 0xA4

    int poseIndex; // Offset: 0xA8

    int trajectoryTestIndex; // Offset: 0xAC

    float currentEnemyVisibility; // Offset: 0xB0

    float otherEnemyVisibility; // Offset: 0xB4

    // {{ units = m }}
    float pathLength; // Offset: 0xB8

    float damageEval_origin; // Offset: 0xBC

    float damageEval_direction; // Offset: 0xC0

    float damageEval_intersection; // Offset: 0xC4

    float damageEval_pose; // Offset: 0xC8

    int totalShotsFired; // Offset: 0xCC

    int totalShotsBlocked; // Offset: 0xD0

    int totalAIInFiringArc; // Offset: 0xD4

    int totalAIFiringAtPoint; // Offset: 0xD8

    float pathCollisionFraction; // Offset: 0xDC

    float muzzleVisFraction; // Offset: 0xE0

    float eyeVisFraction; // Offset: 0xE4

    int declIndex; // Offset: 0xE8

    int setIndex; // Offset: 0xEC

    int originalListIndex; // Offset: 0xF0

    bool navigationValid; // Offset: 0xF4

}; // Size: 0xF8
