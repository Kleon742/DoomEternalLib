struct idDeclAIComponent_PathManager : idDeclAIComponent
{
    struct pathParticle_t
    {
        // entity to spawn for a particle
        idDeclEntityDef* fxEntity; // Offset: 0x0

        // ribbon to follow particle
        idDeclRibbon2* ribbonDecl; // Offset: 0x8

        // ribbon to follow particle during start transition
        idDeclRibbon2* ribbonDecl_start; // Offset: 0x10

        // ribbon to follow particle during stop transition
        idDeclRibbon2* ribbonDecl_stop; // Offset: 0x18

        // list of ribbons to use on particles, randomly choosen
        idList < const idDeclRibbon2 * , TAG_IDLIST , false > ribbonDecls; // Offset: 0x20

        // optional tag for where particle should spawn and return to
        idAtomicString tagName; // Offset: 0x38

        // minimum model space offset for ribbon {{ units = m }}
        idVec3 modelSpaceOffset_min; // Offset: 0x40

        // maxiumum model space offset for ribbon {{ units = m }}
        idVec3 modelSpaceOffset_max; // Offset: 0x4C

        // velocity in direction of movement, relative to model velocity {{ units = m / s }}
        idRange < float > pathVelocity; // Offset: 0x58

        // how quickly we accelerate or decelerate to target speed {{ units = m / ( s * s ) }}
        idRange < float > pathAcceleration; // Offset: 0x60

        // radial velocity {{ units = m / s }}
        idRange < float > radialVelocity; // Offset: 0x68

        // how quickly we accelerate or decelerate to target speed {{ units = m / ( s * s ) }}
        idRange < float > radialAcceleration; // Offset: 0x70

        // how much we want to bias particle expanstion towards path direction
        float pathDirExpansionMitigation; // Offset: 0x78

        // fx condition to play as body dissolves
        fxCondition_t fxCondition_body_dissolve; // Offset: 0x7C

        // fx to play as a breadcrumb along path
        fxCondition_t fxCondition_breadcrumb; // Offset: 0x80

        // fx to play as we stream along path
        fxCondition_t fxCondition_stream; // Offset: 0x84

        // fx condition to play as body coalesces
        fxCondition_t fxCondition_body_coalesce; // Offset: 0x88

        // number of these to spawn
        idRange < int > numToSpawn; // Offset: 0x8C

        // seconds to delay starting ribbon after phase shift event
        idRange < float > ribbonStartDelay; // Offset: 0x94

        // seconds to delay stopping ribbon after phase shift event
        idRange < float > ribbonStopDelay; // Offset: 0x9C

        // time after collapse when ribbon should start fading out
        idRange < float > fadeStartDelay; // Offset: 0xA4

        // seconds over which the collapse phase is performed
        idRange < float > collapseDuration; // Offset: 0xAC

        // seconds over which the ribbons are blended out, starting when collapse is begun
        idRange < float > fadeOutDuration; // Offset: 0xB4

        // how far apart wander nodes are {{ units = m }}
        idRange < float > wander_dist; // Offset: 0xBC

        // how quickly direction changes come into effect, for particle wander
        idRange < float > wander_seekSpeed; // Offset: 0xC4

        // extents of vertical wander ( won't go past these above and below start height ) {{ units = m }}
        idRange < float > wander_vertical_range; // Offset: 0xCC

        // how far the next wander point should be from the previous, vertically {{ units = m }}
        idRange < float > wander_vertical_magnitude; // Offset: 0xD4

        // extents of horizontal wander, won't go past these to left and right of start point ) {{ units = m }}
        idRange < float > wander_horizontal_range; // Offset: 0xDC

        // how far the next wander point should be from the previous, horizontally {{ units = m }}
        idRange < float > wander_horizontal_mangnitude; // Offset: 0xE4

        // add extra ribbon nodes at this distance, regardless of how fast particle is advancing {{ units = m }}
        float ribbon_subdivisionDist; // Offset: 0xEC

        // render debug sphere at path particle position
        bool showDebugRender; // Offset: 0xF0

        // color to use for debug sphere
        idColor debugColor; // Offset: 0xF4

        // if false, don't spawn this
        bool enabled; // Offset: 0x104

    }; // Size: 0x108

    struct fakePathData_t
    {
        // name of fake path
        idAtomicString name; // Offset: 0x0

        // start transition web node
        idAnimWebPath startTransitionAnim; // Offset: 0x8

        // stop transition web node
        idAnimWebPath stopTransitionAnim; // Offset: 0x38

        // move cycle aweb node
        idAnimWebPath moveCycleAnim; // Offset: 0x68

        // entity to spawn at the AI's move destination for this path
        idDeclEntityDef* moveDestinationFXEntity; // Offset: 0x98

        // delay in MS for removal of move destination FX entity after finishing fake path move
        idTypesafeTime < int , millisecondUnique_t , 1000 > moveDestinationFXEntityRemoveDelayMS; // Offset: 0xA0

        // particles for path
        idList < idDeclAIComponent_PathManager::pathParticle_t , TAG_IDLIST , false > pathParticles; // Offset: 0xA8

        // -1 implies use move speeds from AI {{ units = m }}
        idTypesafeTime < float , secondUnique_t , 1 > defaultMoveDuration; // Offset: 0xC0

        // -1 implies use move speeds from AI {{ units = m/s }}
        float defaultMoveSpeed; // Offset: 0xC4

        // if true, move ai's non-hidden rendermodel along the path so FX still work on it
        bool moveAIAlongPath; // Offset: 0xC8

    }; // Size: 0xD0

    struct phaseShiftData_t
    {
        // max shift
        float maxShift; // Offset: 0x0

        // how long it takes a shift to blend in
        idTypesafeTime < float , secondUnique_t , 1 > shiftBlendTimeInSeconds; // Offset: 0x4

        // color of model in shift
        idColor shiftColor; // Offset: 0x8

    }; // Size: 0x18

    struct aimAvoidData_t
    {
        // name of this data
        idAtomicString setName; // Offset: 0x0

        // avoid this fov from enemy view dir
        idTypesafeNumber < float , DegreesUnique_t > avoidFOV; // Offset: 0x8

        // don't bother if beyond this range from enemy
        float maxRange; // Offset: 0xC

        // blend into full fov avoidance by this range
        float idealRange; // Offset: 0x10

        // don't bother if within this range from enemy
        float minRange; // Offset: 0x14

    }; // Size: 0x18

    // allows custom and specific obstacle info per monster type
    idList < monsterObstacleInfoSet_t , TAG_IDLIST , false > monsterObstacleSets; // Offset: 0x98

    // Defines the owner flags
    pathManagerFlag_t myFlags; // Offset: 0xB0

    // Defines the flags those owners will be ignored
    pathManagerFlag_t ignoreObstaclesFlags; // Offset: 0xB4

    // AI obstacles outside this distance will be ignored {{ units = m }}
    float ignoreAIDistance; // Offset: 0xB8

    // Obstacles farther than this distance are not even considered {{ units = m }}
    float noObstacleDistance; // Offset: 0xBC

    // Normal distance to keep between AIs {{ units = m }}
    float normalObstacleDistance; // Offset: 0xC0

    // Minimal distance to keep between AIs {{ units = m }}
    float nearDistance; // Offset: 0xC4

    // ignore aasObstacle entities
    bool ignorePlacedObstacles; // Offset: 0xC8

    // list of fake paths available to this character
    idList < idDeclAIComponent_PathManager::fakePathData_t , TAG_IDLIST , false > fakePathData; // Offset: 0xD0

    // data for phase shift VFX when using fake path
    idDeclAIComponent_PathManager::phaseShiftData_t phaseShiftData; // Offset: 0xE8

    // how to avoid enemy aim
    idList < idDeclAIComponent_PathManager::aimAvoidData_t , TAG_IDLIST , false > aimAvoidanceSets; // Offset: 0x100

}; // Size: 0x118
