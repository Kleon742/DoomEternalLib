struct idDeclWeapon : idDeclInventory
{
    enum attack_t : int
    {
        ATTACK_DEFAULT = 0,
        ATTACK_LEFT = 1,
        ATTACK_RIGHT = 2,
        ATTACK_LEFT2 = 3,
        ATTACK_RIGHT2 = 4,
        ATTACK_LEFT3 = 5,
        ATTACK_RIGHT3 = 6,
        ATTACK_ALT_LEFT = 7,
        ATTACK_ALT_RIGHT = 8,
        ATTACK_BURST_1 = 9,
        ATTACK_BURST_2 = 10,
        ATTACK_BURST_3 = 11,
        ATTACK_BURST_4 = 12,
        ATTACK_BURST_5 = 13,
        ATTACK_BURST_6 = 14,
        ATTACK_BURST_7 = 15,
        ATTACK_BURST_8 = 16,
        ATTACK_BURST_9 = 17,
        ATTACK_BURST_10 = 18,
        ATTACK_BURST_11 = 19,
        ATTACK_BURST_12 = 20,
        ATTACK_BURST_MIN = 9,
        ATTACK_BURST_MAX = 20,
        ATTACK_123_1 = 21,
        ATTACK_123_2 = 22,
        ATTACK_123_3 = 23,
        ATTACK_123_4 = 24,
        ATTACK_MICROWAVE = 25,
        ATTACK_MAX = 26
    };

    enum attackSequence_t : int
    {
        ATTACKSEQ_DEFAULT = 0,
        ATTACKSEQ_LEFT_RIGHT = 1,
        ATTACKSEQ_RANDOM_LEFT_RIGHT = 2,
        ATTACKSEQ_RIGHT = 3,
        ATTACKSEQ_LEFT = 4,
        ATTACKSEQ_RIGHT2 = 5,
        ATTACKSEQ_LEFT2 = 6,
        ATTACKSEQ_RIGHT3 = 7,
        ATTACKSEQ_LEFT3 = 8,
        ATTACKSEQ_BURST = 9,
        ATTACKSEQ_BURST_12 = 10,
        ATTACKSEQ_123 = 11
    };

    enum weaponSelectionGroup_t : int
    {
        WEAPONSELECTIONGROUP_NONE = -1,
        WEAPONSELECTIONGROUP_0 = 0,
        WEAPONSELECTIONGROUP_1 = 1,
        WEAPONSELECTIONGROUP_2 = 2,
        WEAPONSELECTIONGROUP_3 = 3,
        WEAPONSELECTIONGROUP_4 = 4,
        WEAPONSELECTIONGROUP_5 = 5,
        WEAPONSELECTIONGROUP_6 = 6,
        WEAPONSELECTIONGROUP_7 = 7,
        WEAPONSELECTIONGROUP_8 = 8,
        WEAPONSELECTIONGROUP_9 = 9,
        WEAPONSELECTIONGROUP_MAX = 10
    };

    enum weaponSelectionGroupSlot_t : int
    {
        WEAPONSELECTIONGROUPSLOT_0 = 0,
        WEAPONSELECTIONGROUPSLOT_1 = 1,
        WEAPONSELECTIONGROUPSLOT_2 = 2,
        WEAPONSELECTIONGROUPSLOT_3 = 3,
        WEAPONSELECTIONGROUPSLOT_4 = 4,
        WEAPONSELECTIONGROUPSLOT_5 = 5,
        WEAPONSELECTIONGROUPSLOT_6 = 6,
        WEAPONSELECTIONGROUPSLOT_7 = 7,
        WEAPONSELECTIONGROUPSLOT_8 = 8,
        WEAPONSELECTIONGROUPSLOT_9 = 9,
        WEAPONSELECTIONGROUPSLOT_MAX = 10
    };

    enum weaponAltFireTypes_t : int
    {
        WEAPON_ALTFIRE_NONE = 0,
        WEAPON_ALTFIRE_ZOOM = 1,
        WEAPON_ALTFIRE_DETONATE_PROJECTILE = 2,
        WEAPON_ALTFIRE_AOE_PROJECTILE = 3,
        WEAPONS_ALTFIRE_ADS = 4,
        WEAPON_ALTFIRE_AOE_RADIUS = 5,
        WEAPON_ALTFIRE_CHARGE_PROJECTILE = 6,
        WEAPON_ALTFIRE_ALT_PROJECTILE = 7,
        WEAPON_ALTFIRE_INCREASE_ROF = 8,
        WEAPON_ALTFIRE_TIGHTEN_SPREAD = 9,
        WEAPON_ALTFIRE_ZOOM_AND_CHARGE = 10
    };

    enum scopeGuiNum_t : int
    {
        SCOPE_NONE = 0,
        SCOPE_REGIMEMACHINEGUN = 1,
        SCOPE_RIFLE = 2,
        SCOPE_REGIMEROCKETLAUNCHER = 3,
        SCOPE_PLASMARIFLE = 4,
        SCOPE_ARCCANNON = 5,
        SCOPE_SKIPCROSSHAIR = 6
    };

    enum chargeProperty_t : int
    {
        CHARGE_PROPERTY_NONE = 0,
        CHARGE_PROPERTY_BURST_COUNT = 1,
        CHARGE_PROPERTY_DAMAGE_SCALE = 2,
        CHARGE_PROPERTY_DAMAGE_RADIUS_SCALE = 3,
        CHARGE_PROPERTY_DAMAGE_RADIUS_INNER_SCALE = 4,
        CHARGE_PROPERTY_PROJECTILE_SPREAD_SCALE = 5,
        CHARGE_PROPERTY_PROJECTILE_SIZE_SCALE_X = 6,
        CHARGE_PROPERTY_PROJECTILE_SIZE_SCALE_Y = 7,
        CHARGE_PROPERTY_PROJECTILE_SIZE_SCALE_Z = 8,
        CHARGE_PROPERTY_MAX_PROJECTILES = 9,
        CHARGE_PROPERTY_PROJECTILE_HORIZ_SPREAD = 10,
        CHARGE_PROPERTY_PROJECTILE_VERT_SPREAD = 11,
        CHARGE_PROPERTY_PROJECTILE_SPEED_SCALE = 12,
        CHARGE_PROPERTY_PROJECTILE_LIFETIME_SCALE = 13,
        CHARGE_PROPERTY_PROJECTILE_MAX_BOUNCES = 14,
        CHARGE_PROPERTY_PROJECTILE_FIRE_VIEW_SHAKE_SCALE = 15,
        CHARGE_PROPERTY_PROJECTILE_OVERRIDE = 16,
        CHARGE_PROPERTY_PRIMARY_CHARGE_SECONDARY_DAMAGE_SCALE = 17,
        CHARGE_PROPERTY_PRIMARY_CHARGE_SECONDARY_SPREAD_INCREASE = 18,
        CHARGE_PROPERTY_SECONDARY_STIMULUS_SCALE = 19,
        CHARGE_PROPERTY_MOVEMENT_SPEED_SCALE = 20,
        CHARGE_PROPERTY_MOVEMENT_SPEED_LIMIT = 21,
        CHARGE_PROPERTY_AIR_SPEED_SCALE = 22,
        CHARGE_PROPERTY_AMMO_TO_USE = 23,
        CHARGE_PROPERTY_DEVIATE_PROJECTILES = 24,
        CHARGE_PROPERTY_DEVIATE_PROJECTILES_ON_DISCHARGE = 25,
        CHARGE_PROPERTY_STUN_LIFETIME_SCALE = 26,
        CHARGE_PROPERTY_PROJECTILE_THROTTLE = 27,
        CHARGE_PROPERTY_PROJECTILE_DETONATION_DELAY = 28,
        CHARGE_PROPERTY_TARGETING_FOV_DEGS = 29,
        CHARGE_PROPERTY_CHARGE_LEVEL = 30,
        CHARGE_PROPERTY_CHARGE_LEVEL_2 = 31,
        CHARGE_PROPERTY_GRAVITY_SCALE = 32,
        CHARGE_PROPERTY_AIR_FRICTION = 33,
        CHARGE_PROPERTY_DOUBLE_JUMP_FRICTION = 34,
        CHARGE_PROPERTY_DOUBLE_JUMP_FRICTION_Z_SCALE = 35,
        CHARGE_PROPERTY_CHARGE_ADDITIVE_HANDS_ANIM_ALPHA = 36,
        CHARGE_PROPERTY_CHARGE_ADDITIVE_WEAPON_ANIM_ALPHA = 37,
        CHARGE_PROPERTY_DECL_FX = 38,
        CHARGE_PROPERTY_ENERGY_SHELL = 39,
        CHARGE_PROPERTY_RENDER_PARMS = 40,
        CHARGE_PROPERTY_FIRE_SOUND_PRIMARY = 41,
        CHARGE_PROPERTY_FIRE_SOUND_SECONDARY = 42
    };

    enum chargeDebugBarType_t : int
    {
        CHARGE_DEBUG_BAR_NONE = 0,
        CHARGE_DEBUG_BAR_DEFAULT = 1,
        CHARGE_DEBUG_BAR_WHOLE_INTS = 2,
        CHARGE_DEBUG_BAR_AIM_CIRCLE = 3,
        CHARGE_DEBUG_BAR_SEGMENTED = 4
    };

    enum clipType_t : int
    {
        AMMOCLIP_NONE = 0,
        AMMOCLIP_SINGLE = 1,
        AMMOCLIP_KILLBURST = 2,
        AMMOCLIP_PISTOL_FATBOY = 3,
        AMMOCLIP_PISTOL_REG12 = 4,
        AMMOCLIP_CROSSBOW_BOLT6 = 5,
        AMMOCLIP_CROSSBOW_BOLT3 = 6,
        AMMOCLIP_MG_REG40 = 7,
        AMMOCLIP_SHOTGUN = 8,
        AMMOCLIP_PLASMA_RIFLE = 9,
        AMMOCLIP_ROCKET = 10,
        AMMOCLIP_SNIPER5 = 11,
        AMMOCLIP_DOUBLE = 12
    };

    enum zoomMode_t : int
    {
        ZOOM_NONE = 0,
        ZOOM_WEAPON = 1,
        ZOOM_WEAPON_NO_HANDANIM = 2,
        ZOOM_SECONDARY_ZOOM_MODE = 3
    };

    enum weaponCategory_t : int
    {
        WEAPON_CATEGORY_MELEE = 0,
        WEAPON_CATEGORY_SIDE_ARMS = 1,
        WEAPON_CATEGORY_SMG = 2,
        WEAPON_CATEGORY_RIFLE = 3,
        WEAPON_CATEGORY_MACHINE_GUN = 4,
        WEAPON_CATEGORY_SHOTGUN = 5,
        WEAPON_CATEGORY_SNIPER = 6,
        WEAPON_CATEGORY_THROWN = 7,
        WEAPON_CATEGORY_LAUNCHER = 8,
        WEAPON_CATEGORY_SPECIAL = 9,
        WEAPON_CATEGORY_LAUNCHER_PARABOLIC = 10,
        WEAPON_CATEGORY_DBL_BARREL_SHOTGUN = 11,
        WEAPON_CATEGORY_PLASMA_RIFLE = 12,
        WEAPON_CATEGORY_BEAM = 13,
        WEAPON_CATEGORY_AOE = 14,
        WEAPON_CATEGORY_CURRENT = 15,
        WEAPON_CATEGORY_MAX = 16
    };

    struct handMovement_t
    {
        // max allowed movement
        float clamp; // Offset: 0x0

        // amount of movement applied
        float scale; // Offset: 0x4

        // amount of movement retained
        float retain; // Offset: 0x8

        // recenter speed
        float recenter; // Offset: 0xC

    }; // Size: 0x10

    struct weaponAccuracyTables_t
    {
        // table for AI accuracy against the player
        idDeclTable* accuracyVersusPlayer; // Offset: 0x0

        // __edit const idDeclTable * accuracyVersusPlayerInCover; table for AI accuracy against the player in cover ( FIXME: good idea? Not so sure.... ). table for AI accuracy against destiny characters.
        idDeclTable* accuracyVersusDestiny; // Offset: 0x8

        // table for AI accuracy against demon common characters.
        idDeclTable* accuracyVersusDemonCommon; // Offset: 0x10

        // table for AI accuracy against survivor common characters.
        idDeclTable* accuracyVersusSurvivorCommon; // Offset: 0x18

    }; // Size: 0x20

    struct weaponAltFireInfo_t
    {
        // the alt fire capabilities of this weapon.
        idDeclWeapon::weaponAltFireTypes_t altFireType; // Offset: 0x0

        // the absolute min distance that this weapon's alt fire can be used. {{ units = m }}
        float minRange; // Offset: 0x4

        // the absolute max distance that this weapon's alt fire can be used. {{ units = m }}
        float maxRange; // Offset: 0x8

    }; // Size: 0xC

    struct accuracySettings_t
    {
        struct wanderingAim_t
        {
            // error to add for each shot
            float fireKick; // Offset: 0x0

            // maximum error when not firing
            float maxDivergence; // Offset: 0x4

            // rate to converge to target when firing
            float firingConvergenceRate; // Offset: 0x8

            // rate to randomly adjust error when not firing
            float notFiringWanderRate; // Offset: 0xC

            // delay after first shot before converging
            milliToGameTime_t aimCorrectionDelay; // Offset: 0x10

            // time after last shot to continue converging
            milliToGameTime_t aimCorrectionDuration; // Offset: 0x20

            // time required at full convergence before firing
            milliToGameTime_t requiredConvergenceTime; // Offset: 0x30

        }; // Size: 0x40

        // how far off the weapon's aim is at a distance of 1024.0 units {{ units = m }}
        float spread; // Offset: 0x0

        // weapon and skill specific wandering aim model parameters
        idDeclWeapon::accuracySettings_t::wanderingAim_t wanderingAim; // Offset: 0x8

    }; // Size: 0x48

    struct aiInfo_t
    {
        // true if weapon uses fire control logic (false for things like mutant scoop, etc)
        bool usesFireControl; // Offset: 0x0

        // true if the weapon can be used for suppressive fire by AI.
        bool supportsSuppressiveFire; // Offset: 0x1

        // AI event to alert AI when reloaded
        idDeclAiEvent* reloadEventDecl; // Offset: 0x8

        // AI event to send out for normal gunfire
        idDeclAiEvent* gunfireEventDecl; // Offset: 0x10

        // absolute minimum range of this weapon ( for AI ). {{ units = m }}
        float minRange; // Offset: 0x18

        // min range AI prefers to be from target ( for AI ). {{ units = m }}
        float minOptimalRange; // Offset: 0x1C

        // max range AI prefers to be from target ( for AI ). {{ units = m }}
        float maxOptimalRange; // Offset: 0x20

        // maximum range of this weapon ( for AI ). {{ units = m }}
        float maxRange; // Offset: 0x24

        // accuracy related settings
        idDeclWeapon::accuracySettings_t accuracySettings; // Offset: 0x28

        // AI weapon accuracy tables
        idDeclWeapon::weaponAccuracyTables_t weaponAccuracyList; // Offset: 0x70

        // a scalar that modifies the weapon table defined accuracy vs. the player.
        float playerAccuracyScalar; // Offset: 0x90

        // hold fire until actual aim is aligned to within this angle of the desired aim.
        float aimAlignmentFireThresholdDegrees; // Offset: 0x94

        // high level info about the alt fire capabilities of this weapon. ( for AI ).
        idDeclWeapon::weaponAltFireInfo_t altFireInfo; // Offset: 0x98

        // min time between releasing a weapon trigger and pulling it again
        milliToGameTime_t minRepullTriggerInterval; // Offset: 0xA8

        // max time between releasing a weapon trigger and pulling it again
        milliToGameTime_t maxRepullTriggerInterval; // Offset: 0xB8

        // min time between pulling a weapon trigger and releasing it again
        milliToGameTime_t minBurstDuration; // Offset: 0xC8

        // max time between pulling a weapon trigger and releasing it again
        milliToGameTime_t maxBurstDuration; // Offset: 0xD8

        // min additional time between firing another shot when trigger is held FIXME DOOM4 HANDS (not used by Doom4 weapons)
        milliToGameTime_t minShotDelay; // Offset: 0xE8

        // max additional time between firing another shot when trigger is held FIXME DOOM4 HANDS (not used by Doom4 weapons)
        milliToGameTime_t maxShotDelay; // Offset: 0xF8

        // name of the animweb state to use when the AI reloads this weapon ( default is "reload_clip" for SMG, Rifle, etc. Shotgun would be "reload_shells", etc ).
        idAtomicString reloadAnimName; // Offset: 0x108

        // time this weapon takes to reload ( for AI, in milliseconds )
        milliToGameTime_t reloadInterval; // Offset: 0x110

    }; // Size: 0x120

    struct zoomInfo_t
    {
        // if > 0, field of view in degrees when zoomed
        float zoomedFOV; // Offset: 0x0

        // if > 0, field of view in degrees for the hands/weapon when zoomed (otherwise, same as zoomedFOV)
        float zoomedHandsFOV; // Offset: 0x4

        // if true, player can enable zoom while in the air
        bool canZoomWhileJumping; // Offset: 0x8

        // scale the sensitivity for the controller
        float sensitivity_scale_controller; // Offset: 0xC

        // scale the sensitivity for the mouse
        float sensitivity_scale_mouse; // Offset: 0x10

        // length of time to delay the start of the zoom
        milliToGameTime_t zoomDelay; // Offset: 0x18

        // length of time required to zoom in or out
        milliToGameTime_t zoomTime; // Offset: 0x28

        // blend zoom instead of using animation zoom in/out
        bool hasBlendedZoom; // Offset: 0x38

        // blend time of blended zooms
        milliToGameTime_t zoomBlendTime; // Offset: 0x40

        // if true, hide the hands when the weapon state is ZoomIdle
        bool hideHandsOnZoom; // Offset: 0x50

        // how long after zoom start to hide the hands
        milliToGameTime_t hideHandsOnZoomDelay; // Offset: 0x58

        // hides the reticle when hands are hidden
        bool hideReticleWhenHandsAreHidden; // Offset: 0x68

        // number of scope gui to use when zoomed
        idDeclWeapon::scopeGuiNum_t scopeGuiNum; // Offset: 0x6C

        // toggles cross hair display on-off for zoomed state; default = false
        bool showCrosshair; // Offset: 0x70

        // if zoom shoot has a different shoot state, specify it here
        idAtomicString zoomShootState; // Offset: 0x78

        // the zoom percent at which zoom FX should be triggered (default 0)
        float zoomFXPercent; // Offset: 0x80

        // normally the extra condition corresponds to the current fire mode - this allows that to be overridden
        fxExtraCondition_t zoomFXForceExtraCond; // Offset: 0x84

    }; // Size: 0x88

    struct chargePropertyOptions_t
    {
        // if true, then do not scale chargeTimeMS when remaining shots < max burst count
        bool burstCountFixedChargeTime; // Offset: 0x0

    }; // Size: 0x1

    struct chargeGiveItemOverTime_t
    {
        // give item data
        giveItemOverTime_t giveItemOverTime; // Offset: 0x0

        // at which charge level do we award this?
        int chargeLevel; // Offset: 0x40

    }; // Size: 0x48

    struct valueAtShotCount_t
    {
        // number of shots for this value
        int shotCount; // Offset: 0x0

        // float value
        float valueFloat; // Offset: 0x4

        // decl value
        idDeclTypeInfo* valueDecl; // Offset: 0x8

        // value to set for this render parm at this charge level
        idVec4 valueVec4; // Offset: 0x10

        // sound for this charge property
        idSoundEvent* valueSound; // Offset: 0x20

        // sound played upon reaching this shotcount
        idSoundEvent* intervalSound; // Offset: 0x28

    }; // Size: 0x30

    struct chargeInfo_t
    {
        struct chargeItem_t
        {
            struct chargeProjectileDeviation_t
            {
                // Angle of the cone.
                float coneAngle; // Offset: 0x0

                // hostile push max radius. {{ units = m }}
                float coneHostilePushFarPlane; // Offset: 0x4

                // hostile push min radius. {{ units = m }}
                float coneHostilePushNearPlane; // Offset: 0x8

                // hostile nudge max radius. {{ units = m }}
                float coneHostileNudgeFarPlane; // Offset: 0xC

                // hostile nudge min radius. {{ units = m }}
                float coneHostileNudgeNearPlane; // Offset: 0x10

                // projectile reflection max radius. {{ units = m }}
                float coneProjReflectFarPlane; // Offset: 0x14

                // projectile reflection min radius. {{ units = m }}
                float coneProjReflectNearPlane; // Offset: 0x18

                // projectile deflection max radius. {{ units = m }}
                float coneProjDeflectFarPlane; // Offset: 0x1C

                // projectile deflection min radius. {{ units = m }}
                float coneProjDeflectNearPlane; // Offset: 0x20

                // min charge percentage to deflect projectiles. range 0 - 1. 0 ignores this for determining reflect/deflect ( reflects when charge < minChargePercent. deflects when charge >= minChargePercent. )
                float minChargePercentToReflect; // Offset: 0x24

                // max radius when using "minChargePercentToDeflect" {{ units = m }}
                float minChargePercentFarPlane; // Offset: 0x28

                // min radius when using "minChargePercentToDeflect" {{ units = m }}
                float minChargePercentNearPlane; // Offset: 0x2C

                // firing interval (in MS) for a successful deflect / reflect. 0 doesn't change firing interval.
                milliToGameTime_t firingIntervalOnSuccess; // Offset: 0x30

                // Play a reflect sound.
                idSoundEvent* reflectSound; // Offset: 0x40

                // Play a deflect sound.
                idSoundEvent* deflectSound; // Offset: 0x48

                // modifier for how fast the projectile moves when reflected.
                float reflectProjSpeedMod; // Offset: 0x50

                // Increase the damage of the projectile by this modifier ( when reflect )
                float reflectDamageModifier; // Offset: 0x54

                // Increase the damage of the projectile by this modifier ( when deflect )
                float deflectDamageModifier; // Offset: 0x58

                // scale the cooldown time for a reflected projectile
                float reflectCooldownModifier; // Offset: 0x5C

                // scale the cooldown time for a deflected projectile
                float deflectCooldownModifier; // Offset: 0x60

                // scale the cooldown time if nothing was deflected or reflected
                float failureCooldownModifier; // Offset: 0x64

                // if true then the failure cooldown period will also block primary fire
                bool failureCooldownAppliesToPrimary; // Offset: 0x68

                // Increase the damage of the next shot after reflecting a projectile
                float reflectDamageModifierNextShot; // Offset: 0x6C

                // Increase the damage of the next shot after deflecting a projectile
                float deflectDamageModifierNextShot; // Offset: 0x70

                // scale the knockback capability of successfully deflected or reflected incoming attacks
                float knockbackModifier; // Offset: 0x74

            }; // Size: 0x78

            // the property to charge
            idDeclWeapon::chargeProperty_t chargeProperty; // Offset: 0x0

            // storage for any per-property options
            idDeclWeapon::chargePropertyOptions_t options; // Offset: 0x4

            // charge property minimum value
            float valueMin; // Offset: 0x8

            // charge property maximum value
            float valueMax; // Offset: 0xC

            // an optional table that specifies how the property varies with charge percent (overrides valueMin, valueMax)
            idDeclTable* valueTable; // Offset: 0x10

            // controls whether the table is interpreted literally or the output is used to lerp between valueTableLerp0 and valueTableLerp1
            bool valueTableLerpActive; // Offset: 0x18

            // allows a normalized table to set its value range to [ valueTableLerp0, valueTableLerp1 ]
            float valueTableLerp0; // Offset: 0x1C

            // allows a normalized table to set its value range to [ valueTableLerp0, valueTableLerp1 ]
            float valueTableLerp1; // Offset: 0x20

            // render parm to change per charge level
            idDeclRenderParm* renderParm; // Offset: 0x28

            // mesh kit to recieve the render parm
            idAtomicString meshKit; // Offset: 0x30

            // values at specific shot counts
            idList < idDeclWeapon::valueAtShotCount_t , TAG_IDLIST , false > valuesAtShotCount; // Offset: 0x38

            // allows values to be fully specified but restricted until overridden
            int valuesAtShotCountMaxIndex; // Offset: 0x50

            // sound to play at each whole integer values of the charge item
            idSoundEvent* intervalSound; // Offset: 0x58

            // sounds to play at whole integer values of the charge item, indexed according to those integer values
            idList < const idSoundEvent * , TAG_IDLIST , false > intervalSounds; // Offset: 0x60

            // splash damage to trigger at each whole integer level of the charge item value
            idDeclDamage* intervalAOESplashDamage; // Offset: 0x78

            // enable/disable give items, can be overridden with WMT_WEAPON_CHARGE_ENABLE_INTERVAL_GIVE_ITEMS
            bool enableChargeGiveItems; // Offset: 0x80

            // should we play charge interval sounds on remote clients
            bool enableChargeIntervalSoundsRemotely; // Offset: 0x81

            // list of items to award either instantly or over time at each new integer value of the charge item
            idList < idDeclWeapon::chargeGiveItemOverTime_t , TAG_IDLIST , false > intervalGiveItems; // Offset: 0x88

            // what type of debug bar to show, if any
            idDeclWeapon::chargeDebugBarType_t debugBar; // Offset: 0xA0

            // Does this Charge Deviate ( reflect and deflect projectiles ) ?
            idDeclWeapon::chargeInfo_t::chargeItem_t::chargeProjectileDeviation_t projectileDeviation; // Offset: 0xA8

        }; // Size: 0x120

        struct rumble_t
        {
            // rumble high mag
            float highMagnitude; // Offset: 0x0

            // rumble high duration
            milliToGameTime_t highDuration; // Offset: 0x8

            // rumble low mag
            float lowMagnitude; // Offset: 0x18

            // rumble low duration
            milliToGameTime_t lowDuration; // Offset: 0x20

            // rumble low mag
            float ltMagnitude; // Offset: 0x30

            // rumble low duration
            milliToGameTime_t ltDuration; // Offset: 0x38

            // rumble low mag
            float rtMagnitude; // Offset: 0x48

            // rumble low duration
            milliToGameTime_t rtDuration; // Offset: 0x50

        }; // Size: 0x60

        struct chargePerShot_t
        {
            // charge how many shots to gain one charge
            int numShotsPerCharge; // Offset: 0x0

            // amount charge increases when 'numShotsPerCharge' is reached
            float chargeIncrement; // Offset: 0x4

            // if true then each shot must be a hit to charge
            bool requireHitToCharge; // Offset: 0x8

            // maximum charge val
            int maxCharge; // Offset: 0xC

            // if true, then base the charge percent on the chargeValuesForShotCount data
            bool chargePercentUsesValuesAtShotCount; // Offset: 0x10

            // discharge how many misses to lose charge ( only applies when requireHitToCharge == true )
            int numMissesToDischarge; // Offset: 0x14

            // how many charges to lose per discharge, or -1 for all
            int numChargesToDischarge; // Offset: 0x18

        }; // Size: 0x1C

        // continuous charging how many MS to become fully charged
        milliToGameTime_t chargeTimeMS; // Offset: 0x0

        // how long the trigger must be held before charging begins (causes fire on release)
        milliToGameTime_t holdTimeBeforeChargingMS; // Offset: 0x10

        // max time charge can be held before automatically discharging (0 for unlimited)
        milliToGameTime_t chargeTimeMaxMS; // Offset: 0x20

        // how many MS after discharging before another charge can begin
        milliToGameTime_t dischargeTimeoutMS; // Offset: 0x30

        // normally discharge timeout is applied only when the weapon discharged by firing.
        bool useDischargeTimeoutAlways; // Offset: 0x40

        // if true then the charge_into anim is scaled to the charge time
        bool scaleChargeIntoAnimByChargePct; // Offset: 0x41

        // if false: charging is (charge_into->charge_idle) and shooting is (charge_shoot->charge_shoot_to_charge_idle->charge_idle)
        bool hasChargeChargeAnim; // Offset: 0x42

        // if true: charging is (charge_into->charge_charge->charge_idle), shooting is (charge_shoot->charge_charge->charge_idle) if true then the charge_charge anim is scaled to the charge time
        bool scaleChargeChargeAnimByChargePct; // Offset: 0x43

        // if true then the discharge timeout varies according to how much the weapon was discharged
        bool scaleDischargeTimeoutByDischargePct; // Offset: 0x44

        // scale to use when not discharged at all
        float scaleDischargeTimeoutByDischargePct_noShotsFired; // Offset: 0x48

        // scale to use when completely discharged
        float scaleDischargeTimeoutByDischargePct_allShotsFired; // Offset: 0x4C

        // how does the charge get discharged
        weaponFireMode_t dischargeFireMode; // Offset: 0x50

        // at what percent to play the normal discharge FX. ( 0 - 0.99f )
        float dischargeFXPercentage; // Offset: 0x54

        // true to draw a discharge timeout debug bar
        bool dischargeTimeoutDebugBar; // Offset: 0x58

        // generally 1 but not necessarily (0 - 1)
        float dischargePercentPerShot; // Offset: 0x5C

        // if true then don't start discharging until ammo is less than what a full charge requires
        bool dischargeOnlyForInsuffientAmmo; // Offset: 0x60

        // true if the weapon should inhibit auto-switch when empty if it has a discharge that can be used
        bool inhibitEmptyWeaponSwitchForDischarge; // Offset: 0x61

        // scale the shoot anim to match the charge time
        bool scaleShootAnimToMatchChargeTime; // Offset: 0x62

        // scale the shoot anim to match the discharge timeout
        bool scaleShootAnimToMatchDischargeTimeout; // Offset: 0x63

        // scale the shoot anim to match the charge time and discharge timeout
        bool scaleShootAnimToMatchChargeTimeAndDischargeTimeout; // Offset: 0x64

        // sets chargeChargeAnimRate so that charge shoot to charge idle anim takes the charge time to play
        bool scaleChargeShootToChargeIdleAnimToMatchChargeTime; // Offset: 0x65

        // if true, start full. false, start empty.
        bool startFullyCharged; // Offset: 0x66

        // if true then don't consider charge status when determine whether to use weapon empty appearance
        bool ignoreChargeForEmptyAppearance; // Offset: 0x67

        // sounds sound to play when weapon was denied fired because of insufficient charge
        idSoundEvent* denialSound; // Offset: 0x68

        // sound to play when charging starts
        idSoundEvent* startSound; // Offset: 0x70

        // looping charge sound that uses variable pitch
        idSoundEvent* loopingSound; // Offset: 0x78

        // RTPC sound that takes charge % as its parameter
        idSoundEvent* chargePercentRTPCsound; // Offset: 0x80

        // param for RTPC sound that takes charge % as its parameter
        idSoundRTPC* chargePercentRTPCparam; // Offset: 0x88

        // sound to play when fully charged
        idSoundEvent* fullyChargedSound; // Offset: 0x90

        // sound to play when weapon discharges because charge was held too long
        idSoundEvent* dischargeSound; // Offset: 0x98

        // sound to play when weapon discharges because charge was held too long
        idSoundEvent* dischargeFiredSound_empty; // Offset: 0xA0

        // sound to play when weapon discharges because charge was held too long
        idSoundEvent* dischargeFiredSound; // Offset: 0xA8

        // sound to play when weapon discharges due to overheating
        idSoundEvent* dischargeOverheatedSound; // Offset: 0xB0

        // sound to play when we start to cooldown.
        idSoundEvent* dischargeSound_cooldown; // Offset: 0xB8

        // sound to play after discharge timeout, when charging is possible again
        idSoundEvent* readySound; // Offset: 0xC0

        // if charge input is issues when charge is not ready, play this sound
        idSoundEvent* notReadySound; // Offset: 0xC8

        // should we play the fully charged sound on remote clients
        bool enableChargeFullyChargedSoundRemotely; // Offset: 0xD0

        // decay how long after charging does the charge begin to decay
        milliToGameTime_t decayTimeoutMS; // Offset: 0xD8

        // how fast the charge decays, or -1 for full discharge
        float decayPercentPerSec; // Offset: 0xE8

        // misc if true then weapon will dryfire if fired when charge percent = 0
        bool dryfireAtZeroCharge; // Offset: 0xEC

        // if true, use the new weapon charge fx system override parm
        bool useChargeFXOverride; // Offset: 0xED

        // Allow timed charge while weapon is overheated ( energy shield for chaingun )
        bool timedChargeWhileOverheated; // Offset: 0xEE

        // index into this using CHARGE_PROPERTY_PROJECTILE_OVERRIDE
        idList < const idDeclProjectile * , TAG_IDLIST , false > overrideProjectiles; // Offset: 0xF0

        // what gets charged
        idList < idDeclWeapon::chargeInfo_t::chargeItem_t , TAG_IDLIST , false > chargeItems; // Offset: 0x108

        // anim state to play each time charge increments
        idAtomicString chargeAnimStateName; // Offset: 0x120

        // additive paused non-looping anim frame 0 at charge = 0, frame ( numFrames - 1 ) at charge = 1 (cannot also use recharge additive anim)
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnim; // Offset: 0x128

        // additive paused non-looping anim frame 0 at charge = 0, frame ( numFrames - 1 ) at charge = 1 (cannot also use recharge additive anim).... but classic.
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnim_classic; // Offset: 0x12A

        // second charge additive anim with frame connected by scale to chargeAdditiveAnim frame
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnim2; // Offset: 0x12C

        // scale relative to chargeAdditiveAnim frame
        float chargeAdditiveAnim2FrameScale; // Offset: 0x130

        // additive paused looping anim to play while fully charged, use CHARGE_PROPERTY_CHARGE_ADDITIVE_WEAPON_ANIM_ALPHA to control anim alpha
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeLoopingAdditiveAnim; // Offset: 0x134

        // discharge anim (by default plays 1->0) that is registered with weapon, since discharge may result from switching to a fire mode without charge
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnim; // Offset: 0x136

        // discharge anim (by default plays 1->0) that is registered with weapon, since discharge may result from switching to a fire mode without charge.... but classic.
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnim_classic; // Offset: 0x138

        // discharge additive anim to play on hands (by default plays 1->0)
        idAtomicHandleT < aliasRefType_t > dischargeAdditiveHandsAnim; // Offset: 0x140

        // discharge additive anim to play on hands when in classic mode
        idAtomicHandleT < aliasRefType_t > dischargeAdditiveHandsAnim_Classic; // Offset: 0x148

        // if false, play 1->0, if true play 0->1
        bool dischargeAdditiveHandsAnimReversed; // Offset: 0x150

        // set this independently or it uses the weapon anim properties
        milliToGameTime_t dischargeAdditiveHandsAnimDurationMS; // Offset: 0x158

        // if this is present, then use this after a fire event instead of the regular discharge, which would then be used when leaving charge without firing
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeFiredAdditiveAnim; // Offset: 0x168

        // if this is present, then use this when discharging while overheated
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeOverheatedAdditiveAnim; // Offset: 0x16A

        // second discharge anim with frame connected by scale to dischargeAdditiveAnim frame
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnim2; // Offset: 0x16C

        // flat rate to play 1->0
        float dischargeAdditiveAnim2Rate; // Offset: 0x170

        // if false, play 1->0, if true play 0->1
        bool dischargeAdditiveAnimsReversed; // Offset: 0x174

        // if false, play 1->0, if true play 0->1
        bool dischargeFiredAdditiveAnimReversed; // Offset: 0x175

        // if true, then use this when fired instead of dischargeAdditiveAnimsReversed
        bool useDischargeFiredAdditiveAnimReversed; // Offset: 0x176

        // if true then don't play any discharge anim if the weapon is empty
        bool suppressDischargeAdditiveAnimsWhenEmpty; // Offset: 0x177

        // additive anim to play while charging - use CHARGE_PROPERTY_CHARGE_ADDITIVE_HANDS_ANIM_ALPHA to control anim alpha
        idAtomicHandleT < aliasRefType_t > chargeAdditiveHandsAnim; // Offset: 0x178

        // optional delay after issuing before anim should start playing
        milliToGameTime_t dischargeAdditiveAnimDelayMS; // Offset: 0x180

        // how many MS to play the full discharge animation when the discharge was not due to weapon being fired
        milliToGameTime_t dischargeAdditiveAnimDurationMS_notFired; // Offset: 0x190

        // how many MS to play the full discharge animation when the discharge was due to weapon being fired
        milliToGameTime_t dischargeAdditiveAnimDurationMS_fired; // Offset: 0x1A0

        // additive paused non-looping anim frame 0 at charge timeout = 0, frame ( numFrames - 1 ) at charge timeout = 1
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > cooldownAdditiveAnim; // Offset: 0x1B0

        // additive paused non-looping anim frame 0 at charge timeout = 0, frame ( numFrames - 1 ) at charge timeout = 1
        bool cooldownAdditiveAnimReversed; // Offset: 0x1B2

        // additive paused anim to play in charge state CHARGE_STATE_NONE
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > notChargingAdditiveAnim; // Offset: 0x1B4

        // if true then slave the duration to the overheat timeout delay
        bool dischargeAdditiveAnimFiredSlaveToOverheatDelayDuration; // Offset: 0x1B6

        // what percent of the total duration of the overheat delay should be a start delay on the discharge additive anim
        float dischargeAdditiveAnimFiredSlaveToOverheatDelayDelayPct; // Offset: 0x1B8

        // add this penalty if the weapon is fully discharged, or scale it according to how discharged the weapon is
        milliToGameTime_t dischargeAdditiveAnimDurationMS_dischargePenalty; // Offset: 0x1C0

        // if true then ignore the explicit MS values and use the actual calculated value of the timeout that the weapon is using to regulate itself
        bool dischargeAdditiveAnimDurationMS_useActualDischargeTimeout; // Offset: 0x1D0

        // at what MS intervals of the charge property should the charge anim be played?
        milliToGameTime_t chargeAnimIntervalMS; // Offset: 0x1D8

        // how much ammo per sec to expend to maintain full charge
        float ammoToMaintainFullChargePerSec; // Offset: 0x1E8

        // allows charging in a fire mode without allowing discharging
        bool noDischarge; // Offset: 0x1EC

        // if true, then discharge fire mode is forbidden with insufficient charge
        bool minChargeRequiredForDischargeFireMode; // Offset: 0x1ED

        // this is the chargePercent needed before it's allowed to discharge (0-1)
        float minChargeRequiredToDischarge; // Offset: 0x1F0

        // minimum charge percent needed on discharge to allow being supercharged (set on the supercharge decl, discharge below this cancels current supercharge)
        float minChargeRequiredForSupercharge; // Offset: 0x1F4

        // special case to fix bug with mp_salvo_cannon
        bool forbidDischargeWhileInShootState; // Offset: 0x1F8

        // if true then partial charges are allowed when remaining ammo is insufficient for a full charge
        bool allowPartialChargeWithInsufficientAmmo; // Offset: 0x1F9

        // if true then weapon can charge while unequipped, and also preserves its discharge timeout
        bool chargeWhileUnequipped; // Offset: 0x1FA

        // if true, we force getting the secondary decl's chaarge behavior for the chargeWhileUnequipped setting (only on perk activation)
        bool chargeWhileUnequippedForceSecondary; // Offset: 0x1FB

        // if put away while having a charge, whether through change weapons or mod swap, return with that same charge
        bool startChargedIfPutAwayCharged; // Offset: 0x1FC

        // if true then primary should use the secondary charge info
        bool overridePrimaryChargeInfo; // Offset: 0x1FD

        // if true then primary should use primary charge info even if secondary is set to override primary
        bool ignoreOverridePrimaryChargeInfo; // Offset: 0x1FE

        // if true, charging doesn't start until gametime has reached the weapon's nextFireTime
        bool waitForNextFireTimeBeforeCharging; // Offset: 0x1FF

        // if true then charging can only happen when targeting can happen
        bool canOnlyChargeWhenTargeting; // Offset: 0x200

        // prevents forcing triggers to release when throwing
        bool canChargeWhileThrowing; // Offset: 0x201

        // allow the weapon to be charged during the bringup animation
        bool canChargeDuringBringup; // Offset: 0x202

        // allow the weapon to be charged when the weapon wheel is active
        bool canChargeWithActiveWeaponWheel; // Offset: 0x203

        // if true then the charge fire mode is blocked while the charge is recharging or timed out
        bool timeoutBlocksFireMode; // Offset: 0x204

        // if true then other fire mode cannot be used while the charge is recharging or timed out
        bool timeoutBlocksOtherFireMode; // Offset: 0x205

        // if true then don't auto-discharge a charge when the weapon loses the ability to charge
        bool keepChargeWhenCantCharge; // Offset: 0x206

        // if true then weapon can charge regardless of whether it has ammo
        bool keepChargeWhenEmpty; // Offset: 0x207

        // if true forcibly discharge the weapon when doing the chainsaw attack
        bool dischargeWhenUsingChainsaw; // Offset: 0x208

        // automatically fire at full charge
        bool fireAtFullCharge; // Offset: 0x209

        // dash modifier if charge is active
        float dashModifier; // Offset: 0x20C

        // rumble data while charging shot
        idDeclWeapon::chargeInfo_t::rumble_t chargeRumble; // Offset: 0x210

        // per-hit charging
        idDeclWeapon::chargeInfo_t::chargePerShot_t chargePerShot; // Offset: 0x270

    }; // Size: 0x290

    struct handsAdditiveJumpFallLandAnims_t
    {
        // enable/disable additive anims
        bool enable; // Offset: 0x0

        // hands additive idle anim
        idAtomicHandleT < aliasRefType_t > idle; // Offset: 0x8

        // hands additive jump anim
        idAtomicHandleT < aliasRefType_t > jump; // Offset: 0x10

        // alpha value
        float jump_alpha; // Offset: 0x18

        // hands additive fall anim
        idAtomicHandleT < aliasRefType_t > fall; // Offset: 0x20

        // alpha value
        float fall_alpha; // Offset: 0x28

        // hands additive land_small anim
        idAtomicHandleT < aliasRefType_t > land_small; // Offset: 0x30

        // alpha value
        float land_small_alpha; // Offset: 0x38

        // hands additive land_medium anim
        idAtomicHandleT < aliasRefType_t > land_medium; // Offset: 0x40

        // alpha value
        float land_medium_alpha; // Offset: 0x48

        // hands additive land_large anim
        idAtomicHandleT < aliasRefType_t > land_large; // Offset: 0x50

        // alpha value
        float land_large_alpha; // Offset: 0x58

        // hands additive land_xlarge anim
        idAtomicHandleT < aliasRefType_t > land_xlarge; // Offset: 0x60

        // alpha value
        float land_xlarge_alpha; // Offset: 0x68

    }; // Size: 0x70

    struct animatedSpinnyThing_t
    {
        enum mode_t : int
        {
            NONE = 0,
            PER_SHOT = 1,
            FIREMODE_CHANGE = 2
        };

        // if true, then use secondary info instead of primary
        bool overridePrimary; // Offset: 0x0

        // additive anim on one complete spin of the spinny thing
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveAnim; // Offset: 0x2

        // how fast it spins at idle
        float minDegsPerSecond; // Offset: 0x4

        // max spin speed
        float maxDegsPerSecond; // Offset: 0x8

        // how fast it slows back down to min
        float degsPerSecondDecay; // Offset: 0xC

        // how far spinny thing advances with each shot (at degsPerSecond rate)
        float perShotDegs; // Offset: 0x10

        // how fast the spinny thing advances with each shot
        float perShotDegsPerSecond; // Offset: 0x14

        // how long to delay before starting the per shot movement
        idTypesafeTime < int , millisecondUnique_t , 1000 > perShotDelayMS; // Offset: 0x18

        // how far spinny thing advances when changing to secondary (or retreats changing back to primary)
        float fireModeChangeDegs; // Offset: 0x1C

        // how fast the spinny thing moves when changing fire mode
        float fireModeChangeDegsPerSecond; // Offset: 0x20

        // if true then force the degs to fireModeChangeStartDegs when fireMode changes
        bool forceFireModeChangeStartDegs; // Offset: 0x24

        // the degs to force if forceFireModeChangeStartDegs is set
        float fireModeChangeStartDegs; // Offset: 0x28

        // sound used by Wise for sound that varies with spin rpm
        idSoundEvent* spinRPM_RTPCsound; // Offset: 0x30

        // param used by Wise for sound that varies with spin rpm
        idSoundRTPC* spinRPM_RTPCparam; // Offset: 0x38

        // whether to update during mod changes or not
        bool suspendDuringModChange; // Offset: 0x40

        // if true then zero the angle each time the weapon fires
        bool zeroOnFire; // Offset: 0x41

        // if true then don't allow fire or firemode to change until degs = targetDegs
        bool inhibitFireAndModeChangeWhileActive; // Offset: 0x42

    }; // Size: 0x48

    struct shellEjectEmitter_t
    {
        // breakable shell emitter
        idDeclEntityDef* breakableEmitter; // Offset: 0x0

        // base emit speed {{ units = m / s }}
        float baseSpeed; // Offset: 0x8

        // random variation on emit speed {{ units = m / s }}
        float deltaSpeed; // Offset: 0xC

        // random variation on emit direction
        float deltaAngle; // Offset: 0x10

    }; // Size: 0x18

    struct idHandsAdditiveAnimData_t
    {
        // blend weight (0-1)
        float targetAlphaDefault; // Offset: 0x0

        // transition rate from current alpha to target alpha
        float alphaRateDefault; // Offset: 0x4

        // blend weight while zoomed
        float targetAlphaZoomed; // Offset: 0x8

        // transition rate from current alpha to target alpha
        float alphaRateZoomed; // Offset: 0xC

    }; // Size: 0x10

    struct ammoClip
    {
        // the ammo that can go into this clip
        idDeclAmmo* validAmmoDecl; // Offset: 0x0

        // type of ammo clip for gui
        idDeclWeapon::clipType_t clipType; // Offset: 0x8

        // the number of rounds in this clip
        int clipSize; // Offset: 0xC

        // if 0, no ammo is used ( usually for melee weapons )
        int ammoPerShot; // Offset: 0x10

        // if not -1, then use this value instead of ammoPerShot when in pvp
        int pvpAmmoPerShot; // Offset: 0x14

        // how much ammo to put in per reload movement (shotgun for instance. -1/default: use clipSize)
        int ammoPerReload; // Offset: 0x18

        // number of shots in the clip when the weapon has the magazine upgrade (-1/default: use clipSize)
        int upgradedClipSize; // Offset: 0x1C

        // how much ammo to put in per reload movement when the weapon has the magazine upgrade (-1/default: use upgradedClipSize)
        int upgradedAmmoPerReload; // Offset: 0x20

        // currently ignored, auto reload when we empty clip
        bool autoReload; // Offset: 0x24

        // currently ignored, auto reload when we empty clip when the weapon has the magazine upgrade
        bool upgradedAutoReload; // Offset: 0x25

    }; // Size: 0x28

    struct chargeProjectile_t
    {
        enum chargeProjectileCondition_t : int
        {
            CPC_NONE = 0,
            CPC_DIRECT_HIT = 1,
            CPC_SHOT_INTERVAL = 2
        };

        // the list of projectiles indexed by projectile charge level
        idList < const idDeclProjectile * , TAG_IDLIST , false > projectiles; // Offset: 0x0

        // how charging occurs
        idDeclWeapon::chargeProjectile_t::chargeProjectileCondition_t condition; // Offset: 0x18

        // shot interval for CPC_SHOT_INTERVAL
        int conditionVal; // Offset: 0x1C

        // debug bar
        debugBar_t debugBar; // Offset: 0x20

        // if true, reset on fire mode change, if false, maintain values across fire modes
        bool resetOnFireModeChange; // Offset: 0x60

        // if true, reset on weapon change, if false, maintain values across weapon changes
        bool resetOnWeaponChange; // Offset: 0x61

        // if true, reset when a charge occurs at max charge, if false, remain at max charge
        bool resetOnChargeAtMaxCharge; // Offset: 0x62

    }; // Size: 0x68

    struct projectileAtShotCount_t
    {
        // shotCount
        int shotCount; // Offset: 0x0

        // projectile to trigger
        idDeclProjectile* projectile; // Offset: 0x8

        // degrees from normal aim direction
        float degsFromAimDir; // Offset: 0x10

        // if true then fire another projectile at -degsFromAimDir
        bool mirror; // Offset: 0x14

    }; // Size: 0x18

    struct projectilesAtShotCount_t
    {
        // list of bonus projectiles to fire at specific shot counts
        idList < idDeclWeapon::projectileAtShotCount_t , TAG_IDLIST , false > list; // Offset: 0x0

        // if value > 0, reset the behavior at this shot count
        int resetAtShotCount; // Offset: 0x18

        // if the num shots is greater than this value, use this value
        int maintainAtShotCount; // Offset: 0x1C

    }; // Size: 0x20

    struct weaponSuperchargeInfo_t
    {
        // if true, then superchange persists to the next mod
        bool keepOnModSwap; // Offset: 0x0

        // debug bar
        debugBar_t debugBar; // Offset: 0x8

        // supercharge start sound
        idSoundEvent* superchargeStart; // Offset: 0x48

        // supercharge stop sound
        idSoundEvent* superchargeStop; // Offset: 0x50

    }; // Size: 0x58

    struct heatInfo_t
    {
        // an overheat amount to add per shot (0.0-1.0)
        float heatIncrement; // Offset: 0x0

        // an amount to decrement over time for the weapon (heat points per sec)
        float heatDecrementRate; // Offset: 0x4

        // interval size to set when the heat decrement sounds will play ( DEPRECATED! use heatIncrement for both now )
        float heatDecrementInterval; // Offset: 0x8

        // play this when the heat level crosses an interval value
        idSoundEvent* heatDecrementIntervalSound; // Offset: 0x10

        // if 1.0 then the weapon can overheat and be subject to a timeout, if < 1.0 the weapon can still heat to this point but won't overheat
        float maxHeatPercent; // Offset: 0x18

        // if the weapon heat percent is within this value to maxHeatPercent, count as an overheat
        float overheatEpsilon; // Offset: 0x1C

        // an amount to add to the heat glow for the weapon per shot (0.0-1.0)
        float glowIncrement; // Offset: 0x20

        // an amount to decrement over time for the weapon
        float glowDecrement; // Offset: 0x24

        // maximum glow value
        float maxGlow; // Offset: 0x28

        // duration after heating stops before cooling starts
        milliToGameTime_t coolingDelayMS; // Offset: 0x30

        // once overheated, this is the duration in milliseconds before a weapon is usable again
        milliToGameTime_t overheatDelayMS; // Offset: 0x40

        // if true then weapon will cool during the overheat timeout
        bool coolDuringOverheatDelay; // Offset: 0x50

        // sound to play when the weapon overheats
        idSoundEvent* overheatSound; // Offset: 0x58

        // sound to play when the weapon can fire again
        idSoundEvent* overheatRecoverySound; // Offset: 0x60

        // Variable sound to use for overheat (NOTE: Only define this in either the primary or secondary weapon decls, NOT BOTH!)
        idSoundEvent* overheatRTPCSound; // Offset: 0x68

        // RTPC for the overheat (NOTE: Only define this in either the primary or secondary weapon decls, NOT BOTH!)
        idSoundRTPC* overheatRTPC; // Offset: 0x70

        // the % that the heat level should be at after recovering from an overheat, or -1 to bypass
        float overheatRecoveryPercent; // Offset: 0x78

        // Show heat bar (visual).
        bool showHeatBar; // Offset: 0x7C

        // Removes the heat when you equip the weapon.
        bool removeHeatOnEquip; // Offset: 0x7D

        // which fire mode(s) are affected by overheating
        weaponFireMode_t overheatFireMode; // Offset: 0x80

        // if true, then track num shots in each heating session and adjust heat percent accordingly if heatIncrement changes
        bool heatPercentNumShots; // Offset: 0x84

        // if true and heatIncrement > 0, forces the use of the secondary decl's heat info
        bool forceUseSecondary; // Offset: 0x85

    }; // Size: 0x88

    struct woundFXConditionOverrides_t
    {
        // wound
        idDeclGoreWound* wound; // Offset: 0x0

        // if the wound is active, this condition will play instead of the normal fire condition
        fxCondition_t startFireCondition; // Offset: 0x8

    }; // Size: 0x10

    struct spreadParams_t
    {
        enum spreadType_t : int
        {
            MUZZLE_BASE = 0,
            TARGET_BASE = 1
        };

        // determines the type of weapon spread to use
        idDeclWeapon::spreadParams_t::spreadType_t spreadType; // Offset: 0x0

        // amount of spread, in degrees OR the distances from the target to calculate spread
        float spread; // Offset: 0x4

        // base amount of spread if weapon is zoomed.
        float spreadBaseZoom; // Offset: 0x8

        // base amount of spread if player is crouched.
        float spreadBaseCrouch; // Offset: 0xC

        // base amount of spread if player is crouched and weapon is zoomed.
        float spreadBaseZoomCrouch; // Offset: 0x10

        // the players speed is put into a range of 0 to 1, then multiplied by this and added to spread
        float spreadIncreasedByMovement; // Offset: 0x14

        // the players speed is put into a range of 0 to 1, then multiplied by this and added to spread if weapon is zoomed
        float spreadIncreasedByMovementZoom; // Offset: 0x18

        // the player's delta aim angle is multiplied by this and added to spread
        float spreadIncreasedByAiming; // Offset: 0x1C

        // how much is added to the spread on a shot
        float spreadAdditionPerShot; // Offset: 0x20

        // maximum amount that can be added to spread through firing.
        float spreadAdditionMax; // Offset: 0x24

        // how much is added to the spread on a shot if weapon is zoomed
        float spreadAdditionPerShotZoom; // Offset: 0x28

        // how much is added to the spread on a shot while we're moving
        float spreadAdditionPerShotMoving; // Offset: 0x2C

        // how much is added to the spread on a shot while we're moving while zoomed
        float spreadAdditionPerShotZoomMoving; // Offset: 0x30

        // maximum amount that can be added to spread through firing if weapon is zoomed.
        float spreadAdditionMaxZoom; // Offset: 0x34

        // How long before the weapon spread starts to return to 0 after firing
        float spreadReturnDelay; // Offset: 0x38

        // How long it takes for the weapon spread to return to 0 after firing
        milliToGameTime_t spreadReturnTime; // Offset: 0x40

        // Strength of the spread banding method ( must be > 0 to enable ).
        int spreadBandStrength; // Offset: 0x50

        // horizontal spread scaled by this amount
        float horizontalSpreadScale; // Offset: 0x54

        // 0 for totally random spacing for each shot in spawnCount, 1 for even spacing across shots in spawnCount
        float horizontalSpreadScaleEvenSpacingLerp; // Offset: 0x58

        // vertical spread scaled by this amount
        float verticalSpreadScale; // Offset: 0x5C

        // 0 for totally random spacing for each shot in spawnCount, 1 for even spacing across shots in spawnCount
        float verticalSpreadScaleEvenSpacingLerp; // Offset: 0x60

    }; // Size: 0x68

    struct zoomBlur_t
    {
        // the maximum zoom blur
        float maxBlur; // Offset: 0x0

        // modifiers for the zoom blur
        idVec3 scaleBiasPower; // Offset: 0x4

        // the distance for the zoom blur
        float distance; // Offset: 0x10

    }; // Size: 0x14

    struct barrelSpinInfo_t
    {
        enum enum_1A301 : int
        {
            MAX_BARRELS = 2
        };

        // barrels to animate
        idAtomicString barrelJoints[2]; // Offset: 0x0

        // time to accelerate
        milliToGameTime_t accelTime; // Offset: 0x10

        // time to decelerate
        milliToGameTime_t decelTime; // Offset: 0x20

        // number of barrels on this barrel
        int numBarrels; // Offset: 0x30

    }; // Size: 0x38

    struct beamInfo_t
    {
        // looping beam sound, plays at point along beam closest to client
        idSoundEvent* beamSound_looping; // Offset: 0x0

        // looping impact sound, sound is merely moved along impact points
        idSoundEvent* impactSound_looping; // Offset: 0x8

    }; // Size: 0x10

    struct guiDisplayProps_t
    {
        // Gui Weapon Scale.
        float scale; // Offset: 0x0

        // Gui Weapon position offset.
        idVec3 offset; // Offset: 0x4

        // display roll.
        float roll; // Offset: 0x10

        // which gui frame indicates this profile.
        int profileFrame; // Offset: 0x14

        // what animation to play in the dossier
        idAnimAliasRef animation; // Offset: 0x18

    }; // Size: 0x48

    struct weaponLag_t
    {
        // Set to true to turn on
        bool enable; // Offset: 0x0

        // The length (meters) of the pendulum {{ _nits = m }}
        float pendulumLength; // Offset: 0x4

        // The friction constant for Stoke's friction {{ units = 1 / s }}
        float friction; // Offset: 0x8

        // The max angle (degrees) of the pendulum
        float maxAngleDegrees; // Offset: 0xC

        // The max acceleration {{ _nits = m / ( s * s ) }}
        float maxAcceleration; // Offset: 0x10

        // Acceleration due to gravity (Earth is 9.81, Mars is 3.8) {{ _nits = m / ( s * s ) }}
        float gravity; // Offset: 0x14

        // Enable/Disable forward weapon dip
        bool weaponDipForward; // Offset: 0x18

    }; // Size: 0x1C

    struct weaponDir_t
    {
        // The forward-back direction (in player space)
        float forward_back; // Offset: 0x0

        // The left-right direction (in player space)
        float left_right; // Offset: 0x4

        // The up-down direction (in player space)
        float up_down; // Offset: 0x8

    }; // Size: 0xC

    struct weaponPos_t
    {
        // The forward-back direction (in player space) {{ _nits = m }}
        float forward_back; // Offset: 0x0

        // The left-right direction (in player space) {{ _nits = m }}
        float left_right; // Offset: 0x4

        // The up-down direction (in player space) {{ _nits = m }}
        float up_down; // Offset: 0x8

    }; // Size: 0xC

    struct weaponBob_t
    {
        // Set to true to turn on
        bool enable; // Offset: 0x0

        // The player stride (meters). This has an effect on the time between steps. {{ _nits = m }}
        float stride; // Offset: 0x4

        // The player stride (meters). Does the exact same thing as the normal stride, but when crouched. {{ _nits = m }}
        float strideCrouched; // Offset: 0x8

        // The model space amplitudes (meters) of the bob
        idDeclWeapon::weaponPos_t translationAmplitudes; // Offset: 0xC

        // Multipliers for the angular velocities of the translational bob
        idDeclWeapon::weaponDir_t translationAngularVelocities; // Offset: 0x18

        // The phase angles for the translation (degrees)
        idDeclWeapon::weaponDir_t translationPhaseAngles; // Offset: 0x24

        // Rotational amplitudes of the model (degrees)
        idAngles rotationalAmplitudes; // Offset: 0x30

        // Multipliers for the angular velocities of the rotations
        idAngles rotationalAngularVelocities; // Offset: 0x3C

        // The phase angles for the rotations (degrees)
        idAngles rotationalPhaseAngles; // Offset: 0x48

    }; // Size: 0x54

    // charge info
    idDeclWeapon::chargeInfo_t chargeInfo; // Offset: 0x3F8

    // weapon haptics
    hapticFeedbackParms_t weaponHaptics; // Offset: 0x688

    // allows normal shot to be fired when we're in the charging state, but the current mode doesn't have valid charge info
    bool useNormalShootWhenNoChargeForFireMode; // Offset: 0x6B4

    // populated with additive hands anims to replace base animweb behavior
    idDeclWeapon::handsAdditiveJumpFallLandAnims_t handsAdditiveJumpFallLandAnims; // Offset: 0x6B8

    // on/off switch for debug bars for this weapon
    bool allowDebugBars; // Offset: 0x728

    // debug bar data (for some cases)
    debugBar_t debugBar; // Offset: 0x730

    // animated spinny thing!
    idDeclWeapon::animatedSpinnyThing_t animatedSpinnyThing; // Offset: 0x770

    // item icon as displayed in the inventory screen when there is no ammo
    idMaterial2* emptyIcon; // Offset: 0x7B8

    // item icon as displayed in the inventory screen when it is selected
    idMaterial2* selectedIcon; // Offset: 0x7C0

    // color to use for the icon when Full
    swfNamedColors_t iconColorFull; // Offset: 0x7C8

    // Remap for the Ray Tracing for this weapon.
    idList < materialRemap_t , TAG_IDLIST , false > materialRemapRT; // Offset: 0x7D0

    // what trigger action is associated with this fire mode (do not access direction - use idWeapon::GetTriggerMode())
    weaponTriggerMode_t triggerMode; // Offset: 0x7E8

    // if a weapon has secondary fire, specify it here
    idDeclWeapon* secondaryFireDecl; // Offset: 0x7F0

    // if true then weapon will make a dryfire sound with insufficient ammo instead of entering the fire mode
    bool forbidFireModeWithInsufficientAmmo; // Offset: 0x7F8

    // if true then weapon will not switch firemodes if a fire is pending
    bool maintainFireModeIfFirePending; // Offset: 0x7F9

    // allows weapons that have usesAmmo = false to still appear empty when weapon is empty
    bool useOtherFireModeLoadedAppearance; // Offset: 0x7FA

    // ammo decl which defines the initial amount of ammo
    idDeclAmmo* initialAmmoDecl; // Offset: 0x800

    // types of ammo this weapon can use
    idList < idDeclWeapon::ammoClip , TAG_IDLIST , false > validAmmoClips; // Offset: 0x808

    // parameter containing ammo percent (0-1)
    idSoundRTPC* ammoPercentRTPCparam; // Offset: 0x820

    // DEPRECATED: if true won't fill out fire flags until the weapon is done transitioning ( switching from one weapon to another )
    bool skipSecondaryPressUpdateOnTransition; // Offset: 0x828

    // general charge projectile support
    idDeclWeapon::chargeProjectile_t chargeProjectile; // Offset: 0x830

    // fire bonus projectiles at specific shot counts since firing began
    idDeclWeapon::projectilesAtShotCount_t projectilesAtShotCount; // Offset: 0x898

    // if non-NULL, alternative entity def to use for the weapon (otherwise uses the default)
    idDeclEntityDef* weaponEntityDef; // Offset: 0x8B8

    // This weapon has infinite ammo.
    bool infiniteAmmo; // Offset: 0x8C0

    // This weapon only has ammo in clip. ( no reserve )
    bool noAmmoCache; // Offset: 0x8C1

    // If true, this weapon will not display low or out of ammo warnings on the HUD.
    bool hideAmmoWarnings; // Offset: 0x8C2

    // If an ammo count is not defined or 0, we can start empty ( and be given ammo later ).
    bool canStartEmpty; // Offset: 0x8C3

    // kill to crit only enabled when enemy killed with primary fire
    bool killToCritRequiresPrimaryKill; // Offset: 0x8C4

    // force weapon to use a specific fireMode when targeting is LOCKED
    bool forceFireModeWhenLocked; // Offset: 0x8C5

    // never use deferred firing for local player
    bool neverUseDeferredForLocal; // Offset: 0x8C6

    // stat used to associate this weapon with a particular damage decl
    gameStat_t killStat; // Offset: 0x8C8

    // stat used to associate this weapon MOD with a particular damage decl
    gameStat_t killStatMod; // Offset: 0x8CC

    // Amount that gaining a mod counts towards competing the weapon;
    float modCompletionScale; // Offset: 0x8D0

    // Use this when we want to scale the players speed based on a Arsenal upgrade
    float modSpeedScale; // Offset: 0x8D4

    // weapon supercharge info
    idDeclWeapon::weaponSuperchargeInfo_t superchargeInfo; // Offset: 0x8D8

    // heat info
    idDeclWeapon::heatInfo_t heatInfo; // Offset: 0x930

    // for melee-only weapons
    bool meleeFromFireInput; // Offset: 0x9B8

    // for melee-only weapons 2.0
    bool fireFromMeleeInput; // Offset: 0x9B9

    // melee off melee input
    bool meleeFromMeleeInput; // Offset: 0x9BA

    // go into the shoot state from melee instead of idle
    bool meleeToShootState; // Offset: 0x9BB

    // right then left then right, etc.
    bool meleeAlternating; // Offset: 0x9BC

    // left trigger for left punch, right trigger for right punch
    bool meleeLTRT; // Offset: 0x9BD

    // __defintweaponSlot; which weapon slot does this occupy FIXME DOOM4 HANDS (need to hook this up for Doom4 weapons) weapons are grouped on the number keys for easy selection
    idDeclWeapon::weaponSelectionGroup_t weaponSelectionGroup; // Offset: 0x9C0

    // weapons are selected in increasing order of their slot values
    idDeclWeapon::weaponSelectionGroupSlot_t weaponSelectionGroupSlot; // Offset: 0x9C4

    // recoil direction;
    idAngles recoilAngles; // Offset: 0x9C8

    // minimum time interval between firing a shot (in ms, for all machinegun weapons)
    milliToGameTime_t firingInterval; // Offset: 0x9D8

    // draw a debug bar when weapon is waiting, during firing interval
    bool firingIntervalShowsDebugBar; // Offset: 0x9E8

    // if true, then ae_fireWeaponRightPrimaryOnly will be processed in secondary fire mode instead of ignored
    bool ignoreFireWeaponRightPrimaryOnly; // Offset: 0x9E9

    // draw a debug bar when weapon is waiting to fire
    bool fireDelayShowsDebugBar; // Offset: 0x9EA

    // how long should the pre-shot charge anim play
    milliToGameTime_t shotChargeDuration; // Offset: 0x9F0

    // firing interval to use between different fire modes
    milliToGameTime_t otherFireModeFiringInterval; // Offset: 0xA00

    // Does this weapon alternate fire between itself an another weapon in its group? FIXME DOOM4 HANDS (not used by Doom4 weapons)
    bool alternatingFire; // Offset: 0xA10

    // random time (in MS) added to firing interval FIXME DOOM4 HANDS (not used by Doom4 weapons)
    milliToGameTime_t addedFiringInterval; // Offset: 0xA18

    // time this weapon takes to spin up prior to the first shot, after each trigger pull
    milliToGameTime_t spinUpTime; // Offset: 0xA28

    // crosshair visual for this weapon
    idStaticModel* crosshairModel; // Offset: 0xA38

    // burst mode this weapon starts in
    burstMode_t initialBurstMode; // Offset: 0xA40

    // the data for the different burst modes
    burstInfo_t burstInfo[4]; // Offset: 0xA48

    // if true, animations will have the current ammo's internal name appended to anim web
    bool postfixAmmo; // Offset: 0xB88

    // if non-zero, rotates muzzle axis horizontally by this amount
    float fireAxisHorizRotationAngles; // Offset: 0xB8C

    // if true, this weapon will always use the muzzle as the fire axis, instead of using the view to crosshair direction.
    bool useMuzzleAsFireAxis; // Offset: 0xB90

    // if true, determine fire axis by tracing from muzzle fire pos to crosshair intersection with world
    bool traceMuzzleToCrosshairForFireAxis; // Offset: 0xB91

    // if true, this weapon will always use the primary fire button to fire.
    bool usePrimaryFireButton; // Offset: 0xB92

    // allows weapon to view AR target points
    bool canViewARTargets; // Offset: 0xB93

    // if true, targets friendlies instead of hostiles.
    bool targetsFriendlies; // Offset: 0xB94

    // if true, targets holograms as well as players.
    bool targetsHolograms; // Offset: 0xB95

    // inform the target when our state transitions to TARGET_ACQUIRING, TARGET_LOCKED, and TARGET_NONE
    bool informTargetLock; // Offset: 0xB96

    // Don't display Weapon Status for this weapon.
    bool noWeaponStatus; // Offset: 0xB97

    // don't display perkSwitcher for this weapon
    bool noPerkSwitcher; // Offset: 0xB98

    // true if the weapon has an intro bringup to play on the first bringup of the weapon
    bool hasIntroBringup; // Offset: 0xB99

    // true if the weapon has an intro accent bringup to play on the first bringup of the weapon
    bool hasIntroAccentBringup; // Offset: 0xB9A

    // true if the weapon has an 'empty' bringup that includes a reload animation (i.e. zipline gun)
    bool hasReloadBringup; // Offset: 0xB9B

    // how long the bringup on this weapon should take, in milliseconds, or 0 to use the animation duration (player)
    milliToGameTime_t desiredBringupDurationMS; // Offset: 0xBA0

    // how long the bringdown on this weapon should take, in milliseconds, or 0 to use the animation duration (player)
    milliToGameTime_t desiredBringdownDurationMS; // Offset: 0xBB0

    // how long the reload on this weapon should take, in milliseconds, or 0 to use the animation duration (player)
    milliToGameTime_t desiredReloadDurationMS; // Offset: 0xBC0

    // (0-1) chance of playing a weapon flourish anim upon full-body gibbing an enemy
    float fullBodyGibFlourishAnimChance; // Offset: 0xBD0

    // override the default start fire FX condition if a wound is active
    idDeclWeapon::woundFXConditionOverrides_t woundFXConditionOverrides; // Offset: 0xBD8

    // The basic on/off flags which control weapon behavior disables the ability to fire weapon through normal hand / weapon code flow (must be activated through a special means)
    bool disableNormalFiring; // Offset: 0xBE8

    // can this weapon take a quick slot
    bool canBeSlotted; // Offset: 0xBE9

    // player is allowed to select weapon
    bool selectable; // Offset: 0xBEA

    // weapon can be auto-selected to when current weapon runs out of ammo
    bool autoSelectable; // Offset: 0xBEB

    // if true then quickswap will remember the weapon so that it can be quick-swapped back in
    bool quickSwapRemember; // Offset: 0xBEC

    // doomblade equips silently without a formal select leading to a bringup handsaction
    bool equipsWithoutSelect; // Offset: 0xBED

    // don't test this fire mode when out of ammo
    bool ignoreForAutoSwitchOnEmpty; // Offset: 0xBEE

    // don't auto switch on empty for a secondary dry fire (e.g. meathook)
    bool ignoreEmptyAutoSwitchForSecondaryDryFire; // Offset: 0xBEF

    // doommp: player can hold 2 normal weapons + 1 special weapon. special weapon destroys itself when out of ammo.
    bool specialWeapon; // Offset: 0xBF0

    // true if snap fist
    bool snapFist; // Offset: 0xBF1

    // Ammo remaining needs to be greater than or equal to this in order to drop a pickup in MP
    int dropAmmoThreshold; // Offset: 0xBF4

    // Not allowed to switch from weapon. ( usually goes with removeOnUnequipt )
    bool cantSwitchFrom; // Offset: 0xBF8

    // true if the weapon counts toward the weapon limit
    bool countsTowardWeaponLimit; // Offset: 0xBF9

    // true if the weapon counts toward the melee weapon limit
    bool countsTowardMeleeWeaponLimit; // Offset: 0xBFA

    // true if the weapon fires silently ( well... nearly silently )
    bool silenced; // Offset: 0xBFB

    // true if the wielder should aim at the head even when the chest is visible FIXME DOOM4 HANDS (not used by Doom4 weapons)
    bool preferAimAtHead; // Offset: 0xBFC

    // alpha of 3rd person additive fire animation (player only) FIXME DOOM4 HANDS (not used by Doom4 weapons)
    float thirdPersonFireAnimAlpha; // Offset: 0xC00

    // whether this weapon only allows single tap firing ( You can only fire the weapon when tapping the button )
    bool singleTapFire; // Offset: 0xC04

    // whether this weapon only allows single tap firing in ADS mode ( You can only fire the weapon when tapping the button )
    bool singleTapFireADS; // Offset: 0xC05

    // firing the weapon will break the reload animation.
    bool fireBreaksReload; // Offset: 0xC06

    // alt-firing the weapon will break the reload animation.
    bool altfireBreaksReload; // Offset: 0xC07

    // allow altfire the same melee interruptibility as melee
    bool altfireMeleeInterruptibility; // Offset: 0xC08

    // allows the weapon's fireNeedsRelease flag to be unset before the weapon is ready to fire again
    bool allowShotQueueing; // Offset: 0xC09

    // if true, then allow interruptions after FinishedFireInternal, which is generally after firing but before the reloading for shotguns
    bool interruptibleAtFireFinished; // Offset: 0xC0A

    // enables projectile trajectory display
    bool displayProjectileTrajectory; // Offset: 0xC0B

    // flag that denotes that weapon may only be fired when it is zoomed
    bool canOnlyFireWhenZoomed; // Offset: 0xC0C

    // true if this weapon should predict hits client-side
    bool predictHit; // Offset: 0xC0D

    // special case: does this weapon deactivate the chaingun shield on equip (or is it a temporary equip like melee)
    bool deactivatesShieldOnEquip; // Offset: 0xC0E

    // true if this weapon explodes all projectiles on alt fire.
    bool explodeProjectilesOnAltFire; // Offset: 0xC0F

    // true if this weapon explodes all projectiles on alt fire release
    bool explodeProjectilesOnAltFireRelease; // Offset: 0xC10

    // instead of registering the demon player as the md6 for the client weapon use the seperate md6 like normal player weapons
    bool demonUsesMD6ForClientWeaponEntity; // Offset: 0xC11

    // time (in MS) between firing a projectile, and being able to alt-fire to detonate it
    milliToGameTime_t explodeProjectilesAltFireDelay; // Offset: 0xC18

    // sound to play when exploding projectiles with alt fire.
    idSoundEvent* explodeProjectilesAltFireSound; // Offset: 0xC28

    // additive animation to play on the hands when projectiles are exploded
    idAtomicHandleT < aliasRefType_t > explodeProjectilesAdditiveHandsAnim; // Offset: 0xC30

    // additive animation to play on the weapon when projectiles are exploded
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > explodeProjectilesAdditiveWeaponAnim; // Offset: 0xC38

    // maximum number of explodable projectiles that can be active at once, or 0 for unlimited
    int explodeProjectilesMaxNum; // Offset: 0xC3C

    // sound to play when a projectile cannot be launched because the max number has been reached
    idSoundEvent* explodeProjectilesExceededMaxSound; // Offset: 0xC40

    // sound to play when attempting to explode projectiles while none are in the air
    idSoundEvent* explodeProjectilesDenialSound; // Offset: 0xC48

    // sound to play when exploding projectiles are scheduled to be exploded after a delay
    idSoundEvent* explodeProjectilesScheduledSound; // Offset: 0xC50

    // displays a debug bar for this item with chargePercent and chargeItem value
    bool explodeProjectilesShowDebugBar; // Offset: 0xC58

    // if nonzero then explode projectiles automatically at the end of the burst after this delay
    milliToGameTime_t explodeProjectilesAutomaticallyDelay; // Offset: 0xC60

    // MS delay after requesting explosion before explosion occurs
    int explodeProjectilesDetonationDelayMS; // Offset: 0xC70

    // how many times can the projectile be detonated and continue flying, or -1 for unlimited
    int explodeProjectilesBoostTimes; // Offset: 0xC74

    // how many times can the projectile be detonated before it dies
    int explodeProjectilesDetonateTimes; // Offset: 0xC78

    // Basic flags which control the animation capabilities has a reload 'out' animation
    bool hasReloadOut; // Offset: 0xC7C

    // has a special reload animation for reloads when empty
    bool hasReloadFromEmpty; // Offset: 0xC7D

    // has a special reload 'out' animation for reloads when empty for multiple reload weapons only
    bool hasReloadOutFromEmpty; // Offset: 0xC7E

    // has a special reload double animation
    bool hasReloadDouble; // Offset: 0xC7F

    // has a cosmetic reload that should be played when going from no ammo to having ammo
    bool hasReloadCosmetic; // Offset: 0xC80

    // if true, the weapon has last shot anims ( different sound .. or different model setup once empty .. )
    bool hasLastShotAnims; // Offset: 0xC81

    // if true the weapon has an alternate shoot state called "alt_shoot"
    bool hasAltShoot; // Offset: 0xC82

    // if true the weapon has an additional shoot state called "shoot_again"
    bool hasShootAgainState; // Offset: 0xC83

    // has a looping shoot state
    bool hasLoopingShootState; // Offset: 0xC84

    // has a dedicated charge idle state with charge fire and dryfire anims
    bool hasChargeState; // Offset: 0xC85

    // charge state has an additional shoot state called "charge_shoot_again"
    bool hasChargeShootAgainState; // Offset: 0xC86

    // if true then has a state "charge_out_from_charge_into"
    bool hasChargeOutFromChargeIntoState; // Offset: 0xC87

    // charge state anim alias name
    idAtomicString chargeIntoStateName; // Offset: 0xC88

    // charge charge anim alias name
    idAtomicString chargeChargeStateName; // Offset: 0xC90

    // charge shoot anim alias name
    idAtomicString chargeShootStateName; // Offset: 0xC98

    // charge out anim alias name
    idAtomicString chargeOutStateName; // Offset: 0xCA0

    // charge shoot to charge idle anim alias name
    idAtomicString chargeShootToChargeIdleStateName; // Offset: 0xCA8

    // if true then a charging weapon will not be forced out of the charge state if that is the desired state
    bool canUseChargeStateWhenNotCharging; // Offset: 0xCB0

    // if true then a charging weapon will not be forced out of the charge state if it is in its charge timeout period
    bool canUseChargeStateDuringChargeTimeout; // Offset: 0xCB1

    // if true then a charging weapon will not be forced out of the charge state if it is in its charge discharge period
    bool canUseChargeStateDuringDischargeTimeout; // Offset: 0xCB2

    // has a shoot_charge state sequenced before the shoot or shootstate
    bool hasPreShootCharge; // Offset: 0xCB3

    // desired duration in MS of pre-shoot charge anim, or 0 to play at unscaled rate
    milliToGameTime_t preShootChargeDurationMS; // Offset: 0xCB8

    // feedback to play when charging for the shoot
    weaponFeedBack_t preShootChargeWeaponFeedback; // Offset: 0xCC8

    // if true, alternates barrels when it fires
    bool hasShootAlternatingBarrels; // Offset: 0xEE0

    // if true, releasing the trigger before the shot is charged will not fire, false it fires either way
    bool chargedShotHold; // Offset: 0xEE1

    // if true, ignore the firing interval for restricting weapon fire (firing interval can still be used to scale animation)
    bool ignoreFiringInterval; // Offset: 0xEE2

    // specify an override shoot state here
    idAtomicString overrideShootState; // Offset: 0xEE8

    // goes with overrideShootState, this specifies the state where the shooting starts.
    idAtomicString overrideShootStartState; // Offset: 0xEF0

    // override shoot state for the last shot before empty
    idAtomicString overrideShootLastState; // Offset: 0xEF8

    // force the state change to overrideShootStartStateStart if in the middle of transitioning
    bool overrideShootStateForce; // Offset: 0xF00

    // this many normal shots after the override before the override again
    int overrideShootThenThisManyNormalShots; // Offset: 0xF04

    // firingInterval to use after an override shoot
    milliToGameTime_t overrideShootStateFiringInterval; // Offset: 0xF08

    // specify an override reloadFromEmpty state here
    idAtomicString overrideReloadFromEmptyState; // Offset: 0xF18

    // how many shots are fired in one loop of the looping shoot anim
    int shotsPerLoopingShootAnim; // Offset: 0xF20

    // how many shots are fired in one play of the shoot anim
    int shotsPerShootAnim; // Offset: 0xF24

    // it's automatic for looping shoot anims - this is for non-looping shoot anims and it's false by default
    bool scaleShootAnimToFiringInterval; // Offset: 0xF28

    // if true, the weapon has a special shooting anim that immediately plays the reload animation without having to go to idle
    bool hasShootToReloadAnims; // Offset: 0xF29

    // most weapons have one-off dryfire anims, but the chaingun has a looping dryfire state to allow the hands/gun to jiggle and counterrotate while the cylinder spins
    bool hasLoopingDryfireState; // Offset: 0xF2A

    // false by default, if true then allow shoot when hidden
    bool allowShootWhenHidden; // Offset: 0xF2B

    // go to idle empty handed after shooting.
    bool shootToIdleAlt; // Offset: 0xF2C

    // type of attack sequence to use
    idDeclWeapon::attackSequence_t attackSequence; // Offset: 0xF30

    // attack type to initialize the weapon to
    idDeclWeapon::attack_t initialAttackType; // Offset: 0xF34

    // if multiple projectiles are triggered from a single fire, this allows the attack sequence to be updated per-projectile rather than per-fire
    bool updateAttackSequencePerProjectile; // Offset: 0xF38

    // hand movement
    idDeclWeapon::handMovement_t handLag; // Offset: 0xF3C

    // hand rotation
    idDeclWeapon::handMovement_t handRotation; // Offset: 0xF4C

    // AI specific settings (or related to AI)
    idDeclWeapon::aiInfo_t aiInfo; // Offset: 0xF60

    // type of weapon (mainly used for determining animation set to use while holding the weapon)
    playerWeaponAnimSet_t weaponAnimSet; // Offset: 0x1080

    // does this weapon allow locking at all FIXME DOOM4 HANDS (not used by Doom4 weapons)
    bool allowLock; // Offset: 0x1084

    // range at which weapon can lock-on to enemy targets {{ units = m }}
    float lockOnRange; // Offset: 0x1088

    // range at which weapon unlocks from enemy targets {{ units = m }}
    float unlockRange; // Offset: 0x108C

    // width of locking cone FIXME DOOM4 HANDS (not used by Doom4 weapons)
    float lockAngle; // Offset: 0x1090

    // max yaw before unlock occurs FIXME DOOM4 HANDS (not used by Doom4 weapons)
    float unlockYaw; // Offset: 0x1094

    // max pitch before unlock occurs FIXME DOOM4 HANDS (not used by Doom4 weapons)
    float unlockPitch; // Offset: 0x1098

    // time (in MS) between pressing fire and having the shot/projectile launched (randomized up to this max time) FIXME DOOM4 HANDS (not used by Doom4 weapons)
    milliToGameTime_t maxLaunchDelayTime; // Offset: 0x10A0

    // If true, allow scaling of the shoot delay animation
    bool allowShootDelayScaling; // Offset: 0x10B0

    // shoot anim alias name (usually 'shoot' )
    idAnimAliasRef shootAnimAliasName; // Offset: 0x10B8

    // shoot_delay anim alias name (usually 'shoot_delay' )
    idAtomicString shootDelayAnimAliasName; // Offset: 0x10E8

    // shoot_delay anim alias name (usually 'shoot_delay_to_idle' )
    idAtomicString shootDelayToIdleAnimAliasName; // Offset: 0x10F0

    // if nonzero then scale shoot delay to this duration
    milliToGameTime_t shootDelayDurationMS; // Offset: 0x10F8

    // if shootDelay anim is scaled for any reason, this allows that scale to be cleared for the shoot_delay back to idle
    bool clearShootDelayScaleWhenFiringEnds; // Offset: 0x1108

    // cover system variables a lag scale value to apply to the cover system movements, to allow weapons to move faster or slower if desired
    float coverBehaviorLagScale; // Offset: 0x110C

    // if not NULL, this weapon can be used in close-range melee situations... and this is the projectile to use
    idDeclProjectile* meleeProjectile; // Offset: 0x1110

    // and for an edged melee weapon, this is the projectile for SLASH attacks can override meleeProjectile for slash melee
    idDeclProjectile* meleeSlashProjectile; // Offset: 0x1118

    // the melee projectile to use for sprint melee if NULL default back to meleeProjectile
    idDeclProjectile* meleeSprintProjectile; // Offset: 0x1120

    // the melee projectile to use for one hit killing players from behind.
    idDeclProjectile* meleeOneHitKillProjectile; // Offset: 0x1128

    // if a weapon uses both staged and directional melee, use this decl for the directional melee
    idDeclProjectile* meleeDirectionalProjectile; // Offset: 0x1130

    // how many units to offset the melee traces by {{ units = m }}
    float meleeTraceOffset; // Offset: 0x1138

    // if not NULL, this is the decl to use for alt-melee
    idDeclProjectile* altMeleeProjectile; // Offset: 0x1140

    // bound type for melee trace
    meleeBounds_t meleeTraceBoundsType; // Offset: 0x1148

    // damage type for melee trace
    meleeDamage_t meleeTraceDamageType; // Offset: 0x114C

    // damage cap for melee trace, or 0 for no cap
    float meleeTraceDamageCap; // Offset: 0x1150

    // frequency with which damage can be given to target
    milliToGameTime_t meleeTraceDamageIntervalMS; // Offset: 0x1158

    // frequency with which damage can be given to the world (or -1 to use meleeTraceDamageIntervalMS)
    milliToGameTime_t meleeTraceDamageIntervalWorldMS; // Offset: 0x1168

    // allow immediate transition to next melee attack in sequence after a hit is detected
    bool meleeImmediateTransition; // Offset: 0x1178

    // target lock data for normal fire
    idWeaponTargetLockData_t targetLockNormal; // Offset: 0x1180

    // target lock data for zoomed fire
    idWeaponTargetLockData_t targetLockZoomed; // Offset: 0x12D0

    // data that describes any collapsible bullet joints or hideable meshes
    idShowHideBulletData_t showHideBulletData; // Offset: 0x1420

    // additive weapon jolt data for playing cosmetic additive jolt anims at various times
    idWeaponJoltData_t weaponJoltData; // Offset: 0x1478

    // empty pose for weapon to use
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > weaponEmptyAnim; // Offset: 0x1494

    // override for hands bob cycle
    idDeclHandsBobCycle* handsBobCycle; // Offset: 0x1498

    // subweb to use for additive hands hit reactions
    idAtomicString handsHitReactionSubweb; // Offset: 0x14A0

    // subweb name in the hands animweb for normal use of this weapon
    idAtomicString subweb_normal; // Offset: 0x14A8

    // additive offset animation for non-zoomed use to modify hands / weapon position
    idAtomicHandleT < aliasRefType_t > additiveOffsetAnim; // Offset: 0x14B0

    // additive offset animation for zoomed-use to modify hands / weapon position
    idAtomicHandleT < aliasRefType_t > additiveOffsetZoomAnim; // Offset: 0x14B8

    // additive offset animation for zoomed-use to modify hands / weapon position in classic mode
    idAtomicHandleT < aliasRefType_t > additiveOffsetZoomAnim_Classic; // Offset: 0x14C0

    // additive offset animation for melee and grenade throw use to modify hands / weapon position
    idAtomicHandleT < aliasRefType_t > additiveOffsetMeleeAnim; // Offset: 0x14C8

    // if not -1, use this blend time into or out of this pose
    milliToGameTime_t additiveOffsetMeleeAnimBlendMS; // Offset: 0x14D0

    // additive offset animation for use when the weapon is empty
    idAtomicHandleT < aliasRefType_t > additiveOffsetEmptyAnim; // Offset: 0x14E0

    // if this weapon is summoned, player loses this % of ammo on respawn.
    float summonedAmmoLostOnRespawn; // Offset: 0x14E8

    // indicates whether to override or not
    bool overrideSupermeterUsageModifiers; // Offset: 0x14EC

    // data related to the additive hands anims
    idDeclWeapon::idHandsAdditiveAnimData_t handsAdditiveAnimData; // Offset: 0x14F0

    // additional translational offset to position the gun {{ units = m }}
    idVec3 handsOffset; // Offset: 0x1500

    // additional rotational offset to position the gun
    idAngles handsOffsetAngles; // Offset: 0x150C

    // The data associated with this weapon.
    idDeclWeapon_Data* weaponData; // Offset: 0x1518

    // any mastery info goes here
    idWeaponMastery weaponMastery; // Offset: 0x1520

    // ------------------------ default shown and hidden meshes ------------------------ hide / show meshes defined in showHideMeshInfo when entity is spawned
    bool showHideMeshesOnSpawn; // Offset: 0x15E8

    // meshes to show/hide by default for the 1st person model
    idMD6Util::meshShowHideInfo_t showHideMeshInfo; // Offset: 0x15F0

    // meshes to show/hide by default for the 3rd person model
    idMD6Util::meshShowHideInfo_t showHideMeshInfo3rd; // Offset: 0x1628

    // meshes to show/hide by default for the player hands
    idMD6Util::meshShowHideInfo_t showHideMeshHands; // Offset: 0x1660

    // meshes kit to show/hide by default for the player hands
    idAtomicString showHideMeshKitStr; // Offset: 0x1698

    // ------------------------ Used by ThirdPersonCrosshair ------------------------ weapon rotation limit for hands auto lock
    idAngles minHandAngles; // Offset: 0x16A0

    // weapon rotation limit for hands auto lock
    idAngles maxHandAngles; // Offset: 0x16AC

    // lock before firing (fire on trigger release)
    bool lockingFire; // Offset: 0x16B8

    // use auto locking when this weapon is active
    bool autoLock; // Offset: 0x16B9

    // sound played while acquiring the target
    idSoundEvent* acquiringSound; // Offset: 0x16C0

    // every x ms
    milliToGameTime_t acquireLoop; // Offset: 0x16C8

    // sound played when target is locked
    idSoundEvent* lockedSound; // Offset: 0x16D8

    // how long to keep the target within range to get a lock on it
    milliToGameTime_t lockTime; // Offset: 0x16E0

    // crosshair becomes locked
    idSoundEvent* lockOn; // Offset: 0x16F0

    // crosshair becomes unlocked
    idSoundEvent* lockOff; // Offset: 0x16F8

    // ------------------------ Scope / Zoom Variables ------------------------ parameters for zoom mode
    idDeclWeapon::zoomInfo_t ironSightZoom; // Offset: 0x1700

    // does this weapon support zoom (do not access directly - use idWeapon::GetZoomMode)
    idDeclWeapon::zoomMode_t zoomMode; // Offset: 0x1788

    // if true then weapon will make a dryfire sound and won't be allowed to zoom
    bool forbidZoomWithInsufficientAmmo; // Offset: 0x178C

    // if true, then prohibit zoom during discharge timeout
    bool forbidZoomIfCannotCharge; // Offset: 0x178D

    // if true, then prohibit zoom while overheated
    bool forbidZoomIfOverheated; // Offset: 0x178E

    // timeout on normal firing after sprinting
    milliToGameTime_t postSprintFirePenaltyMS; // Offset: 0x1790

    // timeout on ADS firing after sprinting
    milliToGameTime_t postSprintADSFirePenaltyMS; // Offset: 0x17A0

    // Should ads be allowed when airborne
    bool allowADSWhileJumping; // Offset: 0x17B0

    // ------------------------ Misc Sounds ------------------------ sound when zooming in
    idSoundEvent* zoomInSound; // Offset: 0x17B8

    // sound when zooming out
    idSoundEvent* zoomOutSound; // Offset: 0x17C0

    // plays when weapon has ammo, stops when fired, resumes when back to idle if still has ammo
    idSoundEvent* loadedSound; // Offset: 0x17C8

    // remote bfg charge up sound - usually from anim events we don't have on remote fires
    idSoundEvent* bfgRemotePreChargeSound; // Offset: 0x17D0

    // ------------------------ Spread-affecting variables ------------------------ the variables that affect the spread of fire for a weapon
    idDeclWeapon::spreadParams_t spreadParams; // Offset: 0x17D8

    // params for regular weapon feedback
    weaponFeedBack_t weaponFeedBack; // Offset: 0x1840

    // params for a 'large' weapon feedback that occurs with a configurable frequency
    weaponFeedBack_t weaponFeedBackLarge; // Offset: 0x1A58

    // chance, between 0 and 1, that a large feedback occurs (0 = never, 1 = always)
    float weaponFeedBackLargeChance; // Offset: 0x1C70

    // params for a weapon feedback during ADS
    weaponFeedBack_t weaponFeedBackADS; // Offset: 0x1C78

    // chance, between 0 and 1, that a large feedback occurs (0 = never, 1 = always)
    bool hasWeaponFeedBackADS; // Offset: 0x1E90

    // params for a 'large' weapon ADS feedback that occurs with a configurable frequency
    weaponFeedBack_t weaponFeedBackADSLarge; // Offset: 0x1E98

    // chance, between 0 and 1, that a large ADS feedback occurs (0 = never, 1 = always)
    float weaponFeedBackADSLargeChance; // Offset: 0x20B0

    // Radial Damage that happens when you fire.
    idDeclDamage* weaponFeedbackDamage; // Offset: 0x20B8

    // Don't allow weapon to be swapped out when recoiled.
    bool prohibitSwapWhileInFeedback; // Offset: 0x20C0

    // ------------------------ Fx ------------------------ provides the old behavior of resetting the fxManager and cancelling all FX whenever fireMode changes
    bool resetFXMgrWhenFireModeChanges; // Offset: 0x20C1

    // shell eject
    idDeclWeapon::shellEjectEmitter_t shellEmitter; // Offset: 0x20C8

    // weapon FX for AI and MP third person player model use, defaults to weaponFX if not set
    idDeclFX* thirdPersonWeaponFX; // Offset: 0x20E0

    // weapon FX to use for classic pose instead of idDeclInventory::weaponFX
    idDeclFX* weaponFXClassic; // Offset: 0x20E8

    // the ribbon effect that should play...
    idDeclRibbon2* ribbonEffect; // Offset: 0x20F0

    // the ribbon effect that plays if you have quad
    idDeclRibbon2* ribbonEffectQuad; // Offset: 0x20F8

    // how long the effect last in MS
    milliToGameTime_t ribbonLifeSpan; // Offset: 0x2100

    // ------------------------ zoom blur ------------------------ the blur parameters to apply when zooming
    idDeclWeapon::zoomBlur_t zoomBlur; // Offset: 0x2110

    // Aim sensitivity while firing
    float sensitivityWhileFiring; // Offset: 0x2124

    // Aim sensitivity while firing with a mouse
    float sensitivityWhileFiring_Mouse; // Offset: 0x2128

    // Aim Assist Parameters for this weapon
    idDeclAimAssist* declAimAssist; // Offset: 0x2130

    // Aim Assist parameters for this weapon when zoomed
    idDeclAimAssist* declAimAssistZoomed; // Offset: 0x2138

    // if not empty, uses this tag as the on-weapon display tag
    idAtomicString onWeaponTagStr; // Offset: 0x2140

    // if not empty, uses this tag as the on-weapon display tag when using classic weapon pose
    idAtomicString onWeaponTagStrClassic; // Offset: 0x2148

    // gui to display on weapon
    weaponGuiDisplay_t onWeaponDisplayType; // Offset: 0x2150

    // show the on-weapon display if zoomPct is less than or equal to this value
    float onWeaponDisplayMaxZoomPct; // Offset: 0x2154

    // Type of reticle to use for this weapon
    idDeclWeaponReticle* reticle; // Offset: 0x2158

    // When set, type of reticle to use for this weapon when it is zoomed.
    idDeclWeaponReticle* reticleWhenZoomed; // Offset: 0x2160

    // Type of reticle to use for this weapon when target is locked
    idDeclWeaponReticle* lockedReticle; // Offset: 0x2168

    // scale to apply to player speed when not zoomed
    float movementSpeedScale; // Offset: 0x2170

    // scale to apply to player speed when zoomed
    float movementSpeedScaleZoomed; // Offset: 0x2174

    // scale to apply to player speed when crouching
    float movementSpeedScaleCrouched; // Offset: 0x2178

    // a speed scale table that evolves starting from the time in milliseconds that this weapon became active
    idDeclTable* movementSpeedScaleVsMS; // Offset: 0x2180

    // scale to apply to player speed when firing
    float movementSpeedScaleFiring; // Offset: 0x2188

    // allows a weapon to scale gravity, or -1 to ignore
    float gravityScale; // Offset: 0x218C

    // minimum height off the ground to allow gravity scale to be used (applies to CHARGE_PROPERTY_GRAVITY_SCALE too)
    float minHeightToApplyGravityScale; // Offset: 0x2190

    // allows a weapon to set air friction, or -1 to ignore {{ units = 1 / s }}
    float airFriction; // Offset: 0x2194

    // allows a weapon to set air speed scale, or -1 to ignore
    float airSpeedScale; // Offset: 0x2198

    // allows a weapon to set double jump friction, or -1 to ignore {{ units = 1 / s }}
    float doubleJumpFriction; // Offset: 0x219C

    // allows z component of friction to be varied between none and full, or -1 to ignore
    int doubleJumpFrictionZScale; // Offset: 0x21A0

    // Allows generic MP upgrades (upgrades with no applicableWeapon specified)
    bool giveAllUpgradesOnEquip; // Offset: 0x21A4

    // Custom skins for the weapon. Used in MP
    idDeclSkins* customSkins; // Offset: 0x21A8

    // Custom skins index. Turned off by default.
    int customSkinIndex; // Offset: 0x21B0

    // used by SP for weapons that have ae_incremenetWeaponCustomSkinIndex anim events
    int numIncrementableSkins; // Offset: 0x21B4

    // used for the chainsaw to use progressively bloodier skins as it is used By convention the bloody skins will be first in the remaps and then there is a skin for weapon customization If the list is empty, nothing is applied. If there are names, only those surfaces are shown, has to be idStr or causes crashes with MP
    idList < idAtomicString , TAG_IDLIST , false > visibleSurfaces; // Offset: 0x21B8

    // information to procedurally rotate barrel
    idDeclWeapon::barrelSpinInfo_t barrelSpinInfo; // Offset: 0x21D0

    // stuff specific to laser beam-ish weapons
    idDeclWeapon::beamInfo_t beamInfo; // Offset: 0x2208

    // dossier display properties for the weapons
    idDeclWeapon::guiDisplayProps_t guiDisplay; // Offset: 0x2218

    // the cost to upgrade a mod, based on how many have already been upgraded (ie: 1st mod cost 1, 2nd costs 2, etc..)
    idList < int , TAG_IDLIST , false > modUpgradeCost; // Offset: 0x2260

    // icon to use in the arsenal / codex screen for the weapon
    idMaterial2* dossierIcon; // Offset: 0x2278

    // image to use in the arsenal / codex screen for the weapon
    idMaterial2* dossierImage; // Offset: 0x2280

    // string that describes the weapon
    idStrId weaponInfo; // Offset: 0x2288

    // string that describes the weapon
    idStrId weaponDescriptor1; // Offset: 0x228C

    // string that describes the weapon
    idStrId weaponDescriptor2; // Offset: 0x2290

    // string that describes the weapon
    idStrId weaponDescriptor3; // Offset: 0x2294

    // is allowed on the weapon wheel (may still show up in dossier
    bool isWeaponWheelAllowed; // Offset: 0x2298

    // Parameters controlling the weapon lag
    idDeclWeapon::weaponLag_t weaponLag; // Offset: 0x229C

    // Parameters controlling the weapon bob
    idDeclWeapon::weaponBob_t weaponBob; // Offset: 0x22B8

    // TODO: for ghost, all of these AI specific weapon properties should be clearly marked and grouped together ( they are being used by non-AI systems ). the high level categorization of this weapon. ( for AI ).
    idDeclWeapon::weaponCategory_t weaponCategory; // Offset: 0x230C

    // milestone for receiving a mastery.
    idDeclMilestone* mastered; // Offset: 0x2310

    // icon to use when showing this weapon in a callout notification
    idMaterial2* calloutIcon; // Offset: 0x2318

    // color to use when showing this weapon in a callout notification
    demonHudColor_t calloutColor; // Offset: 0x2320

}; // Size: 0x2328
