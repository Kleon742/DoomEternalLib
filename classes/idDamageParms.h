struct idDamageParms : idEventArgUser
{
    enum damageType_t : unsigned int
    {
        DAMAGETYPE_HEALTH = 1,
        DAMAGETYPE_EMP = 2,
        DAMAGETYPE_ELECTRIC = 4,
        DAMAGETYPE_FIRE = 8,
        DAMAGETYPE_ARMOR_PIERCING = 16,
        DAMAGETYPE_TELEPORT = 32,
        DAMAGETYPE_TOWER = 64,
        DAMAGETYPE_INVULNERABILITY = 128,
        DAMAGETYPE_EXPLOSION = 256,
        DAMAGETYPE_ARMOR_REDUCED = 512,
        DAMAGETYPE_PAIN_CAUSING = 1024,
        DAMAGETYPE_PLAYER_KILL = 2048,
        DAMAGETYPE_SYNC = 4096,
        DAMAGETYPE_BLINDING = 8192,
        DAMAGETYPE_COLD = 16384,
        DAMAGETYPE_HAZARD = 32768,
        DAMAGETYPE_SPLASH = 65536,
        DAMAGETYPE_EQUIPMENT = 131072,
        DAMAGETYPE_INCAPACITATED = 262144,
        DAMAGETYPE_EXPLICIT = 524288,
        DAMAGETYPE_SHRAPNEL = 1048576,
        DAMAGETYPE_LOSTSOUL_DEATH = 2097152,
        DAMAGETYPE_KILLED_BY_PLAYER = 4194304,
        DAMAGETYPE_DASH = 8388608,
        DAMAGETYPE_POWER_STRIKE = 16777216,
        DAMAGETYPE_CRUCIBLE = 33554432,
        DAMAGETYPE_MASK_ALL = 67108863,
        DAMAGETYPE_MAX = 33554432
    };

    enum damageSource_t : long long
    {
        DAMAGESRC_UNKNOWN = 0,
        DAMAGESRC_BULLET = 1,
        DAMAGESRC_MELEE = 2,
        DAMAGESRC_SPRINT_MELEE = 4,
        DAMAGESRC_FIRE = 8,
        DAMAGESRC_ELECTRICAL = 16,
        DAMAGESRC_FALL = 32,
        DAMAGESRC_CRUSH = 64,
        DAMAGESRC_EXPLOSIVE = 128,
        DAMAGESRC_CHAINSAW = 256,
        DAMAGESRC_ACID = 512,
        DAMAGESRC_PLASMA = 1024,
        DAMAGESRC_WOLF_BITE = 2048,
        DAMAGESRC_FIREBALL = 4096,
        DAMAGESRC_BFG = 8192,
        DAMAGESRC_POISON_GAS = 16384,
        DAMAGESRC_SYNCED_FATALITY = 32768,
        DAMAGESRC_PUSH_BACK = 65536,
        DAMAGESRC_RADIATION = 131072,
        DAMAGESRC_HAMMER = 262144,
        DAMAGESRC_PLASMA_EMP = 524288,
        DAMAGESRC_GROUNDPOUND = 1048576,
        DAMAGESRC_BERSERK = 2097152,
        DAMAGESRC_GAUSS = 4194304,
        DAMAGESRC_EMP = 8388608,
        DAMAGESRC_DEMON_SPECIAL = 16777216,
        DAMAGESRC_BARREL = 33554432,
        DAMAGESRC_GLORYKILL_SHOCKWAVE = 67108864,
        DAMAGESRC_GRENADE = 134217728,
        DAMAGESRC_LAVA = 268435456,
        DAMAGESRC_XENON = 536870912,
        DAMAGESRC_PLASMA_BEAM = 1073741824,
        DAMAGESRC_DEEP_WATER = 2147483648,
        DAMAGESRC_FLAMEWALL_REFLECTION = 4294967296,
        DAMAGESRC_BERSERK_SLASH = 8589934592,
        DAMAGESRC_ALL = 17179869183
    };

    enum envHazardRestriction_t : int
    {
        ENVHAZARD_RESTRICTION_NONE = 0,
        ENVHAZARD_RESTRICTION_HAZARD = 1
    };

    enum damageKillSoundType_t : int
    {
        DAMAGE_KILL_SOUND_TYPE_NONE = 0,
        DAMAGE_KILL_SOUND_TYPE_DEFAULT = 1,
        DAMAGE_KILL_SOUND_TYPE_SLUDGE = 2,
        DAMAGE_KILL_SOUND_TYPE_KILL_VOLUME = 3,
        DAMAGE_KILL_SOUND_TYPE_LAVA = 4
    };

    enum dynamicFlags_t : int
    {
        DYNAMIC_FLAG_IS_ONSLAUGHT_ACTIVE = 0,
        DYNAMIC_FLAG_IS_BLOOD_PUNCH = 1
    };

    struct lootDropRestrictionOnDamage_t
    {
        // loot drop restriction
        lootDropRestriction_t lootDropRestriction; // Offset: 0x0

        // loot drop context
        lootDropContextFlags_t lootDropContext; // Offset: 0x4

    }; // Size: 0x8

    struct weakPoint_t
    {
        // overrides general impact effect
        idDeclImpactEffect* impactEffect; // Offset: 0x0

        // damage scalar to use when weak point detected
        float damageScalar; // Offset: 0x8

        // additional damage scalar against self
        float selfDamageScalar; // Offset: 0xC

        // additional damage scalar against players
        float playerDamageScalar; // Offset: 0x10

        // additional damage scalar against demon players
        float demonPlayerDamageScalar; // Offset: 0x14

        // bounce sound to use when the projectile has a direct hit with an AI weakPoint
        idSoundEvent* bounceSound; // Offset: 0x18

        // if true, do not pass loot drop component weakPoint restriction check if killed by this damage
        bool invalidForLootDropCheck; // Offset: 0x20

    }; // Size: 0x28

    struct damageScreenEffectParms_t
    {
        // screen damage time ( 0 == don't do any damageScreenEffects)
        float screenDamageTime; // Offset: 0x0

        // material to use for screen damage effect
        idMaterial2* screenDamageMtr; // Offset: 0x8

        // [min,max] size of screen effect
        idVec2 screenDamageSize; // Offset: 0x10

        // [min,max] pct to offset the effect in X
        idVec2 offsetPctX; // Offset: 0x18

        // [min,max] pct to offset the effect in Y
        idVec2 offsetPctY; // Offset: 0x20

        // [min,max] pct distribution rect in X
        idVec2 distribPctX; // Offset: 0x28

        // [min,max] pct distribution rect in Y
        idVec2 distribPctY; // Offset: 0x30

        // [min,max] drift in y
        idVec2 driftYAmount; // Offset: 0x38

        // [min,max] delay
        idVec2 delay; // Offset: 0x40

        // how long into effect before start fading out
        float fadeOutTime; // Offset: 0x48

        // the number of frames for the texture (for diversity)
        int screenDamageFrames; // Offset: 0x4C

        // number of quads to generated
        int numQuads; // Offset: 0x50

    }; // Size: 0x58

    struct damageScreenEffect_t
    {
        // generation parms for this effect( set screenDamageTime to 0 to ignore this )
        idDamageParms::damageScreenEffectParms_t parms; // Offset: 0x0

        // optional screen shake to play for this damage
        idDeclAdvancedViewShake* screenShakeDecl; // Offset: 0x58

        // play this effect at this damage pct ( 0.0 == no damage / at full health ... 1.0 == death / no health )
        float damagePct; // Offset: 0x60

        // only play screen damage effect on player if within this radius {{ units = m }}
        float radius; // Offset: 0x64

        // only applies this effect when victim dies
        bool onlyApplyOnDeath; // Offset: 0x68

    }; // Size: 0x70

    struct damageFeedbackScreenEffects_t
    {
        // screen effect to apply when player inflicts small amount of damage
        idDamageParms::damageScreenEffect_t feedbackSmall; // Offset: 0x0

        // screen effect to apply when player inflicts medium amount of damage
        idDamageParms::damageScreenEffect_t feedbackMedium; // Offset: 0x70

        // screen effect to apply when player inflicts large amount of damage
        idDamageParms::damageScreenEffect_t feedbackLarge; // Offset: 0xE0

        // screen effect to apply when player causes gib
        idDamageParms::damageScreenEffect_t feedbackGib; // Offset: 0x150

    }; // Size: 0x1C0

    struct playerDamageScreenEffects_t
    {
        // screen effect to apply when player recieves small amount of damage
        idDamageParms::damageScreenEffect_t damageSmall; // Offset: 0x0

        // screen effect to apply when player recieves medium amount of damage
        idDamageParms::damageScreenEffect_t damageMedium; // Offset: 0x70

        // screen effect to apply when player recieves large amount of damage
        idDamageParms::damageScreenEffect_t damageLarge; // Offset: 0xE0

    }; // Size: 0x150

    struct playerDamageMitigation_t
    {
        // flat scale damage
        float damageScalar; // Offset: 0x0

        // max damage player/demon player can take
        float maxDamage; // Offset: 0x4

        // number of hits per frame before damage mitigation kicks in (0 to disable)
        int numDamageEventsBeforeMitigationStarts; // Offset: 0x8

        // how effective is damage mitigation (eg 0.9 makes the first deal 90%, then 81%...)
        float mitigationPowerExponentBase; // Offset: 0xC

        // maxDamage is per frame
        bool damagePerFrame; // Offset: 0x10

        // time period over which damage is capped (milliseconds)
        idTypesafeTime < int , millisecondUnique_t , 1000 > timePeriodMS; // Offset: 0x14

    }; // Size: 0x18

    struct aiDamageMitigation_t
    {
        // AI this damage mitigation applies to
        aiMonsterType_t monsterType; // Offset: 0x0

        // max damage AI can take
        float maxDamage; // Offset: 0x8

        // flat scale damage
        float damageScalar; // Offset: 0xC

        // maxDamage is per frame
        bool damagePerFrame; // Offset: 0x10

    }; // Size: 0x18

    struct enviromentSuitDamageMitigation
    {
        // multiplier to mitigate enviromental damage per decl base
        float enviromentalDamageMitigationMult; // Offset: 0x0

    }; // Size: 0x4

    struct doom5MeleeTest_t
    {
        struct weaponDelayInfo_t
        {
            // type of weapon damage
            weaponDamageTypeBits_t weaponDamageTypes; // Offset: 0x0

            // hang time delay amount when damage by "weaponDamageTypes"
            idTypesafeTime < int , millisecondUnique_t , 1000 > delayMS; // Offset: 0x8

        }; // Size: 0x10

        struct hangTimeValues_t
        {
            // monster type this data will apply to (IF NO MONSTER TYPES SELECTED, VALUES ARE APPLIED TO PLAYER)
            aiMonsterType_t monsterType; // Offset: 0x0

            // hang time delay values for each weapon that damages "monsterType"
            idList < idDamageParms::doom5MeleeTest_t::weaponDelayInfo_t , TAG_IDLIST , false > weaponDamageHangTimeDelay; // Offset: 0x8

            // time in MS AI will float at apex of impulse
            idTypesafeTime < int , millisecondUnique_t , 1000 > hangTimeMS; // Offset: 0x20

        }; // Size: 0x28

        // impulse velocity applied to targets base value of impulse velocity imparted to targets, in player-relative coords {{ units = m / s }}
        idVec3 impulseVelocity; // Offset: 0x0

        // if true then pitch the impulseVelocity vector according to view pitch
        bool impulseVelUsesViewPitch; // Offset: 0xC

        // per-monster impulse scales for monster targets
        idList < aiMonsterValue_t , TAG_IDLIST , false > monsterImpulseScales; // Offset: 0x10

        // only apply an impulse for these pain types
        idList < painType_t , TAG_IDLIST , false > monsterImpulsePainTypes; // Offset: 0x28

        // player impulse scale for player targets
        float playerImpulseScale; // Offset: 0x40

        // impulse scale for player bot targets
        float playerBotImpulseScale; // Offset: 0x44

        // impulse scale for demon player targets
        float demonPlayerImpulseScale; // Offset: 0x48

        // impulse scale for demon player bot targets
        float demonPlayerBotImpulseScale; // Offset: 0x4C

        // friction impulse friction scale
        float impulseFrictionScale; // Offset: 0x50

        // gravity for target's impulse arc base absolute value of gravity override - default gravity is 1066 {{ units = m / ( s * s ) }}
        float gravityOverride; // Offset: 0x54

        // monster gravity override scales for monster targets
        idList < aiMonsterValue_t , TAG_IDLIST , false > gravityOverrideMonsterScales; // Offset: 0x58

        // player gravity override scale for player targets
        float gravityOverridePlayerScale; // Offset: 0x70

        // bot gravity override scale for bot targets
        float gravityOverrideBotScale; // Offset: 0x74

        // attacker knockback applied to attacker knockback to apply to attacker in direction opposite to impulse velocity {{ units = kg * m / s }}
        float attackerKnockback; // Offset: 0x78

        // duration of knockback in MS
        idTypesafeTime < int , millisecondUnique_t , 1000 > attackerKnockbackMS; // Offset: 0x7C

        // attacker knockback scales for monster targets
        idList < aiMonsterValue_t , TAG_IDLIST , false > attackerKnockbackMonsterScales; // Offset: 0x80

        // attacker knockback scale for player targets
        float attackerKnockbackPlayerScale; // Offset: 0x98

        // attacker knockback scale for bot targets
        float attackerKnockbackBotScale; // Offset: 0x9C

        // misc what % of the attacker's pre-lunge velocity to apply to AI in addition to velocity impulse
        float attackerVelocityScale; // Offset: 0xA0

        // per-monster max impulse velocity
        idList < aiMonsterValue_t , TAG_IDLIST , false > monsterMaxImpulseVelocity; // Offset: 0xA8

        // max impulse velocity for players
        float playerMaxImpulseVelocity; // Offset: 0xC0

        // max impulse velocity for player bots
        float playerBotMaxImpulseVelocity; // Offset: 0xC4

        // max impulse velocity for demon players
        float demonPlayerMaxImpulseVelocity; // Offset: 0xC8

        // max impulse velocity for demon player bots
        float demonPlayerBotMaxImpulseVelocity; // Offset: 0xCC

        // view shake
        idDeclAdvancedViewShake* viewShake; // Offset: 0xD0

        // some other damage decls are using these params, so we need a flag to identity actual D5 melee damage
        bool isDoom5Melee; // Offset: 0xD8

        // some other damage decls are using these params, so we need a flag to identity actual ballistic impulse
        bool isBallisticImpulse; // Offset: 0xD9

        // player should freeze during melee theatrics, but other users of this may not want it
        bool freezePlayer; // Offset: 0xDA

        // per-monster hang time override values
        idList < idDamageParms::doom5MeleeTest_t::hangTimeValues_t , TAG_IDLIST , false > ballisticHangTimeValues; // Offset: 0xE0

    }; // Size: 0xF8

    struct bulletPenetrationData_t
    {
        // whether this damage type requires (and uses) penetration energy ( false = unlimited energy )
        bool usesPenetrationEnergy; // Offset: 0x0

        // how much penetration energy this projectile has (energy will be consumed at each penetration)
        int penetrationEnergy; // Offset: 0x4

        // max penetration range, or 0 to use projectile range {{ units = m }}
        float maxRange; // Offset: 0x8

        // maximum number of penetrations, or -1 for unlimited and just using penetration energy
        int maxPenetrations; // Offset: 0xC

        // each actor specifies a damage scale for each penetration. this is what percentage of that scale is accepted
        float damageScaleAccepted; // Offset: 0x10

        // should this bullet penetration only work on AIs
        bool ignorePlayers; // Offset: 0x14

        // AI selected in this list will stop this penetration from continuing
        aiMonsterType_t aiBlocksPenetration; // Offset: 0x18

        // should Demon Players block penetration? (MP)
        bool demonPlayerBlocksPenetration; // Offset: 0x20

        // What clip mask to use on the deferred query to draw the tracers
        idContents fxQueryMask; // Offset: 0x21

        // delay evaluation after a penetration to stagger the effects for more drama
        idTypesafeTime < int , millisecondUnique_t , 1000 > delayAfterPenetrationMS; // Offset: 0x28

        // sound to play when bullet penetrates something
        idSoundEvent* sound; // Offset: 0x30

        // delay the bullet penetration sound if desired
        idTypesafeTime < int , millisecondUnique_t , 1000 > soundDelayMS; // Offset: 0x38

        // view shake to play when bullet penetrates something
        idDeclAdvancedViewShake* viewShake; // Offset: 0x40

        // Impacts to play for penetration.
        idDeclImpactEffect* impactEffectTable; // Offset: 0x48

    }; // Size: 0x50

    struct rapidHitScale_t
    {
        // the max scale value that can be reached
        float scaleMax; // Offset: 0x0

        // how much to increment the scale each time
        float scaleIncrement; // Offset: 0x4

        // to increase by increment, hit the same target again before this amount of time elapses
        idTypesafeTime < int , millisecondUnique_t , 1000 > intervalMS; // Offset: 0x8

        // how long to wait after the last hit before decaying the scale
        idTypesafeTime < int , millisecondUnique_t , 1000 > scaleDecayDelayMS; // Offset: 0xC

        // if intervalMS elapses, decay the charge at this rate, or set to 0 for an instant reset
        float scaleDecayPerSec; // Offset: 0x10

    }; // Size: 0x14

    struct actorPenetrationData_t
    {
        // costs this much penetration energy to penetrate this actor
        int energyCostToPenetrate; // Offset: 0x0

        // bullet damage is scaled by this amount after penetrating
        float damageScaleToPenetrate; // Offset: 0x4

    }; // Size: 0x8

    struct emInterferenceData_t
    {
        // Force the electrical systems into a reboot sequence ( after interferencePeriod )
        bool overloadSystem; // Offset: 0x0

        // How long the interference will last
        idTypesafeTime < int , millisecondUnique_t , 1000 > interferencePeriodMS; // Offset: 0x4

        // How long to delay the reboot sequence after EMI dissipates
        idTypesafeTime < int , millisecondUnique_t , 1000 > rebootDelayMS; // Offset: 0x8

        // How long it takes an overloaded system to reboot ( overloadSystem must be True )
        idTypesafeTime < int , millisecondUnique_t , 1000 > rebootPeriodMS; // Offset: 0xC

        // 0 to 1 and < minimumIntensity
        float minimumIntensity; // Offset: 0x10

        // 0 to 1 and > maximumIntensity
        float maximumIntensity; // Offset: 0x14

    }; // Size: 0x18

    struct damageFalloffPerType_t
    {
        // types of entities this entry can apply to
        aiMonsterType_t types; // Offset: 0x0

        // point blank damage amount
        float pointBlankDamage; // Offset: 0x8

        // The distance in game units to start reducing the damage (from point blank damage) {{ units = m }}
        float startPBFalloffDistance; // Offset: 0xC

        // The distance in game units to stop reducing the damage (at max damage) {{ units = m }}
        float endPBFalloffDistance; // Offset: 0x10

        // The distance in game units to start reducing the damage (from max damage) {{ units = m }}
        float startFalloffDistance; // Offset: 0x14

        // The distance in game units to stop reducing the damage (at min damage) {{ units = m }}
        float endFalloffDistance; // Offset: 0x18

    }; // Size: 0x20

    struct perWeaponDamageTypeOverride_t
    {
        // damage sources for this override
        idPlayerWeaponDamageType_t weaponDamageType; // Offset: 0x0

        // if weaponDamageType is PLAYER_WEAPON_UNKNOWN will scale via these damageDecls types
        idDeclAIDamageDeclCollection* damageCollection; // Offset: 0x8

        // multiplier applied for this damage type (overrides damage multiplier in per monster override)
        float damageMultiplier; // Offset: 0x10

    }; // Size: 0x18

    struct damageOverTime_t
    {
        struct minHealthToApplyDOTPerDifficulty_t
        {
            // damage multiplier for this difficulty and up (unless better found)
            float minHealthRequiredForDamage; // Offset: 0x0

            // difficulty (and up) that this applies to curDifficulty >= this
            gameDifficulty_t difficulty; // Offset: 0x4

        }; // Size: 0x8

        struct damageMultiplierPerDifficulty_t
        {
            // damage multiplier for this difficulty and up (unless better found)
            float damageMultipier; // Offset: 0x0

            // difficulty (and up) that this applies to curDifficulty >= this
            gameDifficulty_t difficulty; // Offset: 0x4

        }; // Size: 0x8

        struct perMonsterOverride_t
        {
            // monster type(s)
            aiMonsterType_t monsterType; // Offset: 0x0

            // durationMS override
            idTypesafeTime < int , millisecondUnique_t , 1000 > durationMS; // Offset: 0x8

            // damage multiplier when active
            float damageMultiplier; // Offset: 0xC

            // per difficulty damage multiplier when active
            idList < idDamageParms::damageOverTime_t::damageMultiplierPerDifficulty_t , TAG_IDLIST , false > damageMultipliersPerDifficulty; // Offset: 0x10

            // fx to play while DOT is active
            fxCondition_t fxCondition; // Offset: 0x28

            // fx to play when DOT is finished
            fxCondition_t fxStopCondition; // Offset: 0x2C

            // list of per damage types that override damage multiplier based on damage type
            idList < idDamageParms::perWeaponDamageTypeOverride_t , TAG_IDLIST , false > perWeaponDamageTypeOverride; // Offset: 0x30

        }; // Size: 0x48

        // damage over time duration in MS
        idTypesafeTime < int , millisecondUnique_t , 1000 > durationMS; // Offset: 0x0

        // damage interval in MS
        idTypesafeTime < int , millisecondUnique_t , 1000 > intervalMS; // Offset: 0x4

        // false by default
        bool continueAfterDeath; // Offset: 0x8

        // fx to play while DOT is active
        fxCondition_t fxCondition; // Offset: 0xC

        // fx to play when DOT is finished
        fxCondition_t fxStopCondition; // Offset: 0x10

        // override the surface type?
        surfTypes_t overrideSurfaceType; // Offset: 0x14

        // min health to apply the DOT at all (per difficulty level)
        idList < idDamageParms::damageOverTime_t::minHealthToApplyDOTPerDifficulty_t , TAG_IDLIST , false > minHealthRequired; // Offset: 0x18

        // if true then restart the FX when refreshing an existing instance
        bool restartFX; // Offset: 0x30

        // list of monsters that override certain data
        idList < idDamageParms::damageOverTime_t::perMonsterOverride_t , TAG_IDLIST , false > perMonsterOverride; // Offset: 0x38

        // perk required to activate upgraded overrides
        idDeclPerk* upgradedPerkRequired; // Offset: 0x50

        // list of monsters that override certain data when upgraded perk is active
        idList < idDamageParms::damageOverTime_t::perMonsterOverride_t , TAG_IDLIST , false > upgradedPerMonsterOverride; // Offset: 0x58

    }; // Size: 0x70

    struct statusEffectInfo_t
    {
        struct statusEffectOverrideByTypeInfo_t
        {
            // override ai types
            aiMonsterType_t aiTypes; // Offset: 0x0

            // override status effect
            idDeclStatusEffect* overrideStatusEffect; // Offset: 0x8

            // override life time
            idTypesafeTime < int , millisecondUnique_t , 1000 > overrideLifetimeMS; // Offset: 0x10

        }; // Size: 0x18

        // Ignore these AI types
        aiMonsterType_t ignoreAI; // Offset: 0x0

        // If true, this status effect can only be applied when damaging the player
        bool playerOnly; // Offset: 0x8

        // Apply this effect to anyone who takes this damage
        idDeclStatusEffect* damageStatusEffect; // Offset: 0x10

        // override lifetime of status effect
        idTypesafeTime < int , millisecondUnique_t , 1000 > overrideLifetimeMS; // Offset: 0x18

        // override by type
        idList < idDamageParms::statusEffectInfo_t::statusEffectOverrideByTypeInfo_t , TAG_IDLIST , false > statusEffectOverridesByType; // Offset: 0x20

        // if true, do not apply status effect if applied damage amount is zero
        bool requireNonzeroDamage; // Offset: 0x38

    }; // Size: 0x40

    struct spawnEntOnKillData_t
    {
        // type of monster these overrides apply to
        aiMonsterType_t monsterTypesMask; // Offset: 0x0

        // custom explosion radius for this monster
        idDeclEntityDef* explosionDecl; // Offset: 0x8

    }; // Size: 0x10

    struct ammoReturnOnDeath_t
    {
        // give over time item info
        giveItemOverTime_t giveItemOverTime; // Offset: 0x0

        // type or types of AI killed to give back this ammo and count
        aiMonsterType_t aiType; // Offset: 0x40

        // true to award to demon players
        bool giveToDemonPlayer; // Offset: 0x48

        // if true then only return if enemy was hooked
        bool requireHookedByMeathook; // Offset: 0x49

    }; // Size: 0x50

    struct ammoUseOnDamage_t
    {
        // type or types of AI to use this ammo on damage
        aiMonsterType_t aiType; // Offset: 0x0

        // amount of ammo to use for this ai type
        int count; // Offset: 0x8

    }; // Size: 0x10

    struct alwaysCritInfo_t
    {
        // If true, damage caused to demons by this decl will always be presented as critical damage
        bool alwaysCritAgainstDemons; // Offset: 0x0

        // If true, damage caused to players by this decl will always be presented as critical damage
        bool alwaysCritAgainstPlayers; // Offset: 0x1

        // The amount of bonus damage to apply for every hit
        float bonusDamage; // Offset: 0x4

    }; // Size: 0x8

    struct closeRangeCritInfo_t
    {
        // Whether or not to apply this crit data to demons
        bool critAgainstDemons; // Offset: 0x0

        // 0 to disable close range crits {{ units = m }}
        float critDistance; // Offset: 0x4

        // The amount of bonus damage to apply if this damage takes place within 'critDistance'
        float bonusDamage; // Offset: 0x8

    }; // Size: 0xC

    struct damageBasedCritInfo_t
    {
        // Whether or not to apply this crit data to demons (only when weak-points are damaged)
        bool critAgainstDemonWeakPoints; // Offset: 0x0

        // 0 to disable damage-based crits
        float damageThreshold; // Offset: 0x4

    }; // Size: 0x8

    struct tickBasedCritInfo_t
    {
        // Number of ticks before the tick sequence will begin
        int startOffset; // Offset: 0x0

        // Causes every 'tickInterval' ticks to be considered critical damage (0 to disable tick-based crits)
        int tickInterval; // Offset: 0x4

        // The maximum number of ticks to consider critical (0 = infinite)
        int maxCriticalTicks; // Offset: 0x8

        // The amount of bonus damage to apply for every critical tick
        float bonusDamage; // Offset: 0xC

        // Whether this crits against demons
        bool critAgainstDemons; // Offset: 0x10

    }; // Size: 0x14

    struct chainBasedCritInfo_t
    {
        // The number of hits to skip before the chain begins
        int startOffset; // Offset: 0x0

        // The maximum amount of time that can elapse between hits before the chain is considered dropped (0 to disable chain-based crits)
        float maxIdleTime; // Offset: 0x4

        // The amount of bonus damage to apply for every chained hit
        float bonusDamage; // Offset: 0x8

        // Whether this crits against demons
        bool critAgainstDemons; // Offset: 0xC

        // Other damage types that can continue this crit chain
        idList < const idDeclDamage * , TAG_IDLIST , false > critChainDamageTypes; // Offset: 0x10

    }; // Size: 0x28

    struct secondaryDamagePerAI_t
    {
        // monster type(s)
        aiMonsterType_t monsterType; // Offset: 0x0

        // secondaryDamageDecl replacement
        idDeclDamage* secondaryDamageDecl; // Offset: 0x8

    }; // Size: 0x10

    struct skillshotHighlightInfo_t
    {
        // How quickly this highlight flash will fade for this damage
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeTime; // Offset: 0x0

        // What color to use for the highlight flash caused by this damage type
        idColor color; // Offset: 0x4

    }; // Size: 0x14

    struct damagePerDifficultyMultiplier_t
    {
        // damage multiplier for this difficulty and up (unless better found)
        float damageMultiplier; // Offset: 0x0

        // difficulty (and up) that this applies to curDifficulty >= this
        gameDifficulty_t difficulty; // Offset: 0x4

    }; // Size: 0x8

    struct entityToSpawnOnDamage_t
    {
        // entity to spawn on damage
        idDeclEntityDef* entityDef; // Offset: 0x0

        // victim type
        aiMonsterType_t victimType; // Offset: 0x8

        // lifetime before removal
        idTypesafeTime < int , millisecondUnique_t , 1000 > lifetime; // Offset: 0x10

        // time attached
        idTypesafeTime < int , millisecondUnique_t , 1000 > attachedTime; // Offset: 0x14

        // min speed
        float minSpeed; // Offset: 0x18

        // max speed
        float maxSpeed; // Offset: 0x1C

        // initial random position from the center
        float initialPositionRandomness; // Offset: 0x20

        // initial vel
        idVec3 initialVelocity; // Offset: 0x24

        // direction to eject the attached loot
        idVec3 attachedDirection; // Offset: 0x30

        // attached min speed
        float attachedMinSpeed; // Offset: 0x3C

        // attached max speed
        float attachedMaxSpeed; // Offset: 0x40

    }; // Size: 0x48

    struct entitiesToSpawnOnDamage_t
    {
        // entities to spawn on damage
        idList < idDamageParms::entityToSpawnOnDamage_t , TAG_IDLIST , false > entitiesToSpawnOnDamage; // Offset: 0x0

    }; // Size: 0x18

    // Which Weapon this came from ( if player weapon damage decl )
    idPlayerWeaponDamageType_t weaponDamageType; // Offset: 0x10

    // weak point data
    idDamageParms::weakPoint_t weakPoint; // Offset: 0x18

    // data for doom5 melee test
    idDamageParms::doom5MeleeTest_t doom5MeleeTest; // Offset: 0x40

    // bullet penetration data (for actors)
    idDamageParms::bulletPenetrationData_t bulletPenetrationData; // Offset: 0x138

    // data to allow damage scaling on a given target when hit rapidly within specified time intervals
    idDamageParms::rapidHitScale_t rapidHitScale; // Offset: 0x188

    // emInterference data communicates electrical overload ( EMP ) to the player
    idDamageParms::emInterferenceData_t emInterferenceData; // Offset: 0x19C

    // displayable name of damage type
    idStr damageName; // Offset: 0x1B8

    // tooltip info for this damage type
    idDeclTooltip* damageTooltip; // Offset: 0x1E8

    // whether or not to display powerup version of damage icon
    bool damageShowPowerup; // Offset: 0x1F0

    // type of damage (may be a combination of damageType_t flags)
    idDamageParms::damageType_t damageTypes; // Offset: 0x1F4

    // source of damage (may be a combination of damageSource_t flags)
    idDamageParms::damageSource_t damageSource; // Offset: 0x1F8

    // the decay rate of this item in the damage report to prevent
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageReportDecayMS; // Offset: 0x200

    // what type of hit reaction this damage decl causes on the first person hands (can be overridden by player body reaction)
    idHandsHitReactionType_t handsHitReactionType; // Offset: 0x204

    // if the handHitReaction moves the player, this sets the distance, or -1 to use the actual distance of the movement table
    float handsHitReactionDist; // Offset: 0x208

    // if nonzero the the HITREACTION_PUSHED hit reaction will supercede handsHitReactionType and translate the player according to how much damage is inflicted
    float playerPushbackDistMin; // Offset: 0x20C

    // if nonzero the the HITREACTION_PUSHED hit reaction will supercede handsHitReactionType and translate the player according to how much damage is inflicted
    float playerPushbackDistMax; // Offset: 0x210

    // off screen fx start condition, handled through damageSrc if not set
    fxCondition_t conditionOffScreen; // Offset: 0x214

    // in view fx start condition, handled through damageSrc if not set
    fxCondition_t conditionInView; // Offset: 0x218

    // the descriptor for the player body reaction to play (can override hands hit reaction)
    idPlayerBodyReactionDescriptor_t playerBodyReactionDescriptor; // Offset: 0x220

    // should locally controlled clients determine hits with this damage or just the server
    bool hitClientAuthoritative; // Offset: 0x238

    // allow damage predicion vs AI on clients if attacker is local
    bool clientPredictiveVsAI; // Offset: 0x239

    // should we sync additional info for splash traces. We use this because they are very sensitive to bandwidth.
    bool syncExtraInfoForSplashTraces; // Offset: 0x23A

    // only clip with AI/Player/Projectile or not.
    bool allowAllEntities; // Offset: 0x23B

    // minimum amount of damage
    float minDamage; // Offset: 0x23C

    // maximum amount of damage
    float maxDamage; // Offset: 0x240

    // bonus damage scale applied to this damage (ie: damage has been scaled by this value)
    float bonusDamageScalar; // Offset: 0x244

    // used to determine the lifetime of threat indicator arrows related to the damage
    float threatIndicatorTimeMS; // Offset: 0x248

    // Whether or not to use the attacker's position as the threat point for damage feedback
    bool useAttackerPositionAsThreat; // Offset: 0x24C

    // If true, threat indicator arrows for this damage will always point at the player, regardless of other settings
    bool SUPERHACK_usePlayerPositionAsThreat; // Offset: 0x24D

    // Whether or not to show a threat indicator when doing self harm
    bool showThreatIndicatorForSelfDamage; // Offset: 0x24E

    // can this damage activate blood punch ability if available
    bool canActivateBloodPunch; // Offset: 0x24F

    // The number of blood splatters to add to the player's screen whenever they are damaged by this type of damage
    int bloodSplatterCount; // Offset: 0x250

    // point blank damage amount
    float pointBlankDamage; // Offset: 0x254

    // The distance in game units to start reducing the damage (from point blank damage) {{ units = m }}
    float startPBFalloffDistance; // Offset: 0x258

    // The distance in game units to stop reducing the damage (at max damage) {{ units = m }}
    float endPBFalloffDistance; // Offset: 0x25C

    // The distance in game units to start reducing the damage (from max damage) {{ units = m }}
    float startFalloffDistance; // Offset: 0x260

    // The distance in game units to stop reducing the damage (at min damage) {{ units = m }}
    float endFalloffDistance; // Offset: 0x264

    // Instead of damage falling off at a certain distance it increases
    bool useInverseDamageFalloff; // Offset: 0x268

    // Damage fall off per type
    idList < idDamageParms::damageFalloffPerType_t , TAG_IDLIST , false > damageFalloffEntriesPerType; // Offset: 0x270

    // scale to apply when attacker takes damage
    float selfDamageScale; // Offset: 0x288

    // scale to apply when a player (EXCLUDING an MP demon) takes damage
    float playerDamageScale; // Offset: 0x28C

    // scale to apply (PVP ONLY, NOT demon players) when a player takes damage
    float pvpPlayerDamageScale; // Offset: 0x290

    // scale to apply when a demon player takes damage
    float demonPlayerDamageScale; // Offset: 0x294

    // scale to be applied to
    float aiStimulusScale; // Offset: 0x298

    // the scale to alter the AI stagger time by
    float staggerTimeScale; // Offset: 0x29C

    // time in MS to maintain blind status if blind damage exists
    idTypesafeTime < int , millisecondUnique_t , 1000 > blindTimeMS; // Offset: 0x2A0

    // extra damage scale for headshots added to the value specified in the entityDamage decl
    float headshotAddDamageScale; // Offset: 0x2A4

    // if damage is distributed across multiple traces and one of the traces is a headshot, focus all the damage on that trace only
    bool headshotFocusDamage; // Offset: 0x2A8

    // if true then don't play playerProps damage feedback sounds
    bool noFeedbackSound; // Offset: 0x2A9

    // Never attempt to absorb this damage w/ the rad suit
    bool ignoreRadSuitAbsorbtion; // Offset: 0x2AA

    // feedback sound to play when this damage decl is used for a non-headshot
    idSoundEvent* feedbackSound; // Offset: 0x2B0

    // feedback sound to play when this damage decl is used for a headshot
    idSoundEvent* headshotSound; // Offset: 0x2B8

    // stat to increment when you do damage with this damage decl
    gameStat_t damageStat; // Offset: 0x2C0

    // another stat to increment when you do damage with this damage decl
    gameStat_t damageStat2; // Offset: 0x2C4

    // stat to increment when you do splash damage with this damage decl
    gameStat_t splashDamageStat; // Offset: 0x2C8

    // stat to increment if getting a kill with this damage decl
    gameStat_t killStat; // Offset: 0x2CC

    // another stat to increment if getting a kill with this damage decl
    gameStat_t killStat2; // Offset: 0x2D0

    // a third stat to increment if getting a kill with this damage decl
    gameStat_t killStat3; // Offset: 0x2D4

    // stat to increment for critical damage with this damage decl
    gameStat_t criticalDamageStat; // Offset: 0x2D8

    // stat to increment for critical kills with this damage decl
    gameStat_t criticalKillStat; // Offset: 0x2DC

    // another stat to increment for critical kills with this damage decl
    gameStat_t criticalKillStat2; // Offset: 0x2E0

    // stat to increment if you kill more than one enemy with a single shot
    gameStat_t singleShotMultiKillStat; // Offset: 0x2E4

    // stat to increment if you get a multi-kill with this damage decl
    gameStat_t multikillStat; // Offset: 0x2E8

    // stat to increment if you get enough kills with the associated killStat during a single match
    gameStat_t totalMatchKillsStat; // Offset: 0x2EC

    // stat to increment if you get a one-hit-kill with this damage decl
    gameStat_t oneHitKillStat; // Offset: 0x2F0

    // stat to increment if you get a longshot kill with this damage decl
    gameStat_t longshotKillStat; // Offset: 0x2F4

    // should this damage drain crucible meter
    bool drainCrucibleMeter; // Offset: 0x2F8

    // Lookup table based on the amount of kills in berzerk vs percentage of the time extentsion
    idDeclTable* berserkTimeExentionLookUpTable_Kills; // Offset: 0x300

    // Max amount of kills it takes to get to the most diminished return of time extension.
    int berserkTimeExtensionMax_Kills; // Offset: 0x308

    // Time extension in seconds.
    float berserkTimeExtensionInSec; // Offset: 0x30C

    // damage over time data
    idDamageParms::damageOverTime_t damageOverTime; // Offset: 0x310

    // status effect data
    idDamageParms::statusEffectInfo_t statusEffectInfo; // Offset: 0x380

    // damage scale time period allows damage to scale future damage for some length of time
    idTypesafeTime < int , millisecondUnique_t , 1000 > futureDamageScaleDurationMS; // Offset: 0x3C0

    // damage scale multiplier
    float futureDamageScaleMultiplier; // Offset: 0x3C4

    // point blank damage over time point blank damage over time duration in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > pointBlankDamageOverTimeDurationMS; // Offset: 0x3C8

    // point blank damage interval in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > pointBlankDamageOverTimeIntervalMS; // Offset: 0x3CC

    // The start falloff distance for point blank damage over time {{ units = m }}
    float pointBlankDamageOverTimeFalloffStartDist; // Offset: 0x3D0

    // The end falloff distance for point blank damage over time {{ units = m }}
    float pointBlankDamageOverTimeFalloffEndDist; // Offset: 0x3D4

    // damage given to an actor multiple times within this window is ignored
    idTypesafeTime < float , secondUnique_t , 1 > minRetriggerTimeInSeconds; // Offset: 0x3D8

    // if true, the damage done will be equal to the entity's current health... this guarantees a kill trigger will kill a non-invulnerable AI
    bool damageIsCurrentHealth; // Offset: 0x3DC

    // if true, damage even in god mode
    bool ignoreGodMode; // Offset: 0x3DD

    // if true, ignores invulnerability powerups
    bool ignoreInvulnerable; // Offset: 0x3DE

    // if true, ignores armor when applying damage amount
    bool ignoreArmor; // Offset: 0x3DF

    // true if player should ignore this damage type
    bool ignorePlayer; // Offset: 0x3E0

    // true if AIs should ignore this damage type
    bool ignoreAI; // Offset: 0x3E1

    // if true, will not penetrate a breakable with an armor value set (like a tower)
    bool ignoreArmoredBreakables; // Offset: 0x3E2

    // if true, ignores friendly fire and wont apply FRIENDLY_DAMAGE_MULTIPLIER
    bool ignoreFriendlyFire; // Offset: 0x3E3

    // if true, ignores player controlled entities that aren't on the ground
    bool ignoreAirborneTargets; // Offset: 0x3E4

    // if true, ignores a target if that target is dead
    bool ignoreDeadTargets; // Offset: 0x3E5

    // if true, ignores prop2
    bool ignoreProps; // Offset: 0x3E6

    // if true, ignores prop2 with breakable_component
    bool ignoreBreakableProps; // Offset: 0x3E7

    // if true, the player will not die from this damage, only subtracts from health until 1 is left.
    bool noPlayerDeath; // Offset: 0x3E8

    // if true, the victim will not die from this damage, only subtracts from health until 1 is left.
    bool noDeath; // Offset: 0x3E9

    // if true, ignores how many extra lives we have
    bool ignoreExtraLife; // Offset: 0x3EA

    // true if melee damage
    bool isMelee; // Offset: 0x3EB

    // true if we ignore stats like blood punch
    bool ignoreMeleePunchDamageStats; // Offset: 0x3EC

    // true if burning damage
    bool burning; // Offset: 0x3ED

    // true if no sound should be played
    bool noSound; // Offset: 0x3EE

    // true if damage causes AI to be stunned
    bool stuns; // Offset: 0x3EF

    // true if damage causes pain
    bool causesPain; // Offset: 0x3F0

    // true if the damage forces the impacter to die and ragdoll
    bool instantRagdoll; // Offset: 0x3F1

    // true if the impacter should only ragdoll on death.
    bool ragdollOnDeath; // Offset: 0x3F2

    // do less work to determine what entities are hit by radius damage (vs. AI this may mean radius check only)
    bool simplifiedRadiusDamage; // Offset: 0x3F3

    // Pain animation is a ragdoll instead, and will attempt to get up from it
    bool painAsRagdoll; // Offset: 0x3F4

    // if true, this damage will follow ai vs ai mitigation rules
    bool allowAIVsAIMitigation; // Offset: 0x3F5

    // if true, this damage will ignore directional damage mitigation scaling
    bool ignoreDirectionalDamageMitigation; // Offset: 0x3F6

    // if true, bypass all location-based scaling from AI's entityDamageComponent decl
    bool ignoreAILocationalDamageScaling; // Offset: 0x3F7

    // if set when ai vs ai damage that doesn't actually damage the target (such as flames) occurs
    fxCondition_t aiVsAIFXCondition; // Offset: 0x3F8

    // disable pain twitch anims for players
    bool disablePainTwitchAnims; // Offset: 0x3FC

    // shrapnel projectile entity associated with radius damage
    idList < const idDeclEntityDef * , TAG_IDLIST , false > shrapnelProjEnts; // Offset: 0x400

    // use this damage when calculating the direction of impact (false to stop secondary splash damage on impact of a projectile causing the death impulse to seemingly go in the wrong direction)
    bool affectsDamageDir; // Offset: 0x418

    // use the attacker-target vector as the damage dir instead of whatever might be getting calculated
    bool damageDirAttackerToTarget; // Offset: 0x419

    // allows radial damage to use damage direction of inflictor to target instead of damage center to target, which is useful for cylinder damage, which imparts radial damage centered
    bool radialDmgUseInflictorToTargetDir; // Offset: 0x41A

    // at the detected point of impact for the target and would otherwise use direction of impact point to target, which can be very different from the cylinder axis direction true if to use alternate hit indicator ( for passive damage types, plasma puddle etc )
    bool alternateHitIndicator; // Offset: 0x41B

    // true if this damage can be scaled by the bonus damage status effect ( quad damage in MP )
    bool scaledByBonusDamage; // Offset: 0x41C

    // settings for player damage mitigation (used to dampen multiple damage events received on the same frame)
    idDamageParms::playerDamageMitigation_t playerDamageMitigation; // Offset: 0x420

    // list of AI damage mitigation list
    idList < idDamageParms::aiDamageMitigation_t , TAG_IDLIST , false > aiDamageMitigation; // Offset: 0x438

    // __editidList< aiDamageMitigation_t >demonPlayerDamageMitigation; list of demon player damage mitigation list parameters for mitigating enviromental damage on suit
    idDamageParms::enviromentSuitDamageMitigation suitDamageMitigation; // Offset: 0x450

    // force to apply to target {{ units = kg * m / s }}
    float knockBack; // Offset: 0x454

    // force to apply to target {{ units = kg * m / s }}
    float knockUp; // Offset: 0x458

    // force to apply to target if it's a demon player {{ units = kg * m /s }}. If < 0.0 we just use knockBack.
    float knockBackDemonPlayers; // Offset: 0x45C

    // force to apply to target if it's a demon player {{ units = kg * m / s }}. If < 0.0f we just use knockUp.
    float knockUpDemonPlayers; // Offset: 0x460

    // force to apply to frozen players in the Freeze Tag game mode {{ units = kg * m / s }}
    float freezeTagKnockBack; // Offset: 0x464

    // force to apply to frozen players in the Freeze Tag game mode {{ units = kg * m / s }}
    float freezeTagKnockUp; // Offset: 0x468

    // scale to apply to knockback when attacker hits self
    float selfKnockbackScale; // Offset: 0x46C

    // multiplier to apply when target is off the ground
    float knockBackInAirScale; // Offset: 0x470

    // time in seconds for view kick
    float kickTime; // Offset: 0x474

    // amplitude for player view kickback
    float kickAmplitude; // Offset: 0x478

    // direction to kick player view
    idVec3 kickDir; // Offset: 0x47C

    // radius of damage {{ units = m }}
    float radius; // Offset: 0x488

    // optional inner radius of damage, inside which damage is constant at the maximum value ( default = 0 ) {{ units = m }}
    float radiusInner; // Offset: 0x48C

    // optional damage multiplier at outer radius ( default = 0.0, range 0.0 to 1.0 )
    float radiusOuterDamageStrength; // Offset: 0x490

    // optional radius override versus demon players ( default -1.0 means use standard radius )
    float radiusVSDemonPlayer; // Offset: 0x494

    // size of the radius we expand to when testing splash damage traces. {{ units = m }}
    float traceExpansionRadius; // Offset: 0x498

    // if > 0 then only this many targets can take damage from closest to furthest inside the radius.
    int maxTargetsDamagedInRadius; // Offset: 0x49C

    // optional if this is non-zero, splash damage test is performed with a cylinder test instead of spheres. This is actually half-height. ( default = 0 ) {{ units = m }}
    float volumeHeight; // Offset: 0x4A0

    // optional if this is non-zero, splash damage test ensures target is within this angle in degrees off fire axis out to radius ( default = 0 )
    float arcAngle; // Offset: 0x4A4

    // optional if this is non-zero, splash damage test ensures target is within this angle in degrees off fire axis out to arcInnerRadius ( default = 0 )
    float arcInnerAngle; // Offset: 0x4A8

    // optional if this is non-zero, radius to use arcInnerAngle ( default = 0 ) {{ units = m }}
    float arcInnerRadius; // Offset: 0x4AC

    // how fast shockwave expands, units per sec, -1 for instant {{ units = m / s }}
    float expansionSpeed; // Offset: 0x4B0

    // whether to use the override radius for "expand" deferred checks
    bool useOverrideRadius; // Offset: 0x4B4

    // whether to use the override radius for "expand" deferred checks {{ units = m }}
    float overrideRadius; // Offset: 0x4B8

    // magnitude of impulse to apply to ragdolls {{ units = kg * m / s }}
    float ragdollImpulseMag; // Offset: 0x4BC

    // if true, the ragdoll impulse will always be applied towards the 'hip' joint instead of based on the point of impact
    bool ragdollImpulseTargetHip; // Offset: 0x4C0

    // blur
    float blur; // Offset: 0x4C4

    // blur fade time
    idTypesafeTime < float , secondUnique_t , 1 > blurTime; // Offset: 0x4C8

    // double vision
    float doubleVision; // Offset: 0x4CC

    // double vision fade time
    idTypesafeTime < float , secondUnique_t , 1 > doubleVisionTime; // Offset: 0x4D0

    // the fx start condition to start when hitting the player.
    fxCondition_t hitFXStartCondition; // Offset: 0x4D4

    // the fx start condition to start when hitting an AI enemy.
    fxCondition_t hitAIFXStartCondition; // Offset: 0x4D8

    // fx entity to spawn when this decl does damage. useful for spawning lava fx on death.
    idDeclEntityDef* hitFXEntityToSpawn; // Offset: 0x4E0

    // override for damage intensity (use default if DAMAGEINTENSITY_NONE)
    damageIntensity_t intensity; // Offset: 0x4E8

    // spawn ent on headshot and weakpoint shot (similar to spawnEntOnImpact in declProjectile) Entity to spawn when projectile kills with a headshot.
    idDeclEntityDef* spawnEntOnHeadshotKill; // Offset: 0x4F0

    // Entity to spawn when projectile hits but doesn't kill with a headshot.
    idDeclEntityDef* spawnEntOnHeadshotNonKill; // Offset: 0x4F8

    // Entity to spawn when projectile kills with a headshot.
    idDeclEntityDef* spawnEntOnWeakPointKill; // Offset: 0x500

    // Entity to spawn when projectile hits but doesn't kill with a headshot.
    idDeclEntityDef* spawnEntOnWeakPointNonKill; // Offset: 0x508

    // explosion entity def per target type
    idList < idDamageParms::spawnEntOnKillData_t , TAG_IDLIST , false > entitiesToSpawnOnKill; // Offset: 0x510

    // If positive then spawn the impact entity along the hitscan trace as well with this spacing {{ units = m }}
    float spawnEntAlongTraceSpacing; // Offset: 0x528

    // Whether to spawn the entity locally or replicate
    bool spawnEntLocally; // Offset: 0x52C

    // whether to scale the spawned ent to the splash damage radius or not
    bool spawnEntScaleToSplashRadius; // Offset: 0x52D

    // If true, we orient the spawned entity to the normal of the surface we hit when we spawn it
    bool orientSpawnEntityToSurface; // Offset: 0x52E

    // If true, we snap the spawned entity to the ground
    bool snapSpawnEntityToGround; // Offset: 0x52F

    // If true and it collides with AI, we bind the spawned entity to the AI
    bool bindSpawnEntityToAI; // Offset: 0x530

    // if true then explode it instantly
    bool spawnEntExplodeInstantly; // Offset: 0x531

    // damage sound
    idSoundEvent* damageSound; // Offset: 0x538

    // damage sound that plays when the local player is hit with this damage decl
    idSoundEvent* damageSoundWhenLocalPlayerIsHit; // Offset: 0x540

    // damage sound that plays when the local player is hit with this damage decl, when he still has armor remaining
    idSoundEvent* damageSoundWhenLocalPlayerIsHit_Armor; // Offset: 0x548

    // damage sound that plays when the local demon player is hit with this damage decl
    idSoundEvent* damageSoundWhenLocalDemonPlayerIsHit; // Offset: 0x550

    // sound event to call when damage starts
    idSoundEvent* damageSoundLoopingStart; // Offset: 0x558

    // sound event to call when damage stops
    idSoundEvent* damageSoundLoopingStop; // Offset: 0x560

    // the minimum time the loop sound must play before we call the stop event
    idTypesafeTime < int , millisecondUnique_t , 1000 > minSoundLoopTime; // Offset: 0x568

    // true if this damage could be considered a stealth kill
    bool isStealthy; // Offset: 0x56C

    // if false will not hurt friendly units
    bool friendlyFire; // Offset: 0x56D

    // if false will not hurt attacker
    bool selfDamage; // Offset: 0x56E

    // if true can knock off armor pieces
    bool knocksOffArmor; // Offset: 0x56F

    // if true, the victim entity will try to drop loot when this damage kills it
    bool allowLootDrop; // Offset: 0x570

    // if true, this damage is despawning a summoned demon
    bool despawnDamage; // Offset: 0x571

    // loot drop restrictions to use if the victim takes damage ( even if they are still alive )
    idList < idDamageParms::lootDropRestrictionOnDamage_t , TAG_IDLIST , false > lootDropRestrictionsOnDamage; // Offset: 0x578

    // context flags to use by default on death loot drops
    lootDropContextFlags_t defaultLootDropContextFlags; // Offset: 0x590

    // screen effect for use when player is inflicting damage
    idDamageParms::damageFeedbackScreenEffects_t feedbackScreenEffects; // Offset: 0x598

    // screen effect for use when player is receiving damage
    idDamageParms::playerDamageScreenEffects_t playerDamageScreenEffects; // Offset: 0x758

    // list of ammo types and amounts to return when killing specific types of AI
    idList < idDamageParms::ammoReturnOnDeath_t , TAG_IDLIST , false > ammoReturnOnDeath; // Offset: 0x8A8

    // list of ammo modifications to make when a weapon deals damage with this damage decl
    idList < idDamageParms::ammoUseOnDamage_t , TAG_IDLIST , false > ammoUseOnDamage; // Offset: 0x8C0

    // display icon for the damage
    idMaterial2* damageIcon; // Offset: 0x8D8

    // how the gore system reacts to this type of damage
    idDeclGoreBehavior* declGoreBehavior; // Offset: 0x8E0

    // if true the gore will use this decl for gore even if another damage decl is applied later on
    bool isGoreOverrideDecl; // Offset: 0x8E8

    // damage decl for soft targets
    idDeclDamage* softTargetDamageDecl; // Offset: 0x8F0

    // actor modifier to apply when taking this damage
    idDeclActorModifier* actorModifier; // Offset: 0x8F8

    // group it belongs to if you only want one hazard of this type at a time
    idDamageParms::envHazardRestriction_t envHazardRestriction; // Offset: 0x900

    // scales the damage used to determine overkill gibs (allows low damage ammo to gib AI)
    float overkillDamageScale; // Offset: 0x904

    // Allow the damage type to force full body gib. This is primarily for scripted sequences and noit meant for weapon types.
    bool forceFullBodyGib; // Offset: 0x908

    // projectile created and exploded whenever this damage is applied
    idDeclProjectile* damageProjectileAllTargets; // Offset: 0x910

    // projectile created and exploded when the damage hit an AI target
    idDeclProjectile* damageProjectileAITargets; // Offset: 0x918

    // projectile created and exploded when the damage hit and killed an AI target
    idDeclProjectile* damageProjectileAIKilledTargets; // Offset: 0x920

    // projectile created and exploded when the damage hit but did not kill an enemy
    idDeclProjectile* damageProjectileTargetNotKilled; // Offset: 0x928

    // amount of inflictor based damage
    float inflictorDamageRate; // Offset: 0x930

    // maximum amount of inflictor based damage
    float maxInflictorDamage; // Offset: 0x934

    // used to track which shot this damage originated from
    weaponStatsTag_t weaponStatsTag; // Offset: 0x938

    // Data for always presenting damage as a critical hit
    idDamageParms::alwaysCritInfo_t alwaysCritInfo; // Offset: 0x948

    // Data for close range crit bonuses
    idDamageParms::closeRangeCritInfo_t closeRangeCritInfo; // Offset: 0x950

    // Data for damage-based crit bonuses
    idDamageParms::damageBasedCritInfo_t damageBasedCritInfo; // Offset: 0x95C

    // Data for tick-based crit bonuses
    idDamageParms::tickBasedCritInfo_t tickBasedCritInfo; // Offset: 0x964

    // Data for chain-based crit bonuses
    idDamageParms::chainBasedCritInfo_t chainBasedCritInfo; // Offset: 0x978

    // Sound type to use when this damage causes a player to die
    idDamageParms::damageKillSoundType_t killSoundType; // Offset: 0x9A0

    // The amount of time (in milliseconds) for which this damage will cause you to be "overheated"
    idTypesafeTime < int , millisecondUnique_t , 1000 > overheatTime; // Offset: 0x9A4

    // the dodge value to add to the combat scoring system if this damaged is dodged
    float dodgingValue; // Offset: 0x9A8

    // damage came from logic
    bool logic; // Offset: 0x9AC

    // damage decl for overriding ai threat management
    idDeclDamage* aiThreatOverrideDamageDecl; // Offset: 0x9B0

    // this damage is not used from an inventory item
    bool nonInventoryDamage; // Offset: 0x9B8

    // this damage is from a power weapon
    bool isFromPowerWeapon; // Offset: 0x9B9

    // for slow projectiles how much extra time to give in ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > powerWeaponExtraTimerMs; // Offset: 0x9BC

    // does this damage ignite victims if the player inflictor has the flame round upgrade
    bool igniteVictimWithPlayerUpgrade; // Offset: 0x9C0

    // when true, 'secondaryDamageDecl' will be applied when primary damage is applied, rather than just during RadiusDamage. FIXME: not sure why, but 'secondaryDamageDecl' is only applied thru radius damage.
    bool applySecondaryDamageWithPrimaryDamage; // Offset: 0x9C1

    // For use in cases where two damage decls need to be called; i.e.: initial damage + damage over time. Can be overriden by "secondaryDamageDeclPerAI" (below)
    idDeclDamage* secondaryDamageDecl; // Offset: 0x9C8

    // list of secondary damage decls, per type of AI being damaged .. will override "secondaryDamageDecl" (above) if AI is in this list.
    idList < idDamageParms::secondaryDamagePerAI_t , TAG_IDLIST , false > secondaryDamageDeclPerAI; // Offset: 0x9D0

    // Data for skillshot damage highlight flashes
    idDamageParms::skillshotHighlightInfo_t skillshotHighlightInfo; // Offset: 0x9E8

    // how long (in MS) player hit flash will show (if appropriate)
    idTypesafeTime < int , millisecondUnique_t , 1000 > hitFlashDurationMS; // Offset: 0x9FC

    // rumble when ai is damaged
    idDeclRumble* controllerRumbleDecl; // Offset: 0xA00

    idFlags dynamicFlags; // Offset: 0xA08

    // damage per difficulty multipliers
    idList < idDamageParms::damagePerDifficultyMultiplier_t , TAG_IDLIST , false > difficultyDamageMultipliers; // Offset: 0xA10

    // add this to ai's temp memory when this damage is dealt
    idAtomicString aiMemoryKey; // Offset: 0xA28

    // entities to possibly spawn on damage
    idDamageParms::entitiesToSpawnOnDamage_t entitiesToSpawnOnDamage; // Offset: 0xA30

    // the base damageDecl for this idDamageParms
    idDeclDamage* baseDamageDecl; // Offset: 0xA48

}; // Size: 0xA50
