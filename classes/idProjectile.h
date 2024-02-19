struct idProjectile : idAnimatedEntity
{
    struct simulatedProjectile_t
    {
        idProjectile* projectile; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

    }; // Size: 0x10

    struct radiusDamageParms_t
    {
        idDeclDamage* damageDef; // Offset: 0x0

        float radiusInnerOverride; // Offset: 0x8

        float radiusOverride; // Offset: 0xC

        bool ignoreDirectTarget; // Offset: 0x10

        idVec3 pos; // Offset: 0x14

    }; // Size: 0x20

    struct solidHandler_t
    {
        // how many frames ahead to predict for solid entry
        int entryPredictionFrames; // Offset: 0x0

        idHavokQueryId entryQuery; // Offset: 0x8

        idHavokQueryId entryQuery_Havok; // Offset: 0x10

        // store the entry pos so that we can test back to it for exiting
        idVec3 entryPos; // Offset: 0x18

        // this avoids errors with missed exits how many frames ahead to predict for solid exit
        int exitPredictionFrames; // Offset: 0x24

        idHavokQueryId exitQuery; // Offset: 0x28

        idHavokQueryId exitQuery_Havok; // Offset: 0x30

        bool insideSolid; // Offset: 0x38

        // speed limit, or -1 to ignore
        float insideSolidMaxSpeed; // Offset: 0x3C

        // seek parameters
        seekParms_t insideSolidSeekParms; // Offset: 0x40

        // if false then use seekParms
        bool useInsideSolidSeekParms; // Offset: 0x148

    }; // Size: 0x150

    struct distanceBasedFXInfo_t
    {
        // Should use distance based fx
        bool enabled; // Offset: 0x0

        // Distance for start color
        float distanceStart; // Offset: 0x4

        // Distance for final color
        float distanceEnd; // Offset: 0x8

        // Color at start distance
        idColor colorStart; // Offset: 0xC

        // Color at end distance
        idColor colorEnd; // Offset: 0x1C

        // RTPC for how far along the object has traveled
        idSoundRTPC* rtpcTravelDistance; // Offset: 0x30

    }; // Size: 0x38

    struct distanceBasedDamageInfo_t
    {
        // Should use distance based damage for direct damage
        bool directEnabled; // Offset: 0x0

        // Should use distance based damage for splash damage
        bool splashEnabled; // Offset: 0x1

        // Below this distance will return damage decl's MinDamage
        float distanceStart; // Offset: 0x4

        // Above this distance will return damage decl's MaxDamage
        float distanceEnd; // Offset: 0x8

    }; // Size: 0xC

    struct collisionBrakesInfo_t
    {
        // Should use collision brake
        bool enabled; // Offset: 0x0

        // How hard to apply the brake
        float deceleration; // Offset: 0x4

        // How fast we should brake to
        float minimumSpeed; // Offset: 0x8

        // How far from collision we should begin to brake
        float brakeDistance; // Offset: 0xC

        // Should ignore actors when checking for collision
        bool ignoreActors; // Offset: 0x10

        // What collision to check against
        contentsFlags_t clipMask; // Offset: 0x14

    }; // Size: 0x18

    struct rotateAroundAxisInfo_t
    {
        bool enabled; // Offset: 0x0

        idVec3 velocityAddedLastFrame; // Offset: 0x4

        idVec3 lineStart; // Offset: 0x10

        idVec3 lineEnd; // Offset: 0x1C

        idVec3 lineForward; // Offset: 0x28

        idMat3 axis; // Offset: 0x34

        float speed; // Offset: 0x58

        float radius; // Offset: 0x5C

        float updateTime; // Offset: 0x60

    }; // Size: 0x64

    struct swallowData_t
    {
        bool swallowed; // Offset: 0x0

    }; // Size: 0x1

    struct directHitFixupParms_t
    {
        // what joint we hit
        int jointNum; // Offset: 0x0

        // offset from the joint the hit actually hit {{ units = m }}
        idVec3 jointOffset; // Offset: 0x4

        // the id of the body that was hit
        int bodyId; // Offset: 0x10

        // modelFeature hit on trace
        int modelFeature; // Offset: 0x14

        idEntity* hitEntity; // Offset: 0x18

    }; // Size: 0x20

    // flag used by explode to support a projectile exploding multiple times if necessary without prematurely turning off things that should be on until the very end indicates that explosion is partial and a final complete explosion will occur later
    bool explodePartialExplosion; // Offset: 0x1B48

    // seek parameters
    seekParms_t seekParms; // Offset: 0x1B50

    // solid handler data
    idProjectile::solidHandler_t solidHandler; // Offset: 0x1C58

    // projectile belongs to burst with this id (game time at burst start)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > burstId; // Offset: 0x1DA8

    // projectile is this # in the burst
    int burstIndex; // Offset: 0x1DB0

    // so that shots from the same burst can all use the same contact info
    contactImpulse_t burstContactImpulse; // Offset: 0x1DB4

    // This is a hack check that should be set for any AI entity whose projectiles have a chance to be frozen
    bool hideClientStuckProjectiles; // Offset: 0x1F24

    idVec3 previousNetworkOrigin; // Offset: 0x1F28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastMovingNetworkGT; // Offset: 0x1F38

    bool hiddenFromClientOnlyCheck; // Offset: 0x1F40

    // if true, passes right through actors
    bool passThroughActors; // Offset: 0x1F41

    // can damage gore but don't stop on it
    bool passThroughGore; // Offset: 0x1F42

    // stick to geometry or attach to other models
    bool stickOnImpact; // Offset: 0x1F43

    // if true, we move the physics origin back to the point of impact after a collision that sticks
    bool stickToImpactPoint; // Offset: 0x1F44

    // if false and stickOnImpact = true, then blow up immediately when touching an actor, instead of attaching
    bool stickToActors; // Offset: 0x1F45

    // use this tag to attach to actor.
    idAtomicString stickToActorTag; // Offset: 0x1F48

    // try to stick to everything
    bool stickToEverything; // Offset: 0x1F50

    // enables soft contacts
    bool enableSoftContacts; // Offset: 0x1F51

    // when 'stickToActors' is true, forces a Bind() rather than AddAttachment()
    bool stickToActorForceBind; // Offset: 0x1F52

    // stick instead of explode
    bool stickToDeadActors; // Offset: 0x1F53

    // damage and pass through AI targets but stick to damage groups with damageAndPassThroughStick = true
    bool damageAndPassThroughAITest; // Offset: 0x1F54

    // time when the projectile became stuck
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stuckTime; // Offset: 0x1F58

    // max time the projectile can be stuck, or 0 for unlimited
    idTypesafeTime < int , millisecondUnique_t , 1000 > stuckMaxTime; // Offset: 0x1F60

    // if true then use a specific stick depth instead of setting the origin to the collision point
    bool useStickDepth; // Offset: 0x1F64

    // how deep into something to stick {{ units = m }}
    float stickDepth; // Offset: 0x1F68

    // if true then explodes on contact with an actor
    bool explodeOnActors; // Offset: 0x1F6C

    // explode immediately when impacting with anything
    bool explodeOnImpact; // Offset: 0x1F6D

    // explode on any non-actor impact
    bool explodeOnImpactExcludeActors; // Offset: 0x1F6E

    // does this projectile cause direct damage on impact? (grenades shouldn't for example)
    bool causesDirectDamage; // Offset: 0x1F6F

    // if false then allow direct damage only once - if true then allow it once per target
    bool causesDamageOncePerTarget; // Offset: 0x1F70

    // tracks whether direct damage has been done, so that it isn't done more than once
    bool didDirectDamage; // Offset: 0x1F71

    // records the targets hit by direct damage (for penetrating projectiles)
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > directDamageTargets; // Offset: 0x1F78

    // suppresses the primary explosion fx so we can rely entirely on the extra fx condition
    bool suppressExplosionFx; // Offset: 0x1F90

    // if == false running on main thread, true == running on job
    bool inCustomJob; // Offset: 0x1F91

    // if we are a dummy projectile we don't do anything except move
    bool isDummy; // Offset: 0x1F92

    idAnimator_Channel propAnimator; // Offset: 0x1F98

    // number of times projectile has collided
    int collisionCount; // Offset: 0x20A8

    // For catching state changes on serialize
    int preSerializeCollisionCount; // Offset: 0x20AC

    // doom4: calculate the detonation delay on Spawn, so that it can be used before Launch
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > detonationDelay; // Offset: 0x20B0

    // override to the decl-based delay
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > detonationDelayOverride; // Offset: 0x20B8

    // when the detonation timer was started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startDetonationTime; // Offset: 0x20C0

    // max time at which detonation timer must start
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxDetonationTimerStartTime; // Offset: 0x20C8

    // time when detonation will occur ( no detonation if < 0 )
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > detonationTime; // Offset: 0x20D0

    // cached trace values when detonation is delayed
    trace_t detonationTrace; // Offset: 0x20D8

    // cached ent that was hit, if any
    idManagedClassPtr < idEntity > detonationEnt; // Offset: 0x2158

    // allows scheduling the explode damage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > explodeDamageTime; // Offset: 0x2178

    // happened yet or not
    bool didExplodeDamage; // Offset: 0x2180

    // when true uses the alternate splash damage decl
    bool useAltDamageDecl; // Offset: 0x2181

    // when true uses the alternate explosion fx
    bool useAltDamageFX; // Offset: 0x2182

    // when true uses the alternate explosion sound
    bool useAltExplodeSound; // Offset: 0x2183

    // override for explode sound
    idSoundEvent* explodeSoundOverride; // Offset: 0x2188

    // override for alt explode sound
    idSoundEvent* altExplodeSoundOverride; // Offset: 0x2190

    // when true, projectile was manually detonated by player
    bool manuallyDetonatedByPlayer; // Offset: 0x2198

    // true when this projectile is damaged by a hazard
    bool damagedByHazard; // Offset: 0x2199

    // don't play any explode sounds or fx
    bool muteExplodeSoundAndFx; // Offset: 0x219A

    // Is this grenade a cluster bomb?
    bool isClusterBomb; // Offset: 0x219B

    // adds damage over time on ai not killed by explosion
    bool dotUndeadOnDetonate; // Offset: 0x219C

    // damage decl used for dot of undead ai
    idDeclDamage* dotUndeadDamageDecl; // Offset: 0x21A0

    // sound to play when dot of undead occurs
    idSoundEvent* dotUndeadEventSound; // Offset: 0x21A8

    // fx to play when dot of undead occurs
    fxCondition_t dotUndeadEventFx; // Offset: 0x21B0

    // specify submunition info here
    idSubmunitionInfo submunitionInfo; // Offset: 0x21B8

    // the roll angle aligned to velocity of the projectile in flight (does not affect the physics object's rotation)
    float flightRollAngle; // Offset: 0x2210

    // used by the upgrade system to scale speed
    float speedScale; // Offset: 0x2214

    // used to store velocity alignment for alignExplosionToVelocity
    idMat3 velocityAlign; // Offset: 0x2218

    // ignore collisions with these entities
    idStaticList < idManagedClassPtr < idEntity > , 5 , false , TAG_IDLIST > ignoreCollisionEnts; // Offset: 0x2240

    // ignore collisions with these havok bodies
    idStaticList < idHavokBodyId , 5 , false , TAG_IDLIST > ignoreHavokBodies; // Offset: 0x22F8

    // passEnt sent for physics to ignore
    idSpawnId passEntSpawnId; // Offset: 0x2328

    // extra conditions for this projectile FX, set at launch
    fxExtraCondition_t fxExtraCondition; // Offset: 0x232C

    // Surface condition for explosions.
    fxCondition_t fxExplosionSurfCond; // Offset: 0x2330

    // how long to wait before stopping FX when projectile explodes
    idTypesafeTime < int , millisecondUnique_t , 1000 > stopFxTimeOnExplode; // Offset: 0x2334

    // how long to wait before removing the projectile when the projectile explodes
    idTypesafeTime < int , millisecondUnique_t , 1000 > removeProjectileTimeOnExplode; // Offset: 0x2338

    // by default projectiles are removed from the active projectile list on explode, some may need to keep thinking
    bool remainInActiveListAfterExplode; // Offset: 0x233C

    // Has the server played explosion VFX yet?
    idNetEvent < 15 > hasPlayedExplosionVFX; // Offset: 0x2340

    // Has the client played explosion VFX yet?
    bool clientHasPlayedExplosionVFX; // Offset: 0x2358

    // handle of AI event if one is attached to the projectile
    idHandle < int , invalidAIEvent_t , INVALID_AIEVENT > aiEventHandle; // Offset: 0x235C

    // hide renderModel on spawn
    bool startHidden; // Offset: 0x2360

    // by default all FX are stopped on explode
    bool continueFXAfterExplode; // Offset: 0x2361

    // projectile decl for this projectile
    idDeclProjectile* projectileDecl; // Offset: 0x2368

    // if true, align the projectile model to the velocity direction while in flight
    bool alignToVelocity; // Offset: 0x2370

    // if true, align the explosion to the velocity direction while in flight
    bool alignExplosionToVelocity; // Offset: 0x2371

    // if true, the explode function triggers ai
    bool explosionEvent; // Offset: 0x2372

    // if true we make sure not to throw through walls etc...
    bool adjustStartForCollision; // Offset: 0x2373

    // rocket will take damage (or explode, if explodeWhenHit) when shot with a CONTENTS_SHOTCLIP projectile
    bool canHitWithShotclip; // Offset: 0x2374

    // amount of time to wait before allowing owner to shoot/collide with this projectile ( 0 = never allow )
    float allowHitsFromOwnerAfterTimeSec; // Offset: 0x2378

    // projectile will explode when hit
    bool explodeWhenHit; // Offset: 0x237C

    // when damage by hitscan, use alt damage decl
    bool hitscanUsesAltDamage; // Offset: 0x237D

    // if true, this projectile can receive radius damage (aka splash damage)
    bool isDamagedByRadiusDamage; // Offset: 0x237E

    // what this component can be damaged by.
    idDamageParms::damageSource_t damagedBy; // Offset: 0x2380

    // additional rotation to apply to the render model (does not affect the physics object's rotation)
    idAngles rotationOffset; // Offset: 0x2388

    // rotation degs/sec to apply to the render model (does not affect the physics object's rotation)
    idAngles rotationSpeed; // Offset: 0x2394

    // if set then a rotation speed will be slammed into rotationSpeed at spawn time
    idAngles rotationSpeedRandMin; // Offset: 0x23A0

    // if set then a rotation speed will be slammed into rotationSpeed at spawn time
    idAngles rotationSpeedRandMax; // Offset: 0x23AC

    // total rotation due to rotationSpeed and rand min/max (allows stuck projectiles to maintain their accumulated rotations instead of reverting to their spawn orientations)
    idAngles rotationAccumulated; // Offset: 0x23B8

    // additional translation to apply to the render model (necessary in some instances to center the model in the collision box, while still using the same model to a hand attachment) {{ units = m }}
    idVec3 originOffset; // Offset: 0x23C4

    // minimum angular velocity on spawn
    idVec3 minAngularVelocity; // Offset: 0x23D0

    // maximum angular velocity on spawn
    idVec3 maxAngularVelocity; // Offset: 0x23DC

    // rate which the projectile reaches its max speed {{ units = m / ( s * s ) }}
    float acceleration; // Offset: 0x23E8

    // if > 0 and < acceleration then randomize acceleration in the range (minAcceleration, acceleration) {{ units = m / ( s * s ) }}
    float minAcceleration; // Offset: 0x23EC

    // projectile velocity is increased by boostOnExplodeVelocityScale
    int boostOnExplodeTimes; // Offset: 0x23F0

    // scale applied to this projectile's velocity after explode, if boostOnExplode is set
    float boostOnExplodeVelocityScale; // Offset: 0x23F4

    // forced ribbon fade out duration if exploding by contact with AI
    idTypesafeTime < int , millisecondUnique_t , 1000 > ribbonAIExplodeFXFadeOutTime; // Offset: 0x23F8

    // limiter for boostOnEplode
    bool canBoostOnExplode; // Offset: 0x23FC

    // true if the weapon has discharged its stored electricity
    bool electricDischarged; // Offset: 0x23FD

    // last non-zero velocity {{ units = m / s }}
    idVec3 lastVel; // Offset: 0x2400

    // the last axis of the render model
    idMat3 lastModelAxis; // Offset: 0x240C

    idVec3 lastPos; // Offset: 0x2430

    int fireballStopped; // Offset: 0x243C

    // the weapon that launched the projectile
    idManagedClassPtr < idWeapon > launchWeapon; // Offset: 0x2440

    // the equip slot of the projectile
    equipSlot_t launchEquipSlot; // Offset: 0x2460

    // the fire mode of the launch weapon
    weaponFireMode_t launchFireMode; // Offset: 0x2464

    idDeclWeapon* launchWeaponDecl; // Offset: 0x2468

    // time fade started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x2470

    // time fade ends
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeEndTime; // Offset: 0x2478

    // outline projectile when obscured by something
    bool outlineWhenObscured; // Offset: 0x2480

    // flags whether outline is active
    bool outlineActive; // Offset: 0x2481

    // highlight decl for when projectile and/or target are obscured
    idDeclHighlight* obscuredHighlightDecl; // Offset: 0x2488

    // highlight handle for projectile
    int projHighlightHandle; // Offset: 0x2490

    // highlight handle for projectile target
    int targetHighlightHandle; // Offset: 0x2494

    // records the target that has an active outline
    idManagedClassPtr < idEntity > outlineActiveOnTarget; // Offset: 0x2498

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > allowHitsFromOwnerAfterTime; // Offset: 0x24B8

    // tag associated with this projectile (for keeping stats)
    weaponStatsTag_t weaponStatsTag; // Offset: 0x24C0

    // scale value for this projectiles damage
    float damageScale; // Offset: 0x24D0

    // inited from notHitScanInfo.maxBounces but can be overridden
    int maxBounces; // Offset: 0x24D4

    // weapon upgrades from the weapon that launched the projectile -- THIS REPLACES weapon mods
    idList < const idDeclUpgrade * , TAG_IDLIST , false > weaponUpgrades; // Offset: 0x24D8

    float damageOverTimeScale; // Offset: 0x24F0

    // if >=0, overrides the projectile damage decl direct damage
    float directDamageOverride; // Offset: 0x24F4

    // if >=0, overrides the projectile damage decl splash damage
    float splashDamageOverride; // Offset: 0x24F8

    // scale value for this projectiles point blank damage over time
    float pointBlankDamageOverTimeScale; // Offset: 0x24FC

    // scale to apply to aiStimulus
    float aiStimulusScale; // Offset: 0x2500

    // if >=0 how damage falls off with distance traveled {{ units = m }}
    float damageFalloffStartDist; // Offset: 0x2504

    // if >=0 how damage falls off with distance traveled {{ units = m }}
    float damageFalloffEndDist; // Offset: 0x2508

    // if not -1, overrides the start radius for splash damage falloff {{ units = m }}
    float splashStartFalloffRadiusOverride; // Offset: 0x250C

    // if not -1, overrides the end radius for splash damage falloff {{ units = m }}
    float splashEndFalloffRadiusOverride; // Offset: 0x2510

    // if not -1, overrides the start radius for concussive damage falloff {{ units = m }}
    float concussiveStartFalloffRadiusOverride; // Offset: 0x2514

    // if not -1, overrides the end radius for concussive damage falloff {{ units = m }}
    float concussiveEndFalloffRadiusOverride; // Offset: 0x2518

    // how far the projectile has traveled {{ units = m }}
    float distanceTraveled; // Offset: 0x251C

    // previous value
    float prevDistanceTraveled; // Offset: 0x2520

    // query to test if the shot will be a direct hit so the flare behavior can be cancelled
    idHavokQueryId proximityFlareDirectHitQuery; // Offset: 0x2528

    // query to test if the shot will be a direct hit so the flare behavior can be cancelled
    idHavokQueryId proximityFlareDirectHitQuery_Havok; // Offset: 0x2530

    idVec3 proximityFlareDirectHitQueryStart; // Offset: 0x2538

    idVec3 proximityFlareDirectHitQueryEnd; // Offset: 0x2544

    // start time for flare. If not gameTime_zero then flare is active.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > proximityFlareStartTime; // Offset: 0x2550

    // end time for flare. If not gameTime_zero then flare is active.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > proximityFlareEndTime; // Offset: 0x2558

    // target score
    float targetScore; // Offset: 0x2560

    // stores override for max dist to targets
    float proximityFlareMaxDistOverride; // Offset: 0x2564

    // stores override for min target required
    int proximityFlareMinTargetsOverride; // Offset: 0x2568

    // splash damage decl to use if detonation occurs while proximity flare is active
    idDeclDamage* proximityFlareSplashDamageDecl; // Offset: 0x2570

    // override for splash damage decl
    idDeclDamage* overrideSplashDamageDecl; // Offset: 0x2578

    // override for alt splash damage decl
    idDeclDamage* overrideAltSplashDamageDecl; // Offset: 0x2580

    idDeclDamage* overrideAltSplashDamageDelayedProjectileMastered; // Offset: 0x2588

    // override for concussive damage decl
    idDeclDamage* overrideConcussiveDamageDecl; // Offset: 0x2590

    // override for alt concussive damage decl
    idDeclDamage* overrideAltConcussiveDamageDecl; // Offset: 0x2598

    // records state
    bool isDelayedProjectile; // Offset: 0x25A0

    // tracks how many views are allocated
    int allocatedViews; // Offset: 0x25A4

    // tracks how many views were registered
    int registeredViews; // Offset: 0x25A8

    // has the projectile stuck to a weak point
    bool hasStuckWeakPoint; // Offset: 0x25AC

    // Settings to lerp render model color based on distance the projectile has traveled
    idProjectile::distanceBasedFXInfo_t distanceBasedFXInfo; // Offset: 0x25B0

    // Settings to lerp a damage override value between the damage decl's min and max damage based on the distance traveled by the projectile
    idProjectile::distanceBasedDamageInfo_t distanceBasedDamageInfo; // Offset: 0x25E8

    // Settings to slow projectiles if nearing map collision
    idProjectile::collisionBrakesInfo_t collisionBrakeInfo; // Offset: 0x25F4

    idProjectile::rotateAroundAxisInfo_t rotationInfo; // Offset: 0x260C

    // weak point overrides
    idDeclImpactEffect* overrideWeakPointImpactEffect; // Offset: 0x2670

    float overrideWeaponWeakPointDamageScalar; // Offset: 0x2678

    float overrideWeaponWeakPointSelfDamageScalar; // Offset: 0x267C

    float overrideWeaponWeakPointPlayerDamageScalar; // Offset: 0x2680

    float overrideWeaponWeakPointDemonPlayerDamageScalar; // Offset: 0x2684

    idSoundEvent* overrideWeaponWeakPointBounceSound; // Offset: 0x2688

    int surfTypeLastHit; // Offset: 0x2690

    idVec3 surfNormalLastHit; // Offset: 0x2694

    idManagedClassPtr < idEntity > explodeEnt; // Offset: 0x26A0

    trace_t explodeTrace; // Offset: 0x26C0

    trace_t adjustTrace; // Offset: 0x2740

    idManagedClassPtr < idEntity > attachEnt; // Offset: 0x27C0

    trace_t attachTrace; // Offset: 0x27E0

    projectileLaunchData_t projectileLaunchData; // Offset: 0x2860

    // Launch Info
    idManagedClassPtr < idEntity > attacker; // Offset: 0x28D8

    idManagedClassPtr < idEntity > collisionEntity; // Offset: 0x28F8

    // {{ units = m }}
    idVec3 previousOrigin; // Offset: 0x2918

    idMat3 previousAxis; // Offset: 0x2924

    idProjectile::swallowData_t swallowData; // Offset: 0x2948

    // {{ units = m }}
    idVec3 launchOrigin; // Offset: 0x294C

    idMat3 launchAxis; // Offset: 0x2958

    idMat3 attackerViewAxisOnLaunch; // Offset: 0x297C

    // track how much the heading has deviated from the initial seek heading
    idAngles accumulatedHeadingChange; // Offset: 0x29A0

    bool launched; // Offset: 0x29AC

    // launched state before serialization from the server
    bool preSerializedLaunched; // Offset: 0x29AD

    // we should have launched, but we are waiting for an actual snapshot origin delta
    bool clientLaunchPending; // Offset: 0x29AE

    bool firstActiveThink; // Offset: 0x29AF

    gameTeam_t attackerTeamOnLaunch; // Offset: 0x29B0

    // at what time the projectile was launched (ms)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > launchTime; // Offset: 0x29B8

    // the frame when the projectile was launched
    int launchFrame; // Offset: 0x29C0

    // server time the projectile was launched.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serializedServerLaunchTime; // Offset: 0x29C8

    // number of times hit by a seek target
    int seekHitCount; // Offset: 0x29D0

    idEntity* customInflictor; // Offset: 0x29D8

    // projectile state
    projectileState_t state; // Offset: 0x29E0

    // state before serialization from the server
    projectileState_t preSerializedProjectileState; // Offset: 0x29E4

    // handle to our influence on the spawning system (if any)
    idHandle < int , invalidSpawnInfluencer_t , INVALID_INFLUENCER > spawnInfluencerHandle; // Offset: 0x29E8

    // spawn entity on explosion Entity to spawn when projectile explodes.
    idDeclEntityDef* spawnEntOnExplode; // Offset: 0x29F0

    // ensure entity is at least this high off the ground, or -1 to ignore {{ units = m }}
    float spawnEntMinHeight; // Offset: 0x29F8

    // Whether to spawn the entity locally or replicate
    bool spawnEntLocally; // Offset: 0x29FC

    // whether to scale the spawned ent to the splash damage radius or not
    bool spawnEntScaleToSplashRadius; // Offset: 0x29FD

    // the spawned entity
    idManagedClassPtr < idEntity > spawnEntOnExplodeEntity; // Offset: 0x2A00

    // If true, we orient the spawned entity to the normal of the surface we hit when we spawn it
    bool orientSpawnEntityToSurface; // Offset: 0x2A20

    // If true, we snap the spawned entity to the ground
    bool snapSpawnEntityToGround; // Offset: 0x2A21

    // If true and it collides with AI, we bind the spawned entity to the AI
    bool bindSpawnEntityToAI; // Offset: 0x2A22

    // if true then explode it instantly
    bool spawnEntExplodeInstantly; // Offset: 0x2A23

    // FIXME -- temp collision isn't enabled until projectile is this far from fire point {{ units = m }}
    float collisionDelayDist; // Offset: 0x2A24

    // original contents from physics
    int originalContentsFlags; // Offset: 0x2A28

    // set with the last player the projectile hit
    idSpawnId hitPlayer; // Offset: 0x2A2C

    bool dodgeCounted; // Offset: 0x2A30

    idDeclFX* overrideFXDecl; // Offset: 0x2A38

    idDeclFX* overrideHeadshotFXDecl; // Offset: 0x2A40

    bool needsToFindNewSeekTarget; // Offset: 0x2A48

    // if > 0, will post a remove event on explode entity
    idTypesafeTime < int , millisecondUnique_t , 1000 > explodeEntLifetimeMS; // Offset: 0x2A4C

    // should newly spawned entity be immediately activated
    bool explodeEntActivateOnSpawn; // Offset: 0x2A50

    bool postedWhizBySoundEvent; // Offset: 0x2A51

    bool postedWarningSoundEvent; // Offset: 0x2A52

    bool allowAutoDetonateSpeedHack; // Offset: 0x2A53

    idFXProjectileAxisUpdate projectileExplodeAxisUpdate; // Offset: 0x2A58

    // when projectile is set to explode near certain entities, track closest approach
    float pendingExplodeDistance; // Offset: 0x2A78

    aiMonsterType_t bfgLastKill; // Offset: 0x2A80

    // Need to track how many bfg kills each projectile makes to display it in the UI
    idList < const idAI2 * , TAG_IDLIST , false > bfgKillsForUI; // Offset: 0x2A88

    // Should we track this projectile's kills for d\ on the UI or ignore it?
    bool trackKillsForUI; // Offset: 0x2AA0

    // projectiles bounced back are flagged
    bool isReflected; // Offset: 0x2AA1

    // if dev networking is enabled, this is actually present on identity instead
    int snapshotIndex; // Offset: 0x2AA4

    // ID_ENABLE_DEV_NETWORKING
    int snapshotIndex_prev; // Offset: 0x2AA8

    // FIXMEHACK -- when client wants to run independently, it sets this
    bool suppressBindinfoSerialization; // Offset: 0x2AAC

}; // Size: 0x2AB0
