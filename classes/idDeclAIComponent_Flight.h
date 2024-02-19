struct idDeclAIComponent_Flight : idDeclAIComponent
{
    struct enemyFocusConfig_t
    {
        // how long before we start focusing on the enemy after we see it
        idTypesafeTime < float , secondUnique_t , 1 > visionReactionTime; // Offset: 0x0

        // offset to apply to the enemy's location {{ units = m }}
        idVec3 offset; // Offset: 0x4

        // minimum 2D distance to start focusing on the enemy {{ units = m }}
        float radius; // Offset: 0x10

        // maximum height difference to start focusing on the enemy {{ units = m }}
        float maxHeightDiff; // Offset: 0x14

        // whether to focus on the enemy
        bool enabled; // Offset: 0x18

    }; // Size: 0x1C

    struct yawPitchConfig_t
    {
        // we will only modify our pitch if our yaw difference is no greater than this
        idTypesafeNumber < float , DegreesUnique_t > maxYawDiffToAllowPitchChange; // Offset: 0x0

        // how fast we'll change our yaw
        float yawRotationRate; // Offset: 0x4

        // how fast we'll change our pitch
        float pitchRotationRate; // Offset: 0x8

    }; // Size: 0xC

    struct levelOutConfig_t
    {
        // how fast we'll change our yaw
        float yawRotationRate; // Offset: 0x0

        // how fast we'll change our roll
        float rollRotationRate; // Offset: 0x4

    }; // Size: 0x8

    struct flightParams_t
    {
        // focus on enemy info
        idDeclAIComponent_Flight::enemyFocusConfig_t enemyFocus; // Offset: 0x0

        // yaw and pitch info
        idDeclAIComponent_Flight::yawPitchConfig_t yawAndPitch; // Offset: 0x1C

        // Offset for flying creatures {{ units = m }}
        float flyingZOffset; // Offset: 0x28

        // max/min allowable speed for height changes {{ units = m / s }}
        idRange < float > verticalSpeedRange; // Offset: 0x2C

        // acceleration for converging on vertical speeds
        float verticalAcceleration; // Offset: 0x34

        // desired distance to the look ahead point {{ units = m }}
        float desiredDistanceToMovementLookahead; // Offset: 0x38

        // Distance to the look ahead point on the spline that we can allow (before error correction kicks in) {{ units = m }}
        idRange < float > allowableDistanceError; // Offset: 0x3C

        // we will be focusing in a position in the future to navigate
        float focusDistance; // Offset: 0x44

        // turn angle that represents a full change roll lean angle for the flying unit
        idTypesafeNumber < float , DegreesUnique_t > angleForFullRoll; // Offset: 0x48

        // how fast we'll change our lean angle (roll)
        float rollRate; // Offset: 0x4C

        // maximum roll angle
        float maxRollAngle; // Offset: 0x50

        // we will only allow new movement if the yaw diff is lower than this
        idTypesafeNumber < float , DegreesUnique_t > maxYawDiffToAllowMovement; // Offset: 0x54

        // minimum and maximum acceleration. Maximum acceleration is used when we're facing the direction of the movement {{ units = m / ( s * s ) }}
        idRange < float > acceleration; // Offset: 0x58

        // flight speed (min = speed at full turn, max = speed on straight line) {{ units = m / s }}
        idRange < float > speed; // Offset: 0x60

        // min/max roll factor for speed change (below min, maxSpeed - above max, minSpeed) {{ units = m / s }}
        idRange < float > speedChangeRollRange; // Offset: 0x68

        // Min(maxSpeed, Distance to target multiplied by this number) is the speed we want to achieve {{ units = 1 / s }}
        float decelerationRate; // Offset: 0x70

        // friction (deceleration) that will be applied to the unit when it's trying to move in the opposite direction {{ units = m / ( s * s ) }}
        float friction; // Offset: 0x74

        // if we are closer to the destination than this, don't allow pitch changes and face the destination's direction (unless we're facing the enemy) {{ units = m }}
        float arrivalRadius; // Offset: 0x78

        // avoidance radius {{ units = m }}
        float avoidanceRadius; // Offset: 0x7C

        // inner avoidance radius {{ units = m }}
        float innerAvoidanceRadius; // Offset: 0x80

        // avoidance speed {{ units = m / s }}
        float avoidanceSpeed; // Offset: 0x84

        // maximum slope (number of units we are allowed to move vertically per each horizontal unit traveled)
        float maxSlope; // Offset: 0x88

        // whether it'll take some time to move at full speed if we change directions
        bool useFriction; // Offset: 0x8C

        // whether to ignore other AIs around us
        bool ignoreOthers; // Offset: 0x8D

        // whether to decelerate to arrive to the destination more gracefully
        bool easeArrival; // Offset: 0x8E

    }; // Size: 0x90

    struct stationaryParms_t
    {
        // focus on enemy info
        idDeclAIComponent_Flight::enemyFocusConfig_t enemyFocus; // Offset: 0x0

        // yaw and pitch info
        idDeclAIComponent_Flight::yawPitchConfig_t yawAndPitch; // Offset: 0x1C

    }; // Size: 0x28

    struct pointBlankOverrideParms_t
    {
        // how far from enemy to override flight parameters
        float pointBlankDistance2D; // Offset: 0x0

        // how fast we'll change our yaw
        float yawRotationRate; // Offset: 0x4

    }; // Size: 0x8

    // override parameters when too close to enemy
    idDeclAIComponent_Flight::pointBlankOverrideParms_t pointBlankOverrideParms; // Offset: 0x98

    // stationary parameters
    idDeclAIComponent_Flight::stationaryParms_t stationaryParms; // Offset: 0xA0

    // flight parameters for normal (walk, run) speed
    idDeclAIComponent_Flight::flightParams_t flightParms; // Offset: 0xC8

    // flight parameters for fast (sprint) speed
    idDeclAIComponent_Flight::flightParams_t fastFlightParms; // Offset: 0x158

    // parameters to control how fast we level out after getting killed
    idDeclAIComponent_Flight::levelOutConfig_t levelOutParms; // Offset: 0x1E8

    // loop to play while the unit is falling to the ground after being killed
    idAnimWebPath deathFallingLoop; // Offset: 0x1F0

    // anim to play when the ground is hit after dying
    idAnimWebPath deathGroundHit; // Offset: 0x220

    // how long before we hide the unit after it's killed (-1 means no hiding)
    idTypesafeTime < float , secondUnique_t , 1 > delayToHideAfterDeath; // Offset: 0x250

    // how long before we hide the unit after it starts dropping (fallback so we don't drop infinitely)
    idTypesafeTime < float , secondUnique_t , 1 > maxDroppingTime; // Offset: 0x254

    // how long before we land dead on the ground start burn out VFX
    idTypesafeTime < float , secondUnique_t , 1 > burnBeforeLandingTime; // Offset: 0x258

    // it will switch to "run" state if a distance to destination is further away than this. NOTE: maxWalkDistance has to be greater than minRunDistance
    float maxWalkDistance; // Offset: 0x25C

    // it will switch to "walk" state if a distance to destination is closer than this. NOTE: maxWalkDistance has to be greater than minRunDistance
    float minRunDistance; // Offset: 0x260

    // joint tag to measure the distance to projectiles from
    idAtomicString explodeProjectileTagName; // Offset: 0x268

    // temp memory key to set when explode projectiles
    idAtomicString explodeProjectileTempMemoryKey; // Offset: 0x270

    // distance at which projectiles should explode
    float explodeProjectileDistance; // Offset: 0x278

    // Set it to true to explode all projectiles instead of having to list them all in explodeProjectileDecls
    bool explodeAllProjectiles; // Offset: 0x27C

    // List of projectile defs that should be exploded
    idList < const idDeclProjectile * , TAG_IDLIST , false > explodeProjectileDecls; // Offset: 0x280

    // being hit by any of these damages will set a temp memory key
    idList < const idDeclDamage * , TAG_IDLIST , false > damageTypes; // Offset: 0x298

    // being hit by any of these damages will set a temp memory key
    idDeclAIDamageDeclCollection* damageCollection; // Offset: 0x2B0

    // damage cacodemon does to itself to trigger swallow stagger
    idDeclDamage* specialSwallowDamage; // Offset: 0x2B8

}; // Size: 0x2C0
