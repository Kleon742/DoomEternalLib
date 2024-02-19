struct fakePathParticle_t
{
    idEntityPtr_ThreadSafe < idEntity > fxEntity; // Offset: 0x0

    idRibbon2 ribbon; // Offset: 0x18

    tagData_t tagData; // Offset: 0x130

    // {{ units = m }}
    idVec3 pathSpaceOrigin; // Offset: 0x150

    // {{ units = m }}
    idVec3 pathSpaceOrigin_original; // Offset: 0x15C

    // {{ units = m }}
    idVec3 worldSpaceTranslation_radial; // Offset: 0x168

    // {{ units = m }}
    idVec3 wanderTarget; // Offset: 0x174

    // {{ units = m }}
    idVec3 wanderOrigin; // Offset: 0x180

    // {{ units = m }}
    idVec3 lastWorldSpaceWanderPoint; // Offset: 0x18C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ribbonStartTime; // Offset: 0x198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ribbonStopTime; // Offset: 0x1A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > collapseTime; // Offset: 0x1A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x1B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > collapseDuration; // Offset: 0x1B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeOutDuration; // Offset: 0x1C0

    float wanderFraction; // Offset: 0x1C8

    float wanderSeekSpeed; // Offset: 0x1CC

    int declIndex; // Offset: 0x1D0

    // {{ units = m / s }}
    float radialVelocity_target; // Offset: 0x1D4

    // {{ units = m / s }}
    float radialVelocity_current; // Offset: 0x1D8

    // {{ units = m / ( s * s ) }}
    float radialVelocity_accel; // Offset: 0x1DC

    // {{ units = m / s }}
    float pathVelocity_target; // Offset: 0x1E0

    // {{ units = m / s }}
    float pathVelocity_current; // Offset: 0x1E4

    // {{ units = m / ( s * s ) }}
    float pathVelocity_accel; // Offset: 0x1E8

    float lastSplineTime; // Offset: 0x1EC

    float lastSplineTimeDelta; // Offset: 0x1F0

}; // Size: 0x1F8
