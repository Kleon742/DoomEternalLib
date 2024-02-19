struct idUpgradeMod_Abilities : idUpgradeMod
{
    enum abilityModType_t : int
    {
        ABILITY_MOD_NONE = 0,
        ABILITY_MOD_DOUBLE_JUMP = 1,
        ABILITY_MOD_SUPERMETER = 2,
        ABILITY_MOD_GK_DISTANCE_MOD = 3,
        ABILITY_MOD_ENV_DAMAGE_MOD = 4,
        ABILITY_MOD_SELF_EXPLOSIVES_MOD = 5,
        ABILITY_MOD_BARREL_EXPLOSIVES_MOD = 6,
        ABILITY_MOD_POWERUP_DURATION_MOD = 7,
        ABILITY_MOD_POWERUP_ARMOR = 8,
        ABILITY_MOD_POWERUP_HEALTH = 9,
        ABILITY_MOD_POWERUP_DAMAGE_RESIST = 10,
        ABILITY_MOD_POWERUP_SHOCKWAVE = 11,
        ABILITY_MOD_DOUBLE_DAMAGE_BFG_FULL = 12,
        ABILITY_MOD_INCREASE_BFG_CAPACITY = 13,
        ABILITY_MOD_DAMAGE_AWARDS_ADRENALINE = 14,
        ABILITY_MOD_WEAPON_CHANGE_SPEED = 15,
        ABILITY_MOD_WEAPON_MOD_SPEED = 16,
        ABILITY_MOD_LEDGE_GRAB_SPEED = 17,
        ABILITY_MOD_DASH_REGEN_RATE = 18,
        ABILITY_MOD_DASH_GK_RESTORE_DASH = 19,
        ABILITY_MOD_DASH_MELEE_DAMAGE_SCALE = 20,
        ABILITY_MOD_DASH_REGEN_DELAY = 21,
        ABILITY_MOD_DASH_GK_DROP_ARMOR = 22,
        ABILITY_MOD_DASH_REDUCE_DAMAGE = 23,
        ABILITY_MOD_DASH_INCREASE_DAMAGE = 24,
        ABILITY_MOD_DASH_LEAVES_HOLOGRAM = 25,
        ABILITY_MOD_DASH_HEAT_SEEKING_BARREL = 26,
        ABILITY_MOD_MID_AIR_SLOWMO = 27,
        ABILITY_MOD_EXTRA_AMMO_ON_BFG_KILL = 28,
        ABILITY_MOD_GLASS_CANNON = 29,
        ABILITY_MOD_BFG_TENDRIL_DAMAGE_TO_DEMON_PLAYERS = 30,
        ABILITY_MOD_SAVING_THROW = 31,
        ABILITY_MOD_BLOOD_PUNCH_LOOT = 32,
        ABILITY_MOD_WEAKPOINT_EXPLOSION = 33,
        ABILITY_MOD_WEAKPOINT_LOOT_DROP = 34,
        ABILITY_MOD_HAMMER_SLAM_RADIUS = 35,
        ABILITY_MOD_EXTRA_LIFE_REFUND = 36,
        ABILITY_MOD_HAMMER_SLAM_DAMAGE = 37,
        ABILITY_MOD_HAMMER_RECHARGE_TIME = 38,
        ABILITY_MOD_HAMMER_PAIN_FALTER_TIME = 39
    };

    struct aiSpecificFalterAnimScale
    {
        // AI this damage mitigation applies to
        aiMonsterType_t monsterType; // Offset: 0x0

        // ai specific scale to apply
        float falterAnimScale; // Offset: 0x8

    }; // Size: 0x10

    struct powerupMods_t
    {
        struct damageResistMods_t
        {
            // damage scaled by this amount when powerup is active
            float scalar; // Offset: 0x0

            // sound used when player is hit when and this is enabled
            idSoundEvent* soundDecl; // Offset: 0x8

        }; // Size: 0x10

        struct durationModInfo_t
        {
            // status effect that powerup uses
            idDeclStatusEffect* statusEffectDecl; // Offset: 0x0

            // amount of time to add to the powerup
            idTypesafeTime < int , millisecondUnique_t , 1000 > timeToAddMs; // Offset: 0x8

            // sound to play when time is added
            idSoundEvent* increaseTimeSoundDecl; // Offset: 0x10

            // FX condition when time is added
            fxCondition_t increaseTimeFxCondition; // Offset: 0x18

            // time is scaled as number of kills increases
            idList < float , TAG_IDLIST , false > timeScalarsPerKill; // Offset: 0x20

        }; // Size: 0x38

        struct shockwave_t
        {
            // damage decl to use for powerup shockwave
            idDeclDamage* damageDecl; // Offset: 0x0

            // sound to use for powerup shockwave
            idSoundEvent* soundDecl; // Offset: 0x8

        }; // Size: 0x10

        // damage resistance mods specific to damage resistance
        idUpgradeMod_Abilities::powerupMods_t::damageResistMods_t damageResistance; // Offset: 0x0

        // data used by powerup duration mod list of powerup duration data for each status effect
        idList < idUpgradeMod_Abilities::powerupMods_t::durationModInfo_t , TAG_IDLIST , false > duration; // Offset: 0x10

        // shockwave data used by powerup shockwave mod
        idUpgradeMod_Abilities::powerupMods_t::shockwave_t shockwave; // Offset: 0x28

        // still need these mods? the amount of armor to give on enter/exit, -1 == max value
        int armorValue; // Offset: 0x38

        // if true we will fill the armor on entering the power up
        bool armorOnEnter; // Offset: 0x3C

        // if true we will fill the armor on exiting the power up
        bool armorOnExit; // Offset: 0x3D

        // the amount of Health to give on enter/exit, -1 == max value
        int healthValue; // Offset: 0x40

        // if true we will fill the Health on entering the power up
        bool healthOnEnter; // Offset: 0x44

        // if true we will fill the Health on exiting the power up
        bool healthOnExit; // Offset: 0x45

    }; // Size: 0x48

    struct midAirSlowMoInfo_t
    {
        // how many milliseconds can it last in total
        int maxDurationMS; // Offset: 0x0

        // How slow can you go?
        float timeScale; // Offset: 0x4

        // additional look scale
        float lookScale; // Offset: 0x8

        // minimum height slayer must be off the ground to activate
        float minHeightToActivate; // Offset: 0xC

        // how many milliseconds to go from 0 - 100 % charge
        int rechargeTimeMS; // Offset: 0x10

        // How many milliseconds to ease into the slowmo
        int easeInTimeMS; // Offset: 0x14

        // How many milliseconds to ease out of the slowmo
        int easeOutTimeMS; // Offset: 0x18

        // Sound to play when activated
        idSoundEvent* onSound; // Offset: 0x20

        // Sound to play when deactivated
        idSoundEvent* offSound; // Offset: 0x28

        // Sound to play when fully charged
        idSoundEvent* chargedSound; // Offset: 0x30

        // fx start to send to player
        fxCondition_t startFXCondition; // Offset: 0x38

        // fx stop to send to player
        fxCondition_t stopFXCondition; // Offset: 0x3C

        // How much to scale weapon charge time ( smaller = faster )
        float weaponChargeScale; // Offset: 0x40

        // Should slow motion effect persist after player lands
        bool persistAfterLanding; // Offset: 0x44

        // should slow motion effect persist after player lands in water
        bool persistAfterSwimming; // Offset: 0x45

        // How long after activation conditions are met should target strike activate
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeToActivate; // Offset: 0x48

    }; // Size: 0x50

    struct dexterityMods_t
    {
        // ledge grab speed scale
        float ledgeGrabScale; // Offset: 0x0

        // monkey bar speed scale
        float monkeyBarScale; // Offset: 0x4

        // weapon change speed scale
        float weaponChangeSpeed; // Offset: 0x8

        // weapon mod switching speed scale
        float weaponModSwitchingSpeed; // Offset: 0xC

    }; // Size: 0x10

    struct dashMods_t
    {
        // scalar applied to dash, regeneration speed
        float regenScale; // Offset: 0x0

        // flag if the mod should only work on the first pip
        bool onlyWorkOnFirstPip; // Offset: 0x4

        // number of dash (pips) to restore
        int gloryKillRestoreNum; // Offset: 0x8

        // melee damage scaled by this amount
        float meleeDamageScale; // Offset: 0xC

        // (if non-zero) overrides base regen delay value
        idTypesafeTime < int , millisecondUnique_t , 1000 > regenDelayOverrideMS; // Offset: 0x10

        // (if non-zero) duration of the ability event
        idTypesafeTime < int , millisecondUnique_t , 1000 > dashAbilityDurationMS; // Offset: 0x14

        // what kind of additional loot to drop from a dash glorykill
        idList < const idDeclLootDrop * , TAG_IDLIST , false > lootDropAppend; // Offset: 0x18

        // incoming damage scaled by this amount
        float incomingDamageScalar; // Offset: 0x30

        // data for triggering heat seeking barrel on dash
        idUpgradeMod_Equipment::homingBarrelInfo_t homingBarrel; // Offset: 0x38

    }; // Size: 0x58

    struct glassCannonMods_t
    {
        struct weaponAndDamageModifierPair_t
        {
            // weapon damage type the modifier effects
            idPlayerWeaponDamageType_t weaponDamageType; // Offset: 0x0

            // modifier we add to baseGlassCannonDamageBonus
            float weaponDamageModifier; // Offset: 0x4

        }; // Size: 0x8

        struct difficultyAndDamageMultiplierPair_t
        {
            // difficulty this multiplier applies to
            gameDifficulty_t difficulty; // Offset: 0x0

            // damage multiplier at this difficulty that the player deals. After (baseGlassCannonDamageBonus + weaponDamageModifier) we multiply by this for the difficulty
            float multiplierBonus; // Offset: 0x4

            // damage multiplier at this difficulty that the player receives. baseGlassCannonDamagePenalty * this penalty multiplier.
            float multiplierPenalty; // Offset: 0x8

        }; // Size: 0xC

        // weapon specific modifiers to add to the baseGlassCannonDamageBonus
        idList < idUpgradeMod_Abilities::glassCannonMods_t::weaponAndDamageModifierPair_t , TAG_IDLIST , false > weaponDamageModifiers; // Offset: 0x0

        // difficulty specific multipliers to scale the (baseGlassCannonDamageBonus + weaponDamageModifier)
        idList < idUpgradeMod_Abilities::glassCannonMods_t::difficultyAndDamageMultiplierPair_t , TAG_IDLIST , false > gameDifficultyMultipliers; // Offset: 0x18

        // base glass cannon damage bonus
        float baseGlassCannonDamageBonus; // Offset: 0x30

        // base glass cannon damage penalty
        float baseGlassCannonDamagePenalty; // Offset: 0x34

    }; // Size: 0x38

    struct aiDeathRecharge_t
    {
        // AI type
        aiMonsterType_t aiType; // Offset: 0x0

        // Recharge percent
        float rechargeAmountPercent; // Offset: 0x8

    }; // Size: 0x10

    struct aiCountodwnTime_t
    {
        // AI type
        aiMonsterType_t aiType; // Offset: 0x0

        // Recharge percent
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeMS; // Offset: 0x8

    }; // Size: 0x10

    struct savingThrowMods_t
    {
        // No timed cooldown, use AI kills to recharge instead
        bool aiDeathToRecharge; // Offset: 0x0

        // data used to recharge resourcePool
        idList < idUpgradeMod_Abilities::aiDeathRecharge_t , TAG_IDLIST , false > rechargeData; // Offset: 0x8

        // skip cooldown on equip
        bool skipInitialCooldown; // Offset: 0x20

        // What health value should activate this effect?
        float activationHealthValue; // Offset: 0x24

        // How much to scale damage received
        float damageMitigationScalar; // Offset: 0x28

        // How long to mitigate damage after invulnerability wears off
        idTypesafeTime < int , millisecondUnique_t , 1000 > damageMitigationTime; // Offset: 0x2C

        // How long should this effect last
        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x30

        // How long until it can activate again
        idTypesafeTime < int , millisecondUnique_t , 1000 > cooldown; // Offset: 0x34

        // How long are we invulnerable once saving throw is active
        idTypesafeTime < int , millisecondUnique_t , 1000 > invulnerabilityDuration; // Offset: 0x38

        // Status Effect to apply while saving throw is active
        idDeclStatusEffect* statusEffect; // Offset: 0x40

        // sound event to play when saving throw is available
        idSoundEvent* readySound; // Offset: 0x48

        // sound event to play when saving throw has started
        idSoundEvent* startSound; // Offset: 0x50

        // sound event to play when saving throw has ended
        idSoundEvent* endSound; // Offset: 0x58

    }; // Size: 0x60

    struct bloodPunchLootDrop
    {
        // Drop on blood punch direct damage
        bool dropOnDirectDamage; // Offset: 0x0

        // Drop on blood punch splash damage
        bool dropOnSplashDamage; // Offset: 0x1

    }; // Size: 0x2

    struct hammerSlamRadiusInfo_t
    {
        // Rate at which air meter charges in air ( per second )
        float airMeterChargeRate; // Offset: 0x0

        // Rate at which air meter drains on ground ( per second )
        float airMeterDrainRate; // Offset: 0x4

        // Max value for air meter
        float airMeterMax; // Offset: 0x8

        // Set air meter to 0 when player touches ground
        bool airMeterResetOnLand; // Offset: 0xC

        // can air meter charge if player has no ammo
        bool airMeterChargeRequiresAmmo; // Offset: 0xD

        // How much to scale the radius when air meter is fully charged
        float slamRadiusScale; // Offset: 0x10

        // Sound to play when hammer reaches full charge
        idSoundEvent* fullChargeSound; // Offset: 0x18

        // Sound to play when full charged slam is used
        idSoundEvent* overrideLandSound; // Offset: 0x20

        // DEPRECATED How much to scale radius per air meter value
        idDeclTable* radiusScalePerMeterValue; // Offset: 0x28

    }; // Size: 0x30

    // what type of upgrade
    idUpgradeMod_Abilities::abilityModType_t type; // Offset: 0x8

    // adds/removes distance to the max exec distance for the GK
    float gloryKillDistMod; // Offset: 0xC

    // adds/removes speed to the gk speed in units per sec
    float gloryKillSpeedMod; // Offset: 0x10

    // the multiplier to allow more/less damage taken by environmental hazards
    float enviromentDamageMitigator; // Offset: 0x14

    // the multiplier to allow more/less damage taken by environmental hazards
    float enviromentDamageRechargeRate; // Offset: 0x18

    // the multiplier to allow more/less damage taken by environmental hazards
    idTypesafeTime < int , millisecondUnique_t , 1000 > enviromentDamageRechargeDelay; // Offset: 0x1C

    // the multiplier to allow more/less damage to the taken by self explosives
    float selfExplosivesMitigator; // Offset: 0x20

    // the multiplier to allow more/less damage to the taken by explosive barrels
    float barrelExplosiveMitigator; // Offset: 0x24

    // scalar for gain juice through damage received (aka: damage awards adrenaline suit mod)
    float damageToAdrenalineConversion; // Offset: 0x28

    // ammo is increased (scaled) by this amount
    float bfgIncreasedCapacityScale; // Offset: 0x2C

    // the dexterity mod weapon change animation scale ( <1 for faster, >1 for slower )
    float increaseWeaponChangeScale; // Offset: 0x30

    // the dexterity mod weapon mod swap animation scale ( <1 for faster, >1 for slower )
    float increaseWeaponModSelectScale; // Offset: 0x34

    // the dexterity mod ledge grab speed scale ( <1 for faster, >1 for slower )
    float increaseUpgradeLedgeGrabScale; // Offset: 0x38

    // how much tendril damage [0.0, 1.0] BFG does to demon players
    float bfgTendrilDamageToDemonPlayers; // Offset: 0x3C

    // sound to play when activated
    idSoundEvent* startSound; // Offset: 0x40

    // fx start to send to player
    fxCondition_t startFXCondition; // Offset: 0x48

    // hud event to fire when the upgrade activates
    hudEventID_t hudEvent; // Offset: 0x4C

    // highlight decl for the perk
    idDeclHighlight* hightlightDecl; // Offset: 0x50

    // color for whatever you need it for
    idColor color; // Offset: 0x58

    // amount of time the upgrade is on cooldown after use
    idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownTimeMS; // Offset: 0x68

    // amount of time to pulse anything related to this upgrade
    idTypesafeTime < int , millisecondUnique_t , 1000 > pulseTimeMS; // Offset: 0x6C

    // rate to pulse
    float pulseRate; // Offset: 0x70

    // amount of times this upgrade can be active at the same time
    int numberOfConcurrentUses; // Offset: 0x74

    // recharge time override
    idTypesafeTime < int , millisecondUnique_t , 1000 > overrideRechargeTime; // Offset: 0x78

    // falter anim scale
    float painFalterAnimScale; // Offset: 0x7C

    // falter anim scale to apply per ai type
    idList < idUpgradeMod_Abilities::aiSpecificFalterAnimScale , TAG_IDLIST , false > aiPainFalterAnimScaleAdjustList; // Offset: 0x80

    // POWERUP mods mods specific to powerups
    idUpgradeMod_Abilities::powerupMods_t powerupMods; // Offset: 0x98

    // mid air slow mo properties
    idUpgradeMod_Abilities::midAirSlowMoInfo_t midAirSlowMoMod; // Offset: 0xE0

    // DEXTERITY mods mods specific to dexterity
    idUpgradeMod_Abilities::dexterityMods_t dexterityMods; // Offset: 0x130

    // DASH mods mods specific to dash
    idUpgradeMod_Abilities::dashMods_t dashMods; // Offset: 0x140

    // mods for the glass cannon ability
    idUpgradeMod_Abilities::glassCannonMods_t glassCannonMods; // Offset: 0x198

    // data used for demon specific time
    idList < idUpgradeMod_Abilities::aiCountodwnTime_t , TAG_IDLIST , false > aiCountdownTime; // Offset: 0x1D0

    // mods for the saving throw ability
    idUpgradeMod_Abilities::savingThrowMods_t savingThrowMods; // Offset: 0x1E8

    // mod options for blood punch loot drop
    idUpgradeMod_Abilities::bloodPunchLootDrop bloodPunchLoot; // Offset: 0x248

    // mod info for augmenting hammer slam radius
    idUpgradeMod_Abilities::hammerSlamRadiusInfo_t hammerSlamRadiusInfo; // Offset: 0x250

    // damage decl for this upgrade
    idDeclDamage* damageDecl; // Offset: 0x280

    // super slam damage decl for this upgrade
    idDeclDamage* superSlamDamageDecl; // Offset: 0x288

}; // Size: 0x290
