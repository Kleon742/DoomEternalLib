struct idWeapon : idInventoryItem
{
    enum fireState_t : int
    {
        FIRESTATE_IDLE = 0,
        FIRESTATE_FIRING = 1,
        FIRESTATE_DELAYED_FIRE = 2,
        FIRESTATE_RELOADING = 3,
        FIRESTATE_MAX = 4
    };

    enum triggerState_t : int
    {
        TRIGGERSTATE_PULLED = 0,
        TRIGGERSTATE_RELEASED = 1,
        TRIGGERSTATE_MAX = 2
    };

    enum shellEject_t : int
    {
        SHELL_EJECT_DEFAULT = 0,
        SHELL_EJECT_DEFAULT_2 = 1,
        SHELL_EJECT_LEFT = 2,
        SHELL_EJECT_RIGHT = 3,
        SHELL_EJECT_MAX = 4
    };

    enum chargeState_t : int
    {
        CHARGE_STATE_NONE = 0,
        CHARGE_STATE_READY = 1,
        CHARGE_STATE_CHARGING = 2,
        CHARGE_STATE_FULLY_CHARGED = 3,
        CHARGE_STATE_DISCHARGING = 4,
        CHARGE_STATE_COOLING = 5,
        CHARGE_STATE_SUSPENDED = 6
    };

    enum weaponTargetState_t : int
    {
        TARGET_INVALID = -1,
        TARGET_NONE = 0,
        TARGET_ACQUIRING = 1,
        TARGET_LOCKED = 2
    };

    enum joltType_t : int
    {
        JOLT_NONE = 0,
        JOLT_FOOTSTEP = 1,
        JOLT_LANDING = 2,
        JOLT_HIT_REACTION = 3
    };

    struct barrelSpinRuntimeInfo_t
    {
        idArray < idIndex < short , invalidJointIndex_t , - 1 > , 2 > barrelJoints; // Offset: 0x0

        float currentRate; // Offset: 0x4

        float currentRotation; // Offset: 0x8

    }; // Size: 0xC

    struct superchargeParms_t
    {
        idDeclWeapon* weaponDecl; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponDuration; // Offset: 0x8

        int weaponNumShots; // Offset: 0x10

        idDeclAmmo* ammoDecl; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > ammoDuration; // Offset: 0x20

        int ammoNumShots; // Offset: 0x28

        // max value of num shots or duration in milliseconds
        int superchargeMax; // Offset: 0x2C

        weaponFireMode_t fireMode; // Offset: 0x30

        bool superchargeFXActive; // Offset: 0x34

    }; // Size: 0x38

    struct weaponSubWebInfo_t
    {
        // subweb index for this weapon
        idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > subWebIndex; // Offset: 0x0

        // code so we recognize them separately here as well to
        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > overrideShootStateStateIndex; // Offset: 0x2

        // avoid accidentally breaking something
        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > overrideShootStartStateStateIndex; // Offset: 0x4

        // avoid accidentally breaking something
        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > overrideShootLastStateStateIndex; // Offset: 0x6

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > overrideReloadFromEmptyStateIndex; // Offset: 0x8

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > ironSightZoomShootStateStateIndex; // Offset: 0xA

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > burstInfoBurstShootStateIndices[4]; // Offset: 0xC

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > burstInfoBurstShootAgainStateIndices[4]; // Offset: 0x14

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > burstInfoLastShotStateIndices[4]; // Offset: 0x1C

    }; // Size: 0x24

    struct targetScoringDebug_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        float fovScore; // Offset: 0x20

        float distanceScore; // Offset: 0x24

        float totalScore; // Offset: 0x28

    }; // Size: 0x30

    struct perkChargeSaveParms_t
    {
        float chargePercent; // Offset: 0x0

        float chargePerShotChargeVal; // Offset: 0x4

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingChargeAdditiveAnim; // Offset: 0x8

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingChargeAdditiveAnim2; // Offset: 0xA

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingDischargeAdditiveAnim; // Offset: 0xC

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnimToPlay; // Offset: 0xE

        bool dischargeAdditiveAnimsReversed; // Offset: 0x10

        float dischargeAdditiveAnimRate; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dischargeAdditiveAnimStartTime; // Offset: 0x18

        float dischargeAdditiveAnimStartNormalizedFrame; // Offset: 0x20

        // saved so that anim position will be correctly adjusted for time when restored
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dischargeTimeoutStartTime; // Offset: 0x28

        float dischargeTimeoutRate; // Offset: 0x30

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingDischargeAdditiveAnim2; // Offset: 0x34

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnim2ToPlay; // Offset: 0x36

        float dischargeAdditiveAnim2Rate; // Offset: 0x38

        float dischargeAdditiveAnim2StartNormalizedFrame; // Offset: 0x3C

        // saved so that anim position will be correctly adjusted for time when restored
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > canChargeTime; // Offset: 0x40

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingCooldownAdditiveAnim; // Offset: 0x48

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > cooldownAdditiveAnimToPlay; // Offset: 0x4A

        bool cooldownAdditiveAnimReversed; // Offset: 0x4C

        int savedFrame; // Offset: 0x50

        int restoredFrame; // Offset: 0x54

    }; // Size: 0x58

    struct breakablePieceEmitterSpawner_t
    {
        int index; // Offset: 0x0

        idDeclEntityDef* breakableEmitter; // Offset: 0x8

    }; // Size: 0x10

    struct idWeaponNetSyncData
    {
        float chargePercent; // Offset: 0x0

        bool zoomed; // Offset: 0x4

    }; // Size: 0x8

    struct chargePropertyOverride_t
    {
        // which property is being overridden
        idDeclWeapon::chargeProperty_t chargeProperty; // Offset: 0x0

        // override value for min charge value
        float valueMin; // Offset: 0x4

        // override value for max charge value
        float valueMax; // Offset: 0x8

        // override value for charge table
        idDeclTable* valueTable; // Offset: 0x10

        // controls whether the table is interpreted literally or the output is used to lerp between valueTableLerp0 and valueTableLerp1
        bool valueTableLerpActive; // Offset: 0x18

        // table values from 0 to 1 will lerp between valueTableLerp0, valueTableLerp1
        float valueTableLerp0; // Offset: 0x1C

        // table values from 0 to 1 will lerp between valueTableLerp0, valueTableLerp1
        float valueTableLerp1; // Offset: 0x20

        // splash damage to trigger at each whole integer level of the charge item value
        idDeclDamage* intervalAOESplashDamage; // Offset: 0x28

        // enable the interval give items for this chargeItem
        int enableIntervalGiveItems; // Offset: 0x30

        // overrides chargeItem.valuesAtShotCountMaxIndex;
        int valuesAtShotCountMaxIndex; // Offset: 0x34

        // override shot counts for this charge property
        idList < int , TAG_IDLIST , false > shotCounts; // Offset: 0x38

    }; // Size: 0x50

    struct idShowHideBullet_t
    {
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x0

        bool collapsed; // Offset: 0x2

        int meshIndex; // Offset: 0x4

    }; // Size: 0x8

    struct idShowHideBulletParms_t
    {
        // store this so we know when to update things
        int ammoCount; // Offset: 0x0

        idList < idWeapon::idShowHideBullet_t , TAG_IDLIST , false > showHideBullets; // Offset: 0x8

    }; // Size: 0x20

    struct launchedProjectile_t
    {
        idManagedClassPtr < idProjectile > projectile; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > explodeTime; // Offset: 0x20

        // the chargeParms.chargeCount at the time projectile was fired
        int chargeId; // Offset: 0x28

    }; // Size: 0x30

    struct chargeProjectileData_t
    {
        // for weapons that have the ability to charge a projectile and use charge level to index into the
        int chargeLevel; // Offset: 0x0

        // chargeProjectiles list in idDeclWeapon (subtract one to index) for CPC_SHOT_INTERVAL, tracks the current number of shots
        int valueTracker; // Offset: 0x4

    }; // Size: 0x8

    struct animatedSpinnyThingData_t
    {
        float degs; // Offset: 0x0

        float degsPerSecond; // Offset: 0x4

        // stores the target degs to rotate to
        float targetDegs; // Offset: 0x8

        // true if using target degs
        bool usingTargetDegs; // Offset: 0xC

        // schedule a start if a delay was requested
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x10

        idDeclWeapon::animatedSpinnyThing_t::mode_t mode; // Offset: 0x18

        float startDegs; // Offset: 0x1C

        // cached values
        bool hasCachedValues; // Offset: 0x20

        float degsCached; // Offset: 0x24

        float degsPerSecondCached; // Offset: 0x28

        float targetDegsDeltaCached; // Offset: 0x2C

        bool usingTargetDegsCached; // Offset: 0x30

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTimeCached; // Offset: 0x38

        idDeclWeapon::animatedSpinnyThing_t::mode_t modeCached; // Offset: 0x40

        bool forceStartDegsCached; // Offset: 0x44

        float startDegsCached; // Offset: 0x48

        idSoundEvent* playingRTPCSoundCached; // Offset: 0x50

    }; // Size: 0x58

    struct weaponTargeting_t
    {
        // targeting is allowed
        bool active; // Offset: 0x0

        // the current target
        idManagedClassPtr < idEntity > lockedTarget; // Offset: 0x8

        idIndex < short , invalidJointIndex_t , - 1 > lockedTargetJointIndex; // Offset: 0x28

        idManagedClassPtr < idEntity > lockTargetCandidate; // Offset: 0x30

        // index of targeted joint
        idIndex < short , invalidJointIndex_t , - 1 > lockTargetCandidateJointIndex; // Offset: 0x50

        // FIXME: These should be moved out of weaponTargeting_t. The code that references this always uses targeting[ 0 ] so there's no point in each target system to have a list of all locked targets.
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > lockedTargets; // Offset: 0x58

        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > lockedTargetJointIndices; // Offset: 0x70

        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > lockedTargetsForFireEvent; // Offset: 0x88

        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > lockedTargetJointIndicesForFireEvent; // Offset: 0xA0

        // targeting POI decl used - if non-null that means the instance was allocated
        idDeclPOI* targetingPOIDecl; // Offset: 0xB8

        // the time the current target was first targeted
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > canTargetTime; // Offset: 0xC0

        // How long the timeout is for.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > targetTimeOut; // Offset: 0xC8

        // the time the current target was first targeted
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > targetStartTime; // Offset: 0xD0

        // time when target was locked
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lockStartTime; // Offset: 0xD8

        // time when target is out of FOV
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > outOfFovTime; // Offset: 0xE0

        // time when target lost LOS
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > LOSExpireTime; // Offset: 0xE8

        // the previous targeting state
        idWeapon::weaponTargetState_t prevState; // Offset: 0xF0

        weaponFireMode_t lastFireMode; // Offset: 0xF4

        // acquiring percent until locked
        float lockPercent; // Offset: 0xF8

        // how much we've unlocked target.
        float unlockPercent; // Offset: 0xFC

        idWeaponTargetLockData_t* lockedTargetLockData; // Offset: 0x100

        // require controller button used to deactivate targeting to be released before re-acquiring another target
        bool waitForDeactivationRelease; // Offset: 0x108

        // how many shots to fire before clearing the target lock
        int clearAfterNumShots; // Offset: 0x10C

        // record what to set when Fire occurs
        int clearAfterNumShotsToSet; // Offset: 0x110

        // tracks whether an outline is active for this lockedTarget
        bool outlineActive; // Offset: 0x114

        // identifier for the poi linked to this target
        int poiUid; // Offset: 0x118

        // the current targeting state
        idWeapon::weaponTargetState_t state; // Offset: 0x11C

    }; // Size: 0x120

    struct chargeParms_t
    {
        // the number of times charging has started from 0 (used to identify micro missiles from the same charge volley)
        int chargeCount; // Offset: 0x0

        // the charge state
        idWeapon::chargeState_t chargeState; // Offset: 0x4

        // the previous charge state
        idWeapon::chargeState_t prevChargeState; // Offset: 0x8

        // this is the max percent possible when the charge started - the value may change as the charge grows so we need to store this
        float chargePercentMaxAtChargeStart; // Offset: 0xC

        // the weapon's charge percent
        float chargePercent; // Offset: 0x10

        // the weapon's discharge percent (for weapons that don't discharge instantly)
        float dischargePercent; // Offset: 0x14

        // tracks the time that discharge occurred to prevent running discharge logic more than once per frame
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dischargeTime; // Offset: 0x18

        // this may be later than discharge time if we need to wait for a burst to finish, for example
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dischargeTimeoutStartTime; // Offset: 0x20

        // the soonest time that charging will be possible
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > canChargeTime; // Offset: 0x28

        // the next time we can update render parms
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > canUpdateRenderParmTime; // Offset: 0x30

        // sound to play when the charge is ready to be charged again (store here since correct chargeInfo may not be available when charge becomes ready)
        idSoundEvent* readySound; // Offset: 0x38

        // sound to play when the charge input is issued but charge is not ready to be charged again (store here since correct chargeInfo may not be available when charge becomes ready)
        idSoundEvent* notReadySound; // Offset: 0x40

        // the time that the charge started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeStartTime; // Offset: 0x48

        // the time that the charge ended
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeEndTime; // Offset: 0x50

        // the time that the charge was suspended
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeSuspendTime; // Offset: 0x58

        // percentage when charging was suspended
        float chargeSuspendPercent; // Offset: 0x60

        // percent to start charging at (usually 0 but can be modified using chargeInfo_t::chargePercentAfterFire)
        float chargeStartPercent; // Offset: 0x64

        // max percentage for most recent charge
        float chargeEndPercent; // Offset: 0x68

        // true when the weapon has been discharged because it exceeded the max charge time
        bool chargeTimeExceededMax; // Offset: 0x6C

        // the current duration of the charge
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeDuration; // Offset: 0x70

        // the duration of the charge as of the previous frame
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastChargeDuration; // Offset: 0x78

        // the charge percent from last frame
        float lastChargePercent; // Offset: 0x80

        // store this to use for FX
        float lastChargeTimeoutPercent; // Offset: 0x84

        // flags when it's time to play a charge anim
        bool chargePlayAnim; // Offset: 0x88

        // tracks whether charge FX is playing or not
        bool playingChargeFX; // Offset: 0x89

        // tracks when to shut off the charging FX
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeFXExpireTime; // Offset: 0x90

        // tracks a game frame for when to shut off the charging FX (frame-based allows time-based charging bugs to be avoided when framerate tanks)
        int chargeFXExpireFrame; // Offset: 0x98

        // tracks the total number of shots
        int chargePerShotNumTotal; // Offset: 0x9C

        // records the value from the previous frame
        int lastChargePerShotNumTotal; // Offset: 0xA0

        // tracks the number of hits toward the next progression
        int chargePerShotNumSuccess; // Offset: 0xA4

        // tracks the number of misses to possibly cause discharge
        int chargePerShotNumFail; // Offset: 0xA8

        // the charge per hit charge value
        float chargePerShotChargeVal; // Offset: 0xAC

        // the charge value at the time the weapon was fired
        float chargePercentForFireEvent; // Offset: 0xB0

        // stores the charge values for use by the fire event as the charge is discharged before the values can be used
        idList < float , TAG_IDLIST , false > chargeValuesForFireEvent; // Offset: 0xB8

        // play this charge anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnimToPlay; // Offset: 0xD0

        // tracks whether the charge mode has registered a charge animation with the weapon
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingChargeAdditiveAnim; // Offset: 0xD2

        // tracks whether we need to reset the charge additive anim
        bool resetChargeAdditiveAnim; // Offset: 0xD4

        // play this charge anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnim2ToPlay; // Offset: 0xD6

        // tracks whether the charge mode has registered a charge animation with the weapon
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingChargeAdditiveAnim2; // Offset: 0xD8

        // tracks whether we need to reset the charge additive anim
        bool resetChargeAdditiveAnim2; // Offset: 0xDA

        // play this while fully charged
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeLoopingAdditiveAnimToPlay; // Offset: 0xDC

        // tracks whether the fully charged mode has registered a fully charged animation with the weapon
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingChargeLoopingAdditiveAnim; // Offset: 0xDE

        // tracks whether we need to reset the fully charged additive anim
        bool resetChargeLoopingAdditiveAnim; // Offset: 0xE0

        // if >=0 set this alpha value
        float resetChargeLoopingAdditiveAnimAlpha; // Offset: 0xE4

        // play this discharge anim (1.0->0.0) - it's registered with weapon since discharge may result from switching to a fire mode without charge
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnimToPlay; // Offset: 0xE8

        // start time allows a delay to be scheduled in
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dischargeAdditiveAnimStartTime; // Offset: 0xF0

        // start frame can be anything, not necessary 1.0
        float dischargeAdditiveAnimStartNormalizedFrame; // Offset: 0xF8

        // tracks whether the charge mode has registered a discharge animation with the weapon
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingDischargeAdditiveAnim; // Offset: 0xFC

        // tracks whether anims play end to beginning (false) or beginning to end (true)
        bool dischargeAdditiveAnimsReversed; // Offset: 0xFE

        // tracks whether we need to reset the discharge additive anim
        bool resetDischargeAdditiveAnim; // Offset: 0xFF

        float dischargeAdditiveAnimRate; // Offset: 0x100

        // current playback position of the discharge animation, ALWAYS 1->0
        float dischargeAdditiveAnimNormalizedFrame; // Offset: 0x104

        idAtomicHandleT < aliasRefType_t > dischargeAdditiveHandsAnimToPlay; // Offset: 0x108

        bool dischargeAdditiveHandsAnimReversed; // Offset: 0x110

        bool playingDischargeAdditiveHandsAnim; // Offset: 0x111

        float dischargeAdditiveHandsAnimRate; // Offset: 0x114

        float lastChargeDashModifier; // Offset: 0x118

        // play this discharge anim - it's registered with weapon since discharge may result from switching to a fire mode without charge
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dischargeAdditiveAnim2ToPlay; // Offset: 0x11C

        float dischargeAdditiveAnim2Rate; // Offset: 0x120

        // current playback position of the discharge animation
        float dischargeAdditiveAnim2NormalizedFrame; // Offset: 0x124

        // start frame can be anything, not necessary 1.0
        float dischargeAdditiveAnim2StartNormalizedFrame; // Offset: 0x128

        // tracks whether the charge mode has registered a discharge animation with the weapon
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingDischargeAdditiveAnim2; // Offset: 0x12C

        // tracks whether we need to reset the discharge additive anim
        bool resetDischargeAdditiveAnim2; // Offset: 0x12E

        // play this cooldown anim - it's registered with weapon since discharge may result from switching to a fire mode without charge
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > cooldownAdditiveAnimToPlay; // Offset: 0x130

        // tracks whether the charge mode has registered a cooldown animation with the weapon
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingCooldownAdditiveAnim; // Offset: 0x132

        // tracks whether anims play end to beginning (false) or beginning to end (true)
        bool cooldownAdditiveAnimReversed; // Offset: 0x134

        // use to schedule a discharge sound after the discharge actually occurs
        idSoundEvent* dischargeSoundToPlay; // Offset: 0x138

        // time when discharge sound should be played
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dischargeSoundPlayTime; // Offset: 0x140

        // solely for tracking the number of shots fired by a charged burst
        int chargedBurstShotsFired; // Offset: 0x148

        // the FX condition playing for the current charge percent
        fxCondition_t chargePercentFXCondition; // Offset: 0x14C

        // the FX condition playing for the current charge percent
        fxCondition_t chargeCooldownPercentFXCondition; // Offset: 0x150

        // tracks whether the charge timeout should also block the other fire mode
        bool timeoutBlocksOtherFireMode; // Offset: 0x154

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > notChargingAdditiveAnimToPlay; // Offset: 0x156

        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > playingNotChargingAdditiveAnim; // Offset: 0x158

    }; // Size: 0x160

    struct deviatedProjectileInfo_t
    {
        enum deviationType_t : int
        {
            DT_NONE = 0,
            DT_FAILED = 1,
            DT_DEFLECTION = 2,
            DT_REFLECTION = 3
        };

        idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > firingInterval; // Offset: 0x0

        idArray < float , 2 > cooldownModifier; // Offset: 0x10

        idArray < float , 2 > nextShotDamageModifier; // Offset: 0x18

        idWeapon::deviatedProjectileInfo_t::deviationType_t deviationType; // Offset: 0x20

    }; // Size: 0x28

    struct weaponModOverrides_t
    {
        struct chargeGameTimeAfterNumFireModeShots_t
        {
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x0

            int numShots; // Offset: 0x8

        }; // Size: 0x10

        // this is true if this weapon has had SetUpWeapon called on it through the weaponModManager, used for client networking...
        bool weaponModSetUp; // Offset: 0x0

        // not really a mod, but we store this here anyway
        bool weaponModMastered; // Offset: 0x1

        // just flag it
        bool weaponShotgunChargeBurstFullAuto; // Offset: 0x2

        // decls override weapon decl
        idDeclWeapon* weaponDecl; // Offset: 0x8

        // weapon decl from a net update
        idDeclWeapon* weaponDeclNetUpdate; // Offset: 0x10

        // override ammo decl
        idDeclAmmo* ammoDecl; // Offset: 0x18

        // ammo decl from a new update
        idDeclAmmo* ammoDeclNetUpdate; // Offset: 0x20

        // override ammo decl after every burst shot hits AI
        idDeclAmmo* ammoDeclAfterEveryBurstShotHitsAI; // Offset: 0x28

        // supercharge primary weapon decl
        idDeclWeapon* weaponSuperchargePrimaryDecl; // Offset: 0x30

        // supercharge secondary weapon decl
        idDeclWeapon* weaponSuperchargeSecondaryDecl; // Offset: 0x38

        // duration in milliseoncds once activated
        idTypesafeTime < int , millisecondUnique_t , 1000 > weaponSuperchargeDeclMS; // Offset: 0x40

        // duration in num shots once activated
        int weaponSuperchargeDeclNumShots; // Offset: 0x44

        // supercharge primary ammo decl
        idDeclAmmo* ammoSuperchargePrimaryDecl; // Offset: 0x48

        // supercharge secondary ammo decl
        idDeclAmmo* ammoSuperchargeSecondaryDecl; // Offset: 0x50

        // duration in milliseconds once activated
        idTypesafeTime < int , millisecondUnique_t , 1000 > ammoSuperchargeDeclMS; // Offset: 0x58

        // duration in num shots once activated
        int ammoSuperchargeDeclNumShots; // Offset: 0x5C

        // override damage decl
        idDeclDamage* damageDecl; // Offset: 0x60

        // override splash damage decl
        idDeclDamage* splashDamageDecl; // Offset: 0x68

        // override alt splash damage decl
        idDeclDamage* altSplashDamageDecl; // Offset: 0x70

        // override alt splash damage decl on delayed projectiles when upgrade is mastered
        idDeclDamage* altSplashDamageDelayedProjectileMasteredDecl; // Offset: 0x78

        // override concussive damage decl
        idDeclDamage* concussiveDamageDecl; // Offset: 0x80

        // override alt concussive damage decl
        idDeclDamage* altConcussiveDamageDecl; // Offset: 0x88

        // movement
        float speedScale; // Offset: 0x90

        float speedScaleZoomed; // Offset: 0x94

        float speedScaleCrouched; // Offset: 0x98

        bool preventJump; // Offset: 0x9C

        idDeclTable* movementSpeedScaleVsMS; // Offset: 0xA0

        // heating/overheating
        float heatIncrement; // Offset: 0xA8

        float heatDecrementRate; // Offset: 0xAC

        float heatMaxPercent; // Offset: 0xB0

        float overheatEpsilon; // Offset: 0xB4

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > overheatDelayTime; // Offset: 0xB8

        // charge override value for charge time
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeGameTime; // Offset: 0xC0

        // overrides for the various charge properties
        idList < idWeapon::chargePropertyOverride_t , TAG_IDLIST , false > chargePropertyOverrides; // Offset: 0xC8

        // override value for charge timeout
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeTimeoutGameTime; // Offset: 0xE0

        // increment for per-shot charging
        float chargePerShotIncrement; // Offset: 0xE8

        // override for charge start sound
        idSoundEvent* chargeStartSound; // Offset: 0xF0

        // override for charge looping sound
        idSoundEvent* chargeLoopingSound; // Offset: 0xF8

        // override for charge discharge sound
        idSoundEvent* chargeDischargeSound; // Offset: 0x100

        // override for charge fully charged sound
        idSoundEvent* chargeFullyChargedSound; // Offset: 0x108

        // override value for the first charge after a headshot
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeGameTimeAfterHeadshot; // Offset: 0x110

        // override value for the timeout after a discharge that resulted in a headshot
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeTimeoutGameTimeAfterHeadshot; // Offset: 0x118

        // charge anim rate to use on the charge following a headshot
        float chargeAnimRateAfterHeadshot; // Offset: 0x120

        // override value for the first charge after a direct hit
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeGameTimeAfterDirectHit; // Offset: 0x128

        // override value for the first charge after every a direct hit by every shot of a burst
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeGameTimeAfterEveryBurstShotHits; // Offset: 0x130

        // additive paused non-looping anim frame 0 at charge = 0, frame ( numFrames - 1 ) at charge = 1 (cannot also use recharge additive anim)
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnim; // Offset: 0x138

        // additive paused non-looping anim frame 0 at charge = 0, frame ( numFrames - 1 ) at charge = 1 (cannot also use recharge additive anim) for classic pose
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > chargeAdditiveAnim_classic; // Offset: 0x13A

        // override value for the charge times after firing this many shots in a give fire mode
        idWeapon::weaponModOverrides_t::chargeGameTimeAfterNumFireModeShots_t chargeGameTimeAfterNumFireModeShots; // Offset: 0x140

        // override value for the charge timeouts after firing this many shots in a give fire mode
        idWeapon::weaponModOverrides_t::chargeGameTimeAfterNumFireModeShots_t chargeGameTimeoutAfterNumFireModeShots; // Offset: 0x150

        // override value for the timeout after a discharge that resulted in a direct hit
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeTimeoutGameTimeAfterDirectHit; // Offset: 0x160

        // override value for the timeout after a discharge that resulted in a direct hit by every shot of a burst
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeTimeoutGameTimeAfterEveryBurstShotHits; // Offset: 0x168

        // charge anim rate to use on the charge following a direct hit
        float chargeAnimRateAfterDirectHit; // Offset: 0x170

        // override value for ONE charge only (cleared in idWeapon::DischargeCharge)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeGameTimeOnce; // Offset: 0x178

        // override value for ONE charge only (cleared in idWeapon::Charge when a new charge begins)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeTimeoutGameTimeOnce; // Offset: 0x180

        // override value of chargeTimeoutBlocksOtherFireMode in idWeapon::chargeInfo
        int chargeTimeoutBlocksOtherFireMode; // Offset: 0x188

        float chargeMinChargeRequiredToDischarge; // Offset: 0x18C

        float chargeTimeoutScaleNoShotsFired; // Offset: 0x190

        float chargeTimeoutScaleAllShotsFired; // Offset: 0x194

        // weapon changing modded rate scale for bring up anim
        float bringUpRateScale; // Offset: 0x198

        // modded rate scale for bring down anim
        float bringDownRateScale; // Offset: 0x19C

        // zoom mods override zoom for the weapon - if > 0, field of view in degrees when zoomed
        float zoomedFOV; // Offset: 0x1A0

        // override zoom for the weapon - length of time to delay the start of the zoom
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > zoomDelay; // Offset: 0x1A8

        // override zoom for the weapon - length of time required to zoom in or out
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > zoomGameTime; // Offset: 0x1B0

        // override zoom mode for the weapon
        idDeclWeapon::zoomMode_t zoomMode; // Offset: 0x1B8

        // whether to show the weakness indicator when this weapon is zoomed in
        bool showWeaknessIndicator; // Offset: 0x1BC

        // override the zoom in sound
        idSoundEvent* zoomInSound; // Offset: 0x1C0

        // override the zoom out sound
        idSoundEvent* zoomOutSound; // Offset: 0x1C8

        // clip / reload mods override for how many "shells" to put into our clip per reload
        int ammoPerReload; // Offset: 0x1D0

        // modded rate scale for reload anim
        float reloadRateScale; // Offset: 0x1D4

        // spread mods
        float weaponSpread; // Offset: 0x1D8

        float weaponZoomSpread; // Offset: 0x1DC

        float weaponCrouchSpread; // Offset: 0x1E0

        float weaponZoomCrouchSpread; // Offset: 0x1E4

        // fire mods
        weaponTriggerMode_t triggerMode; // Offset: 0x1E8

        // this is a modded value for hitscan fire. {{ units = m }}
        float maxHitScanRange; // Offset: 0x1EC

        // the amount the gun will kick sideways each shot
        float weaponKickYaw; // Offset: 0x1F0

        // the amount the gun will kick up each shot
        float weaponKickPitch; // Offset: 0x1F4

        // the chance of playing a weaponFeedbackLarge
        float weaponFeedbackLargeChance; // Offset: 0x1F8

        // override sound shader to use when firing
        idSoundEvent* fireSound; // Offset: 0x200

        // allows launched projectiles to be detonated by player
        bool detonateProjectiles; // Offset: 0x208

        // MS after detonate input before detonation occurs
        int detonateProjectilesDelayMS; // Offset: 0x20C

        // max number of projectiles that can be active at once
        int detonateProjectilesMaxNum; // Offset: 0x210

        // override for idDeclWeapon::explodeProjectilesBoostTimes
        int detonateProjectilesBoostTimes; // Offset: 0x214

        // override for idDeclWeapon::explodeProjectilesDetonateTimes
        int detonateProjectilesDetonateTimes; // Offset: 0x218

        idArray < int , 8 > delayedProjectileOffsetEnables; // Offset: 0x21C

        // projectile can lock on to targets
        bool projectileLock; // Offset: 0x23C

        // ammo cost per shot
        int ammoCost; // Offset: 0x240

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > firingInterval; // Offset: 0x248

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > firingIntervalWhenLocked; // Offset: 0x250

        // how long the other fire mode must wait after firing this fire mode
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > otherFireModeFiringInterval; // Offset: 0x258

        // how long in this fire mode before firing is allowed
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fireDelay; // Offset: 0x260

        // how long in this fire mode before movement is allowed
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementDelay; // Offset: 0x268

        // lets a shoot delay anim be scaled to a specific length
        float shootDelayAnimRateScale; // Offset: 0x270

        // another scale that compounds with the first one
        float shootDelayAnimRateScale2; // Offset: 0x274

        // lets a shoot delay anim be scaled to a specific length
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > shootDelayAnimDurationGT; // Offset: 0x278

        // override shoot state overrides idDeclWeapon::overrideShootState and all other shoot states
        idAtomicString overrideShootState; // Offset: 0x280

        // overrides idDeclWeapon::overrideShootStartState and all other shoot states
        idAtomicString overrideShootStartState; // Offset: 0x288

        // overrides idDeclWeapon::overrideShootLastState and all other shoot states
        idAtomicString overrideShootLastState; // Offset: 0x290

        // overrides the firing interval for the override shoot state
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > overrideShootStateFiringIntervalGT; // Offset: 0x298

        // how many normal shots to fire after each override shot
        int overrideShootThenThisManyNormalShots; // Offset: 0x2A0

        // override reloadFromEmpty state overrides idDeclWeapon::overrideReloadFromEmpty
        idAtomicString overrideReloadFromEmptyState; // Offset: 0x2A8

        // targeting amount of time to lock before acquiring target
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > targetLockTimeGT; // Offset: 0x2B0

        // FOV for targeting
        float targetLockFOV; // Offset: 0x2B8

        // FOV for targeting
        float targetLockDist; // Offset: 0x2BC

        // target out of FOV time
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > outOfFovTime; // Offset: 0x2C0

        // how long after firing on a locked target can targeting resume
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > targetRecoveryTime; // Offset: 0x2C8

        // once a target is locked, the lock can't be broken because of time, angle to target or obstacles
        bool targetUnbreakableLock; // Offset: 0x2D0

        // max number of targets that can be locked at one time
        int maxTargets; // Offset: 0x2D4

        // additive zoom offset anim override additive zoom offset anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > overrideAdditiveZoomOffsetAnim; // Offset: 0x2D8

        // weapon-specific
        float returnAmmoChance; // Offset: 0x2DC

        bool hasHighDamageUpgrade; // Offset: 0x2E0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > chaingunSpinUpTime; // Offset: 0x2E8

        float chaingunMovementSpeedScaleFiringForward; // Offset: 0x2F0

        float chaingunMovementSpeedScaleFiringBack; // Offset: 0x2F4

        float chaingunMovementSpeedScaleFiringStrafe; // Offset: 0x2F8

        float chaingunMovementSpeedScaleNotFiringForward; // Offset: 0x2FC

        float chaingunMovementSpeedScaleNotFiringBack; // Offset: 0x300

        float chaingunMovementSpeedScaleNotFiringStrafe; // Offset: 0x304

        // chainsaw glory kill ammo cost decl
        idDeclEntityDefFloatList* chainsawGloryKillAmmoCostDecl; // Offset: 0x308

        // how many secs to regen 1 fuel point
        float chainsawAmmoRegenSecsPerFuel; // Offset: 0x310

        // allow chainsaw regen to generate this many pips
        int chainsawAmmoRegenMaxCount; // Offset: 0x314

        // percent increase for chainsaw loot drops
        float chainsawLootPercentIncrease; // Offset: 0x318

        // enables/disables the splinter behavior on the gauss destroyer projectile (available with mastery)
        int gaussDestroyerSplinterEnabled; // Offset: 0x31C

        // enables/disables the unsplinter behavior on the gauss destroyer projectile (available with mastery)
        int gaussDestroyerUnsplinterEnabled; // Offset: 0x320

        // weapon fx fx for the weapon
        idDeclFX* weaponFX; // Offset: 0x328

        // fx for the third person weapon
        idDeclFX* weaponFXTP; // Offset: 0x330

        // fx for the weapon in classic pose
        idDeclFX* weaponFXClassic; // Offset: 0x338

        // fx for the weapon
        idDeclFX* weaponFXNetUpdate; // Offset: 0x340

        // fx for the third person weapon
        idDeclFX* weaponFXTPNetUpdate; // Offset: 0x348

        // fx for the weapon in classic pose
        idDeclFX* weaponFXClassicNetUpdate; // Offset: 0x350

        // reticle reticle override
        idDeclWeaponReticle* reticleDecl; // Offset: 0x358

        // specialized damage
        int killToCritCount; // Offset: 0x360

        // idDamageParms.damageProjectileAllTargets override
        idDeclProjectile* damageProjectileAllTargetsDecl; // Offset: 0x368

        // idDamageParms.damageProjectileAITargets override
        idDeclProjectile* damageProjectileAITargetsDecl; // Offset: 0x370

        // idDamageParms.damageProjectileAIKilledTargets override
        idDeclProjectile* damageProjectileAIKilledTargetsDecl; // Offset: 0x378

        // damage feedback sound event to use when hitting a weak point
        idSoundEvent* weakpointFeedbackSound; // Offset: 0x380

        // projectile deviation
        float projectileDeviationConeAngle; // Offset: 0x388

        // projectile proximity flare
        float projectileProximityFlareMaxDist; // Offset: 0x38C

        int projectileProximityFlareMinTargets; // Offset: 0x390

        idDeclDamage* projectileProximityFlareSplashDamageDecl; // Offset: 0x398

        // misc
        bool hitScanPassThroughEnemies; // Offset: 0x3A0

        // alerts that something is supercharged
        idSoundEvent* soundSupercharge; // Offset: 0x3A8

        // supercharge primary weapon decl
        idDeclWeapon* superchargeWeaponPrimaryDecl; // Offset: 0x3B0

        // supercharge secondary weapon decl
        idDeclWeapon* superchargeWeaponSecondaryDecl; // Offset: 0x3B8

        // supercharge weapon decl duration
        idTypesafeTime < int , millisecondUnique_t , 1000 > superchargeWeaponDeclMS; // Offset: 0x3C0

        float animatedSpinnyThingFireModeChangeDegs; // Offset: 0x3C4

        float animatedSpinnyThingFireModeChangeDegsPerSec; // Offset: 0x3C8

        float animatedSpinnyThingPerShotDegs; // Offset: 0x3CC

        float animatedSpinnyThingPerShotDegsPerSecond; // Offset: 0x3D0

        float animScale; // Offset: 0x3D4

    }; // Size: 0x3D8

    idWeapon::barrelSpinRuntimeInfo_t barrelSpinRuntime; // Offset: 0x110

    idWeapon::superchargeParms_t superchargeParms[2]; // Offset: 0x120

    idWeapon::weaponSubWebInfo_t weaponSubWebInfo[2]; // Offset: 0x190

    idList < idWeapon::targetScoringDebug_t , TAG_IDLIST , false > targetScoringList; // Offset: 0x1D8

    // tracks the charge state when perk is switched away so that it can be brought back at the same state
    idWeapon::perkChargeSaveParms_t perkChargeSaveParms[2]; // Offset: 0x1F0

    // breakable shell emitter
    idList < idWeapon::breakablePieceEmitterSpawner_t , TAG_IDLIST , false > breakableEmitters; // Offset: 0x2A0

    idWeapon::idWeaponNetSyncData syncData; // Offset: 0x2B8

    // ------------------------ weapon feedback ------------------------ set each time the weapon fires according to the conditions at the time of firing
    weaponFeedBack_t* weaponFeedback; // Offset: 0x2C0

    // ribbon effects {{ units = m }}
    idVec3 ribbonStart; // Offset: 0x2C8

    // {{ units = m }}
    idVec3 ribbonEnd; // Offset: 0x2D4

    idMat3 ribbonStartAxis; // Offset: 0x2E0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ribbonStartTime; // Offset: 0x308

    idRibbon2 ribbon2; // Offset: 0x310

    idRibbon2 mercuryRibbonTracers[2][8]; // Offset: 0x428

    idWeapon::idShowHideBulletParms_t showHideBulletParms; // Offset: 0x15A8

    idList < idWeapon::launchedProjectile_t , TAG_IDLIST , false > launchedProjectiles; // Offset: 0x15C8

    idWeapon::chargeProjectileData_t chargeProjectileData; // Offset: 0x15E0

    // state of the alt trigger, independent of the fire mode
    idWeapon::triggerState_t altTriggerState; // Offset: 0x15E8

    // tracks whether the deny sound has been played so that we don't spam it
    bool playedDenyApprovedFireSound; // Offset: 0x15EC

    bool suppressAllAdditiveAnims; // Offset: 0x15ED

    // idAnimator_ProxyproxyAnimator; represents the base animation blend tree from an animweb for additive anims
    idAnimator_Channel additiveAnimator; // Offset: 0x15F0

    // for procedural anims
    idAnimator_Paused additivePausedAnimator; // Offset: 0x1700

    // another paused animator for procedural anims
    idAnimator_Paused additivePausedAnimator2; // Offset: 0x1758

    // for additive jolt anims
    idAnimator_Channel additiveJoltAnimator; // Offset: 0x17B0

    // basic animator data, so that certain things can be checked without actually querying the animators themselves, which requires a tree animator that is not always available
    float additivePausedAnimNormalizedFrame; // Offset: 0x18C0

    float additivePausedAnimAlpha; // Offset: 0x18C4

    float additivePausedAnim2NormalizedFrame; // Offset: 0x18C8

    float additivePausedAnim2Alpha; // Offset: 0x18CC

    // animated spinny thing
    idWeapon::animatedSpinnyThingData_t animatedSpinnyThingData; // Offset: 0x18D0

    // custom skin index if >= 0 then set this skin index once
    int setCustomSkinIndexOnce; // Offset: 0x1928

    fxCondition_t startFxConditionOnInit; // Offset: 0x192C

    // allows bypassing of some early-out checks in PlayFireFX
    bool restartBurstFireFX; // Offset: 0x1930

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x1938

    idManagedClassPtr < idEntity > entityOwner; // Offset: 0x1958

    // flag whether the owner is invisible which we'll pass onto any fxMgr we use
    bool ownerIsInvisible; // Offset: 0x1978

    // the handle to our deferred fire info
    unsigned int fireHandle; // Offset: 0x197C

    // used to protect a deferred fire from being deleted if it shouldn't be
    unsigned int dontClearFireHandle; // Offset: 0x1980

    // currently loaded ammo for the fire mode
    idArray < idManagedClassPtr < idAmmoItem > , 2 > ammoClips; // Offset: 0x1988

    // if not -1 save this instead of real amount
    int ammoInClipToSave; // Offset: 0x19C8

    // stores the previous value so that changed can be handled
    int prevAmmoCount; // Offset: 0x19CC

    // trace handles, applied to 'additionalProjectiles' (hitscan projectiles, of course)
    idList < unsigned int , TAG_IDLIST , false > additionalFireHandles; // Offset: 0x19D0

    // current firing mode of the weapon (primary or secondary)
    weaponFireMode_t fireMode; // Offset: 0x19E8

    // the fire mode at the time the trigger was pulled (stored because it can change after the fire is initiated and before the fire event is handled)
    weaponFireMode_t fireModeForFireEvent; // Offset: 0x19EC

    // the frame number when fireModeForFireEvent was stored
    int fireModeForFireEventFrame; // Offset: 0x19F0

    // current firing mode of the weapon (primary or secondary)
    weaponFireMode_t lastClientWeaponFireMode; // Offset: 0x19F4

    // usually the time the fire mode started but it can be reset with ae_weaponResetMovementSpeedScale
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementSpeedScaleStartTime; // Offset: 0x19F8

    // on/off switch for movement speed scale versus time table, if one exists
    bool enableMovementSpeedScaleVsMS; // Offset: 0x1A00

    // allows a specific fireMode to be used regardless of the actual fireMode (implemented so the lock-on upgrade can fire the secondary weapon by pressing primary fire when target is locked) overrides any attempt to set a different fire mode
    weaponFireMode_t overrideFireMode; // Offset: 0x1A04

    // the fireMode that forceFireMode overrode
    weaponFireMode_t overriddenFireMode; // Offset: 0x1A08

    // the last fireMode used when the weapon was fired
    weaponFireMode_t lastFireFireMode; // Offset: 0x1A0C

    // fire count when fire mode is first overridden
    idArray < int , 2 > overriddenFireModeFireCount; // Offset: 0x1A10

    // current trigger state of the weapon
    idArray < idWeapon::triggerState_t , 2 > triggerState; // Offset: 0x1A18

    // current firing state of the weapon
    idArray < idWeapon::fireState_t , 2 > fireState; // Offset: 0x1A20

    // number of times weapon has fired in each fire mode, in total
    idArray < int , 2 > fireModeFireCount; // Offset: 0x1A28

    // number of times weapon has fired in the current fire mode, with reset upon mode changing
    int fireModeFireCountWithReset; // Offset: 0x1A30

    // number of times weapon has fired since the trigger was pulled
    int triggerHeldFireCount; // Offset: 0x1A34

    // number of times weapon has fired since it was equipped
    int sinceEquipFireCount; // Offset: 0x1A38

    // suppress the sound once
    bool suppressLowAmmoWarningSoundOnce; // Offset: 0x1A3C

    // current burst mode of the weapon
    burstMode_t burstMode; // Offset: 0x1A40

    // next time when this weapon can fire a round, or -1 if weapon cannot be fired
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > nextFireTime; // Offset: 0x1A48

    // the last time the weapon was fired
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > lastFireTime; // Offset: 0x1A58

    // time when this weapon will finish reloading when in FIRESTATE_RELOADING
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > reloadEndTime; // Offset: 0x1A68

    // time when the weapon is able to fire or melee
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > canAttackTime; // Offset: 0x1A78

    // time when movement is possible
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > canMoveTime; // Offset: 0x1A88

    // last finish fire time
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > lastFinishFireTime; // Offset: 0x1A98

    // time the trigger was pulled
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > triggerPullTime; // Offset: 0x1AA8

    // time we started the shot charge
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > shootChargeStartTime; // Offset: 0x1AB8

    // time the trigger was released
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > triggerReleaseTime; // Offset: 0x1AC8

    // time the most recent reload started
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > reloadStartTime; // Offset: 0x1AD8

    // used by weapons such as the chaingun that have a 'preparing' behavior
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 2 > preparingToFireTime; // Offset: 0x1AE8

    // number of shots remaining in this burst, or -1 if the weapon is not burst-firing
    int burstCount; // Offset: 0x1AF8

    // number of shots fired in the burst
    int burstShotsFired; // Offset: 0x1AFC

    // tracks the number of shots in the burst that hit AI
    int burstNumShotsHitTarget; // Offset: 0x1B00

    // tracks the AI hit by burst shots
    idList < idSpawnId , TAG_IDLIST , false > burstShotHitTarget; // Offset: 0x1B08

    // tracks the frame when every shot of a burst hit an AI or 0 if that didn't happen (for weapon mastery)
    int burstEveryShotHitTargetFrame; // Offset: 0x1B20

    // records the number of consecutive shots that hit an AI
    int consecutiveShotsHitTarget; // Offset: 0x1B24

    // shots in a fake burst, which is an apparent burst that instead fires multiple shots in a single anim instead of playing the fire anim multiple times
    int fakeBurstCount; // Offset: 0x1B28

    // shots in a stack target lock
    int stackTargetCount; // Offset: 0x1B2C

    // override value for initial burst count
    int overrideInitialBurstCount; // Offset: 0x1B30

    // override value for burst mode
    burstMode_t overrideBurstMode; // Offset: 0x1B34

    // override value for interval between bursts
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overrideBurstInterval; // Offset: 0x1B38

    // override value for burst ammo cost
    int overrideAmmoPerBurst; // Offset: 0x1B40

    // indicates a burst that was chained immediately following a burst
    bool burstChained; // Offset: 0x1B44

    // a tracer is fired when projDef->tracers divides evenly into this
    int tracerCount; // Offset: 0x1B48

    // is the weapon currently in a state where we can show the weapon display
    bool allowOnWeaponDisplay; // Offset: 0x1B4C

    idTracerManager tracerManager; // Offset: 0x1B50

    // current attack type (may change with each firing)
    idDeclWeapon::attack_t attackType; // Offset: 0x1DA8

    // can store impact info here if needed
    contactImpulse_t impactInfo; // Offset: 0x1DAC

    // last time we failed to fire from input
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastInvalidInput; // Offset: 0x1F20

    tagData_t onWeaponGuiTag; // Offset: 0x1F28

    tagData_t muzzleFlashTagData[26]; // Offset: 0x1F48

    tagData_t shellEjectTagData[4]; // Offset: 0x2288

    tagData_t hitScanShapeTestOriginTagData; // Offset: 0x2308

    idArray < idManagedClassPtr < idPieceEmitter > , 2 > pieceEmitterEntityList; // Offset: 0x2328

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxActionGroup[2]; // Offset: 0x2368

    bool fxActionGroupInit[2]; // Offset: 0x2378

    // true if the weapon is currently used in zoom mode (iron sight, scope)
    bool isZoomed; // Offset: 0x0

    // tracks whether the weapon was already auto reloaded so that we don't auto reload it again
    bool autoReloaded; // Offset: 0x0

    // the RL uses this for the detonation mod when rockets are active until primary fire is pressed
    bool inhibitAutoSwitchForDetonateProjectiles; // Offset: 0x0

    // tracks the reload of the weapon. When true, the weapon will not be able to fire, unless a reload is performed. It will happen automatically in idle.
    bool requiresReloadToShoot; // Offset: 0x0

    // if true then max out the weapon and give mastery instead of having to complete challenge
    bool cheatMaxOutWeapon; // Offset: 0x0

    // true if the weapon is currently firing a projectile burst (such as the pistol killburst). in those cases, no ammo is used NOTE: this is completely different from burstCount code
    bool projectileBurstMode; // Offset: 0x0

    bool fireSoundPostedEvent; // Offset: 0x237B

    idSoundWwiseID fireSoundLoopStartEventID; // Offset: 0x237C

    // store this so that it'll be available for the stop sound
    idDeclProjectile* fireSoundProjDef; // Offset: 0x2380

    // firing interval to use when scheduling the stop sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fireSoundFiringInterval; // Offset: 0x2388

    // store this so that it'll be available for the stop sound
    idDeclProjectile* loopingFireSoundUnmanagedProjDef; // Offset: 0x2390

    // the heat glow amount (0.0-1.0)
    float heatGlowAmount; // Offset: 0x2398

    // the current overheat level of the weapon(0.0-1.0)
    float heatPercent; // Offset: 0x239C

    // how long before this weapon can fire again
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overheatedDelay; // Offset: 0x23A0

    // how long to delay cooling in MS (set this to the weapon fire interval to prevent erratic heating/cooling behavior during sustained fire)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > heatCoolingDelay; // Offset: 0x23A8

    fxCondition_t overheatFX; // Offset: 0x23B0

    // for weapons that use heatInfo.heatPercentNumShots, the number of shots that led to the current heatPercent;
    int heatNumShots; // Offset: 0x23B4

    bool playingLoadedSound; // Offset: 0x23B8

    // time this weapon was selected to be equipped
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > selectedTime; // Offset: 0x23C0

    // NOTE that because actual equipping is triggered by animation events,  and because the bringup anim can be interrupted, this weapon might not actually get equipped if another weapon is selected before this weapon can be equipped records whether the weapon was empty when it was selected. only weapons that
    bool emptyWhenSelected; // Offset: 0x23C8

    // were not empty when selected with automatically be changed when they become empty records whether this weapon has played its intro bringup yet, if applicable
    bool playedIntroBringUp; // Offset: 0x23C9

    // was this weapon disabled due to a game challenge ( unselectable )
    bool gameChallengeDisabled; // Offset: 0x23CA

    // whether to ignore the charge timeout once
    bool ignoreChargeTimeout; // Offset: 0x23CB

    // projectile boosting cleared every FinishFire, counts the number of times a projectile has been boosted
    int numProjectileBoosts; // Offset: 0x23CC

    idWeapon::weaponTargeting_t targeting[12]; // Offset: 0x23D0

    // which targeting system the current projectile will track
    int targetingShotIndex; // Offset: 0x3150

    // charging
    idWeapon::chargeParms_t chargeParms; // Offset: 0x3158

    // soft target damage decl overrides the soft target damage decl specified in the projectile def
    idArray < const idDeclDamage * , 2 > overrideSoftTargetDamageDecl; // Offset: 0x32B8

    int killToCritCount; // Offset: 0x32C8

    idWeapon::deviatedProjectileInfo_t deviatedProjectileInfo; // Offset: 0x32D0

    // upgrades
    idInventoryItemUpgrade upgradeComponent; // Offset: 0x32F8

    idWeapon::weaponModOverrides_t weaponModOverrides[2]; // Offset: 0x3328

    // overheat sound, usually defined in the secondary decl but we want updated regardless of which mode we're in
    idSoundEvent* cachedRTPCOverheatSound; // Offset: 0x3AD8

    // RTPC for the overheat
    idSoundRTPC* cachedOverheatRTPC; // Offset: 0x3AE0

    // customization if non-NULL, use this
    idDeclMD6* customizedMD6; // Offset: 0x3AE8

    // customization can remap materials
    idList < materialRemap_t , TAG_IDLIST , false > customizedMaterialRemap; // Offset: 0x3AF0

    // customized show/hide mesh info
    idMD6Util::meshShowHideInfo_t customizedMeshInfo; // Offset: 0x3B08

    idList < unsigned int , TAG_IDLIST , false > materialLock_RT; // Offset: 0x3B40

    // ------------------------- multiplayer -------------------------
    idManagedClassPtr < idWeaponEntity > weaponEnt; // Offset: 0x3B58

    bool canDeleteWeaponEnt; // Offset: 0x3B78

    // the ammo capacity upgrade level, this needs to remain on both the weapon and environment suit to be able to remain synchronized after checkpoints
    int ammoCapacityLevel; // Offset: 0x3B7C

    // the additional amount of ammo the clip is allowed to carry
    int additionalAmmoClipCapacity; // Offset: 0x3B80

    // tracks whether the mod equip anim should be played
    bool playModSelectAnim; // Offset: 0x3B84

    // tracks whether debug bars were drawn or not so that they can be deleted
    bool drewDebugBars; // Offset: 0x3B85

    idSoundObject soundObject; // Offset: 0x3B88

    lootStyle_t dropLootStyle; // Offset: 0x3B98

}; // Size: 0x3BA0
