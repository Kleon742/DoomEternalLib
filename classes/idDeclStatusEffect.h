struct idDeclStatusEffect : idGameDeclTypeInfo
{
    struct berzerkData_t
    {
        // the damage mitigation multiplier[ 0.0f( No mitigation ) - 1.0f( mitigate all damage )]
        idBranchedOptionValue < declInputBranch_t , float > damageMitigationMult; // Offset: 0x0

        // the speed boost multiplier to use while in berserk[ 1.0f-no change, value > 1.0f-faster ]
        float speedBoostMult; // Offset: 0x28

        // rumble decl for berserk heartbeat
        idDeclRumble* heartbeatRumbleDecl; // Offset: 0x30

        // delay (in MS) between rumbles, while berserk is active
        idTypesafeTime < int , millisecondUnique_t , 1000 > heartbeatRumbleDelay; // Offset: 0x38

    }; // Size: 0x40

    struct bonusDamageData_t
    {
        // This much extra damage fraction is added ( so 0.0 = no bonus, 1.0 = double damage, 2.0 = triple, etc )
        float bonusDamageAmount; // Offset: 0x0

    }; // Size: 0x4

    struct onslaughtData_t
    {
        // min delay for equipment launcher shot
        idTypesafeTime < int , millisecondUnique_t , 1000 > minLauncherShotDelay; // Offset: 0x0

        // max delay for equipment launcher shot
        idTypesafeTime < int , millisecondUnique_t , 1000 > maxLauncherShotDelay; // Offset: 0x4

    }; // Size: 0x8

    struct specialWeaponData_t
    {
        // special weapon to call in when super meter is max'd
        idDeclWeapon* declWeapon; // Offset: 0x0

    }; // Size: 0x8

    struct groundPoundData_t
    {
        // ground pound inventory Item.
        idDeclInventory* declGroundPound; // Offset: 0x0

    }; // Size: 0x8

    struct slowmoUpgrades_t
    {
        // upgrade needed to activate damage resistance scalar
        idDeclPerk* damageResistanceUpgrade; // Offset: 0x0

        // scale applied to player's damage when this upgrade is added
        float damageResistanceScale; // Offset: 0x8

        // upgrade needed to activate headshot damage scalar
        idDeclPerk* headshotDamageUpgrade; // Offset: 0x10

        // scale applied to headshot damage when this upgrade is added
        float headshotDamageScale; // Offset: 0x18

    }; // Size: 0x20

    struct chargeAttackData_t
    {
        // charge attack inventory Item.
        idDeclInventory* declChargeAttack; // Offset: 0x0

    }; // Size: 0x8

    struct regenerationData_t
    {
        // How much health is restored to the player with this status effect per tick
        idBranchedOptionValue < declInputBranch_t , float > healthRegenPerTick; // Offset: 0x0

        // How much armor is restored to the player with this status effect per tick (used in seperate tick mode )
        idBranchedOptionValue < declInputBranch_t , float > armorRegenPerTick; // Offset: 0x28

        // If true, will use seperate tick rates and values for health and armor, otherwise it will use the health values
        bool healthArmorSeperateTick; // Offset: 0x50

        // How often the regeneration ticks, in seconds
        idBranchedOptionValue < declInputBranch_t , float > tickRateInSeconds; // Offset: 0x58

        // If true, the regeneration effect will immediately cancel after taking damage from a player source
        bool cancelOnDamage; // Offset: 0x80

        // If true, healthRegenPerTick is a % of current maximum health (0.0-1.0)
        bool regenIsPercentage; // Offset: 0x81

        // healing feedback data
        healingFeedbackComponentData_t healingFeedback; // Offset: 0x88

    }; // Size: 0x98

    struct invisibilityMPData_t
    {
        // how much time to reveal player that is firing
        int fireRevealTimeMS; // Offset: 0x0

    }; // Size: 0x4

    struct hasteData_t
    {
        // how much do we scale movement by
        float movementSpeedScalar; // Offset: 0x0

        // how much to scale weapon switching
        float weaponSwitchScalar; // Offset: 0x4

        // how much to scale weapon mod switching
        float weaponModSwitchScalar; // Offset: 0x8

        // how much to scale ledge grab speed
        float ledgeGrabSpeedScalar; // Offset: 0xC

        // how much do we scale firing interval
        float firingIntervalScalar; // Offset: 0x10

        // how much to scale dash refill
        float dashRegenScalar; // Offset: 0x14

        // how fast should player be moving to play the action sound {{ units = m / s }}
        float actionSoundThreshold; // Offset: 0x18

        // set to enable infinite ammo on unlisted weapons
        bool infiniteAmmo; // Offset: 0x1C

        // weapons that will use ammo when this haste is active
        idList < const idDeclWeapon * , TAG_IDLIST , false > weaponUsesAmmo; // Offset: 0x20

        // cannot dash sound
        idSoundEvent* cannotDashSound; // Offset: 0x38

    }; // Size: 0x40

    struct iceBombData_t
    {
        // how much do we scale movement by
        float movementSpeedScalar; // Offset: 0x0

    }; // Size: 0x4

    struct envSuitData_t
    {
        struct damageReduction_t
        {
            // What damage types does this apply to
            idDamageParms::damageSource_t source; // Offset: 0x0

            // What reduction of damage do we give it
            float mod; // Offset: 0x8

        }; // Size: 0x10

        // what damage reductions do we get with this powerup
        idList < idDeclStatusEffect::envSuitData_t::damageReduction_t , TAG_IDLIST , false > damageReductions; // Offset: 0x0

    }; // Size: 0x18

    struct bonusLifeData_t
    {
        // how many bonus lives to grant on activation
        int bonusToApply; // Offset: 0x0

    }; // Size: 0x4

    struct gameChallengeEvent_t
    {
        // the event to send on activate
        statusEffectChallengeEventType_t activateEvent; // Offset: 0x0

        // the event to send on deactivate
        statusEffectChallengeEventType_t deactivateEvent; // Offset: 0x4

    }; // Size: 0x8

    struct damageAdjustmentData_t
    {
        // Damage will be multiplied by this amount
        idBranchedOptionValue < declInputBranch_t , float > damageMultiplier; // Offset: 0x0

        // Used to provide a timer for the adjustment, if needed
        idTypesafeTime < int , millisecondUnique_t , 1000 > adjustmentTimeMS; // Offset: 0x28

        // How much should the adjustment change each time the time interval is hit. ( 0.1 = 10%, 0.8 = 80%, <0 = disabled )
        float adjustmentTimeChangeAmount; // Offset: 0x2C

        // The damage adjustment cannot go above this limit ( 0.5 = 50% ) This is only used if the adjustment has a build up and decay.
        float maxAdjustment; // Offset: 0x30

    }; // Size: 0x38

    struct inventoryDegradeInfo_t
    {
        // inventory item to degrade
        idDeclInventory* inventoryItem; // Offset: 0x0

        // how many to remove with each tic
        float degradeAmount; // Offset: 0x8

        // how often to tic
        idTypesafeTime < int , millisecondUnique_t , 1000 > degradeInterval; // Offset: 0xC

        // don't degrade past this number
        float degradeCutoff; // Offset: 0x10

    }; // Size: 0x18

    struct degradeData_t
    {
        // Health degrade should or shouldn't degrade health
        bool degradeHealth; // Offset: 0x0

        // damage decl to use to degrade health
        idDeclDamage* healthDamage; // Offset: 0x8

        // how often to apply damage to health
        idTypesafeTime < int , millisecondUnique_t , 1000 > healthDegradeIncrement; // Offset: 0x10

        // how much to scale health degrade damage
        float healthDegradeDamageScale; // Offset: 0x14

        // only apply degrade damage when slayer's health is above this value
        float healthDegradeCutoff; // Offset: 0x18

        // will ignore health degradation if armor is > 0
        bool degradeArmorBeforeHealth; // Offset: 0x1C

        // Armor degrade should or shouldn't degrade armor
        bool degradeArmor; // Offset: 0x1D

        // damage decl applied to armor
        idDeclDamage* armorDamage; // Offset: 0x20

        // how often to apply damage to armor
        idTypesafeTime < int , millisecondUnique_t , 1000 > armorDegradeIncrement; // Offset: 0x28

        // how much to scale armor degrade damage
        float armorDegradeDamageScale; // Offset: 0x2C

        // only apply degrade damge when slayer's armor is above this value
        float armorDegradeCutoff; // Offset: 0x30

        // Degrade Equipped weapon ammo should or shouldn't degrade equipped weapon only
        bool degradeEquippedWeaponAmmo; // Offset: 0x34

        // how much to drain per tic
        float ammoDegradeAmount; // Offset: 0x38

        // how often to tic
        idTypesafeTime < int , millisecondUnique_t , 1000 > ammoDrainIncrement; // Offset: 0x3C

        // don't degrade ammo past this amount
        float ammoDegradeCutoff; // Offset: 0x40

        // inventory item degrade info should or shouldn't degrade inventory items
        bool degradeInventoryItems; // Offset: 0x44

        // list of inventory items and how often to degrade them
        idList < idDeclStatusEffect::inventoryDegradeInfo_t , TAG_IDLIST , false > inventoryDegradeInfo; // Offset: 0x48

    }; // Size: 0x60

    struct augmentHealthData_t
    {
        struct healthDataPerDifficulty_t
        {
            // difficulty this applies to
            gameDifficulty_t difficulty; // Offset: 0x0

            // max health for the duration of the status effect
            float maxHealth; // Offset: 0x4

            // max armor for the duration of the status effect
            float maxArmor; // Offset: 0x8

            // current health to set at the start
            float currentHealth; // Offset: 0xC

            // armor to set at the start
            float currentArmor; // Offset: 0x10

        }; // Size: 0x14

        // per difficulty overrides these are checked first
        idList < idDeclStatusEffect::augmentHealthData_t::healthDataPerDifficulty_t , TAG_IDLIST , false > healthDataPerDifficulty; // Offset: 0x0

        // Set their max health
        int maxHealth; // Offset: 0x18

        // Set their max armor
        int maxArmor; // Offset: 0x1C

        // Set their current health
        int currentHealth; // Offset: 0x20

        // Set their current armor
        int currentArmor; // Offset: 0x24

    }; // Size: 0x28

    struct encumberData_t
    {
        // 1.0f = water, higher numbers are thicker (causing things to move more slowly)
        float viscosity; // Offset: 0x0

        // modify the jump dist
        float jumpModifier; // Offset: 0x4

        // gravity scale
        float gravityScale; // Offset: 0x8

        // modify the dash by a multiplier
        float dashModifier; // Offset: 0xC

        // dash movement table
        idDeclTable* dashMoveTable; // Offset: 0x10

        // allow double jump
        bool allowDoubleJump; // Offset: 0x18

    }; // Size: 0x20

    struct dotData_t
    {
        // DOT damage to apply for the duration of the status effect
        idDeclDamage* damage; // Offset: 0x0

    }; // Size: 0x8

    struct weaponData_t
    {
        // If true, weapon mods will be disabled for the duration of this status effect
        bool disableMods; // Offset: 0x0

        // if the meat hook is disabled use this sound when trying to dryfire
        idSoundEvent* disabledMeatHookSound; // Offset: 0x8

        // on applying this effect, give player this many blood punch pips (negative value => give max number of pips)
        int addBloodPunchPips; // Offset: 0x10

    }; // Size: 0x18

    struct poiData_t
    {
        // poi to apply to instigator as long as the status effect is active
        idDeclPOI* instigatorPOI; // Offset: 0x0

        // highlight decl to apply to the instigator
        idDeclHighlight* instigatorHighlight; // Offset: 0x8

        // highlight color
        idColor highlightColor; // Offset: 0x10

    }; // Size: 0x20

    // Which effect class to use for this effect.
    idTypeInfoPtr < idStatusEffect > effectClass; // Offset: 0x90

    // How long this effect lasts in Milliseconds. ( -1 = forever )
    idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > lifeTimeMS; // Offset: 0x98

    // the FX Decl to use for the effect.
    idDeclFX* fxDecl; // Offset: 0xC0

    // Whether the effect refreshes or can only be started if effect is not found.
    bool noRefresh; // Offset: 0xC8

    // if true, sounds are only for local player
    bool soundsLocalOnly; // Offset: 0xC9

    // if true, check for active effects by effect class instead of by decl
    bool replaceEffectClass; // Offset: 0xCA

    // if true if another effect with this decl is active we can still add it
    idBranchedOptionValue < declInputBranch_t , int > allowStack; // Offset: 0xD0

    // sound played when you start using status effect
    idSoundEvent* startUsingSound; // Offset: 0xF8

    // sound played when you stop using status effect
    idSoundEvent* stopUsingSound; // Offset: 0x100

    // sound played when performing an action that is boosted by this status effect
    idSoundEvent* effectActionSound; // Offset: 0x108

    // if performing effect action sounds, minimum time between sounds
    idTypesafeTime < int , millisecondUnique_t , 1000 > effectActionNoRepeatTimeMS; // Offset: 0x110

    // What FX Condition to start on the owner of the effect. ( on start of status effect )
    fxCondition_t start_owner_StartFXCondition; // Offset: 0x114

    // What FX Condition to stop on the owner of the effect. ( on start of status effect )
    fxCondition_t start_owner_StopFXCondition; // Offset: 0x118

    // What FX Condition to start on the owner of the effect. ( on stop of status effect )
    fxCondition_t stop_owner_StartFXCondition; // Offset: 0x11C

    // What FX Condition to stop on the owner of the effect. ( on stop of status effect )
    fxCondition_t stop_owner_StopFXCondition; // Offset: 0x120

    // sound played when the effect is running out.
    idSoundEvent* runningOutSound; // Offset: 0x128

    // How much time before it ends to start the warning sound.
    idTypesafeTime < int , millisecondUnique_t , 1000 > runningOutSound_Time; // Offset: 0x130

    // Play the sound ever X interval ( MS ) until end.
    idTypesafeTime < int , millisecondUnique_t , 1000 > runningOutSound_Interval; // Offset: 0x134

    // Increase the rate over time.
    bool runningOutSound_IncOverTime; // Offset: 0x138

    // rumble decl associated with this status effect
    idDeclRumble* rumbleDecl; // Offset: 0x140

    // delay (in MS) between rumbles, while status effect is active
    idTypesafeTime < int , millisecondUnique_t , 1000 > rumbleDelay; // Offset: 0x148

    // display Name of this skill
    idStrId displayName; // Offset: 0x14C

    // description of this skill
    idStrId description; // Offset: 0x150

    // ticker image
    idStrId tickerImg; // Offset: 0x154

    // for player body shaders, what is the glow color for this status effect
    idColor glowColor; // Offset: 0x158

    // how fast to ramp the glow to full
    float glowRamp; // Offset: 0x168

    // should this use glow fx
    bool glowFx; // Offset: 0x16C

    // pauses status effects with life times when a glory kill is active
    bool pauseDuringGloryKill; // Offset: 0x16D

    // whether we can switch weapons while this status effect is active
    bool allowWeaponSelection; // Offset: 0x16E

    // whether this is considered a power up for the player
    bool isPowerUp; // Offset: 0x16F

    // whether this is considered a gold-tier powerup for the player (sorry, seemed like the easiest way to do this)
    bool isGoldPowerUp; // Offset: 0x170

    // Time remaining needs to be greater than or equal to this in order to drop a pickup in MP
    idTypesafeTime < int , millisecondUnique_t , 1000 > dropDurationThreshold; // Offset: 0x174

    // saves the state of this active effect between levels
    bool saveStateBetweenLevels; // Offset: 0x178

    // no UI ticker allowed
    bool disableUITicker; // Offset: 0x179

    // icon for the ability
    idMaterial2* icon; // Offset: 0x180

    // video for the ability
    idMaterial2* video; // Offset: 0x188

    // TEMP index for the sprit in the UI
    int uiSprintIndex; // Offset: 0x190

    // name of sprite to show/hide for this effect on the HUD
    idStr hudSpriteName; // Offset: 0x198

    // color for the icon ability
    swfNamedColors_t iconColor; // Offset: 0x1C8

    // should this status effect show on online HUD (active status effect list for each player)
    bool showOnOnlineHud; // Offset: 0x1CC

    // Items required to unlock this status Effect
    idList < const idDeclInventory * , TAG_IDLIST , false > prerequisiteItems; // Offset: 0x1D0

    // Pickup drop def currently used with hack module
    idDeclEntityDef* pickupDropDef; // Offset: 0x1E8

    // A list of status effects that are suspended while this one is active
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > suspendStatusEffects; // Offset: 0x1F0

    // A list of status effects that are blocked while this one is active and should be prevented from running in the first place
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > blockStatusEffects; // Offset: 0x208

    // Type of status effect (e.g. buff, debuff, heal); primarily used for HUD colorization
    statusEffectType_t statusEffectType; // Offset: 0x220

    // Didn't really want to put this here, but i also didn't want to have a new type of de\cl for each status effect. Wish there was some kinda middle ground for this somehow. Data related to berserk status effect.
    idDeclStatusEffect::berzerkData_t berserkData; // Offset: 0x228

    // Data related to bonus damage status effect
    idDeclStatusEffect::bonusDamageData_t bonusDamageData; // Offset: 0x268

    // Data related to bonus damage status effect
    idDeclStatusEffect::onslaughtData_t onslaughtData; // Offset: 0x26C

    // Data related to special weapon status effect
    idDeclStatusEffect::specialWeaponData_t specialWeaponData; // Offset: 0x278

    // ground pound data.
    idDeclStatusEffect::groundPoundData_t groundPoundData; // Offset: 0x280

    // parameters for slowmotion status effect
    slowmoParms_t slowMotionParms; // Offset: 0x288

    // slow motion upgrade parameters
    idDeclStatusEffect::slowmoUpgrades_t slowmoUpgrades; // Offset: 0x2A0

    // charge attack data.
    idDeclStatusEffect::chargeAttackData_t chargeAttackData; // Offset: 0x2C0

    // Regeneration Data
    idDeclStatusEffect::regenerationData_t regenerationData; // Offset: 0x2C8

    // Invisibility (MP version) data
    idDeclStatusEffect::invisibilityMPData_t invisibilitMPData; // Offset: 0x360

    // haste data
    idDeclStatusEffect::hasteData_t hasteData; // Offset: 0x368

    // ice bomb data
    idDeclStatusEffect::iceBombData_t iceBombData; // Offset: 0x3A8

    // environment suit data
    idDeclStatusEffect::envSuitData_t envSuitData; // Offset: 0x3B0

    // bonus life data
    idDeclStatusEffect::bonusLifeData_t bonusLifeData; // Offset: 0x3C8

    // challenge event data
    idDeclStatusEffect::gameChallengeEvent_t challengeEventData; // Offset: 0x3CC

    // Data related to adjusting incoming damage
    idDeclStatusEffect::damageAdjustmentData_t damageAdjustmentData; // Offset: 0x3D8

    // Data related to health/armor/ammo degradation over time
    idDeclStatusEffect::degradeData_t degradeData; // Offset: 0x410

    // Data related to changing the players max or current health / armor
    idDeclStatusEffect::augmentHealthData_t healthData; // Offset: 0x470

    // Data related to encumber effect
    idDeclStatusEffect::encumberData_t encumberData; // Offset: 0x498

    // Data related to DOT damage
    idDeclStatusEffect::dotData_t dotData; // Offset: 0x4B8

    // Data related to weapon interactions
    idDeclStatusEffect::weaponData_t weaponData; // Offset: 0x4C0

    // POI data
    idDeclStatusEffect::poiData_t poiData; // Offset: 0x4D8

    // Need to put the multiplier end item in the status effect decl
    idDeclScoringItem* scoringItem; // Offset: 0x4F8

}; // Size: 0x500
