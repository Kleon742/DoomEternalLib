struct idDeclProjectile : idGameDeclTypeInfo
{
    enum projectileSoundEvent_t : int
    {
        PROJSOUND_NONE = 0,
        PROJSOUND_NORMAL = 1,
        PROJSOUND_SILENCED = 2
    };

    enum aiDodgeType_t : int
    {
        AI_DODGE_TYPE_MELEE = 0,
        AI_DODGE_TYPE_LIGHT = 1,
        AI_DODGE_TYPE_MEDIUM = 2,
        AI_DODGE_TYPE_HEAVY_CLOSE_RANGE = 3,
        AI_DODGE_TYPE_HEAVY_MEDIUM_RANGE = 4,
        AI_DODGE_TYPE_HEAVY_LONG_RANGE = 5
    };

    enum tracerRandomType_t : int
    {
        TRACERRANDOM_ASGROUP = 0,
        TRACERRANDOM_ONEPERGROUP = 1,
        TRACERRANDOM_VARIABLE = 2
    };

    struct capsuleHitScanShapeTestInfo_t
    {
        // capsule start pos in local space
        idVec3 startPosition; // Offset: 0x0

        // capsule end pos in local space
        idVec3 endPosition; // Offset: 0xC

        // capsule radius
        float radius; // Offset: 0x18

    }; // Size: 0x1C

    struct collisionContactResolution_t
    {
        // The coefficient value of 1.0 object will bounce apart with the same speed, 0.0 the object will coalesce
        float restitution; // Offset: 0x0

        // Enable the collision resolution when Havok return OnContactImpulse
        bool enableContactResolution; // Offset: 0x4

        // Adjust speed direction of the bounce
        idVec3 directionToBounce; // Offset: 0x8

    }; // Size: 0x14

    struct notHitscanInfo_t
    {
        struct physicsProperties_t
        {
            // mass properties
            idMassProperties massProperties; // Offset: 0x0

            // motion properties
            motionProperties_t motionProperties; // Offset: 0x8

            // distance ahead of the object to check for collision, use for fast-moving projectiles to enable havok continous collision solving
            float collisionLookAheadDistance; // Offset: 0x20

            // density of object, used along with clip model volume to calculate mass {{ units = kg / ( m * m * m ) }}
            float density; // Offset: 0x24

            // equivalent to an air friction coefficient applied to translational velocity {{ units = 1 / s }}
            float linearFriction; // Offset: 0x28

            // equivalent to an air friction coefficient applied to rotational velocity {{ units = 1 / s }}
            float angularFriction; // Offset: 0x2C

            // friction coefficient applied when a body is contacting another surface {{ units = 1 / s }}
            float contactFriction; // Offset: 0x30

            // equivalent to a fluid friction coefficient applied to translation velocity when in water {{ units = 1 / s }}
            float linearFrictionWater; // Offset: 0x34

            // equivalent to a fluid friction coefficient applied to rotational velocity when in water {{ units = 1 / s }}
            float angularFrictionWater; // Offset: 0x38

            // coefficient of restitution ( 1.0 == perfectly elastic )
            float bounciness; // Offset: 0x3C

            // if true, don't apply gravity to this projectile
            bool noGravity; // Offset: 0x40

            // override radius for the clip model. This is used for sphere model collision only (AI, players, demon players) {{ units = m }}
            float actorClipRadius; // Offset: 0x44

            // don't create a clip model for this projectile, just use physics to move it around
            bool noClipModel; // Offset: 0x48

            // if non-zero, will attempt to prevent getting stuck in players and demons {{ units = kg * m / s }}
            float unstuckImpulse; // Offset: 0x4C

        }; // Size: 0x50

        struct grenadeInfo_t
        {
            // minimum time in milliseconds before grenade detonates
            idTypesafeTime < int , millisecondUnique_t , 1000 > minDetonationDelay; // Offset: 0x0

            // maximum time in milliseconds before grenade detonates ( "-1", never detonates )
            idTypesafeTime < int , millisecondUnique_t , 1000 > maxDetonationDelay; // Offset: 0x4

            // if true, detonation timer starts counting down on throw, otherwise it begins counting down when the grenade stops moving
            bool countDownOnThrow; // Offset: 0x8

            // if true the projectile is cookable
            bool cookable; // Offset: 0x9

            // submunitions with this set will inherit their parent's speed (but not direction)
            bool inheritParentSpeed; // Offset: 0xA

            // number of projectile collisions before we start the detonation timer countdown
            int bouncesBeforeDetonationTimerStart; // Offset: 0xC

            // max time in milliseconds before detonation timer will start, regardless of bounces
            idTypesafeTime < int , millisecondUnique_t , 1000 > maxDetonationTimerStartDelay; // Offset: 0x10

            // Bouncing can cut time off the detonation timer and explode grenades quicker
            bool bounceShortensDetonation; // Offset: 0x14

            // sound for imminent detonation
            idSoundEvent* warningSound; // Offset: 0x18

            // how many MS before explosion to play warningSound, if zero will play at launch
            idTypesafeTime < int , millisecondUnique_t , 1000 > warningSoundDelay; // Offset: 0x20

            // minimum speed of projectile {{ units = m / s }}
            float minSpeed; // Offset: 0x24

            // maximum speed of projectile {{ units = m / s }}
            float maxSpeed; // Offset: 0x28

            // if nonzero, the throw arc is automatically adjusted to hit the first collision along the view axis within this range (overrides launchAngle and launchAngleAffectsSpeed) (added from Doom4) {{ units = m }}
            float playerCrosshairAimDist; // Offset: 0x2C

            // if true, uses a physics type that does not support rotation (object will have purely visual rotation)
            bool useSimplePhysics; // Offset: 0x30

            // if true, this projectile can be detonated early with the alt trigger
            bool canDetonateWithAltTrigger; // Offset: 0x31

            // offset from target to the attacker {{ units = m }}
            float offsetFromTarget; // Offset: 0x34

        }; // Size: 0x38

        struct swallowInfo_t
        {
            // 'swallow' behavior triggered when impacts "mouth" damage group
            bool canBeSwallowed; // Offset: 0x0

            // projectile will be hidden and will have a special detonation delay how long to wait after being swallowed to trigger explode damage
            idTypesafeTime < int , millisecondUnique_t , 1000 > explodeDamageDelayMS; // Offset: 0x4

            // stat to increment on swallow
            gameStat_t swallowStat; // Offset: 0x8

        }; // Size: 0xC

        struct flareInfo_t
        {
            // master on/off switch
            bool enable; // Offset: 0x0

            // min number of targets to trigger flare
            int minTargets; // Offset: 0x4

            // max distance from projectile for a target to be considered in range for the flare
            float maxDist; // Offset: 0x8

            // sound to play when flare starts
            idSoundEvent* startSound; // Offset: 0x10

            // sound to play when flare stops
            idSoundEvent* stopSound; // Offset: 0x18

            // minimum time flare will remain active, in milliseconds
            idTypesafeTime < int , millisecondUnique_t , 1000 > minDurationMS; // Offset: 0x20

            // MS after firing before flare can be activated
            idTypesafeTime < int , millisecondUnique_t , 1000 > minDelayMS; // Offset: 0x24

        }; // Size: 0x28

        // if hitscan is false this determines weather the projectile is spawned from the view origin or the muzzle position.
        bool fireFromMuzzle; // Offset: 0x0

        // projectiles take a couple of frames before they show up in the world and this allows the projectiles to be held at the muzzle until they appear
        int launchMuzzleHoldFrames; // Offset: 0x4

        // if holding at the muzzle, ignore changing the facing direction of the projectile
        bool launchMuzzleHoldIgnoreDir; // Offset: 0x8

        // if true then respect the hands FOV scale to match the FOV of the hands and weapon
        bool useHandsFOVScale; // Offset: 0x9

        // if true then use customFOVScale2 (equipment launcher)
        bool useCustomFOVScale2; // Offset: 0xA

        // if true remove this projectile when it reaches max range, this uses the removeAfterDistance value
        bool removeAtMaxRange; // Offset: 0xB

        // This distance when the projectile will be forcibly removed
        idBranchedOptionValue < declInputBranch_t , float > removeAfterDistance; // Offset: 0x10

        // How far along the launch axis to set the previous physics origin back from the launch origin on the first think for rigid cast projectile (for point blank targets)
        float rigidcastBackupDistance; // Offset: 0x38

        // Fire down the view axis.
        bool useTargetPosition; // Offset: 0x3C

        // entity def to spawn when projectile is fired
        idDeclEntityDef* entityDef; // Offset: 0x40

        // list of render models to attach to the splinters (1-1 correspondence with splinters)
        idList < idStrRenderModel , TAG_IDLIST , false > attachRenderModels; // Offset: 0x48

        // launched projectile will use THIS projectile decl (used for projectile decl upgrades)
        bool carryoverThisProjDecl; // Offset: 0x60

        // when true, use altExplodeSound, altDamageDecl, altSplashDamageDecl when a direct hit with an AI occurs
        bool useAltDeclsOnDirectHit; // Offset: 0x61

        // properties of the projectile used for physical simulation
        idDeclProjectile::notHitscanInfo_t::physicsProperties_t physicsProperties; // Offset: 0x64

        // if true, this will pass through friendlies when the friendly is closer than passThroughFriendliesMaxDistance
        bool passThroughFriendlies; // Offset: 0xB4

        // sets the max distance that this projectile will pass through friendlies. Distance is based on the spawn location of the projectile. {{ units = m }}
        float passThroughFriendliesMaxDistance; // Offset: 0xB8

        // if true, this will pass through enemies when the enemy is closer than passThroughEnemiesMaxDistance
        bool passThroughEnemies; // Offset: 0xBC

        // sets the max distance that this projectile will pass through enemies. Distance is based on the spawn location of the projectile. {{ units = m }}
        float passThroughEnemiesMaxDistance; // Offset: 0xC0

        // if true, will do additional traces during flight to detect hologram intersections
        bool hologramTracerCheck; // Offset: 0xC4

        // sound shader for explosions
        idSoundEvent* explodeSound; // Offset: 0xC8

        // alt sound shader for explosions
        idSoundEvent* altExplodeSound; // Offset: 0xD0

        // explode sound to use if a proximity flare is active
        idSoundEvent* proximityFlareActiveExplodeSound; // Offset: 0xD8

        // sound loop for flying and cooking
        idSoundEvent* flySound; // Offset: 0xE0

        // sound to play once when whizzing past the player
        idSoundEvent* whizBySound; // Offset: 0xE8

        // how far away from the player to play the whiz by sound {{ units = m }}
        float whizByDist; // Offset: 0xF0

        // sound to play when a projectile that can bounce bounces
        idSoundEvent* bounceSound; // Offset: 0xF8

        // Minimum Havok impulse value required during contact in order to play a bounce sound
        float bounceMinImpulse; // Offset: 0x100

        // Minimum time between playing a bounce sound
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeBetweenBounces; // Offset: 0x104

        // impact effects to pull bounce sound from, takes priority over bounceSound
        idDeclImpactEffect* bounceImpactFX; // Offset: 0x108

        // the max number of bounces before this projectile explodes (-1 = infinite)
        int maxBounces; // Offset: 0x110

        // Does this projectile bounce on actors.
        bool bounceOnActors; // Offset: 0x114

        // does this bounce off flame walls
        bool bounceOnFlameWall; // Offset: 0x115

        // when detonating use last good collision position (so if a grenade bounces right before detonation, it's effective position will be the point on the surface where it bounced)
        bool useLastCollisionPosition; // Offset: 0x116

        // ai event decl for bounce sounds
        idDeclAiEvent* bounceAIEventDecl; // Offset: 0x118

        // how long (in ms) before ignition
        idTypesafeTime < int , millisecondUnique_t , 1000 > thrustDelay; // Offset: 0x120

        // how long (in ms) before ignition
        idTypesafeTime < int , millisecondUnique_t , 1000 > thrustDelayVariance; // Offset: 0x124

        // whether or not the projectile will move toward the targeted point (useful for rockets capable of turning)
        bool fireAtPoint; // Offset: 0x128

        // speed the projectile should fly {{ units = m / s }}
        idBranchedOptionValue < declInputBranch_t , float > speed; // Offset: 0x130

        // speed the projectiles should be launched with (or -1 for default) {{ units = m / s }}
        float startSpeed; // Offset: 0x158

        // if => 0 and < speed, then randomize the startSpeed in the range (minStartSpeed, startSpeed) {{ units = m / s }}
        float minStartSpeed; // Offset: 0x15C

        // explodes on impact, added for rocks but should be generalized for the various types
        bool explodeOnImpact; // Offset: 0x160

        // if true then the player can pick it back up.
        bool isRetrievable; // Offset: 0x161

        // if explosion does not damage anyone, should we signal the attacker
        bool noHitSignal; // Offset: 0x162

        // if true, this item follows the rules of deployable.
        bool followDeployableRules; // Offset: 0x163

        // if true, this item will be removed from the world on owners death
        bool playerLifeLimited; // Offset: 0x164

        // if false, the munition will not take on the parent's speed - defaults to true
        bool inheritParentSpeed; // Offset: 0x165

        // what percentage of thrower's velocity should be applied to the projectile (if non zero)
        float inheritThrowerVelocityMultiplier; // Offset: 0x168

        // if true we make sure not to throw through walls etc...
        bool adjustStartForCollision; // Offset: 0x16C

        // if true clients will not replace a predicted projectile with a replicated one.
        bool clientAuthoritative; // Offset: 0x16D

        // angular offset for initial launch.
        float adjustFireAngle; // Offset: 0x170

        // for AI, projectile gives this much throw error * behavior value
        float throwErrorScale; // Offset: 0x174

        // animation to play on spawn (added from Doom4)
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > spawnAnim; // Offset: 0x178

        // animation to play on launch (added from Doom4)
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > launchAnim; // Offset: 0x17A

        // animation to loop as this projectile is in flight
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > flightAnim; // Offset: 0x17C

        // scale flight anim rate by this much
        float flightAnimRateScale; // Offset: 0x180

        // animation to play on spawn should loop?
        bool loopSpawnAnim; // Offset: 0x184

        // ------------------------ grenade specific. putting here for now, maybe should subclass ------------------------ info for explosions
        idDeclProjectile::notHitscanInfo_t::grenadeInfo_t grenadeInfo; // Offset: 0x188

        // this projectile's flight path is a parabola.
        bool parabolicFlight; // Offset: 0x1C0

        // minimum time in flight in seconds (used to calculate trajectories)
        float minTrajectoryTime; // Offset: 0x1C4

        // maximum time in flight in seconds (used to calculate trajectories)
        float maxTrajectoryTime; // Offset: 0x1C8

        // if true, projectile phases itself out between max optimal and max range
        bool rangesImpactEffectiveness; // Offset: 0x1CC

        // info about whether the projectile can be swallowed
        idDeclProjectile::notHitscanInfo_t::swallowInfo_t swallowInfo; // Offset: 0x1D0

        // proximity flare to indicate when projectile is near targets
        idDeclProjectile::notHitscanInfo_t::flareInfo_t proximityFlare; // Offset: 0x1E0

        // HACK HACK -- to cover up rare cases of projectiles lingering in the world due to pooling system if true, auto-detonate this projectile if flight speed is significantly lower than desired speed
        bool autoDetonateSpeedHack; // Offset: 0x208

        // hide/remove from clients if stuck for this long after launching
        idTypesafeTime < int , millisecondUnique_t , 1000 > clientStuckTimeoutMS; // Offset: 0x20C

    }; // Size: 0x210

    struct delayedProjectileOffsetEnable_t
    {
        // the offset
        idVec3 offset; // Offset: 0x0

        // the direction
        idVec3 launchAxis; // Offset: 0xC

        // enabled or not
        bool enable; // Offset: 0x18

    }; // Size: 0x1C

    struct tracerInfo_t
    {
        struct tracerRibbon2Info_t
        {
            // the ribbon decl that will be used
            idDeclRibbon2* ribbonDecl; // Offset: 0x0

            // the offset from the start position that this ribbon will be used. (for weapons, the muzzle is the start position).
            idVec3 offset; // Offset: 0x8

            // the above but for 3rd person firing
            idVec3 thirdPersonOffset; // Offset: 0x14

        }; // Size: 0x20

        // the tracer material
        idMaterial2* tracerMtr; // Offset: 0x0

        // the tracer material, when Quad Damage is applied
        idMaterial2* tracerMtrQuad; // Offset: 0x8

        // the tracer material, when the firer is "friendly" to the local player
        idMaterial2* tracerMtrFriendly; // Offset: 0x10

        // specifies the number of rounds to fire before firing a tracer round
        int tracers; // Offset: 0x18

        // whether the tracer order is random or set.
        bool doRandomTracers; // Offset: 0x1C

        // if true, display a tracer from the origin to the target for hitscan weapons that have splash damage
        bool showTracerOnHitscanSplash; // Offset: 0x1D

        // if showTracerOnHitscanSplash is true, will attempt to draw random tracers to meet this number
        int minTracersToShowOnHitscanSplash; // Offset: 0x20

        // what kind of randomness to use
        idDeclProjectile::tracerRandomType_t randomTracerType; // Offset: 0x24

        // number of tracers to show for a given group of tracers (requires randomTracerType set to TRACERRANDOM_VARIABLE)
        int randomTracerNum; // Offset: 0x28

        // tracer speed {{ units = m / s }}
        float tracerSpeed; // Offset: 0x2C

        // length of the tracer {{ units = m }}
        float tracerLength; // Offset: 0x30

        // height of the tracer {{ units = m }}
        float tracerHeight; // Offset: 0x34

        // offset of the tracer start when in zoomed mode. {{ units = m }}
        idVec3 tracerZoomedOffset; // Offset: 0x38

        // how long the tracer will stay around (-1 for programmatically determined)
        idTypesafeTime < int , millisecondUnique_t , 1000 > tracerLifetime; // Offset: 0x44

        // how long the tracer will fade for, should be less than lifetime or 0 for no fade.
        idTypesafeTime < int , millisecondUnique_t , 1000 > tracerFadeOutTime; // Offset: 0x48

        // sound to play with a tracer
        idSoundEvent* sndTracer; // Offset: 0x50

        // maximum distance away of the nearest point on the tracer line to the player for a sound to be played, or 0 for no limit {{ units = m }}
        float sndTracerMaxDist; // Offset: 0x58

        // the ribbon tracer effect that should play...
        idList < idDeclProjectile::tracerInfo_t::tracerRibbon2Info_t , TAG_IDLIST , false > ribbon2Decls; // Offset: 0x60

    }; // Size: 0x78

    struct waterInteraction_t
    {
        // allow the projectile to interact with water surfaces
        bool allowWaterInteraction; // Offset: 0x0

        // how large of a force to apply to the water surface when hit (negative value creates a dent in the surface and positive a spike) {{ units = kg * m / s }}
        float waterHitMagnitude; // Offset: 0x4

        // how large of a radius to apply to the water surface when hit {{ units = m }}
        float waterHitRadius; // Offset: 0x8

        // illuminates the water surface it hits
        bool shouldIlluminateWater; // Offset: 0xC

        // how large of a radius to apply the water illumination effect too {{ units = m }}
        float waterIlluminationRadius; // Offset: 0x10

        // how long to show water illumination effect
        int waterIlluminateTime; // Offset: 0x14

    }; // Size: 0x18

    struct laserDotInfo_t
    {
        // material to use for the laser dot
        idMaterial2* laserDotMtr; // Offset: 0x0

        // the size of the laser dot {{ units = m }}
        float laserDotSize; // Offset: 0x8

        // laser dot decal depth {{ units = m }}
        float laserDotDepth; // Offset: 0xC

        // laser dot min scale
        float laserDotMinSizeScale; // Offset: 0x10

        // laser dot max scale
        float laserDotMaxSizeScale; // Offset: 0x14

        // laser dot max distance to trace. {{ units = m }}
        float laserDotMaxDistance; // Offset: 0x18

    }; // Size: 0x20

    // the MD6 model to use for this projectile in the world, if any, which
    idDeclMD6* thirdPersonMD6; // Offset: 0x90

    // allows anims for this projectile declared in this decl to be strong loaded, as the only other reference to the md6 is in the entityDef in the render model data, but that's not available prior to spawn  ------------------------ Client predictive presentable ------------------------ minimum angular velocity on spawn (added from Doom4) {{ units = radians / s }}
    idVec3 clientMinAngularVelocity; // Offset: 0x98

    // maximum angular velocity on spawn (added from Doom4) {{ units = radians / s }}
    idVec3 clientMaxAngularVelocity; // Offset: 0xA4

    // should velocity vector be world space or attacker local space
    bool clientVelocityWorldSpace; // Offset: 0xB0

    // ------------------------ ------------------------ how much the trace will vier off course when passing through non solid objects.
    float deviation; // Offset: 0xB4

    // true if the projectile uses an immediate trace instead of a game entity + physics object to determine hits
    bool hitscan; // Offset: 0xB8

    // if true, this will pass through friendlies
    bool hitScanPassThroughFriendlies; // Offset: 0xB9

    // if true, this will pass through enemies
    bool hitScanPassThroughEnemies; // Offset: 0xBA

    // if true, if one trace does damage with the hitscan the others will be visual only but not deal any damage
    bool onlyOneTraceCanDealDamage; // Offset: 0xBB

    // true if the hitscan will continue through objects until it hits a surface flag of SURF_NON_PENETRABLE or goes 8 deep.
    bool worldPenetration; // Offset: 0xBC

    // if true will play a ribbon effect for hitscan weapons
    bool ribbonEffect; // Offset: 0xBD

    // if true the fire sound will be played by the projectile automatically instead of by the weapon
    bool projectilePlaysFireSound; // Offset: 0xBE

    // sound played when fired per shot
    idSoundEvent* fireSoundStart; // Offset: 0xC0

    // sound played when fired per show (with weapon mastered)
    idSoundEvent* fireSoundStartMastered; // Offset: 0xC8

    // looping sound to be played for the duration of firing
    idSoundEvent* fireSoundLoopStart; // Offset: 0xD0

    // sound played when firing is stopped
    idSoundEvent* fireSoundStop; // Offset: 0xD8

    // played on the last shot of a burst
    idSoundEvent* fireSoundLastShot; // Offset: 0xE0

    // screen shake decl to play upon firing
    idDeclAdvancedViewShake* fireViewShakeDecl; // Offset: 0xE8

    // light medium or heavy ammo for use by AI dodging logic
    idDeclProjectile::aiDodgeType_t aiDodgeType; // Offset: 0xF0

    // AI event to attach( NULL if no AI event should be attached )
    idDeclAiEvent* aiEventDecl; // Offset: 0xF8

    // AI event to attach for player notification ( NULL if no AI event should be attached)
    idDeclAiEvent* playerAIEventDecl; // Offset: 0x100

    // AI event to to send out for explosion
    idDeclAiEvent* explodeAIEventDecl; // Offset: 0x108

    // need this because the code-referenced decl has been moved to GlobalDataComponent and that isn't initialized early enough to slam its value in here
    bool useDefaultExplodeAIEventDecl; // Offset: 0x110

    // AI event to to send out for collision
    idDeclAiEvent* collideAIEventDecl; // Offset: 0x118

    // need this because the code-referenced decl has been moved to GlobalDataComponent and that isn't initialized early enough to slam its value in here
    bool useDefaultCollideAIEventDecl; // Offset: 0x120

    // Impact effect list to search for proper impact response. Plays on every impact.
    idDeclImpactEffect* impactEffectTable; // Offset: 0x128

    // Impact effect list to search for proper impact response. Has a max number that can be activated on the same frame per surface type.
    idDeclImpactEffect* impactEffectTableLimitedBySurfType; // Offset: 0x130

    // max impacts per surface in a given frame for impact effects from the limited by surface type impact effect table
    int maxImpactEffectsPerSurface; // Offset: 0x138

    // Impact effect table to use when the player firing has quad damage.
    idDeclImpactEffect* impactEffectTableQuad; // Offset: 0x140

    // for projectiles that ignore solid to use when entering solid
    idDeclImpactEffect* impactEffectEnterSolid; // Offset: 0x148

    // for projectiles that ignore solid to use when exiting solid
    idDeclImpactEffect* impactEffectExitSolid; // Offset: 0x150

    // for projectiles that explode and produce tail sounds based on surface type
    idDeclImpactEffect* explosionTailSounds; // Offset: 0x158

    // fx decl
    idDeclFX* fxDecl; // Offset: 0x160

    // if true, then ignore any override FX specified in weapon upgrades
    bool ignoreOverrideFXDecl; // Offset: 0x168

    // fx decl for projectiles owned by the local player (mp, optional)
    idDeclFX* fxDeclLocalOwner; // Offset: 0x170

    // fx decl for hostile projectiles (mp, optional)
    idDeclFX* fxDeclHostile; // Offset: 0x178

    // explosion decl, used by fire manager to spawn and control ambient fires
    idDeclExplosion* explosionDecl; // Offset: 0x180

    // if true, override the colors on ribbons on our trail based on friendly or enemy attacker
    bool overrideColorsForRibbons; // Offset: 0x188

    // if overrideColorsForRibbons set, used for projectiles owned by the local player.
    idVec4 localRibbonOverrideColor; // Offset: 0x18C

    // if overrideColorsForRibbons set, used for friendly projectiles.
    idVec4 friendlyRibbonOverrideColor; // Offset: 0x19C

    // if overrideColorsForRibbons set, used for enemy projectiles.
    idVec4 enemyRibbonOverrideColor; // Offset: 0x1AC

    // should we send hit scans that hit this projectile
    bool shouldSendHitScanHit; // Offset: 0x1BC

    // should we send hit scans if projectile is dead
    bool shouldSendHitScanIfDead; // Offset: 0x1BD

    // should we use a custom clip mask for this projectile
    bool overrideDefaultClipMask; // Offset: 0x1BE

    // if overrideDefaultClipMask is true, what is the mask to use
    contentsFlags_t overrideClipMask; // Offset: 0x1C0

    // should we change physics contents after colliding
    bool customContentsOnCollide; // Offset: 0x1C4

    // if customContentsOnCollide is true, what are the contents after collision
    contentsFlags_t contentsOnCollide; // Offset: 0x1C8

    // which type of throw anim does this projectile potentially use
    throwAnimType_t throwAnimType; // Offset: 0x1CC

    // it limits the projectile deviation from the joint axis
    float maxJointDot; // Offset: 0x1D0

    // when using the hack mod 'Deep Perception', show this projectile
    bool showWhenUsingDeepPerception; // Offset: 0x1D4

    // capsule hit scan shape test info
    idDeclProjectile::capsuleHitScanShapeTestInfo_t capsuleHitScanShapeTestInfo; // Offset: 0x1D8

    // Use shape for hit scan traces
    bool useShapeTestForHitScan; // Offset: 0x1F4

    // Enable Contact Resolution during collision
    idDeclProjectile::collisionContactResolution_t collisionContactResolution; // Offset: 0x1F8

    // spawn entity on impact or along trace (uses idProjectile::SpawnExplosionEntity) Entity to spawn when projectile hits something.
    idDeclEntityDef* spawnEntOnImpact; // Offset: 0x210

    // If positive then spawn the impact entity along the hitscan trace as well with this spacing {{ units = m }}
    float spawnEntAlongTraceSpacing; // Offset: 0x218

    // Whether to spawn the entity locally or replicate
    bool spawnEntLocally; // Offset: 0x21C

    // whether to scale the spawned ent to the splash damage radius or not
    bool spawnEntScaleToSplashRadius; // Offset: 0x21D

    // idManagedClassPtr< idEntity > spawnEntOnExplodeEntity; the spawned entity If true, we orient the spawned entity to the normal of the surface we hit when we spawn it
    bool orientSpawnEntityToSurface; // Offset: 0x21E

    // If true, we snap the spawned entity to the ground
    bool snapSpawnEntityToGround; // Offset: 0x21F

    // If true and it collides with AI, we bind the spawned entity to the AI
    bool bindSpawnEntityToAI; // Offset: 0x220

    // if true then explode it instantly
    bool spawnEntExplodeInstantly; // Offset: 0x221

    // spawn entity on headshot Entity to spawn when projectile kill with a headshot.
    idDeclEntityDef* spawnEntOnHeadshotKill; // Offset: 0x228

    // Entity to spawn when projectile if hit but not killed with a headshot.
    idDeclEntityDef* spawnEntOnHeadshotNonKill; // Offset: 0x230

    // Entity to spawn when projectile kill with a headshot.
    idDeclEntityDef* spawnEntOnWeakPointKill; // Offset: 0x238

    // Entity to spawn when projectile if hit but not killed with a headshot.
    idDeclEntityDef* spawnEntOnWeakPointNonKill; // Offset: 0x240

    // status effect to apply to entity firing this projectile
    idDeclStatusEffect* applyStatusEffectToOwner; // Offset: 0x248

    // the status effect will only be awarded when hitting a player
    bool applyStatusEffectMustHitPlayer; // Offset: 0x250

    // melee trace overrides bound type for melee trace (overrides weapon decl if value != BOUNDS_NONE)
    meleeBounds_t meleeTraceBoundsType; // Offset: 0x254

    // damage type for melee trace (overrides weapon decl if value != TRACE_NONE)
    meleeDamage_t meleeTraceDamageType; // Offset: 0x258

    // damage cap for melee trace, or 0 for no cap (overrides weapon decl if value >= 0 )
    float meleeTraceDamageCap; // Offset: 0x25C

    // ------------------------ not hitscan (projectileInfo) ------------------------ variables that are only valid if hitscan == false
    idDeclProjectile::notHitscanInfo_t notHitscanInfo; // Offset: 0x260

    // damage def to use for direction impact damage
    idDeclDamage* damageDecl; // Offset: 0x470

    // damage def for radius damage
    idDeclDamage* splashDamageDecl; // Offset: 0x478

    // alternate damage def
    idDeclDamage* altDamageDecl; // Offset: 0x480

    // alternate damage def for radius damage, used by weapons that remotely detonate their projectiles.
    idDeclDamage* altSplashDamageDecl; // Offset: 0x488

    // damage def for damage shocks the target and everything in a idWaterEntity applied in a radius at the center for now
    idDeclDamage* electricDamageDecl; // Offset: 0x490

    // area-of-effect splash arc damage to apply at the source of the fire in the direction of the fire
    idDeclDamage* aoeSplashDamageDecl; // Offset: 0x498

    // damage done from the clip model, in a cylindrical way.
    idDeclDamage* cylindricalDamageDecl; // Offset: 0x4A0

    // another damage decl triggered at impact point, intended to be non-damaging and to trigger reactions from farther away AI
    idDeclDamage* concussiveDamageDecl; // Offset: 0x4A8

    // alternate concussive damage def for radius damage, used by weapons that remotely detonate their projectiles.
    idDeclDamage* altConcussiveDamageDecl; // Offset: 0x4B0

    // allows a projectile to have delayed damage, delayed impact effect, etc (added from Doom4)
    idDeclEntityDef* delayedProjectile; // Offset: 0x4B8

    // delay time in MS for delayed projectile (added from Doom4)
    int delayedProjectileDelayMSMin; // Offset: 0x4C0

    // delay time in MS for delayed projectile (added from Doom4)
    int delayedProjectileDelayMSMax; // Offset: 0x4C4

    // the min MS between explosive array projectile delays
    int delayedProjectileStaggerMSMin; // Offset: 0x4C8

    // true to give the delayed projectile the same upgrades
    bool delayedProjectileInheritUpgrades; // Offset: 0x4CC

    // Do not ignore the direct hit target with splash damage.
    bool splashDoesntIgnoreDirectHitTarget; // Offset: 0x4CD

    // 2-D offsets from the primary explosion for delayed projectile explosions {{ units = m }}
    idStaticList < idDeclProjectile::delayedProjectileOffsetEnable_t , 8 , false , TAG_IDLIST > delayedProjectileOffsetEnables; // Offset: 0x4D0

    // disabled by default and can be enabled or disabled with WMT_WEAPON_PROJECTILES_DELAYED_PROJECTILE_OFFSET_ENABLE / DISABLE if true then only do delayed projectiles for a manually detonated base projectile
    bool delayedProjectileOnManualDetonationOnly; // Offset: 0x5C8

    // if surface has any flags not in this list, projectile radial damage and bullet penetration won't penetrate
    contentsFlags_t contentsProjectilePenetrates; // Offset: 0x5CC

    // maximum range of the projectile {{ units = m }}
    float maxRange; // Offset: 0x5D0

    // minimum useful range of the projectile( for AI ) {{ units = m }}
    float minRange; // Offset: 0x5D4

    // optimal range of the projectile( for AI ). Now works as min optimal range. {{ units = m }}
    float optimalRange; // Offset: 0x5D8

    // max optimal range beyond which AI will want to close on enemy {{ units = m }}
    float maxOptimalRange; // Offset: 0x5DC

    // the max range the aim assist will help you with this weapon {{ units = m }}
    float aimAssistRange; // Offset: 0x5E0

    // this should range from 0.0f - 2.0f, 0 is no zoom snap and 2.0 is max
    float aimAssistZoomSnapScale; // Offset: 0x5E4

    // 0 - default behavior, 1+ defines the number of circles to break the spread into and evenly distribute the shots in
    int spawnNumCircles; // Offset: 0x5E8

    // defines what percent of base spread that each spawn circle uses when calculating spread (must accumulate to 1.0)
    idList < float , TAG_IDLIST , false > spawnCircleStrengths; // Offset: 0x5F0

    // number of projectiles to fire at once
    int spawnCount; // Offset: 0x608

    // number of impact effects to create (cannot exceed spawnCount, and 0 means use spawnCount)
    int impactEffectSpawnCount; // Offset: 0x60C

    // degrees between spawned projectiles if there's a weapon. use weapon's fire spread.
    int spawnSpreadDegrees; // Offset: 0x610

    // spread the spawnCount projectiles firing over a short duration (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > burstDuration; // Offset: 0x614

    // so that shots from the same burst can all hit at the same impact point
    bool getImpactInfoFromLaunchWeapon; // Offset: 0x618

    // randomize shots within strategically selected dartboard regions to distribute shots evenly but randomly
    bool useDartboardSpread; // Offset: 0x619

    // remove the direct damage target from the splash damage calculations, saves network bandwidth. Users need to increases the base damageDecl damage accordingly.
    bool splashDamageIgnoresDirectTarget; // Offset: 0x61A

    // remove the direct damage target from the concussive damage calculations, saves network bandwidth. Users need to increases the base damageDecl damage accordingly.
    bool concussiveDamageIgnoresDirectTarget; // Offset: 0x61B

    // don't apply any splash damage on a direct hit.
    bool ignoreSplashDamageOnDirectHit; // Offset: 0x61C

    // does a Quake 4 style shotgun spread with a fixed distribution of damage traces and perturbed decal traces for randomness
    bool fixedSpreadRandomDecals; // Offset: 0x61D

    // how much 'wiggle' to allow between the actual traces and the decal traces
    float fixedSpreadRandomDecalsWiggle; // Offset: 0x620

    // information about the tracer or smoke system used, only used if hitscan == true
    idDeclProjectile::tracerInfo_t tracerInfo; // Offset: 0x628

    // the variables for the players feedback when firing the projectile.
    idDeclProjectile::waterInteraction_t waterInteraction; // Offset: 0x6A0

    // the variables for the ground projected dot when firing the projectile. (used by the mortar only currently)
    idDeclProjectile::laserDotInfo_t laserDotInfo; // Offset: 0x6B8

}; // Size: 0x6D8
