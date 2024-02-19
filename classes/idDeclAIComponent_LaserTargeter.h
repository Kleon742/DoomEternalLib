struct idDeclAIComponent_LaserTargeter : idDeclAIComponent
{
    enum sweepType_t : int
    {
        SWEEP_TRANSLATION = 0,
        SWEEP_ANGLES = 1
    };

    struct sweepControlPoint_translation_t
    {
        // translation of control point, in target-facing-ai zero pitch zero roll space ( think, on the ground in front of target, facing ai ) {{ units = m }}
        idVec3 origin; // Offset: 0x0

        // fraction of sweep this control point should be located at, 0.0 == beginning, 0.5 = halfway through, 1.0 = end
        float splineTime; // Offset: 0xC

    }; // Size: 0x10

    struct sweepControlPoint_angles_t
    {
        // angles of control point, in ai-to-target relative euler space
        idAngles angles; // Offset: 0x0

        // distance from ai this point should be, -1 implies exatcly matching target distance {{ units = m }}
        float distance; // Offset: 0xC

        // fraction of sweep this control point should be located at, 0.0 == beginning, 0.5 = halfway through, 1.0 = end
        float splineTime; // Offset: 0x10

    }; // Size: 0x14

    struct laserSweep_t
    {
        // if can use
        bool enabled; // Offset: 0x0

        // name of sweep, reference this to start one
        idStr name; // Offset: 0x8

        // name of weapon slot that will follow laser with attack
        equipSlot_t slot; // Offset: 0x38

        // tag on model to originate sweep laser from
        idStr bindTagName; // Offset: 0x40

        // sanity check, just make sure this matches the below list you fill out
        idDeclAIComponent_LaserTargeter::sweepType_t type; // Offset: 0x70

        // translation control points, must use SWEEP_TRANSLATION type
        idList < idDeclAIComponent_LaserTargeter::sweepControlPoint_translation_t , TAG_IDLIST , false > controlPoints_translation; // Offset: 0x78

        // angle control points, must use SWEEP_ANGLES type
        idList < idDeclAIComponent_LaserTargeter::sweepControlPoint_angles_t , TAG_IDLIST , false > controlPoints_angles; // Offset: 0x90

        // duration of sweep in seconds
        idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0xA8

        // duration of attack portion of sweep, in seconds
        idTypesafeTime < float , secondUnique_t , 1 > duration_attack; // Offset: 0xAC

        // actual laser
        idDeclRibbon2* ribbonDecl; // Offset: 0xB0

    }; // Size: 0xB8

    struct attackShot_t
    {
        // how long to wait since last attack shot
        idRange < float > delayFromPreviousShot; // Offset: 0x0

        // 0.0f implies no prediction, 1.0f implies perfect, -1.0 is behind target, 2.0 is double distance leading, etc.
        idRange < float > predictionRange; // Offset: 0x8

        // min offset in target velocity space ( +x is along target velocity vector ) {{ units = m }}
        idVec3 targetVelocityRelativeOffset_min; // Offset: 0x10

        // max offset in target velocity space ( +x is along target velocity vector ) {{ units = m }}
        idVec3 targetVelocityRelativeOffset_max; // Offset: 0x1C

        // weapon 0 or 1
        int weapon; // Offset: 0x28

        // thing to shoot
        idDeclProjectile* projectile; // Offset: 0x30

    }; // Size: 0x38

    struct multiAttack_t
    {
        // how often we can do this multi-attack
        idRange < float > interval; // Offset: 0x0

        // list of shots to execute
        idList < idDeclAIComponent_LaserTargeter::attackShot_t , TAG_IDLIST , false > shots; // Offset: 0x8

    }; // Size: 0x20

    struct aimConfiguration_t
    {
        // min offset in target velocity space ( +x is along target velocity vector )
        idVec3 offset1_min; // Offset: 0x0

        // max offset in target velocity space ( +x is along target velocity vector )
        idVec3 offset1_max; // Offset: 0xC

        // min offset in target velocity space ( +x is along target velocity vector )
        idVec3 offset2_min; // Offset: 0x18

        // max offset in target velocity space ( +x is along target velocity vector )
        idVec3 offset2_max; // Offset: 0x24

        // aim points must be at least this far from each other, in target tangent space {{ units = m }}
        float minSeparation; // Offset: 0x30

    }; // Size: 0x34

    struct rocketHelix_t
    {
        // not used by code, just handy
        idStr name; // Offset: 0x0

        // distance in front of rocket chase target should stay {{ units = m }}
        idRange < float > chaseTargetDistance_forward; // Offset: 0x30

        // distance from original rocket path chase target should stay, radially {{ units = m }}
        idRange < float > chaseTargetDistance_radial; // Offset: 0x38

        // loop rotation rate of chase target, in degrees per second
        idRange < float > chaseTargetRotationRate; // Offset: 0x40

        // list of entity def's that this helix can apply to
        idList < const idDeclEntityDef * , TAG_IDLIST , false > projectileEntityDefs; // Offset: 0x48

        // AI should multiply their memorized ranged attack speed by this much
        float rangedAttackSpeedModifier; // Offset: 0x60

        // if true, this helix will try to follow a spline path
        bool allowSplineTargeting; // Offset: 0x64

    }; // Size: 0x68

    struct splineTargetingDefinition_t
    {
        // name of this definition
        idAtomicString name; // Offset: 0x0

        // splines to pick from, randomly
        idList < splineDefinition_t , TAG_IDLIST , false > splines; // Offset: 0x8

        // degree of roll across all splines in this targeting set
        idTypesafeNumber < float , DegreesUnique_t > roll; // Offset: 0x20

        // generate grid around target point using these offsets
        idList < idVec3 , TAG_IDLIST , false > offsets; // Offset: 0x28

        // use these offsets for validation instead of final offsets, empty implies using real offsets
        idList < idVec3 , TAG_IDLIST , false > offsets_validation; // Offset: 0x40

        // trace bounds of this size along splines
        float validationBoundsSize; // Offset: 0x58

        // randomly chooses either min or max to scale offsets X
        idRange < float > offsetScaleX; // Offset: 0x5C

        // randomly chooses either min or max to scale offsets X
        idRange < float > offsetScaleY; // Offset: 0x64

        // spawn this fx entity at target point
        idDeclEntityDef* fxEnt; // Offset: 0x70

        // magic-ish number
        idTypesafeTime < float , secondUnique_t , 1 > leadTargetBase_1; // Offset: 0x78

        // magic-ish number
        float leadTargetMultiplier_1; // Offset: 0x7C

        // magic-ish number
        idTypesafeTime < float , secondUnique_t , 1 > leadTargetBase_2; // Offset: 0x80

        // magic-ish number
        float leadTargetMultiplier_2; // Offset: 0x84

        // don't use this set if distance to target is outside
        idRange < float > validRange; // Offset: 0x88

        // if true, use this one
        bool enabled; // Offset: 0x90

    }; // Size: 0x98

    struct singleLaserData_t
    {
        // actual tag name
        idAtomicString tagName; // Offset: 0x0

        // laser start is delayed by this much relative to collection
        idTypesafeTime < float , secondUnique_t , 1 > startDelay; // Offset: 0x8

        // ribbon decl to use
        idDeclRibbon2* ribbonDecl; // Offset: 0x10

        // emitter for damage done when laser hits an entity
        idDeclEntityDef* fxEmitter; // Offset: 0x18

        // damage done when laser hits an entity
        idDeclDamage* damage; // Offset: 0x20

    }; // Size: 0x28

    struct singleLaserCollection_t
    {
        // bind tag names are mapped to this, then expanded
        idAtomicString collectionName; // Offset: 0x0

        // expanded into these
        idList < idDeclAIComponent_LaserTargeter::singleLaserData_t , TAG_IDLIST , false > lasers; // Offset: 0x8

    }; // Size: 0x20

    // if true, toggle all the laser functionality
    bool useLaserTargeting; // Offset: 0x98

    // list of all possible laser sweeps
    idList < idDeclAIComponent_LaserTargeter::laserSweep_t , TAG_IDLIST , false > sweeps; // Offset: 0xA0

    // lead target this much with sweep positions
    idTypesafeTime < float , secondUnique_t , 1 > sweepLeadTime; // Offset: 0xB8

    // list of mult-shot attacks available
    idList < idDeclAIComponent_LaserTargeter::multiAttack_t , TAG_IDLIST , false > multiShotAttacks; // Offset: 0xC0

    // list of double weapon configurations to select from
    idList < idDeclAIComponent_LaserTargeter::aimConfiguration_t , TAG_IDLIST , false > aimConfigurations; // Offset: 0xD8

    // tag on model to originate pinpoint lasers from
    idStr laserPinpoint_bindTagName; // Offset: 0xF0

    // ribbon decl to use for pinpoint lasers
    idDeclRibbon2* laserPinpoint_ribbonDecl; // Offset: 0x120

    // laser pinpoint duration in seconds
    idTypesafeTime < float , secondUnique_t , 1 > laserPinpoint_flickerDuration; // Offset: 0x128

    // between flickers, in seconds
    idTypesafeTime < float , secondUnique_t , 1 > laserPinpoint_flickerInterval; // Offset: 0x12C

    // time to add to lead interval for targetting
    idTypesafeTime < float , secondUnique_t , 1 > laserPinpoint_laserTime; // Offset: 0x130

    // number of flickers across pinpoint duration
    int laserPinpoint_flickers; // Offset: 0x134

    // entitydef to place in world at hologram points
    idDeclEntityDef* laserPinpoint_hologram; // Offset: 0x138

    // lets user start multiple lasers in a sequence easily
    idList < idDeclAIComponent_LaserTargeter::singleLaserCollection_t , TAG_IDLIST , false > laserCollections; // Offset: 0x140

    // list of available rocket helix patterns certain shots can make use of
    idList < idDeclAIComponent_LaserTargeter::rocketHelix_t , TAG_IDLIST , false > rocketHelixes; // Offset: 0x158

    // entity to spawn as a drunken rocket chase target
    idDeclEntityDef* rocketChaseTargetDef; // Offset: 0x170

    // spline targeting sequence definitions
    idList < idDeclAIComponent_LaserTargeter::splineTargetingDefinition_t , TAG_IDLIST , false > splineTargetingDefinitions; // Offset: 0x178

    // if true, randomize valid definitions instead of considering in order
    bool randomizeSplineTargetingDefinitions; // Offset: 0x190

}; // Size: 0x198
