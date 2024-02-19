struct seekParms_t
{
    // whether this projectile can seek or not
    bool canSeek; // Offset: 0x0

    // if true then projectile should ignore all other params and always make a beeline for the seek point
    bool beeline; // Offset: 0x1

    // should this projectile look for a target (or will it have a target assigned to by something else?)
    bool lookForTarget; // Offset: 0x2

    // degrees of cone to search for seek targets
    float seekConeDegs; // Offset: 0x4

    // distance which cone to search for seek targets {{ units = m }}
    float seekConeDist; // Offset: 0x8

    // the target to seek
    idProjectileTarget target; // Offset: 0x10

    // stores the last position of the target to use after it dies
    idVec3 targetLastPos; // Offset: 0x48

    // seeking angular accel in degrees / sec2 (angular velocity is increased this much per frame, clamped at maxAngularVel) {{ units = degrees / ( s * s ) }}
    float angularAccel; // Offset: 0x54

    // if > 0 and < angularAccel then randomize angular accel in the range (minAngularAccel, angularAccel) {{ units = degrees / ( s * s ) }}
    float minAngularAccel; // Offset: 0x58

    // updated each from with angularAccelAdjust {{ units = degrees / ( s * s ) }}
    float curAngularAccel; // Offset: 0x5C

    // adjusts angularAccel value per frame {{ units = degrees / ( s * s * s ) }}
    float angularAccelAdjust; // Offset: 0x60

    // override value from weapon mod {{ units = degrees / ( s * s ) }}
    float overrideAngularAccel; // Offset: 0x64

    // current seek angular vel in {{ units = degrees / s }}
    float curAngularVel; // Offset: 0x68

    // seeking angular velocity in {{ units = degrees / s }}
    float maxAngularVel; // Offset: 0x6C

    // override value from weapon mod {{ units = degrees / s }}
    float overrideMaxAngularVel; // Offset: 0x70

    // Do not seek a target for any reason until projectile has traveled at least this far (unless the target is within delayMinDist) {{ units = m }}
    float disableSeekDistance; // Offset: 0x74

    // only seek if target is within this distance {{ units = m }}
    float minDist; // Offset: 0x78

    // the minimum length of time before the projectile starts seeking the target
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMinMS; // Offset: 0x7C

    // the maximum length of time before the projectile starts seeking the target
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMaxMS; // Offset: 0x80

    // while the seek delay is active, the projectile can seek another point within this distance of the actual target {{ units = m }}
    float delayTargetDist; // Offset: 0x84

    // distance from the target at which delayTargetDist is ramped to zero {{ units = m }}
    float delayTargetRampToZeroDist; // Offset: 0x88

    // how long the projectile will target each fake target before calculating another one
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMinTargetDurationMS; // Offset: 0x8C

    // how long the projectile will target each fake target before calculating another one
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMaxTargetDurationMS; // Offset: 0x90

    // stop delaying the seek if the target is within this distance {{ units = m }}
    float delayMinDist; // Offset: 0x94

    // the temporary target position during the seek delay {{ units = m }}
    idVec3 delayTargetPos; // Offset: 0x98

    // the time when the next fake target will be selected
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayNextTargetTime; // Offset: 0xA8

    // seeking should lead the targets velocity
    bool leadTarget; // Offset: 0xB0

    // the tag to seek to
    idTagInfo* seekTag; // Offset: 0xB8

    // the time when the seeking behavior will kick in
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xC0

    seekState_t seekState; // Offset: 0xC8

    // projectile explodes when it is this close to the target {{ units = m }}
    float explodeRange; // Offset: 0xCC

    // range to dead target to explode
    float explodeRangeDeadTarget; // Offset: 0xD0

    bool targetDied; // Offset: 0xD4

    // allows a projectile to not explode when it hits its target
    bool ignoreCollisionsWithTarget; // Offset: 0xD5

    // list of points to seek
    idList < aimPoint_t , TAG_IDLIST , false > seekPoints; // Offset: 0xD8

    // aim point the projectile is currently seeking
    aimPoint_t currentSeekPoint; // Offset: 0xF0

    idHavokQueryId seekPointQuery_Havok; // Offset: 0xF8

    // decide do ray cast to seek new target point
    bool calculateSeekPoint; // Offset: 0x100

    // if true, allow seeking of non-actors
    bool canSeekNonActors; // Offset: 0x101

    // if > 0, then the projectile will lose target after deviating this much from initial seek heading per axis
    float maxHeadingDeviationDegs; // Offset: 0x104

}; // Size: 0x108
