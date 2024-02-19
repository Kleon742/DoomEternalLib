struct idDeclAIComponent_Cacodemon : idDeclAIComponent
{
    struct cacodemonAttackLevelInfo_t
    {
        // Name of the attack category to use
        idStr attackCategory; // Offset: 0x0

        // Projectile type of the category
        idDeclProjectile* projectileType; // Offset: 0x30

        // additive animation for the sack growth
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > sackGrowthAnim; // Offset: 0x38

        // movement speed multiplier for this level
        float speedMultiplier; // Offset: 0x3C

    }; // Size: 0x40

    struct cacodemonProjectileEatingAreaInfo_t
    {
        // offset (from the mouth position) {{ units = m }}
        idVec3 offset; // Offset: 0x0

        // half inner width {{ units = m }}
        float halfWidth; // Offset: 0xC

        // half height {{ units = m }}
        float halfHeight; // Offset: 0x10

        // radius {{ units = m }}
        float radius; // Offset: 0x14

    }; // Size: 0x18

    struct cacodemonDefensiveModeInfo_t
    {
        // blockable damages
        idList < const idDeclDamage * , TAG_IDLIST , false > blockableDamages; // Offset: 0x0

        // Area where projectiles can be swallowed
        idDeclAIComponent_Cacodemon::cacodemonProjectileEatingAreaInfo_t area; // Offset: 0x18

        // Cooldown for the defensive mode
        idTypesafeTime < float , secondUnique_t , 1 > cooldown; // Offset: 0x30

        // Damage cooldown
        idTypesafeTime < float , secondUnique_t , 1 > damageCooldown; // Offset: 0x34

        // maximum damage allowed before going into defensive mode
        float maxDamage; // Offset: 0x38

        // decay for the damage counter (per second)
        float damageDecay; // Offset: 0x3C

        // whether this functionality is enabled
        bool enabled; // Offset: 0x40

    }; // Size: 0x48

    struct cacodemonGloryKillInfo_t
    {
        // distance to move the killer back {{ units = m }}
        float defaultLength; // Offset: 0x0

        // vertical impulse for the killer
        float verticalImpulseSpeed; // Offset: 0x4

        // maximum speed the killer will be pushed back at
        float maxImpulseSpeed; // Offset: 0x8

    }; // Size: 0xC

    struct cacodemonHungerInfo_t
    {
        // search radius {{ units = m }}
        float radius; // Offset: 0x0

        // delay before eating another target
        idTypesafeTime < float , secondUnique_t , 1 > delay; // Offset: 0x4

        // whether to stop eating other AIs after reaching maximum level
        bool stopEatingAtMaxLevel; // Offset: 0x8

        // whether this functionality is enabled
        bool enabled; // Offset: 0x9

    }; // Size: 0xC

    struct cacodemonSnareInfo_t
    {
        // cooldown (this is a global setting, shared between cacodemons)
        idTypesafeTime < float , secondUnique_t , 1 > cooldown; // Offset: 0x0

        // build up time
        idTypesafeTime < float , secondUnique_t , 1 > buildUpDuration; // Offset: 0x4

        // fully charged
        fxCondition_t fullyChargedFX; // Offset: 0x8

        // whether or not this cacodemon is allowed to use the snare attack
        bool allowed; // Offset: 0xC

    }; // Size: 0x10

    struct cacodemonMouthControl_t
    {
        // mouth will be fully open if the enemy is closer than minRange, and it will in its normal state if enemy further than maxRange {{ units = m }}
        idRange < float > distanceRange; // Offset: 0x0

        // minimum height difference to allow mouth control {{ units = m }}
        float minimumHeightDiff; // Offset: 0x8

        // how long it would take for the cacodemon to fully open its mouth
        idTypesafeTime < float , secondUnique_t , 1 > timeForFullMouth; // Offset: 0xC

        // when mouth is open as much it will use slow flight params
        float slowSpeedWhenMouthOpenPercent; // Offset: 0x10

    }; // Size: 0x14

    struct cacodemonEyeControl_t
    {
        // additive animation for the eye blinking
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > eyeBlinkingAnim; // Offset: 0x0

        // time interval between eye blinking while in full health
        idRange < idTypesafeTime < float , secondUnique_t , 1 > > fullHealthInterval; // Offset: 0x4

        // time interval between eye blinking while in zero health
        idRange < idTypesafeTime < float , secondUnique_t , 1 > > zeroHealthInterval; // Offset: 0xC

    }; // Size: 0x14

    struct cacodemonMovementCapDifficultyTuple_t
    {
        // max speed for this difficulty
        float moveSpeedCap; // Offset: 0x0

        // difficulty for this max speed
        gameDifficulty_t difficulty; // Offset: 0x4

    }; // Size: 0x8

    // Damages that will make the cacodemon taunt
    idList < const idDeclDamage * , TAG_IDLIST , false > tauntDamages; // Offset: 0x98

    // attack levels
    idList < idDeclAIComponent_Cacodemon::cacodemonAttackLevelInfo_t , TAG_IDLIST , false > attackLevels; // Offset: 0xB0

    // defensive mode config values
    idDeclAIComponent_Cacodemon::cacodemonDefensiveModeInfo_t defensiveMode; // Offset: 0xC8

    // hunger config values
    idDeclAIComponent_Cacodemon::cacodemonHungerInfo_t hunger; // Offset: 0x110

    // snare info
    idDeclAIComponent_Cacodemon::cacodemonSnareInfo_t snare; // Offset: 0x11C

    // mouth control
    idDeclAIComponent_Cacodemon::cacodemonMouthControl_t mouthControl; // Offset: 0x12C

    // glory kill info
    idDeclAIComponent_Cacodemon::cacodemonGloryKillInfo_t gloryKill; // Offset: 0x140

    // eye control
    idDeclAIComponent_Cacodemon::cacodemonEyeControl_t eyeControl; // Offset: 0x14C

    // movement cap tuple for per-difficulty tuning.
    idList < idDeclAIComponent_Cacodemon::cacodemonMovementCapDifficultyTuple_t , TAG_IDLIST , false > movementCapTuple; // Offset: 0x160

}; // Size: 0x178
