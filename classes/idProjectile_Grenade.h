struct idProjectile_Grenade : idProjectile
{
    struct zombieAtrractLOS_t
    {
        idHavokQueryId obstructedQuery; // Offset: 0x0

        idManagedClassPtr < idEntity > ai; // Offset: 0x8

    }; // Size: 0x28

    struct idDynamicStuckToEntityData_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        idVec3 lastOrigin; // Offset: 0x20

    }; // Size: 0x30

    // affects 'explodeOnActors' and 'explodeOnImpact'; 0 = Never disable contact trigger; 1 = Only explode if first contact is target
    int numBouncesBeforeContactTriggerDisabled; // Offset: 0x2AB0

    // the max distance this emp grenade will be pulled to a power source! {{ units = m }}
    float attractToPowerDist; // Offset: 0x2AB4

    // extra pitch to add to facing to determine launch angle {range(-90,90)} (added from Doom4)
    float launchAngle; // Offset: 0x2AB8

    // alternate detonation delay when grenade is released uncooked (in MS)
    idTypesafeTime < int , millisecondUnique_t , 1000 > uncookedDetonationDelay; // Offset: 0x2ABC

    // resets the timer to uncookedDetonationDelay when it comes to rest, even if it was set already
    bool forceRestartTimerOnRest; // Offset: 0x2AC0

    // is this a threatening grenade?
    bool threatening; // Offset: 0x2AC1

    // deployable info item icon as displayed in the inventory screen
    idMaterial2* icon; // Offset: 0x2AC8

    // This grenade will suck enemies towards it before it explodes
    bool canEquipmentPull; // Offset: 0x2AD0

    // zombies walk towards grenade
    bool attractsZombies; // Offset: 0x2AD1

    // zombie distance from projectile to attract it {{ units = m }}
    float attractZombieAffectRange; // Offset: 0x2AD4

    // scale applied to zombie speed
    float attractZombieSpeedScale; // Offset: 0x2AD8

    // at what distance should this visualize as a lethal grenade (still only shows up after ai event) {{ units = m }}
    float lethalRangeDistance; // Offset: 0x2ADC

    // which indicator icon to show *** I'm not sure what the different types are but, "-1" now disables showing any indicator ***
    int grenadeIndicatorType; // Offset: 0x2AE0

    // Only starts the detonation timer on collisions which are less than a 45 degree slope
    bool startDetTimeOnFlatGround; // Offset: 0x2AE4

    // will delete the projectile when it hits dynamic entity shield (e.g. the soul barrier)
    bool deleteWhenHitDynamicEntityShields; // Offset: 0x2AE5

    // damage decls that do not damage this grenade
    idList < const idDeclDamage * , TAG_IDLIST , false > notDamagedBy; // Offset: 0x2AE8

    idStaticList < idProjectile_Grenade::zombieAtrractLOS_t , 10 , false , TAG_IDLIST > zombieLOSList; // Offset: 0x2B00

    idStaticList < idManagedClassPtr < idEntity > , 10 , false , TAG_IDLIST > zombieAttractList; // Offset: 0x2CA8

    // physics object
    idHavokPhysics_RigidBody physicsObjHavok; // Offset: 0x2E00

    // common physics object
    idPhysics* commonPhysicsObj; // Offset: 0x3050

    // equipment pull info number of enemies being pulled in by this piece of equipment
    int numEnemiesBeingPulled; // Offset: 0x3058

    // extrapolation based description of the position over time {{ ___ts = m }}
    idExtrapolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > linearExtrapolation; // Offset: 0x3060

    // Record of all entities affected
    idList < idEntityPtr_ThreadSafe < idAI2 > , TAG_IDLIST , false > pulledAIList; // Offset: 0x30B8

    // stop condition to use for any pulled AI
    fxCondition_t pullStopCondition; // Offset: 0x30D0

    // contact point of the last surface we collided with {{ units = m }}
    idVec3 lastCollisionPosition; // Offset: 0x30D4

    // normal of the last surface we collided with
    idVec3 lastCollisionNormal; // Offset: 0x30E0

    // axis before last collision
    idMat3 lastCollisionAxis; // Offset: 0x30EC

    // last collision data
    trace_t lastCollision; // Offset: 0x3110

    // last time a bounce sound was played
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > bounceTime; // Offset: 0x3190

    // number of times the grenade has bounced
    int numBounces; // Offset: 0x3198

    // previous updates number of bounces
    int lastNumBounces; // Offset: 0x319C

    // time the server reported that the grenade started cooking, allows us to animate it correctly.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverCookStartTime; // Offset: 0x31A0

    // flag so we know when we have tried to play the launch anim on this client
    bool playedLaunch; // Offset: 0x31A8

    // used to track what type of physicsObj is allocated
    bool usingSimplePhysics; // Offset: 0x31A9

    // Has our detonation delay timer been shortened by a bounce
    bool hasDetonationTimerBeenShortened; // Offset: 0x31AA

    // Bool for warning sound functions
    bool postedWarningSoundEvent_Grenade; // Offset: 0x31AB

    idHavokGatherQueryId boundsQuery; // Offset: 0x31B0

    // handle of player event to detect this grenade
    idHandle < int , invalidAIEvent_t , INVALID_AIEVENT > playerEventHandle; // Offset: 0x31B8

    // deferred trace a trace down on the Z to see what surf we are close to
    idHavokQueryId deferredSurfTrace; // Offset: 0x31C0

    // a trace down on the Z to see what surf we are close to
    idHavokQueryId havokDeferredSurfaceTrace; // Offset: 0x31C8

    // used for EMP sticking to a power source
    idSoundEvent* empStuckToSound; // Offset: 0x31D0

    // used for EMP sticking to a power source
    idSoundEvent* empMoveToSound; // Offset: 0x31D8

    // the power source we are going to move to
    idEntity* powerSourceToMoveTo; // Offset: 0x31E0

    // Data for the entity we are stuck to if we are stuck to one (expected to be idDynamicEntity or idMover)
    idProjectile_Grenade::idDynamicStuckToEntityData_t dynamicStuckToEntityData; // Offset: 0x31E8

    idTouchComponent touchComponent; // Offset: 0x3218

    // SWF decl for any icon on a projectile
    idDeclPOI* POI_Icon; // Offset: 0x3290

    // ID for point of interest
    int POI_Icon_ID; // Offset: 0x3298

}; // Size: 0x32A0
