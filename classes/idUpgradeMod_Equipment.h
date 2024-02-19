struct idUpgradeMod_Equipment : idUpgradeMod
{
    enum equipmentModType_t : int
    {
        EQUIP_INVALID = -1,
        EQUIP_ABSORB_HEALTH_ON_DEATH = 0,
        EQUIP_DEXTERITY_INCREASE = 1,
        EQUIP_ACTIVATE_FOCUS_ON_DEATH_BLOW = 2,
        EQUIP_REFLECT_INCOMING_PROJECTILES = 3,
        EQUIP_GLORY_KILL_EMITS_SHOCKWAVE = 4,
        EQUIP_SPEED_BOOST_ON_ARMOR_BREAK = 5,
        EQUIP_INFINITE_AMMO_ON_HEALTH_VALUE = 6,
        EQUIP_INFINITE_AMMO = 7,
        EQUIP_MODIFY_HEALTH_DROPS_ON_HEALTH_VALUE = 8,
        EQUIP_INCREASE_DROP_RADIUS = 9,
        EQUIP_MODIFY_AMMO_DROPS = 10,
        EQUIP_FREE_AMMO_ON_SWAP = 11,
        EQUIP_INFINITE_AMMO_ON_SWAP = 12,
        EQUIP_HEALTH_AS_AMMO = 13,
        EQUIP_MAKE_DEMONS_FIGHT_THEMSELVES = 14,
        EQUIP_AIR_CONTROL_DOUBLE_JUMP = 15,
        EQUIP_MODIFY_ARMOR_MITIGATION = 16,
        EQUIP_MODIFY_ENEMY_STAGGER_DURATION = 17,
        EQUIP_MODIFY_ENEMY_DAMAGE_ON_HEALTH_VALUE = 18,
        EQUIP_TAKE_AND_DEAL_MORE_DAMAGE = 19,
        EQUIP_WEAPON_UPGRADE_PACK = 20,
        EQUIP_MODIFY_ENEMY_STAGGER_TOUGHNESS = 21,
        EQUIP_MODIFY_COOLDOWN_TIME = 22,
        EQIUP_MODIFY_MAX_USES = 23,
        EQUIP_MODIFY_EQUIPMENT_EFFECTIVENESS = 24,
        EQUIP_PLAYER_FLAME_DAMAGE_MAKES_ENEMIES_EXPLODE_ON_DEATH = 25,
        EQUIP_PLAYER_KILL_AOE_WITH_ACTIVE_STATUS_EFFECT = 26,
        EQUIP_SYSTEM_CONVERT_ARMOR_TO_BLOOD_PUNCH = 27,
        EQUIP_SYSTEM_CONVERT_HEALTH_TO_BLOOD_PUNCH = 28,
        EQUIP_FULL_ARMOR_SHOCKWAVE = 29,
        EQUIP_HAMMER_SLAM_DAMAGE_LOOT_DROPS = 30,
        EQUIP_SYSTEM_DECREASE_RECHARGE_TIME_1 = 31,
        EQUIP_SYSTEM_OVERRIDE_RECHARGE_TIME = 32,
        EQUIP_SYSTEM_INCREASE_MAX_CAPACITY = 33,
        EQUIP_SYSTEM_DECREASE_RECHARGE_TIME_2 = 34,
        EQUIP_SYSTEM_DECREASE_RECHARGE_TIME_ON_DAMAGE = 35,
        EQUIP_SYSTEM_UPGRADE_1 = 36,
        EQUIP_SYSTEM_UPGRADE_2 = 37,
        EQUIP_SYSTEM_NO_HEALTH_LIMIT_DRAIN = 38,
        EQUIP_SYSTEM_NO_SHIELD_LIMIT_DRAIN = 39,
        EQUIP_SYSTEM_ARMOR_SHARD_MODIFIER = 40,
        EQUIP_SYSTEM_AMMO_DROP_ON_BARRELS = 41,
        EQUIP_SYSTEM_EQUIPMENT_PULL = 42,
        EQUIP_EMP_FREEZE = 43,
        EQUIP_SYSTEM_DEMON_HIGHLIGHT = 44,
        EQUIP_SYSTEM_BARRELS_RESPAWN = 45,
        EQUIP_SYSTEM_HEAT_SEEKING_BARRELS = 46,
        EQUIP_SYSTEM_OVER_HEAL = 47,
        EQUIP_SYSTEM_OVER_ARMOR = 48,
        EQUIP_SYSTEM_OVER_AMMO = 49,
        EQUIP_SYSTEM_AUTOMAP_WIDER_RADIUS = 50,
        EQUIP_SYSTEM_COMPASS_SECRET_HINT = 51,
        EQUIP_SYSTEM_AUTOMAP_INCREASED_FOG_RADIUS = 52,
        EQUIP_SYSTEM_AUTOMAP_INCREASED_TRAVERSAL_RADIUS = 53,
        EQUIP_SYSTEM_AUTOMAP_SHOW_PROGRESSION_ITEMS = 54,
        EQUIP_SYSTEM_DOSSIER_SHOW_PROGRESSION_ITEMS = 55,
        EQUIP_SYSTEM_AUTOMAP_SHOW_SLAYER_GATES = 56,
        EQUIP_SYSTEM_AUTOMAP_SHOW_AUTOMAP_STATION = 57,
        EQUIP_SYSTEM_DOUBLE_LAUNCHER = 58,
        EQUIP_SYSTEM_INCREASE_AREA_OF_EFFECT = 59,
        EQUIP_SYSTEM_FLAMEBELCH_NAPALM = 60,
        EQUIP_SYSTEM_FLAME_ROUNDS = 61,
        EQUIP_SYSTEM_RIGHT_LAUNCHER_FRAG = 62,
        EQUIP_HAMMER_SUPERMETER = 63
    };

    enum infiniteAmmoMode_t : int
    {
        IAM_NONE = 0,
        IAM_ARMOR = 1,
        IAM_HEALTH = 2,
        IAM_BOTH = 4,
        IAM_COMBAT_LEVEL = 8,
        IAM_WEAPON_SWAP = 16,
        IAM_MOD_SWAP = 32,
        IAM_WEAPON_OR_MOD_SWAP = 48
    };

    enum focusUsageRule_t : int
    {
        FUR_ALWAYS = 0,
        FUR_ONCE_PER_LEVEL = 1,
        FUR_ONCE_PER_LEVEL_LIFE = 2,
        FUR_ONCE_PER_LIFE = 3
    };

    struct systemWideMods_t
    {
        // enum for the equipment this upgrade is for
        equipmentType_t equipmentType; // Offset: 0x0

        // initial upgraded recharge time (or -1 to ignore)
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_1; // Offset: 0x4

        // 2nd upgraded recharge time (or -1 to ignore)
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_2; // Offset: 0x8

        // cooldown reduction to add per damage unit
        float cooldownTime_DamageReduction; // Offset: 0xC

        // cooldown reduction to add per damage unit for frag grenade
        float cooldownTime_DamageReductionFrag; // Offset: 0x10

        // cooldown reduction to add per damage unit for stun grenade
        float cooldownTime_DamageReductionStun; // Offset: 0x14

        // cooldown reduction to add per damage unit for ice grenade
        float cooldownTime_DamageReductionIce; // Offset: 0x18

        // cooldown reduction to add per damage unit for belch
        float cooldownTime_DamageReductionBelch; // Offset: 0x1C

        // max cooldown reduction the user is allowed to have, 0 == infinite
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_MaxDamageReduction; // Offset: 0x20

        // max cooldown reduction for ice the user is allowed to have, if cooldownTime_MaxDamageReductionIce == 0, we will use cooldownTime_MaxDamageReduction
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_MaxDamageReductionIce; // Offset: 0x24

        // max cooldown reduction for frag the user is allowed to have, if cooldownTime_MaxDamageReductionIce == 0, we will use cooldownTime_MaxDamageReduction
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_MaxDamageReductionFrag; // Offset: 0x28

        // max cooldown reduction for stun the user is allowed to have, if cooldownTime_MaxDamageReductionIce == 0, we will use cooldownTime_MaxDamageReduction
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_MaxDamageReductionStun; // Offset: 0x2C

        // max cooldown reduction for belch the user is allowed to have, if cooldownTime_MaxDamageReductionIce == 0, we will use cooldownTime_MaxDamageReduction
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTime_MaxDamageReductionBelch; // Offset: 0x30

        // upgraded max capacity of items
        int itemMaxCapacity; // Offset: 0x34

    }; // Size: 0x38

    struct equipmentUpgrade_t
    {
        struct flameBelchUpgrade_t
        {
            // increased damage scale
            float increasedDamageScale; // Offset: 0x0

            // scale all damage from player weapons when on fire
            float onFireDamageScale; // Offset: 0x4

            // if true, drop the remaining armor drops when killed if on fire
            bool onFireDropRemainingArmorOnDeath; // Offset: 0x8

            // always drop at least this many times when killed while on fire
            int onFireDeathMinDrops; // Offset: 0xC

            // per-AI type multipliers for fire damage
            idList < aiMonsterValue_t , TAG_IDLIST , false > fireDamageMultipliers; // Offset: 0x10

            // what kind of additional loot to drop from a staggered enemy killed with flame belch
            idList < const idDeclLootDrop * , TAG_IDLIST , false > additionalItems; // Offset: 0x28

        }; // Size: 0x40

        // params for flame belch
        idUpgradeMod_Equipment::equipmentUpgrade_t::flameBelchUpgrade_t flameBelch; // Offset: 0x0

        // projectile decl used for this upgrade
        idDeclProjectile* declProjectile; // Offset: 0x40

        // FX decl
        idDeclFX* declFX; // Offset: 0x48

        // Number of cluster projectiles to spawn on death of the projectile
        int numberOfClustersToSpawn; // Offset: 0x50

        // Max number of clusters to spawn
        int maxNumberOfClustersToSpawn; // Offset: 0x54

        // projectile decl used for this a cluster projectile to spawn on explosion
        idDeclProjectile* declClusterProjectile; // Offset: 0x58

        // min angle to rotate from UP - (actual launch vector will be random angle from minAngle <-> maxAngle)
        float minAngle; // Offset: 0x60

        // max angle to rotate from UP - (actual launch vector will be random angle from minAngle <-> maxAngle)
        float maxAngle; // Offset: 0x64

        // The threshold that the angles of the clusters have to differ by
        float angleDifferenceThreshold; // Offset: 0x68

        // min velocity for 2nd frag projectile - (actual velocity will be random from minVelocity <-> maxVelocity)
        float minVelocity; // Offset: 0x6C

        // max velocity for 2nd frag projectile - (actual velocity will be random from minVelocity <-> maxVelocity)
        float maxVelocity; // Offset: 0x70

    }; // Size: 0x78

    struct equipmentPullInfo_t
    {
        // pull after the grenade has detonated
        bool pullAfterDetonate; // Offset: 0x0

        // must be at least this close to have acceleration applied
        float maxRadius; // Offset: 0x4

        // once here stop applying acceleration
        float minRadius; // Offset: 0x8

        // how fast to travel
        float acceleration; // Offset: 0xC

        // How much force to apply as a bump upwards when enemies are initially hit
        float upwardsBump; // Offset: 0x10

        // How many MS to taper the upwards bump by
        float upwardsBumpSlopeTimeMS; // Offset: 0x14

        // don't start pulling until upwardsBumpSlopeTimeMS has passed
        bool bumpBeforePull; // Offset: 0x18

        // sound to play when an enemy is affected by this equipment pull
        idSoundEvent* pullSound; // Offset: 0x20

        // damage decl to apply to enemies
        idDeclDamage* perFrameDamage; // Offset: 0x28

        // damage decl to apply when an enemy first is affected by equipment pull
        idDeclDamage* initialDamage; // Offset: 0x30

        // start this FX on any affected entities
        fxCondition_t startCondition; // Offset: 0x38

        // stop this FX once enemies are outside effective radius
        fxCondition_t stopCondition; // Offset: 0x3C

    }; // Size: 0x40

    struct hammerSupermeterInfo_t
    {
        // max charge
        float superMeterMax; // Offset: 0x0

        // remove hammer cooldown when supermeter is charged
        bool resetCooldownOnSupermeterFill; // Offset: 0x4

        // charge amount per glorykill
        float fillPerGlorykill; // Offset: 0x8

        // charge amount per chainsaw
        float fillPerChainsawkill; // Offset: 0xC

        // charge amount per weakpoint destroyed
        float fillPerWeakpoint; // Offset: 0x10

        // charge amount per bloodpunch kill
        float fillPerBloodpunchKill; // Offset: 0x14

        // whether to include splash kills with blood punch for hammer charge
        bool countBloodPunchSplashKills; // Offset: 0x18

        // charge amount per burn kill
        float fillPerBurnKill; // Offset: 0x1C

        // charge amount per frozen kill
        float fillPerFrozenKill; // Offset: 0x20

        // charge amount per headshot kill
        float fillPerHeadshotKill; // Offset: 0x24

        // Sound to play when supermeter charge gained
        idSoundEvent* gainSound; // Offset: 0x28

        // Sound to play when supermeter is full
        idSoundEvent* superMeterFullSound; // Offset: 0x30

        // Sound to play when using hammer without sufficient charge
        idSoundEvent* dryFireSound; // Offset: 0x38

    }; // Size: 0x40

    struct staggerDurationInfo_t
    {
        // Monster types this scale applies to
        aiMonsterType_t type; // Offset: 0x0

        // multiplies the duration of the time enemies are staggering
        float staggerDurationMultiplier; // Offset: 0x8

        // additional multiplier to add to staggerDurationMultiplier when upgraded
        float staggerAdditionalMultiplier; // Offset: 0xC

        // fxDecl to play at ai position
        idDeclFX* fxDecl; // Offset: 0x10

        // start condition for fxDecl
        fxCondition_t startCondition; // Offset: 0x18

        // Disallows FX for Vulnerable AI
        bool allowFxOnVulnerableAI; // Offset: 0x1C

    }; // Size: 0x20

    struct equipmentEffectiveness_t
    {
        // __def floatfragGrenadeDamageScale; the percentage of damage increase for the frag grenade projectile to use
        idDeclProjectile* fragGrenadeProjectileDecl; // Offset: 0x0

        // __def floatsiphonHealingScale; the percentage of the health to get back on syphon grenade volume used when larger radius upgrade is active
        idDeclEntityDef* siphonRadiusVolumeDef; // Offset: 0x8

        // the percentage of health increase on decoy
        float decoyHealthScale; // Offset: 0x10

        // the percentage of lifetime increase for decoy
        float decoyLifetimeScale; // Offset: 0x14

    }; // Size: 0x18

    struct increaseAreaOfEffect_t
    {
        // new radius of damage for frag
        float fragRadius; // Offset: 0x0

        // new radius for ice bomb
        float iceBombRadius; // Offset: 0x4

        // new radius of damage for flame belch
        float flameBelchRadius; // Offset: 0x8

        // new volumeHeight damage for flame belch
        float flameBelchVolumeHeight; // Offset: 0xC

        // new arc angle damage for flame belch
        float flameBelchArcAngle; // Offset: 0x10

    }; // Size: 0x14

    struct healthSystem_t
    {
        // Allow health pickups past max.
        bool allowPostMax; // Offset: 0x0

        // how much we give the player per pickup after max.
        float postMax_pickupAmount; // Offset: 0x4

        // max amount we can go past the max health.
        float postMax_cap; // Offset: 0x8

        // delay before we start draining health ( milliseconds )
        idTypesafeTime < int , millisecondUnique_t , 1000 > postMax_drainDelayMS; // Offset: 0xC

        // How much health to drain per second.
        float postMax_drainPerSecond; // Offset: 0x10

    }; // Size: 0x14

    struct armorSystem_t
    {
        // Allow armor pickups past max.
        bool allowPostMax; // Offset: 0x0

        // how much we give the player per pickup after max.
        float postMax_pickupAmount; // Offset: 0x4

        // max amount we can go past the max armor.
        float postMax_cap; // Offset: 0x8

        // delay before we start draining armor ( milliseconds )
        idTypesafeTime < int , millisecondUnique_t , 1000 > postMax_drainDelayMS; // Offset: 0xC

        // How much armor to drain per second.
        float postMax_drainPerSecond; // Offset: 0x10

        // How many x armor shard value.
        float armorShardModifier; // Offset: 0x14

    }; // Size: 0x18

    struct inventoryUpgrade_t
    {
        // the inventory this upgrade decl belongs to
        idDeclInventoryRef inventoryDecl; // Offset: 0x0

        // the upgrade decl to give out
        idDeclUpgrade* upgradeDecl; // Offset: 0x8

        // applies this upgrade to all weapons with the same shared ammo as 'inventoryDecl'
        bool applyToAllSharedAmmoWeapons; // Offset: 0x10

    }; // Size: 0x18

    struct aiFreezeData_t
    {
        // AI this damage mitigation applies to
        aiMonsterType_t monsterType; // Offset: 0x0

        // damage multiplier to apply to frozen enemies
        float freezeDamageMultiplier; // Offset: 0x8

        // max time to enter the freeze pose after hit with grenade
        idTypesafeTime < int , millisecondUnique_t , 1000 > maxTimeIntoFreezePose; // Offset: 0xC

        // time the entity remains in the frozen pose in Ms
        idTypesafeTime < int , millisecondUnique_t , 1000 > freezePoseDurationMs; // Offset: 0x10

        // sound that plays the instant the demon is completely frozen, non looping
        idSoundEvent* frozenSoundDecl; // Offset: 0x18

        // sound that plays from the demon while they are frozen
        idSoundEvent* whileFrozenSoundDecl; // Offset: 0x20

        // sound that plays when ai is hit while frozen
        idSoundEvent* frozenHitSoundDecl; // Offset: 0x28

        // additional damage modifiers
        idList < damageDeclModifier_t , TAG_IDLIST , false > damageDeclModifiers; // Offset: 0x30

    }; // Size: 0x48

    struct freezeEMPUpgradeData_t
    {
        // freeze data for ai when using emp upgrade
        idList < idUpgradeMod_Equipment::aiFreezeData_t , TAG_IDLIST , false > aiFreezeDataList; // Offset: 0x0

    }; // Size: 0x18

    struct doubleJumpAirControl_t
    {
        // applies the english air control to both first and second jumps
        bool applyAirControlToBothJumps; // Offset: 0x0

        // sets the double jump English scale to a specific value ( 0.0f - 10.0f )
        float airEnglishScale; // Offset: 0x4

        // the generic upgrade values in upgrade order
        idList < float , TAG_IDLIST , false > upgradeValues; // Offset: 0x8

        // the sound to play
        idSoundEvent* playSound; // Offset: 0x20

        // number of sections that are used to determine when to play directionChangePlaySound
        float changeDirSections; // Offset: 0x28

        // sound played when player changes direction during air control
        idSoundEvent* inAirDirectionChangeSound; // Offset: 0x30

        // delay required before playing inAirDirectionChangeSound again
        idTypesafeTime < int , millisecondUnique_t , 1000 > soundDelayTime; // Offset: 0x38

    }; // Size: 0x40

    struct homingBarrelInfo_t
    {
        // Min speed for the barrel
        float minVelocity; // Offset: 0x0

        // Max speed at which the barrel is launched
        float maxVelocity; // Offset: 0x4

        // min range that the barrel has to be away from the barrel
        float minRadius; // Offset: 0x8

        // max range that the barrel will home in
        float maxRadius; // Offset: 0xC

        // Amount to scale the velocity of the barrel being hit by the player
        float pushVelocityScale; // Offset: 0x10

        // Decl to attach to the barrel to make it homing
        idDeclProp_ThinkComponent* propComponentDecl; // Offset: 0x18

    }; // Size: 0x20

    struct weaponValueInfo_t
    {
        // Weapon to modify
        idDeclWeapon* weapon; // Offset: 0x0

        // Value to modify by
        int value; // Offset: 0x8

    }; // Size: 0x10

    struct ammoValueInfo_t
    {
        // ammo to modify
        idDeclAmmo* ammo; // Offset: 0x0

        // Value to modify by
        int value; // Offset: 0x8

        // flag for the decl
        bool flag; // Offset: 0xC

    }; // Size: 0x10

    struct explodingEnemiesInfo_t
    {
        struct explosionPerEntityInfo_t
        {
            // type of monster these overrides apply to
            aiMonsterType_t monsterTypesMask; // Offset: 0x0

            // custom explosion radius for this monster
            idDeclEntityDef* explosionDecl; // Offset: 0x8

            // required status effect active on death to do this - only one needs to be valid!
            idList < const idDeclStatusEffect * , TAG_IDLIST , false > requiredStatusEffects; // Offset: 0x10

            // type of damage required for this entry to be valid can be ANY in the list. If the list is empty skip the check entirely.
            idList < idPlayerWeaponDamageType_t , TAG_IDLIST , false > requiredDamageTypes; // Offset: 0x28

            // type of damage that will skip this entry can be ANY in this list
            idList < idPlayerWeaponDamageType_t , TAG_IDLIST , false > forbiddenDamageTypes; // Offset: 0x40

        }; // Size: 0x58

        // explosion info specific to a given monster type
        idList < idUpgradeMod_Equipment::explodingEnemiesInfo_t::explosionPerEntityInfo_t , TAG_IDLIST , false > explosionInfoPerMonsterType; // Offset: 0x0

        // time after death to explode
        idTypesafeTime < int , millisecondUnique_t , 1000 > defaultExplosionDelay; // Offset: 0x18

        // default explosion radius if one isn't defined
        idDeclEntityDef* defaultExplosionDecl; // Offset: 0x20

        // required status effect active on death to do this - only one needs to be valid!
        idList < const idDeclStatusEffect * , TAG_IDLIST , false > requiredStatusEffects; // Offset: 0x28

        // type of damage required for the default explosion to happen - can be ANY in the list or empty
        idList < idPlayerWeaponDamageType_t , TAG_IDLIST , false > requiredDamageTypes; // Offset: 0x40

        // skip the default explosion if killed with these types of damage
        idList < idPlayerWeaponDamageType_t , TAG_IDLIST , false > forbiddenDamageTypes; // Offset: 0x58

        // allow the microwave concussive blast if we explode on death
        bool allowMicrowaveConcussiveBlast; // Offset: 0x70

    }; // Size: 0x78

    // the type of upgrade
    idUpgradeMod_Equipment::equipmentModType_t type; // Offset: 0x8

    // SYSTEM-WIDE UPGRADES
    idUpgradeMod_Equipment::systemWideMods_t systemWideMods; // Offset: 0xC

    // EQUIPMENT ITEM UPGRADE TIER 2 equipment system tier 2 mods
    idUpgradeMod_Equipment::equipmentUpgrade_t tier2Mods; // Offset: 0x48

    // equipment system tier 3 mods
    idUpgradeMod_Equipment::equipmentUpgrade_t tier3Mods; // Offset: 0xC0

    // the duration of the upgrade ( milliseconds )
    idTypesafeTime < int , millisecondUnique_t , 1000 > durationMs; // Offset: 0x138

    // remove free ammo on release of fire
    bool removeFreeAmmoOnRelease; // Offset: 0x13C

    // the distance at which health packages can be absorbed to revive player {{ units = m }}
    float absorbHealthPackagesDistance; // Offset: 0x140

    // the amount of armor to give on a glory kill ( 0.0f - 100.0f )
    float armorPerGloryKill; // Offset: 0x144

    // if > 0 the number of ammo drops to override the system with, upgrades are give the extra armor per level, if this is set the armor wont be given via suit, rather the drops give the armor
    int armorDropPerGloryKill; // Offset: 0x148

    // the duration of the speed boost ( milliseconds )
    idTypesafeTime < int , millisecondUnique_t , 1000 > speedBoostDurationMs; // Offset: 0x14C

    // the multiplier to apply to the speed as a boost ( 1.0f - 2.0f )
    float speedBoostMultiplier; // Offset: 0x150

    // the additional multiplier to give on top of speedBoostMultiplier per stack level
    idList < float , TAG_IDLIST , false > speedBoostAdditionalMultiplier; // Offset: 0x158

    // the max number of times we can stack the speed boost
    int speedBoostMaxStackableMods; // Offset: 0x170

    // the rate of conversion to award adrenaline if we get damaged ( 0.0f - 2.0f )
    float damageToAdrenalineConversion; // Offset: 0x174

    // the amount to cap health when a death blow happens and we go into focus ( 0.0f - 100.0f )
    float leftOverHealthValue; // Offset: 0x178

    // the amount of time that must pass before we are able to trigger the focus attack automatically from previous use. ( milliseconds )
    idTypesafeTime < int , millisecondUnique_t , 1000 > focusAttackResetTimeMs; // Offset: 0x17C

    // the amount of time that must pass before we are able to trigger the focus attack automatically from previous use. ( milliseconds )
    idTypesafeTime < int , millisecondUnique_t , 1000 > focusAttackResetTimeMs_Upgraded; // Offset: 0x180

    // the amount of time that we are invulnerable when we trigger the focus command
    idTypesafeTime < int , millisecondUnique_t , 1000 > focusInvulnerableTimeMs; // Offset: 0x184

    // the amount of health that can be used up (by being damaged) before player is officially dead
    float focusMaxHealth; // Offset: 0x188

    // the amount of health that can be used up (by being damaged) before player is officially dead
    float focusMaxHealth_Upgraded; // Offset: 0x18C

    // the amount of health the player reaches and focus is turned off
    float focusDisablesAtHealth; // Offset: 0x190

    // additional rules for usage of focus
    idUpgradeMod_Equipment::focusUsageRule_t focusUsageRule; // Offset: 0x194

    // max number of times focus can be used per "focusUsageRule" timeframe (-1 == unlimited uses)
    int focusMaxUses; // Offset: 0x198

    // "focusMaxUses" upgrade value
    int focusMaxUses_Upgraded; // Offset: 0x19C

    // the amount of time we need to play the exit sound before the end of the status effect
    idTypesafeTime < int , millisecondUnique_t , 1000 > focusExtSndBfrEndMs; // Offset: 0x1A0

    // the decl to the inventory item to give for use of this upgrade
    idDeclInventory* giveInventoryDecl; // Offset: 0x1A8

    // the amount of health the player must be at or above to allow infinite ammo, neg values indicate player must bet at MAX health to have infinite ammo
    float infiniteAmmoAboveHealthValue; // Offset: 0x1B0

    // the amount of armor the player must be at or above to allow infinite ammo, neg values indicate player must bet at MAX health to have infinite ammo
    float infiniteAmmoAboveArmorValue; // Offset: 0x1B4

    // the combat level the player must be at or above to allow infinite ammo, neg values indicate max level
    float infiniteAmmoAboveCombatLevel; // Offset: 0x1B8

    // the amount of health the player must be at or above to allow infinite ammo, neg values indicate player must bet at MAX health to have infinite ammo
    float infiniteAmmoAboveHealthValue_Upgraded; // Offset: 0x1BC

    // the amount of armor the player must be at or above to allow infinite ammo, neg values indicate player must bet at MAX health to have infinite ammo
    float infiniteAmmoAboveArmorValue_Upgraded; // Offset: 0x1C0

    // the combat level the player must be at or above to allow infinite ammo, neg values indicate max level
    float infiniteAmmoAboveCombatLevel_Upgraded; // Offset: 0x1C4

    // the amount of health the player must be at or above to allow infinite ammo on big weapons, neg values indicate player must bet at MAX health to have infinite ammo, 0.0f==inactive
    float infiniteAmmoAboveHealthValue_Special; // Offset: 0x1C8

    // the amount of armor the player must be at or above to allow infinite ammo on big weapons, neg values indicate player must bet at MAX health to have infinite ammo,0.0f==inactive
    float infiniteAmmoAboveArmorValue_Special; // Offset: 0x1CC

    // the combat level the player must be at or above to allow infinite ammo on big weapons, neg values indicate max level, 0.0f==inactive
    float infiniteAmmoAboveCombatLevel_Special; // Offset: 0x1D0

    // the base mode on which to give the infinite ammo
    idUpgradeMod_Equipment::infiniteAmmoMode_t infiniteAmmoMode; // Offset: 0x1D4

    // the base mode on which to give the infinite ammo upgrade
    idUpgradeMod_Equipment::infiniteAmmoMode_t infiniteAmmoUpgradeMode; // Offset: 0x1D8

    // sound to play when reaching infinite ammo on regular weapons
    idSoundEvent* infiniteAmmoReachedSound; // Offset: 0x1E0

    // sound to play when reaching infinite ammo on special weapons
    idSoundEvent* infiniteAmmoSpecialReachedSound; // Offset: 0x1E8

    // the rate of passive refill/draw at which to fill the meter {{ units = m / s }}
    float superMeterRefillRate; // Offset: 0x1F0

    // the amount of health the player has to be at or below to apply the modifier
    float playerLowHealthLevel; // Offset: 0x1F4

    // the percentage modifier for health drops we want to drop ( ie 0.5f == 50%, 2.0f == 200% )
    float healthDropModPercentage; // Offset: 0x1F8

    // the dexterity mod weapon change animation scale ( <1 for faster, >1 for slower )
    float dexterityIncreaseWeaponChangeScale; // Offset: 0x1FC

    // the dexterity mod weapon mod swap animation scale ( <1 for faster, >1 for slower )
    float dexterityIncreaseWeaponModSelectScale; // Offset: 0x200

    // the dexterity mod ledge grab speed scale ( <1 for faster, >1 for slower )
    float dexterityIncreaseUpgradeLedgeGrabScale; // Offset: 0x204

    // the percentage to modify the drops radius by ( ie 0.5f == 50%, 2.0f == 200% )
    float dropRadiusPercentageMod; // Offset: 0x208

    // the additional upgrade percentage to modify the drops radius by ( ie 0.5f == 50%, 2.0f == 200% )
    float dropRadiusPercentageUpgrade; // Offset: 0x20C

    // the percentage to modify the speed the drops come to us( ie 0.5f == 50%, 2.0f == 200% )
    float dropRadiusSpeedMultiplierMod; // Offset: 0x210

    // the additional upgrade percentage to modify the speed the drops come to us( ie 0.5f == 50%, 2.0f == 200% )
    float dropRadiusSpeedMultiplierUpgrade; // Offset: 0x214

    // the percentage to modify the number of ammo drops by ( ie 0.5f == 50%, 2.0f == 200% )
    float ammoDropModPercentage; // Offset: 0x218

    // (upgraded version) the percentage to modify the number of ammo drops by ( ie 0.5f == 50%, 2.0f == 200% )
    float ammoDropModPercentage_Upgraded; // Offset: 0x21C

    // the percentage to modify the number of ammo drops by ( ie 0.5f == 50%, 2.0f == 200% )
    float ammoPickupModPercentage; // Offset: 0x220

    // (upgraded version) the percentage to modify the number of ammo drops by ( ie 0.5f == 50%, 2.0f == 200% )
    float ammoPickupModPercentage_Upgraded; // Offset: 0x224

    // chance of BFG ammo being dropped
    float ammoDropModBFGPercentage; // Offset: 0x228

    // Apply ammo drop mod percentage to power ammo
    bool applyAmmoDropModToPowerAmmo; // Offset: 0x22C

    // Increases the radius that the player reveals fog of war
    float automapIncreasedFogRadius; // Offset: 0x230

    // Shows where the automap is
    bool automapShowAutomapStation; // Offset: 0x234

    // Shows progression items on the automap
    bool automapShowProgressionItems; // Offset: 0x235

    // Max amount of extra health
    float overhealthCap; // Offset: 0x238

    // amount of extra health to give the player if == 0 then use vile amount
    float overhealthOverride; // Offset: 0x23C

    // the health value at which other demons turn against the wounded one
    float demonsTurnOnThemselvesOnHealth; // Offset: 0x240

    // an upgrade to apply when a value associated with this upgrade gets hit, ie overhealth and overarmor
    idDeclUpgrade* upgradeOnMaxValue; // Offset: 0x248

    // __def const idDeclFaction *demonsTurnOnThemselvesFaction; the faction the demons will take when this suit mod is present and the demon is below a certain health, if left null the demons will become same faction as player equipment pull rune info
    idUpgradeMod_Equipment::equipmentPullInfo_t equipmentPullInfo; // Offset: 0x250

    // hammer supermeter info
    idUpgradeMod_Equipment::hammerSupermeterInfo_t hammerSupermeterInfo; // Offset: 0x290

    // how much to scale AI's stagger durations individually
    idList < idUpgradeMod_Equipment::staggerDurationInfo_t , TAG_IDLIST , false > staggerDurationInfo; // Offset: 0x2D0

    // Sound to play when enemies stagger w/ equipped active stagger time increase
    idSoundEvent* staggerSoundModifier; // Offset: 0x2E8

    // multiplies the damage given to enemies by this factor ( 0.0f - 2.0f )
    float enemyDamageMultiplier; // Offset: 0x2F0

    // (upgraded version ) multiplies the damage given to enemies by this factor ( 0.0f - 2.0f )
    float enemyDamageMultiplier_Upgraded; // Offset: 0x2F4

    // multiplies the damage taken by the player by this factor ( 0.0f - 2.0f )
    float playerDamageMultiplier; // Offset: 0x2F8

    // max height (up from player's view) that a reflection is allowed
    float reflectProjMaxHeight; // Offset: 0x2FC

    // time (in sec) to reflect projectiles
    float reflectProjTimeSecs; // Offset: 0x300

    // far plane to reflect projectiles
    float reflectProjFarPlane; // Offset: 0x304

    // near plane to reflect projectiles
    float reflectProjNearPlane; // Offset: 0x308

    // damage scale applied to reflected projectiles
    float reflectProjDamageScale; // Offset: 0x30C

    // speed scale applied to reflected projectiles
    float reflectProjSpeedScale; // Offset: 0x310

    // projectiles reflected within this fov
    float reflectProjFov; // Offset: 0x314

    // sound played when projectile successfully reflected
    idSoundEvent* reflectProjSound; // Offset: 0x318

    // seek parameters used when reflect projectile
    seekParms_t reflectProjSeekParms; // Offset: 0x320

    // how many MS to wait before the next reflect is possible after a successful reflection
    idTypesafeTime < int , millisecondUnique_t , 1000 > reflectTimeoutMSSuccess; // Offset: 0x428

    // how many MS to wait before the next reflect is possible after a failed reflection
    idTypesafeTime < int , millisecondUnique_t , 1000 > reflectTimeoutMSFail; // Offset: 0x42C

    // upgraded far plane to reflect projectiles
    float reflectProjFarPlane_Upgraded; // Offset: 0x430

    // upgraded near plane to reflect projectiles
    float reflectProjNearPlane_Upgraded; // Offset: 0x434

    // upgraded damage scale applied to reflected projectiles
    float reflectProjDamageScale_Upgraded; // Offset: 0x438

    // upgraded speed scale applied to reflected projectiles
    float reflectProjSpeedScale_Upgraded; // Offset: 0x43C

    // how many MS to wait before the next reflect is possible after a successful reflection
    idTypesafeTime < int , millisecondUnique_t , 1000 > reflectTimeoutMSSuccess_Upgraded; // Offset: 0x440

    // how many MS to wait before the next reflect is possible after a failed reflection
    idTypesafeTime < int , millisecondUnique_t , 1000 > reflectTimeoutMSFail_Upgraded; // Offset: 0x444

    // recharge delay required between uses of equipment items
    float equipmentCooldownTimeSec; // Offset: 0x448

    // max number of times equipment can be used before requiring cooldown
    int equipmentMaxUses; // Offset: 0x44C

    // milliseconds for barrel respawning
    idTypesafeTime < int , millisecondUnique_t , 1000 > barrelRespawnTimeMS; // Offset: 0x450

    // milliseconds for mod swap time
    idTypesafeTime < int , millisecondUnique_t , 1000 > modSwapInfiniteAmmoTimeMS; // Offset: 0x454

    // milliseconds for weapon swap time
    idTypesafeTime < int , millisecondUnique_t , 1000 > weaponSwapInfiniteAmmoTimeMS; // Offset: 0x458

    // area-of-effect splash arc damage to apply at the source of the fire in the direction of the fire
    idDeclDamage* gloryShockwaveSplashDamageDecl; // Offset: 0x460

    // sound played when glory shockwave accomplished
    idSoundEvent* gloryShockwaveSound; // Offset: 0x468

    // upgraded area-of-effect splash arc damage to apply at the source of the fire in the direction of the fire
    idDeclDamage* gloryShockwaveSplashDamageDecl_Upgraded; // Offset: 0x470

    // The interaction decl associated with the mod.
    syncFilter_t syncInteractionFilter; // Offset: 0x478

    // The list of entity defs we are allowed to do the auto glory kills against
    idList < const idDeclEntityDef * , TAG_IDLIST , false > syncInteractionEntityDefs; // Offset: 0x480

    // the button press to utilize this
    usercmdButton_t useOnButtonPress; // Offset: 0x498

    // the sound to play
    idSoundEvent* playSound; // Offset: 0x4A0

    // sound to play on end
    idSoundEvent* endSound; // Offset: 0x4A8

    // the fxDecl to play
    idDeclFX* playFx; // Offset: 0x4B0

    // start condition to use w/ playFx
    fxCondition_t playFxStartCondition; // Offset: 0x4B8

    // end condition to use
    fxCondition_t playFxEndCondition; // Offset: 0x4BC

    // the FX Decl to use for the effect.
    idDeclStatusEffect* statusEffectDecl; // Offset: 0x4C0

    // the generic upgrade values in upgrade order
    idList < float , TAG_IDLIST , false > upgradeValues; // Offset: 0x4C8

    // damage decl to apply to napalmed enemies
    idDeclDamage* napalmDamage; // Offset: 0x4E0

    // How close an enemy needs to be to a burning entity to spread
    float napalmSpreadDistance; // Offset: 0x4E8

    // Sound to play when napalm spreads
    idSoundEvent* napalmSpreadSound; // Offset: 0x4F0

    // damage decl to apply to enemies hit with flame rounds
    idDeclDamage* flameRoundDamage; // Offset: 0x4F8

    // equipment effectiveness level data
    idList < idUpgradeMod_Equipment::equipmentEffectiveness_t , TAG_IDLIST , false > equipmentEffectiveness; // Offset: 0x500

    // the data for damage radius changes on the equipment
    idUpgradeMod_Equipment::increaseAreaOfEffect_t increaseAreaOfEffect; // Offset: 0x518

    // Anything related to health.
    idUpgradeMod_Equipment::healthSystem_t healthSystem; // Offset: 0x52C

    // Anything related to health.
    idUpgradeMod_Equipment::armorSystem_t armorSystem; // Offset: 0x540

    // freeze upgrade data for EMP upgrade
    idUpgradeMod_Equipment::freezeEMPUpgradeData_t freezeEMPUpgradeData; // Offset: 0x558

    // the pack of inventory upgrades to manually dish out
    idList < idUpgradeMod_Equipment::inventoryUpgrade_t , TAG_IDLIST , false > upgradePack; // Offset: 0x570

    // double jump air control upgrade
    idUpgradeMod_Equipment::doubleJumpAirControl_t doubleJumpAirControl; // Offset: 0x588

    // data for barrels flying into ai upon dash
    idUpgradeMod_Equipment::homingBarrelInfo_t homingBarrel; // Offset: 0x5C8

    // the list of weapon-specific values for this upgrade
    idList < idUpgradeMod_Equipment::weaponValueInfo_t , TAG_IDLIST , false > weaponValueList; // Offset: 0x5E8

    // the list of ammo-specific values for this upgrade
    idList < idUpgradeMod_Equipment::ammoValueInfo_t , TAG_IDLIST , false > ammoValueList; // Offset: 0x600

    // info for exploding enemies after death perk
    idUpgradeMod_Equipment::explodingEnemiesInfo_t explodingEnemiesInfo; // Offset: 0x618

}; // Size: 0x690
