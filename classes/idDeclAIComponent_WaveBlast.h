struct idDeclAIComponent_WaveBlast : idDeclAIComponent
{
    struct waveEmitterData_t
    {
        // emitter to place along path
        idDeclEntityDef* emitter; // Offset: 0x0

        // index into particle array
        int emitter_particleIndex; // Offset: 0x8

        // idSoundEvent that will accompany the emitter. It follows the path of the emitter.
        idSoundEvent* emitterSoundEvent; // Offset: 0x10

        // emitter to move through world at front of wave
        idDeclEntityDef* leadEmitter; // Offset: 0x18

        // height of emitter placement interval along wave {{ units = m }}
        float height; // Offset: 0x20

        // width of emitter placement interval along wave {{ units = m }}
        float width; // Offset: 0x24

        // density of emitters in interval, per 128X128 units square
        float density; // Offset: 0x28

        // maps between world speed and texture scroll speed in shader
        float leadEnergySpeedMultiplier; // Offset: 0x2C

        // maps between world speed and texture scroll speed in shader
        float emitterEnergySpeedMultiplier; // Offset: 0x30

        // scale at start of wave
        float scale_start; // Offset: 0x34

        // max value scale will clamp at
        float scale_max; // Offset: 0x38

        // how fast scale grows
        float scale_rate; // Offset: 0x3C

        // particles emitter lifetime
        idTypesafeTime < int , millisecondUnique_t , 1000 > particleCleanupTimeout; // Offset: 0x40

        // alignToSurfaceNormals
        bool alignToSurfaceNormals; // Offset: 0x44

    }; // Size: 0x48

    struct waveShape_t
    {
        // the arc each wave should be
        idTypesafeNumber < float , DegreesUnique_t > arc; // Offset: 0x0

        // how fast the size of the arc should grow {{ units = m/s }}
        float growthRate; // Offset: 0x4

        // arc won't be from circle any smaller than this
        float arcRadiusMin; // Offset: 0x8

        // arc won't be from circle any larger than this
        float arcRadiusMax; // Offset: 0xC

        // table defining the normalized control point shape
        idDeclTable* splineTable; // Offset: 0x10

    }; // Size: 0x18

    struct newRetroWaveData_t
    {
        struct physicalInfo_t
        {
            // accel towards spline
            float acceleration_linear; // Offset: 0x0

            // decel towards spline
            float deceleration_linear; // Offset: 0x4

            // accel towards spline direction
            float acceleration_angular; // Offset: 0x8

            // decel towards spline direction
            float deceleration_angular; // Offset: 0xC

            // can't rotate faster than this
            float angularVelocityMax; // Offset: 0x10

        }; // Size: 0x14

        struct waveDataDifficultyOverrideData_t
        {
            // this entry applies to this difficulty and all greater, unless other entries exist
            gameDifficulty_t difficulty; // Offset: 0x0

            // if >= 0.0f, use this value instead
            float overrideSpeed; // Offset: 0x4

            // if >= 0.0f, use this value instead
            idTypesafeNumber < float , DegreesUnique_t > overrideSeekTargetRate; // Offset: 0x8

            // if >= 0.0f, use this value instead
            float overrideSeekTargetSpeed; // Offset: 0xC

        }; // Size: 0x10

        // name of this attack
        idAtomicString name; // Offset: 0x0

        // if true, display debug rendering for damage hitbox
        bool showDamageExtents; // Offset: 0x8

        // emitter placement stuff for main shot
        idDeclAIComponent_WaveBlast::waveEmitterData_t emitterData; // Offset: 0x10

        // speed of flare wall {{ units = m / s }}
        float speed; // Offset: 0x58

        // radius of wave {{ units = m }}
        float radius; // Offset: 0x5C

        // radius of wave {{ units = m }}
        float radiusHeight; // Offset: 0x60

        // radius of wave {{ units = m }}
        float radiusWidth; // Offset: 0x64

        // Allow the position and orientation to have slight amounts of random offset
        bool allowRandomOffsets; // Offset: 0x68

        // When testing against the returned traces, should a random index in the trace list be used to sample along the path. This results in a less uniform distribution.
        bool useRandomTraceSamples; // Offset: 0x69

        // first distance we can spawn an emitter ( prevent AI from hurting itself ) {{ units = m }}
        float startOffset; // Offset: 0x6C

        // how long flare emitters will stick around in world {{ units = s }}
        float lifetime; // Offset: 0x70

        // emitter for damage done when wavefront hits an entity
        idDeclEntityDef* wavefrontDamageEmitter; // Offset: 0x78

        // distance in front of or behind wave that damage should be offset
        float wavefrontDamageEmitterOffset; // Offset: 0x80

        // damage done when wavefront hits an entity
        idDeclDamage* wavefrontDamage; // Offset: 0x88

        // distance in front of or behind wave that damage should be offset
        float wavefrontDamageOffset; // Offset: 0x90

        // estimated width of wavefront ( try to match model in fx ) {{ units = m }}
        float wavefrontWidth; // Offset: 0x94

        // estimated height of wavefront ( try to match model in fx ) {{ units = m }}
        float wavefrontHeight; // Offset: 0x98

        // if true, do forward trace from lead origin on each update, and explode if lead collides with world geo
        bool explodeOnLeadCollision; // Offset: 0x9C

        // distance of trace from lead origin to check for geo
        float explodeOnCollisionTraceDist; // Offset: 0xA0

        // height above lead FX origin to start forward trace {{ units = m }}
        float explodeOnCollisionTraceHeight; // Offset: 0xA4

        // blow up when this far from an enemy in 2D {{ units = m }}
        float explodeDist; // Offset: 0xA8

        // blow up when Z from an enemy is less than specified by this {{ units = m }}
        float explodeZ; // Offset: 0xAC

        // thing to spawn at explosion point
        idDeclEntityDef* explodeEmitter; // Offset: 0xB0

        // damage to call when blown up
        idDeclDamage* explodeDamage; // Offset: 0xB8

        // explosion decl to use
        idDeclExplosion* explosionDecl; // Offset: 0xC0

        // spline definitions to use for this wave
        idList < splineDefinition_t , TAG_IDLIST , false > waveSplines; // Offset: 0xC8

        // data about shape of this wave
        idDeclAIComponent_WaveBlast::waveShape_t waveShape; // Offset: 0xE0

        // seeking target rotation rate
        idTypesafeNumber < float , DegreesUnique_t > seekTargetRate; // Offset: 0xF8

        // seek target speed, uses different algorithm than rotation rate
        float seekTargetSpeed; // Offset: 0xFC

        // spline test flags for seeking
        splineQueryTestFlags_t seekTestFlags; // Offset: 0x100

        // delay between updating seek info, for perf
        idTypesafeTime < float , secondUnique_t , 1 > seekUpdateDelay; // Offset: 0x104

        // once wave is within this distance to target, don't seek {{ units = m }}
        float seekMinDistFromTarget; // Offset: 0x108

        // max traces per frame
        int maxTracesPerFrame; // Offset: 0x10C

        // alignToSurfaceNormals
        bool alignToSurfaceNormals; // Offset: 0x110

        // maximum allowed angle differencewith the owner's facing
        idTypesafeNumber < float , DegreesUnique_t > maxOwnerFacingAngle; // Offset: 0x114

        // if true, lead items ( emitter, sound, etc) should drop to ground just like the rest of the wave
        bool dropLeadToSurface; // Offset: 0x118

        // if true, use current wave code
        bool useNewWave; // Offset: 0x119

        // if true, use old wave code ( can be simultaneous with new, for a/b testing )
        bool useOldWave; // Offset: 0x11A

        // if true, draw debug points at wavefront location each frame
        bool debugWavePosition; // Offset: 0x11B

        // parameters controlling how the waveblast can physically move along the spline
        idDeclAIComponent_WaveBlast::newRetroWaveData_t::physicalInfo_t physicalInfo; // Offset: 0x11C

        // optional difficulty overrides - applied to specified difficulty and above, unless another entry exists
        idList < idDeclAIComponent_WaveBlast::newRetroWaveData_t::waveDataDifficultyOverrideData_t , TAG_IDLIST , false > waveDataDifficultyOverrides; // Offset: 0x130

    }; // Size: 0x148

    struct sphereData_t
    {
        // names of fx offset sets
        idList < idAtomicString , TAG_IDLIST , false > fxOffsetSetNames; // Offset: 0x0

        // emitter before wave
        idDeclEntityDef* preEmitter; // Offset: 0x18

        // index into custom particle array for pre-emitter
        int preEmitter_particleIndex; // Offset: 0x20

        // idSoundEvent that will accompany the emitter. It follows the path of the emitter.
        idSoundEvent* preEmitterSoundEvent; // Offset: 0x28

        // emitter after wave
        idDeclEntityDef* postEmitter; // Offset: 0x30

        // index into custom particle array for post-emitter
        int postEmitter_particleIndex; // Offset: 0x38

        // emitter at front of wave
        idDeclEntityDef* leadEmitter; // Offset: 0x40

        // copy from spawn orientation...
        idMat3 leadEmitterOrientation; // Offset: 0x48

        // how much to scale each component as it expands
        idVec3 scaleFactors; // Offset: 0x6C

        // arc angle. 360 = no arc
        idTypesafeNumber < float , DegreesUnique_t > arcAngle; // Offset: 0x78

        // idSoundEvent that will accompany the emitter. It follows the path of the emitter.
        idSoundEvent* leadEmitterSoundEvent; // Offset: 0x80

        // speed of sphere size increase {{ units = m / s }}
        float speed; // Offset: 0x88

        // max radius of attack {{ units = m }}
        float radius; // Offset: 0x8C

        // how many emitters to spawn, per 128x128 unit square, along path
        float emitterDensity; // Offset: 0x90

        // how often to do the flare attack
        idRange < int > interval; // Offset: 0x94

        // first distance we can spawn an emitter ( prevent AI from hurting itself ) {{ units = m }}
        float startOffset; // Offset: 0x9C

        // how long flare emitters will stick around in world {{ units = s }}
        float lifetime; // Offset: 0xA0

        // time between casting and when wave should emerge {{ units = s }}
        float telegraphTime; // Offset: 0xA4

        // damage done when wavefront hits an entity
        idDeclDamage* wavefrontDamage; // Offset: 0xA8

        // multiplier to the growth rate of the sphere
        float growthMultiplier; // Offset: 0xB0

        // height of the front of the wave {{ units = m }}
        float frontEffectHeight; // Offset: 0xB4

        // maps between world speed and texture scroll speed in shader
        float leadEnergySpeedMultiplier; // Offset: 0xB8

        // maps between world speed and texture scroll speed in shader
        float postEmitterEnergySpeedMultiplier; // Offset: 0xBC

        // Offset to apply in the direction of the lead effect {{ units = m }}
        float leadOffset; // Offset: 0xC0

        // how fast to change scale based on speed of the sphere {{ units = 1 / m }}
        float arcSpeedToGrowthRate; // Offset: 0xC4

        // whether to use fx2
        bool useLeadFX2; // Offset: 0xC8

        // whether this is a wedge
        bool useArcAngle; // Offset: 0xC9

        // use both fx offsets and random offsets
        bool useOffsetsAndRandom; // Offset: 0xCA

        // alignToSurfaceNormals
        bool alignToSurfaceNormals; // Offset: 0xCB

        // if true, play this at our own feet
        bool centerOnSelf; // Offset: 0xCC

    }; // Size: 0xD0

    struct sphereNameTuple_t
    {
        // name to map to
        idStr name; // Offset: 0x0

        // sphere data
        idDeclAIComponent_WaveBlast::sphereData_t sphereData; // Offset: 0x30

    }; // Size: 0x100

    struct fxOffsetData_t
    {
        enum offsetSpace_t : int
        {
            OFFSET_OWNER = 0,
            OFFSET_TO_ENEMY = 1,
            OFFSET_ENEMY_LOCAL = 2,
            OFFSET_WORLD = 3
        };

        // offsets for fx points to use
        idList < idVec3 , TAG_IDLIST , false > offsets; // Offset: 0x0

        // name of this set
        idAtomicString name; // Offset: 0x18

        // how to rotate this set
        idDeclAIComponent_WaveBlast::fxOffsetData_t::offsetSpace_t space; // Offset: 0x20

        // scale offsets by this much
        float scale; // Offset: 0x24

    }; // Size: 0x28

    // list of wave attacks using new style
    idList < idDeclAIComponent_WaveBlast::newRetroWaveData_t , TAG_IDLIST , false > waveAttacks_new; // Offset: 0x98

    // defensive short range sphere attacks
    idList < idDeclAIComponent_WaveBlast::sphereNameTuple_t , TAG_IDLIST , false > sphereList; // Offset: 0xB0

    // entityDef to spawn for shield
    idDeclEntityDef* shieldEntityDef; // Offset: 0xC8

    // initial orientation of shield
    idMat3 shieldOrientation; // Offset: 0xD0

    // initial offset of shield
    idVec3 shieldOffset; // Offset: 0xF4

    // put particles and stuff in here for max performance
    idList < const idDeclParticle * , TAG_IDLIST , false > customFXParticles; // Offset: 0x100

    // generic spline tables that other code can use
    idList < splineDefinition_t , TAG_IDLIST , false > splineDefinitions; // Offset: 0x118

    // sets of offsets for fx points
    idList < idDeclAIComponent_WaveBlast::fxOffsetData_t , TAG_IDLIST , false > fxOffsetSets; // Offset: 0x130

    // if true, the server tells the clients where the waveblast is going to go instead of them doing a local predication
    bool serverAuthoritativePath; // Offset: 0x148

    // if true, the victim client will determine damage
    bool victimAuthoritativeDamage; // Offset: 0x149

    // if true, damage will not be dealt if the player just double jumped
    bool skipDamageIfJustDoubleJumped; // Offset: 0x14A

    // if true, damage will not be dealt if the player just dashed
    bool skipDamageIfJustDashed; // Offset: 0x14B

}; // Size: 0x150
