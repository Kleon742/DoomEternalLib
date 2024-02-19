struct idUpgradeMod_GK : idUpgradeMod
{
    enum GKModType_t : int
    {
        GK_MOD_INVALID = -1,
        GK_MOD_POST_SLOWMOTION = 0,
        GK_MOD_POST_MELEE_DAMAGE = 1,
        GK_MOD_ANIMATION_SCALE = 2,
        GK_MOD_ANIMATION_SCALE_CHAINSAW = 3,
        GK_MOD_AWARD_ARMOR = 4,
        GK_MOD_AWARD_HEALTH = 5,
        GK_MOD_PLAYER_SPEED_SCALE = 6,
        GK_MOD_SEEK_AND_DESTROY = 7,
        GK_MOD_AWARD_BFG_AMMO = 8,
        GK_MOD_BLOOD_PUNCH_BASE = 9,
        GK_MOD_BLOOD_PUNCH_CHARGES = 10,
        GK_MOD_BLOOD_PUNCH_MORE_CHARGES = 11,
        GK_MOD_BLOOD_PUNCH_DAMAGE_MULTIPLIER = 12,
        GK_MOD_BLOOD_PUNCH_AREA_OF_EFFECT = 13,
        GK_MOD_BLOOD_PUNCH_AI_CHARGE_RATE = 14,
        GK_MOD_BLOOD_PUNCH_LOOT = 15,
        GK_MOD_BLOOD_PUNCH_BONUS_DAMAGE = 16,
        GK_MOD_BLOOD_PUNCH_LOW_HEALTH_BONUS_DAMAGE = 17
    };

    struct gkAnimationData_t
    {
        // monster type to apply this scale to
        aiMonsterType_t monsterType; // Offset: 0x0

        // scale the animation speed.
        float scale; // Offset: 0x8

    }; // Size: 0x10

    struct gkPlayerSpeedData_t
    {
        // apply after chainsaw kills
        bool applyToChainsawKills; // Offset: 0x0

        // apply after glory kills
        bool applyToGloryKills; // Offset: 0x1

        // scale the run/walk speed.
        float multiplier; // Offset: 0x4

        // How long the run/walk speed is increased.
        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x8

        // How long to ramp up to 'multiplier' speed
        idTypesafeTime < int , millisecondUnique_t , 1000 > rampUpDuration; // Offset: 0xC

        // How long to ramp down to 'multiplier' speed
        idTypesafeTime < int , millisecondUnique_t , 1000 > rampDownDuration; // Offset: 0x10

        // sound for when speedup starts
        idSoundEvent* startSound; // Offset: 0x18

        // sound for when speedup stops
        idSoundEvent* stopSound; // Offset: 0x20

        // fx to play when gk speed is modified
        idDeclFX* fxDecl; // Offset: 0x28

        // trigger FX (will want this false if using status effect)
        bool triggerFX; // Offset: 0x30

        // status effect to apply
        idDeclStatusEffect* statusEffect; // Offset: 0x38

    }; // Size: 0x40

    struct gkLootDropData_t
    {
        // how much extra armor to drop.
        int armor; // Offset: 0x0

        // how much extra health to drop.
        int health; // Offset: 0x4

        // chance [0.0, 1.0] of dropping bfg ammo.
        float bfgAmmoChance; // Offset: 0x8

    }; // Size: 0xC

    struct gkMeleeDamageCharge_t
    {
        struct monsterScale_t
        {
            // type of monster(s) this scale applies to
            aiMonsterType_t type; // Offset: 0x0

            // damage scale applied to monster(s)
            float scale; // Offset: 0x8

        }; // Size: 0x10

        struct chargeAcquired_t
        {
            // type of monster(s) this scale applies to
            aiMonsterType_t type; // Offset: 0x0

            // percent of 1 total charge to add to the charge meter (ie: 0.5 = half meter of charge is applied)
            float percentToAdd; // Offset: 0x8

        }; // Size: 0x10

        // list of damage scale per monster
        idList < idUpgradeMod_GK::gkMeleeDamageCharge_t::monsterScale_t , TAG_IDLIST , false > chargedDamage; // Offset: 0x0

        // How many charges for melee damage.
        int numCharges; // Offset: 0x18

        // Max charges
        int maxCharges; // Offset: 0x1C

        // blood punch is fully charged when equipped
        bool fullChargeOnEquip; // Offset: 0x20

        // sounds for when the Melee Is Charged, index = charge level -1
        idList < idSoundEvent * , TAG_IDLIST , false > chargedSounds; // Offset: 0x28

        // sound for when charged melee is used
        idSoundEvent* attackSound; // Offset: 0x40

        // projectile decl to override MELEE_D5_FORWARD
        idDeclProjectile* projectileDecl_forward; // Offset: 0x48

        // projectile decl to override MELEE_D5_POWER_STRIKE
        idDeclProjectile* projectileDecl_powerStrike; // Offset: 0x50

        // Radial splash damage decl
        idDeclDamage* radialSplash; // Offset: 0x58

        // How much to scale melee damage against player controlled demons
        float demonPlayerScale; // Offset: 0x60

        // view shake to apply on successful blood punch
        idDeclAdvancedViewShake* viewShakeDecl; // Offset: 0x68

        // blood punch super charged FX
        idDeclFX* superChargedBloodPunchFx; // Offset: 0x70

        // we play this sound when the blood punch super charged from low health
        idSoundEvent* soundBloodPunchSuperChargedFromLowHealth; // Offset: 0x78

        // we play this sound when the blood punch super charged
        idSoundEvent* soundBloodPunchSuperCharged; // Offset: 0x80

        // list index = number of EXTRA charges (ie: [0] = 1.0 --- only 1 charge, 0 EXTRA charges; [1] = 1.25 --- 1 EXTRA charge; etc..)
        idList < float , TAG_IDLIST , false > extraChargeDamageMultiplierList; // Offset: 0x88

        // list, per monster, of charge acquired when monster is GK'd
        idList < idUpgradeMod_GK::gkMeleeDamageCharge_t::chargeAcquired_t , TAG_IDLIST , false > chargeAcquired; // Offset: 0xA0

    }; // Size: 0xB8

    struct gkSlowmotionParms_t
    {
        // duration of the slowmotion.
        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x0

        // ramp up duration of the slowmotion.
        idTypesafeTime < int , millisecondUnique_t , 1000 > rampUpDuration; // Offset: 0x4

        // ramp down duration of the slowmotion.
        idTypesafeTime < int , millisecondUnique_t , 1000 > rampDownDuration; // Offset: 0x8

        // amount of slowmotion ( 0.0 - 1.0, > 1.0 - speed up )
        float amount; // Offset: 0xC

        // Sound hook to play when starting Slowmotion.
        idSoundEvent* slowmotionStart; // Offset: 0x10

        // Sound hook to play when starting Slowmotion.
        idSoundEvent* slowmotionEnd; // Offset: 0x18

    }; // Size: 0x20

    struct gkSeekAndDestroy_t
    {
        // the item that actually performs the Seek And Destroy functionality (and contains it's data)
        idDeclInventory* chargeAttackItemDecl; // Offset: 0x0

        // the button press to utilize this
        usercmdButton_t useOnButtonPress; // Offset: 0x8

    }; // Size: 0x10

    struct gkBloodPunchBonus_t
    {
        struct perWeaponDamageModifier_t
        {
            // damage type used
            idPlayerWeaponDamageType_t damageType; // Offset: 0x0

            // post blood punch damage bonus for this weapon
            float damageBonus; // Offset: 0x4

        }; // Size: 0x8

        // damage modifiers per weapon decl
        idList < idUpgradeMod_GK::gkBloodPunchBonus_t::perWeaponDamageModifier_t , TAG_IDLIST , false > weaponDamageModifiers; // Offset: 0x0

        // time after blood punch is activated that increased damage bonus will be applied
        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x18

        // if not defined in weaponDamageModifiers use this global base damage bonus
        float baseDamageBonus; // Offset: 0x1C

        // player health threshold for bonus damage
        float healthThreshold; // Offset: 0x20

        // enable loot drops with LOOT_DROP_RESTRICTION_BLOODPUNCH_SPLASH_KILL
        bool dropLootOnSplashKill; // Offset: 0x24

    }; // Size: 0x28

    // upgrade type.
    idUpgradeMod_GK::GKModType_t type; // Offset: 0x8

    // gk animation speed data.
    idList < idUpgradeMod_GK::gkAnimationData_t , TAG_IDLIST , false > animationScaleData; // Offset: 0x10

    // sound effect to play during glory kill w/ animation speed up
    idSoundEvent* animationScaleSFX; // Offset: 0x28

    // player speed data.
    idUpgradeMod_GK::gkPlayerSpeedData_t playerSpeed; // Offset: 0x30

    // How much extra loot drops after glory kill.
    idUpgradeMod_GK::gkLootDropData_t lootDrops; // Offset: 0x70

    // Post GK Charged Melee Parms.
    idUpgradeMod_GK::gkMeleeDamageCharge_t chargedMelee; // Offset: 0x80

    // Data describing Slow motion.
    idUpgradeMod_GK::gkSlowmotionParms_t slowMotion; // Offset: 0x138

    // Data describing Seek and Destroy (distance / speed) mod.
    idUpgradeMod_GK::gkSeekAndDestroy_t seekAndDestroy; // Offset: 0x158

    // Blood punch bonus data
    idUpgradeMod_GK::gkBloodPunchBonus_t bloodPunchBonus; // Offset: 0x168

}; // Size: 0x190
