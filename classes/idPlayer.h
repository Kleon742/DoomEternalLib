struct idPlayer : idActor
{
    enum dodgeDirection_t : int
    {
        DODGE_RIGHT = 0,
        DODGE_LEFT = 1
    };

    enum playerState_t : int
    {
        NO_STATE = -1,
        PS_NONE = 0,
        PS_GAME_MODE_INFO = 1,
        PS_COUNTDOWN = 2,
        PS_IN_PROGRESS_IMPL = 3,
        PS_IN_PROGRESS = 4,
        PS_SPECTATING_NON_PARTICIPANT = 5,
        PS_WAITING_TO_RESPAWN_FROM_DEATH = 6,
        PS_SPECTATE_AFTER_DEATH = 7,
        PS_RESPAWNING = 8,
        PS_AWAITING_PLAYER_RESPAWN_FINALIZATION = 9,
        PS_TELEPORT_SPAWNING = 10,
        MAX_STATES = 11
    };

    enum playerTransition_t : int
    {
        NO_TRANSITION = -1,
        PT_NONE_to_GAME_MODE_INFO = 0,
        PT_NONE_to_RESPAWNING = 1,
        PT_NONE_to_WAITING_TO_RESPAWN_FROM_DEATH = 2,
        PT_GAME_MODE_INFO_to_SPECTATING_NON_PARTICIPANT = 3,
        PT_GAME_MODE_INFO_to_RESPAWNING = 4,
        PT_COUNTDOWN_to_IN_PROGRESS_IMPL = 5,
        PT_IN_PROGRESS_IMPL_to_IN_PROGRESS = 6,
        PT_WAITING_TO_RESPAWN_FROM_DEATH_to_RESPAWNING = 7,
        PT_SPECTATE_AFTER_DEATH_to_RESPAWNING = 8,
        MAX_TRANSITIONS = 9
    };

    enum playerGuis_t : int
    {
        GUI_PLAYTEST_DEBUG = 0,
        GUI_GENERAL_GAME_USE = 1,
        GUI_INVENTORY = 2,
        GUI_ARGENT_SELECTION = 3,
        GUI_POPUP = 4,
        GUI_INITIAL_ACTIVATE = 5,
        GUI_SUBTITLE = 6,
        GUI_LOADOUT_SELECTION = 7,
        GUI_DEMON_SELECTION = 8,
        GUI_SCOREBOARD = 9,
        GUI_SPECTATOR_CAMERA = 10,
        GUI_PLAYER_DEAD_MP = 11,
        GUI_PLAYER_DEAD_SP = 12,
        GUI_END_OF_LEVEL = 13,
        GUI_END_OF_CHALLENGE = 14,
        GUI_TUTORIAL = 15,
        GUI_END_OF_LEVEL_COOP = 16,
        GUI_PLAYER_DEAD_COOP_DEMON = 17,
        GUI_PHOTOMODE = 18,
        GUI_SNAP_CODEX = 19,
        GUI_NUM_GUIS = 20
    };

    enum playerEndOfLevel_t : int
    {
        ENDOFLEVEL_CAMPAIGN = 0,
        ENDOFLEVEL_HORDE = 1
    };

    enum playerUseState_t : int
    {
        USE_STATE_NONE = 0,
        USE_STATE_WAITING_FOR_RELOAD_OR_USE = 1,
        USE_STATE_CONTINUALLY_USING = 2,
        USE_STATE_WAITING_FOR_FINISH_FOCUS = 3,
        USE_STATE_WAITING_FOR_RELOAD = 4,
        USE_STATE_WAITING_FOR_USE_RELEASE = 5
    };

    enum enableFPHandsType_t : int
    {
        ENABLE_HANDS_INSTANT = 0,
        ENABLE_HANDS_ANIMATED_DEFAULT = 1,
        ENABLE_HANDS_ANIMATED_INTRO = 2,
        ENABLE_HANDS_ANIMATED_INTRO_ACCENT = 3,
        ENABLE_HANDS_ANIMATED_EXTRA_SLOW = 4
    };

    enum disableFPHandsReasons_t : int
    {
        DISABLE_FP_HANDS_NONE = 1,
        DISABLE_FP_HANDS_PERK_SWITCH = 2,
        DISABLE_FP_HANDS_GAME_FLOW = 4,
        DISABLE_FP_HANDS_ENERGY_SHIELD = 8,
        DISABLE_FP_HANDS_MAX = 9
    };

    enum playerSwimmingSoundState_e : int
    {
        SWIMMING_SOUND_STATE_NONE = 0,
        SWIMMING_SOUND_STATE_IN = 1,
        SWIMMING_SOUND_STATE_OUT = 2
    };

    enum sprintMode_t : int
    {
        SPRINT_MODE_CONSTANT = 0,
        SPRINT_MODE_RAMP_UP = 1,
        SPRINT_MODE_RAMP_NO_CANCEL = 2
    };

    enum slayerGatePlayMode_t : int
    {
        SGPM_PLAYING_FROM_LEVEL = 0,
        SGPM_PLAYING_FROM_HUB = 1,
        SGPM_LOADING_FROM_HUB = 2
    };

    enum lifeGatePlayMode_t : int
    {
        LGPM_PLAYING_FROM_LEVEL = 0,
        LGPM_PLAYING_FROM_HUB = 1,
        LGPM_LOADING_FROM_HUB = 2
    };

    struct spectatingInfo_t
    {
        bool isSpectating; // Offset: 0x0

        bool isShowingHands; // Offset: 0x1

        bool isUsingNormalPlayerClipContents; // Offset: 0x2

    }; // Size: 0x3

    struct playerAdditiveHandsAnims_t
    {
        // Additive crouch anim
        idAtomicHandleT < aliasRefType_t > additiveCrouch; // Offset: 0x0

        // Additive uncrouch anim
        idAtomicHandleT < aliasRefType_t > additiveUnCrouch; // Offset: 0x8

    }; // Size: 0x10

    struct playerMaterialStackEntry_t
    {
        bool active; // Offset: 0x0

        idMaterial2* material; // Offset: 0x8

    }; // Size: 0x10

    struct playerMaterials_t
    {
        // what material to use to show local player invisibility
        idMaterial2* invisibilityMaterial; // Offset: 0x0

        // what material to use to show on first person stuff
        idMaterial2* invisibilityMaterialFirstPerson; // Offset: 0x8

    }; // Size: 0x10

    struct idGiveOverTimeItem
    {
        bool started; // Offset: 0x0

        idDeclInventory* decl; // Offset: 0x8

        int totalCount; // Offset: 0x10

        int remainingCount; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextGiveTime; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > giveInterval; // Offset: 0x20

        bool showDebugBar; // Offset: 0x28

        idAtomicString debugBarText; // Offset: 0x30

        idAtomicString debugBarName; // Offset: 0x38

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > debugBarEndTime; // Offset: 0x40

        // override for default sound to play when starting a give over time
        idSoundEvent* startSound; // Offset: 0x48

        // override for default sound to play when giving a give over time item
        idSoundEvent* giveItemSound; // Offset: 0x50

        // override for default sound to play when giving the last give over time item
        idSoundEvent* endSound; // Offset: 0x58

    }; // Size: 0x60

    struct giveOverTime_t
    {
        // default sound to play when starting a give over time
        idSoundEvent* startSoundDefault; // Offset: 0x0

        // default sound to play when giving a give over time item
        idSoundEvent* giveItemSoundDefault; // Offset: 0x8

        // default sound to play when giving the last give over time item
        idSoundEvent* endSoundDefault; // Offset: 0x10

        // debug bar to show
        debugBar_t debugBar; // Offset: 0x18

        // x spacing of bars when there are multiple bars
        float debugBarSpacingX; // Offset: 0x58

        // y spacing of bars when there are multiple bars
        float debugBarSpacingY; // Offset: 0x5C

        // how long after being finished should the bar remain visible
        idTypesafeTime < int , millisecondUnique_t , 1000 > debugBarDurationMS; // Offset: 0x60

        idList < idPlayer::idGiveOverTimeItem , TAG_IDLIST , false > items; // Offset: 0x68

        // increment when adding an item so that naming is unique
        int nameIndex; // Offset: 0x80

    }; // Size: 0x88

    struct remoteInputInfo_t
    {
        // serverGameTime from last input from client (used to determine when we get a new input)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastInputServerGameTime; // Offset: 0x0

        // Last real time in MS we got an input from the client
        idTypesafeTime < int , millisecondUnique_t , 1000 > lastUpdateTimeMS; // Offset: 0x8

        // Time it took between last two updates
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeBetweenUpdatesMS; // Offset: 0xC

        // Previous two update positions {{ units = m }}
        idVec3 origins[2]; // Offset: 0x10

        // Previous two update view angles
        idAngles angles[2]; // Offset: 0x28

        // value of expectToIgnoreNextNetworkPosition from last input from client (since we care about edge triggers)
        bool expectedToIgnoreNextNetworkPosition; // Offset: 0x40

    }; // Size: 0x48

    struct doom5Melee_t
    {
        struct powerStrikeLevel_t
        {
            // the charge level needed to use this power strike
            float chargeLevel; // Offset: 0x0

            // sound to play upon reaching this charge level
            idSoundEvent* chargeLevelSound; // Offset: 0x8

            // damage decl for this power strike level
            idDeclDamage* damageDecl; // Offset: 0x10

            // power strike area effect projectile entity def
            idDeclEntityDef* areaEffectDecl; // Offset: 0x18

            // MS to delay the power strike area effect after the melee strike
            idTypesafeTime < int , millisecondUnique_t , 1000 > areaEffectDelayMS; // Offset: 0x20

            // for launching a projectile in conjunction with the power strike
            idDeclEntityDef* projectileEntityDef; // Offset: 0x28

            // MS to delay the projectile launch
            idTypesafeTime < int , millisecondUnique_t , 1000 > projectileLaunchDelayMS; // Offset: 0x30

            // if true then the area effect can be used even without a melee target
            bool areaEffectWithoutTarget; // Offset: 0x34

            // if true, then the projectile can be launched even without a melee target
            bool projectileWithoutTarget; // Offset: 0x35

            // upgrade required to get this level
            idUpgradeMod_Weapon::weaponModType_t requiredUpgrade; // Offset: 0x38

            // crucible melee needs to because it also launches a projectile
            bool dischargeMeterOnUseWithoutTarget; // Offset: 0x3C

        }; // Size: 0x40

        struct activeInstance_t
        {
            // used to adjust target kick for player velocity {{ units = m / s }}
            idVec3 preLungeVelocity; // Offset: 0x0

            // tracks the level of the melee power strike
            int powerStrikeLevel; // Offset: 0xC

            // time to play the area effect
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > areaEffectTime; // Offset: 0x10

            // time to launch the projectile
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > projectileLaunchTime; // Offset: 0x18

            // the melee target if it's an AI
            idManagedClassPtr < idAI2 > hitAI; // Offset: 0x20

            // the melee target if it's a player
            idManagedClassPtr < idPlayer > hitPlayer; // Offset: 0x40

            // the melee target if it's a demon player
            idManagedClassPtr < idDemonPlayer > hitDemonPlayer; // Offset: 0x60

            // damage parms
            idDamageParms* damageParms; // Offset: 0x80

            // game time to start pause
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseStartTime; // Offset: 0x88

            // game time to resume from pause
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseResumeTime; // Offset: 0x90

            // flags whether resuming has begun yet
            bool inPauseResume; // Offset: 0x98

            // flags whether player has been frozen
            bool playerFrozen; // Offset: 0x99

            // whether the meter should be discharged or not
            bool dischargeMeter; // Offset: 0x9A

        }; // Size: 0xA0

        struct hitTarget_t
        {
            // target that was hit
            idManagedClassPtr < idEntity > target; // Offset: 0x0

            // magnitude of impulse velocity
            float impulseVel; // Offset: 0x20

            // time target was hit
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x28

        }; // Size: 0x30

        // doom5 melee weapon decl
        idDeclWeapon* doomBladeDecl; // Offset: 0x0

        // doom5 melee weapon
        idManagedClassPtr < idWeapon > doomBlade; // Offset: 0x8

        // a firingInterval for melee, in MS
        idTypesafeTime < int , millisecondUnique_t , 1000 > meleeIntervalMS; // Offset: 0x28

        // projectile for base melee trace
        idDeclProjectile* meleeProjectile_Forward; // Offset: 0x30

        // projectile for power strike melee trace
        idDeclProjectile* meleeProjectile_PowerStrike; // Offset: 0x38

        // anim rate scaling rate scale for the melee into anim
        float intoAnimRateScale; // Offset: 0x40

        // rate scale for the melee hit anim
        float hitAnimRateScale; // Offset: 0x44

        // rate scale for the melee miss anim
        float missAnimRateScale; // Offset: 0x48

        // damage decls for forward melee attack for melee level
        idStaticList < const idDeclDamage * , 3 , false , TAG_IDLIST > damageForwardForMeleeLevel; // Offset: 0x50

        // area effect projectile entity defs to trigger for each melee level
        idStaticList < const idDeclEntityDef * , 3 , false , TAG_IDLIST > areaEffectDeclsForMeleeLevels; // Offset: 0x80

        // MS to delay the area effect after the melee strike
        idTypesafeTime < int , millisecondUnique_t , 1000 > areaEffectDelayMS; // Offset: 0xB0

        // damage decl for used against demon players
        idDeclDamage* demonPlayerDamageDecl; // Offset: 0xB8

        // power strike levels
        idList < idPlayer::doom5Melee_t::powerStrikeLevel_t , TAG_IDLIST , false > powerStrikeLevels; // Offset: 0xC0

        // delay after playing a charge level sound before the next can be played (mainly addresses case of multiple
        idTypesafeTime < int , millisecondUnique_t , 1000 > powerStrikeChargeLevelSoundInterval; // Offset: 0xD8

        // optional slow motion to ramp back up after hitPause
        idDeclGameTime* pauseResumeSlowMoDecl; // Offset: 0xE0

        // list of active melee instances
        idList < idPlayer::doom5Melee_t::activeInstance_t , TAG_IDLIST , false > activeInstances; // Offset: 0xE8

        // list of hit targets for debugging
        idList < idPlayer::doom5Melee_t::hitTarget_t , TAG_IDLIST , false > hitTargets; // Offset: 0x100

    }; // Size: 0x118

    struct scoreItem_t
    {
        idManagedClassPtr < idPlayer > player; // Offset: 0x0

        idDeclMetric* metric; // Offset: 0x20

        bool isFloat; // Offset: 0x28

        float floatValue; // Offset: 0x2C

        int intValue; // Offset: 0x30

    }; // Size: 0x38

    struct fovInterpolationParms_t
    {
        bool blendFOV; // Offset: 0x0

        // hack: if true, will return fov to normal at end of lerp
        bool blendFOV_autoStop; // Offset: 0x1

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendFOVStartTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendFOVEndTime; // Offset: 0x10

        float blendToFOV; // Offset: 0x18

    }; // Size: 0x20

    struct damageTaken_t
    {
        // aggregated damage info over actor's life done by players for player kill assist tracking
        float amount; // Offset: 0x0

        idDamageParms damageParms; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStamp; // Offset: 0xA58

    }; // Size: 0xA60

    struct equipmentInfo_t
    {
        struct itemData_t
        {
            // track this so we can track for multiple different timeouts once equipment has multiple uses
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentRechargeStartTime; // Offset: 0x0

            // track total duration so that we can calculate % without having to know what equipment timeouts we're tracking
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentRechargeDuration; // Offset: 0x8

            // recharge timer
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentRechargeTime; // Offset: 0x10

            // earliest time equipment can be used again (when it has multiple uses)
            idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentReuseTime; // Offset: 0x18

            // current number of uses available
            int equipmentUsesAvailable; // Offset: 0x20

            // if true, will not play recharge complete feedback
            bool equipmentSkipNextRechargeCompleteFeedback; // Offset: 0x24

        }; // Size: 0x28

        // index into playerProps->validEquipmentList
        int currentIndex; // Offset: 0x0

        // queued for use, waiting for anim event
        idDeclInventory* queuedItem; // Offset: 0x8

        // keep track of last item used
        idDeclInventory* lastItemUsed; // Offset: 0x10

        // the launcher has its own recharge, and items have separate recharge times
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > launcherRechargeTime; // Offset: 0x18

        // was a time reduction applied? (so HUD can be updated with new end time)
        bool timeReductionApplied; // Offset: 0x20

        // equipment (frag grenade, ice bomb, and flame belch)
        idArray < idPlayer::equipmentInfo_t::itemData_t , 4 > equipmentItems; // Offset: 0x28

        // if any equipment is used while recharging, save its index here so that durations can be kept straight
        int equipmentUsedWhileRecharging; // Offset: 0xC8

        // queuedItem is waiting for ledge grab to complete
        bool queuedForLedgeGrab; // Offset: 0xCC

        // queuedItem is waiting for monkey bar to complete
        bool queuedForMonkeyBar; // Offset: 0xCD

        equipSlot_t forceEquipSlot; // Offset: 0xD0

    }; // Size: 0xD8

    struct equipmentPowerUp_t
    {
        idDeclEntityDef* entityDef; // Offset: 0x0

        idDeclProp_UseComponent* useComponentDecl; // Offset: 0x8

        idStr powerupName; // Offset: 0x10

        idManagedClassPtr < idEntity > droppedPowerUp; // Offset: 0x40

        int droppedPowerUpLastTouchedFrame; // Offset: 0x60

    }; // Size: 0x68

    struct vegaTrainingInfo_t
    {
        // loot component
        idDeclLootDrop* suitModPropItem; // Offset: 0x0

        vegaTrainingStatus_t status; // Offset: 0x8

    }; // Size: 0x10

    struct lootInfo_t
    {
        idDeclEntityDef* entDef; // Offset: 0x0

        int amount; // Offset: 0x8

    }; // Size: 0x10

    struct loopingDamageSound_t
    {
        // sound event to start the looping sound
        idSoundEvent* startEvent; // Offset: 0x0

        // sound event to stop the looping sound
        idSoundEvent* stopEvent; // Offset: 0x8

        // the last frame that it was played
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > soundStopTime; // Offset: 0x10

    }; // Size: 0x18

    struct idPlayerServerPositionOverrideInfo_t
    {
        enum playerServerPositionOverrideInfoType_t : int
        {
            PLAYER_OVERRIDEINFO_TELEPORTED = 0,
            PLAYER_OVERRIDEINFO_TELEPORTEDREMOTEONLY = 1,
            PLAYER_OVERRIDEINFO_RESPAWNED = 2,
            PLAYER_OVERRIDEINFO_RESPAWNED_TELEPORT_FINAL = 3,
            PLAYER_OVERRIDEINFO_MAX = 4
        };

        // {{ units = m }}
        idVec3 positionBeforeEvent; // Offset: 0x0

        idMat3 axisBeforeEvent; // Offset: 0xC

        // {{ units = m }}
        idVec3 positionAfterEvent; // Offset: 0x30

        idMat3 axisAfterEvent; // Offset: 0x3C

        idVec3 forwardLookAfterEvent; // Offset: 0x60

        idNetEvent < 15 > eventOccurred; // Offset: 0x70

        idPlayer::idPlayerServerPositionOverrideInfo_t::playerServerPositionOverrideInfoType_t eventType; // Offset: 0x88

    }; // Size: 0x90

    struct spreadInfo_t
    {
        idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > baseWeaponSpread; // Offset: 0x0

        idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > kickWeaponSpread; // Offset: 0x30

    }; // Size: 0x60

    struct lootDropCooldownTracking
    {
        unsigned long long lootDropID; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDropTime; // Offset: 0x8

    }; // Size: 0x10

    struct arGuiInfo_t
    {
        bool checkInteraction; // Offset: 0x0

        idGuiEntity* ent; // Offset: 0x8

    }; // Size: 0x10

    struct playerAnimAbilitiesManaged_t
    {
        int animAbilities; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > enableGameTime; // Offset: 0x8

    }; // Size: 0x10

    struct arsenalProgressData_t
    {
        idDeclUnlockable* decl; // Offset: 0x0

        int progress; // Offset: 0x8

    }; // Size: 0x10

    struct idPlayerCameraShake
    {
        bool active; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

        float decay; // Offset: 0x10

        idDeclViewShake* declViewShake; // Offset: 0x18

    }; // Size: 0x20

    struct idPlayerExplicitMotion_t
    {
        // idMotionController explicitMotionController;
        idVec3 right; // Offset: 0x0

        idVec3 up; // Offset: 0xC

        idVec3 forward; // Offset: 0x18

        idVec3 lastPos; // Offset: 0x24

        playerExplicitMove_t singleMove; // Offset: 0x30

    }; // Size: 0x74

    struct playerBodyAnimInfo_t
    {
        int framesIdle; // Offset: 0x0

        int framesInAir; // Offset: 0x4

        idHavokQueryId movementQuery; // Offset: 0x8

        idHavokQueryId airQuery; // Offset: 0x10

        idHavokShape* havokShapeForQueries; // Offset: 0x18

        idHavokQueryId havokMovementQuery; // Offset: 0x20

        idHavokQueryId havokAirQuery; // Offset: 0x28

        bool physicsJumped; // Offset: 0x0

        bool physicsDoubleJumped; // Offset: 0x0

        bool turning; // Offset: 0x0

        bool jumpPreLand; // Offset: 0x0

        bool fwdMovementBlocked; // Offset: 0x0

        bool airTurning; // Offset: 0x0

        bool idleTileCmd; // Offset: 0x0

        idVec3 lastVelocity; // Offset: 0x34

        // {{ units = m }}
        idVec3 ledgeGrabPosition; // Offset: 0x40

        // {{ units = m }}
        idVec3 lastActivatedLedgeGrabTargetPosition; // Offset: 0x4C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastActivatedLedgeGrabUniqueTimestamp; // Offset: 0x58

        bool ledgeGrabAnimPlaying; // Offset: 0x60

        // {{ units = m / s }}
        float lastSpeed; // Offset: 0x64

        idPlayerMechanicLedgeGrabState_t ledgeGrabbingState; // Offset: 0x68

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > ledgeGrabUniqueTimeStamp; // Offset: 0x70

        bool monkeybarAnimIsPlaying; // Offset: 0x78

        idVec3 monkeybarAnimPos; // Offset: 0x7C

        // {{ units = m }}
        idVec3 lastActivatedMonkeybarAnimPos; // Offset: 0x88

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > monkeybarUniqueTimeStamp; // Offset: 0x98

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastActivatedMonkeyBarUniqueTimestamp; // Offset: 0xA0

        playerMechanicInteractType_t desiredPlayerInteractType; // Offset: 0xA8

        bool interactAnimIsPlaying; // Offset: 0xAC

        idVec3 interactAnimStartPosition; // Offset: 0xB0

        idVec3 interactAnimTargetPosition; // Offset: 0xBC

        idVec3 interactAnimTargetDirection; // Offset: 0xC8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > interactUniqueTimeStamp; // Offset: 0xD8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastActivatedInteractUniqueTimeStamp; // Offset: 0xE0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > localInteractStartTime; // Offset: 0xE8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dashedUniqueTimeStamp; // Offset: 0xF0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDashedUniqueTimeStamp; // Offset: 0xF8

        idVec3 dashDirection; // Offset: 0x100

        // next time we can play a pain anim
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextPainAnimTime; // Offset: 0x110

        // pain anim count we're up to on this local machine
        int localPainAnimCount; // Offset: 0x118

    }; // Size: 0x120

    struct serializedPlayerAnimInfo_t
    {
        // current walking / running state
        walkState_t walkState; // Offset: 0x0

        // {{ units = m }}
        idVec3 lastPhysicsOrigin; // Offset: 0x4

        idVec3 forwardLook[2]; // Offset: 0x10

        // {{ units = m }}
        idVec3 ledgeGrabPos; // Offset: 0x28

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > ledgeGrabUniqueTimestamp; // Offset: 0x38

        idVec3 monkeybarAnimPos; // Offset: 0x40

        idVec3 dashedDirection; // Offset: 0x4C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > monkeybarUniqueTimeStamp; // Offset: 0x58

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > dashedUniqueTimeStamp; // Offset: 0x60

        playerMechanicInteractType_t activeInteractType; // Offset: 0x68

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > interactUniqueTimeStamp; // Offset: 0x70

        idVec3 interactTargetAnimPos; // Offset: 0x78

        idVec3 interactTargetAnimDir; // Offset: 0x84

        // Used to tell animations over the network the rate on animations {{ units = m / s }}
        float modelSpeed; // Offset: 0x90

        // {{ units = radians / s }}
        float modelTurnSpeed; // Offset: 0x94

        bool isZooming; // Offset: 0x98

        bool playSprintAnim; // Offset: 0x99

        idNetEvent < 15 > physicsJumped; // Offset: 0xA0

        idNetEvent < 15 > physicsDoubleJumped; // Offset: 0xB8

        idNetEvent < 15 > attackStarted; // Offset: 0xD0

        idNetEvent < 15 > meleed; // Offset: 0xE8

        idNetEvent < 15 > meleedLeft; // Offset: 0x100

        idNetEvent < 15 > meleedRight; // Offset: 0x118

        idNetEvent < 15 > reloadStarted; // Offset: 0x130

        idNetEvent < 15 > attachThrowItem; // Offset: 0x148

        idNetEvent < 15 > throwItem; // Offset: 0x160

        idNetEvent < 15 > ceaseFire; // Offset: 0x178

        idNetEvent < 15 > chainsawSwipeMiss; // Offset: 0x190

        idPlayerMechanicLedgeGrabState_t ledgeGrabbingState; // Offset: 0x1A8

        idDeclThrowable* throwable; // Offset: 0x1B0

        idNetEvent < 15 > weaponSwap; // Offset: 0x1B8

        idDeclWeapon* pendingWeapon; // Offset: 0x1D0

        // pain joint the server says we should play anim on
        short painJoint; // Offset: 0x1D8

        // pain direction from server
        unsigned char painDir; // Offset: 0x1DA

        // pain anim count the server says we're up to
        int painAnimCount; // Offset: 0x1DC

        char cmdForward; // Offset: 0x1E0

        char cmdRight; // Offset: 0x1E1

    }; // Size: 0x1E8

    struct cachedMeleeInputs_t
    {
        bool firePressed; // Offset: 0x0

        bool meleePressed; // Offset: 0x1

        bool altFirePressed; // Offset: 0x2

    }; // Size: 0x3

    struct infoMessages_t
    {
        int savedInventoryScreen; // Offset: 0x0

    }; // Size: 0x4

    struct newInventoryItems_t
    {
        // decl of the inventory item
        idDeclInventory* decl; // Offset: 0x0

        // has the item been noticed already
        bool seen; // Offset: 0x8

        // page the item is displayed on in the inventory
        int page; // Offset: 0xC

    }; // Size: 0x10

    struct screenFX_t
    {
        struct conditionsInEffect_t
        {
            fxCondition_t condition; // Offset: 0x0

            idTypesafeTime < long long , gameTimeUnique_t , 999960 > timePlayed; // Offset: 0x8

        }; // Size: 0x10

        // the global fx manager handle
        idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x0

        idList < idPlayer::screenFX_t::conditionsInEffect_t , TAG_IDLIST , false > conditionsInEffect; // Offset: 0x8

    }; // Size: 0x20

    struct idSpawnDelayedInfo
    {
        bool isClient; // Offset: 0x0

        bool isServer; // Offset: 0x1

        // {{ units = m }}
        idVec3 spawnPosition; // Offset: 0x4

        idAngles spawnOrientation; // Offset: 0x10

    }; // Size: 0x1C

    struct nightmareParams_t
    {
        // the value of the units to remove per time, -1.0 indicates calculate from Max health
        float healthReductionNightmare; // Offset: 0x0

        // the time value to remove the required units, 0 indicates do not remove units
        int healthReductionNightmareMs; // Offset: 0x4

        // the minimum value player needs to have in nightmare to reduce health
        float healthReductionMinValueNightmare; // Offset: 0x8

        // the last time mark we used to calculate the damage
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > healthReductionTimeMark; // Offset: 0x10

        // inverse of healthReductionNightmareMs
        float healthReductionNightmareMsInverse; // Offset: 0x18

    }; // Size: 0x20

    struct slayerGateTeleport_t
    {
        // name of map to load
        idStr mapName; // Offset: 0x0

        // name of layer state change where loading into a gate starts
        idStr layerStateChangeName; // Offset: 0x30

        // min slayer rating need to enter this gate
        int minSlayerRating; // Offset: 0x60

        // already played this gated area?
        bool hasPlayed; // Offset: 0x64

    }; // Size: 0x68

    struct lifeGateTeleport_t
    {
        // name of map to load
        idStr mapName; // Offset: 0x0

        // name of layer state change where loading into a gate starts
        idStr layerStateChangeName; // Offset: 0x30

        // cost of extra lives to enter this gate
        int numberOfExtraLives; // Offset: 0x60

        // already played this gated area?
        bool hasPlayed; // Offset: 0x64

    }; // Size: 0x68

    struct slayerCheckpointTeleport_t
    {
        // fx condition for teleport to checkpoint previously hit start
        fxCondition_t ckPtTeleportFxStart; // Offset: 0x0

        // fx condition for teleport to checkpoint previously hit stop
        fxCondition_t ckPtTeleportFxStop; // Offset: 0x4

        // time in ms to pad the teleport to old checkpoints
        idTypesafeTime < int , millisecondUnique_t , 1000 > teleportTransitionMs; // Offset: 0x8

        // sound to play on teleport
        idSoundEvent* teleportSound; // Offset: 0x10

    }; // Size: 0x18

    struct meleeDamageData_t
    {
        idDamageParms::damageType_t damageType; // Offset: 0x0

        int targetEntityId; // Offset: 0x4

    }; // Size: 0x8

    struct guiInfo_t
    {
        // Icon to show for this Demon.
        idMaterial2* icon; // Offset: 0x0

        // Alternate icon to show for this Demon.
        idMaterial2* iconAlt; // Offset: 0x8

    }; // Size: 0x10

    typedef idInternalFsm < idPlayer , idPlayer::playerState_t , idPlayer::playerTransition_t > idPlayerFSM;

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnTime; // Offset: 0x4BD8

    // server time of last death
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deathTime; // Offset: 0x4BE0

    bool canShoot; // Offset: 0x4BE8

    // net var for firing
    bool netIsFiring; // Offset: 0x4BE9

    bool rightLauncherIsAvailable; // Offset: 0x4BEA

    // Maintained on client and server
    bool killedMoreRecentlyThanRespawned; // Offset: 0x4BEB

    // indicates we are ready to finalize the spawn process
    bool waitingRespawnFinalization; // Offset: 0x4BEC

    bool swapMoveLookSticks; // Offset: 0x4BED

    // caches requests to show some gui operations that are only executed in post spawn to handle some edge cases with requests for guis coming in on the same frame as player spawning but before post spawn has loaded the guis
    cachedSpawnRequest_t cachedSpawnRequest; // Offset: 0x4BEE

    // this is used for some instances where the player is the victim in a sync-attack
    idEntityCamera* prowlerVictimCamera; // Offset: 0x4BF0

    // are locked to view a demon?
    bool demonVictimCameraIsDemonLock; // Offset: 0x4BF8

    idDeclLightRig* oldLightRig; // Offset: 0x4C00

    // {{ units = m }}
    idVec3 demonVictimCameraLockViewOriginBase; // Offset: 0x4C08

    // {{ units = m }}
    idVec3 demonVictimCameraLockViewOriginFinal; // Offset: 0x4C14

    idMat3 demonVictimCameraLockViewAxis; // Offset: 0x4C20

    idMat3 demonVictimCameraLockViewStartAxis; // Offset: 0x4C44

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > demonVictimCameraLockViewStartTime; // Offset: 0x4C68

    idManagedClassPtr < idAnimatedEntity > demonVictimCameraLockViewTarget; // Offset: 0x4C70

    bool demonVictimCameraLockInitialViewSet; // Offset: 0x4C90

    idVec3 lastValidAASPosition; // Offset: 0x4C94

    // ------------------------ Control Functionality ------------------------
    bool controlRespawnedFromDeath; // Offset: 0x4CA0

    // ------------------------ Hands additive anim aliases ------------------------
    idPlayer::playerAdditiveHandsAnims_t playerAdditiveHandsAnims; // Offset: 0x4CA8

    // unified third person hands + legs def (move to playerprops - demonPlayer has one now, so moving to props might be good?)
    idDeclEntityDef* thirdPersonBodyDefault; // Offset: 0x4CB8

    // unified third person hands + legs def (move to playerprops - demonPlayer has one now, so moving to props might be good?)
    idDeclEntityDef* thirdPersonBodyPraetor; // Offset: 0x4CC0

    // unified third person hands + legs def (move to playerprops - demonPlayer has one now, so moving to props might be good?)
    idDeclEntityDef* thirdPersonBodyMPUseDoomHands; // Offset: 0x4CC8

    int partyToken; // Offset: 0x4CD0

    int midRoundRespawnCount; // Offset: 0x4CD4

    idVec4 renderShieldParms; // Offset: 0x4CD8

    idVec4 previousShieldParms; // Offset: 0x4CE8

    float previousHealth; // Offset: 0x4CF8

    bool applyShieldParms; // Offset: 0x4CFC

    bool isInDoomGravity; // Offset: 0x4CFD

    // Hammer data
    bool cancelHammerSlam; // Offset: 0x4CFE

    bool canCancelHammerSlam; // Offset: 0x4CFF

    bool hammerDryFired; // Offset: 0x4D00

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSlamTime; // Offset: 0x4D08

    // non-zero = active
    int slayerInteractionProtectionCount; // Offset: 0x4D10

    idDeclGoreWound* lowerBodyGoreWound; // Offset: 0x4D18

    // Playable Character Decl for Skinning.
    idDeclPlayableCharacter* playableCharacter; // Offset: 0x4D20

    // D4 weapon pose the default hands model
    idDeclMD6* handsModelDefault; // Offset: 0x4D28

    // the praetor hands model
    idDeclMD6* handsModelPraetor; // Offset: 0x4D30

    // the default hands model (Doom1 Classic pose)
    idDeclMD6* handsModelDefault_D1; // Offset: 0x4D38

    // the praetor hands model (Doom1 Classic pose)
    idDeclMD6* handsModelPraetor_D1; // Offset: 0x4D40

    // the hands model for Doom Praetor hands in MP
    idDeclMD6* handsModelMPUseDoomHands; // Offset: 0x4D48

    // the hands model for Doom Praetor hands in MP (Doom1 Classic pose)
    idDeclMD6* handsModelMPUseDoomHands_D1; // Offset: 0x4D50

    // show / hide mesh info
    idMD6Util::meshShowHideInfo_t handsModelDefaultShowHideMeshInfo; // Offset: 0x4D58

    // show / hide mesh info
    idMD6Util::meshShowHideInfo_t handsModelPraetorShowHideMeshInfo; // Offset: 0x4D90

    // show / hide mesh info
    idMD6Util::meshShowHideInfo_t handsModelDefault_D1ShowHideMeshInfo; // Offset: 0x4DC8

    // show / hide mesh info
    idMD6Util::meshShowHideInfo_t handsModelPraetor_D1ShowHideMeshInfo; // Offset: 0x4E00

    // show / hide mesh info
    idMD6Util::meshShowHideInfo_t thirdPersonModelDefaultShowHideMeshInfo; // Offset: 0x4E38

    // the hands model
    idDeclMD6* handsModel; // Offset: 0x4E70

    // the hands animweb
    idDeclAnimWeb* handsAnimWeb; // Offset: 0x4E78

    // the hands animweb (Doom1 Classic pose)
    idDeclAnimWeb* handsAnimWeb_D1; // Offset: 0x4E80

    // the hands animweb currently in use
    idDeclAnimWeb* handsAnimWebInUse; // Offset: 0x4E88

    // the hands FX
    idDeclFX* handsFX; // Offset: 0x4E90

    // the helmet model
    idDeclMD6* helmetModel; // Offset: 0x4E98

    // whether we have the praetor assets or not - true by default and set to false in entityDef/player/sp/intro.def
    bool hasPraetorHandsAndBody; // Offset: 0x4EA0

    // set by script command
    bool forcePraetorHandsAndBody; // Offset: 0x4EA1

    // need to call InitHands to get the correct model
    bool handsModelStale; // Offset: 0x4EA2

    // need to call InitThirdPersonBody to get the correct model
    bool thirdPersonBodyModelStale; // Offset: 0x4EA3

    // register game challenge player
    bool registerWithGameChallengeOnSpawn; // Offset: 0x4EA4

    // decl for normal BFG weapon
    idDeclWeapon* normalBFG; // Offset: 0x4EA8

    // decl for hidden BFG weapon
    idDeclWeapon* hiddenBFG; // Offset: 0x4EB0

    // equipment launcher on left shoulder
    idEquipmentLauncher* equipmentLauncherLeft; // Offset: 0x4EB8

    // equipment launcher on right shoulder
    idEquipmentLauncher* equipmentLauncherRight; // Offset: 0x4EC0

    // tracks what the last BFG type weapon we used was
    idDeclWeapon* lastEquippedBFGType; // Offset: 0x4EC8

    // list of the order in which weapons should be auto-selected when the current weapon runs out of ammo
    idList < const idDeclWeapon * , TAG_IDLIST , false > weaponAutoSelectPriorityList; // Offset: 0x4ED0

    // additive animated hands hit reactions (move to playerprops?)
    idHandsHitReactionData_t handsHitReactionData; // Offset: 0x4EE8

    // animated player body reactions on tpHands and tpLegs
    idPlayerBodyReactionData_t playerBodyReactionData; // Offset: 0x4F18

    // body reactions, generally played on the tp hands and tp legs, but may also involve fp hands
    idPlayerBodyReactions playerBodyReactions; // Offset: 0x4F78

    // walk animation data, if not provided will default to the old motion code.
    idThirdPersonWalkAnimDatabase_t thirdPersonWalkAnimDatabase; // Offset: 0x4FD8

    idManagedClassPtr < idInteractable > lastUsedInteractable; // Offset: 0x5B20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > autoDeselectFistsTime; // Offset: 0x5B40

    bool hasRegisteredHudBroadcasts; // Offset: 0x5B48

    idStaticList < idPlayer::playerMaterialStackEntry_t , 2 , false , TAG_IDLIST > materialStack; // Offset: 0x5B50

    // player material settings
    idPlayer::playerMaterials_t playerMaterials; // Offset: 0x5B88

    bool loadingInventory; // Offset: 0x5B98

    // give over time data
    idPlayer::giveOverTime_t giveOverTime; // Offset: 0x5BA0

    // stores all the flags for all the current reasons hands are disabled
    int disableFPHandsReasons; // Offset: 0x5C28

    idEnvironmentalDamageComponent evironmentalHazard; // Offset: 0x5C30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > switchPerkTime; // Offset: 0x6BE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showHandsTime; // Offset: 0x6BF0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSwitchPerkTime; // Offset: 0x6BF8

    int perkFamilyIndex; // Offset: 0x6C00

    int desiredPerkFamilyIndex; // Offset: 0x6C04

    int pendingPerkFamilyIndex; // Offset: 0x6C08

    bool triggerModSwap; // Offset: 0x6C0C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponSwitchTime; // Offset: 0x6C10

    bool isShowingLowHealthWarning; // Offset: 0x6C18

    // Percent of max health to play lowHealthSound
    float lowHealthSoundPercent; // Offset: 0x6C1C

    bool keepConsumeNonGuiInputSettings; // Offset: 0x6C20

    bool shouldIgnoreGuiInput; // Offset: 0x6C21

    bool inventoryHidHands; // Offset: 0x6C22

    bool spiritMicrowaveDamageMitigationActive; // Offset: 0x6C23

    // Don't mitigate damage based on orientation in battlemode
    bool ignoreDirectionalDamageInPVP; // Offset: 0x6C24

    // Brink of death
    int cachedDifficulty; // Offset: 0x6C28

    idDeclPlayerProps::playerDamageMitigation_t currentDamageMitigation; // Offset: 0x6C2C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBrinkOfDeathActivationTime; // Offset: 0x6C50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > brinkOfDeathDeactivationTime; // Offset: 0x6C58

    bool brinkOfDeathActive; // Offset: 0x6C60

    bool brinkOfDeathNeedsReset; // Offset: 0x6C61

    idSpawnId incappedAttackerSpawnId; // Offset: 0x6C64

    gameTeam_t incappedAttackerTeam; // Offset: 0x6C68

    idList < gameStat_t , TAG_IDLIST , false > clientStatChangeList; // Offset: 0x6C70

    int clientStatChangeIndex; // Offset: 0x6C88

    idPlayer::remoteInputInfo_t remoteInputInfo; // Offset: 0x6C90

    bool telemetry_positiveEmotionCheck; // Offset: 0x6CD8

    bool telemetry_negativeEmotionCheck; // Offset: 0x6CD9

    // highlight decl
    idDeclHighlight* weaponTargetingHighlightDecl; // Offset: 0x6CE0

    // highlights for targeting slots
    int weaponTargetingHighlights[12]; // Offset: 0x6CE8

    // Doom 5 melee test parms for doom 5 melee scheme
    idPlayer::doom5Melee_t doom5Melee; // Offset: 0x6D18

    int overlayEmotionalResponse; // Offset: 0x6E30

    idPlayer::fovInterpolationParms_t fovParms; // Offset: 0x6E38

    idManagedClassPtr < idEntity > helmet; // Offset: 0x6E58

    // helmet spring (due to movement, incoming damage, weapon kick)
    idSpring < idVec3 > helmetSpringPos; // Offset: 0x6E78

    // helmet spring (due to view angle changes)
    idSpring < idVec3 > helmetSpringViewAng; // Offset: 0x6ED0

    // the last time an Item ( thats on GCD ) was used.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUseTime; // Offset: 0x6F28

    // the next time an item ( thats on GCD ) can be used.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > coolDownTime; // Offset: 0x6F30

    // the last delay that was used for mixed mode
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDelay; // Offset: 0x6F38

    // How long the global cooldown takes.
    idTypesafeTime < int , millisecondUnique_t , 1000 > globalCooldownTimeMS; // Offset: 0x6F40

    // ------------------------ Equipment ------------------------
    idPlayer::equipmentInfo_t equipmentInfo; // Offset: 0x6F48

    idPlayer::equipmentPowerUp_t equipmentPowerUp; // Offset: 0x7020

    idList < idPlayer::vegaTrainingInfo_t , TAG_IDLIST , false > vegaTrainingInfo; // Offset: 0x7088

    idList < idPlayer::lootInfo_t , TAG_IDLIST , false > lootspawns; // Offset: 0x70A0

    idStaticList < idPlayer::loopingDamageSound_t , 4 , false , TAG_IDLIST > loopingDamageSounds; // Offset: 0x70B8

    idInternalFsm < idPlayer , idPlayer::playerState_t , idPlayer::playerTransition_t >* internalFSM; // Offset: 0x7130

    // weapon currently being equipped
    idManagedClassPtr < idWeapon > pendingEquipWeapon; // Offset: 0x7138

    // quick slot of the weapon that will be selected next (-1 means select fists)
    int pendingQuickWeaponSlot; // Offset: 0x7158

    int changeWeaponInstantly; // Offset: 0x715C

    // quick slot of the last weapon
    int lastWeaponSlot; // Offset: 0x7160

    // Weapon we had equipped before our last weapon.
    idManagedClassPtr < idWeapon > previousLastWeapon; // Offset: 0x7168

    // For demon transition, your last valid, non-special weapon for requiping after possesion ends
    idDeclWeapon* lastValidWeapon; // Offset: 0x7188

    // decl for the ammo that will be selected next (we use a decl so we don't have a dangling item pointer across multiple frames)
    idDeclAmmo* pendingAmmo; // Offset: 0x7190

    idDeclWeapon* quickWeaponFavorite; // Offset: 0x7198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextAmmoChangeTime; // Offset: 0x71A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextWeaponChangeTime; // Offset: 0x71A8

    // earliest time weapon can be changed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextWeaponCanChangeTime; // Offset: 0x71B0

    // server time of last ucmd processed (so we don't process same input twice)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > uCmdWeaponProcessedTime; // Offset: 0x71B8

    // turns on detailed debugging of where weapon selection is failing
    bool extraWeaponSelectDebugging; // Offset: 0x71C0

    // stores the last slot used for each selection group. This allows returning to the same weapon
    int weaponSelectionGroupCurSlot[10]; // Offset: 0x71C4

    idList < idPlayer::lootDropCooldownTracking , TAG_IDLIST , false > lootCooldownList; // Offset: 0x71F0

    idArray < idPlayer::spreadInfo_t , 2 > weaponSpread; // Offset: 0x7208

    bool cycleWeaponChange; // Offset: 0x72C8

    bool forceSelectWeapon; // Offset: 0x72C9

    bool useIntroBringUp; // Offset: 0x72CA

    int cycleWeaponWait; // Offset: 0x72CC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponButtonPressTime; // Offset: 0x72D0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponQuickSwapQueueFromSyncTime; // Offset: 0x72D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > useButtonPressTime; // Offset: 0x72E0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cardButtonPressTime; // Offset: 0x72E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > superMeterButtonPressTime; // Offset: 0x72F0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > inhibitFireControlStartTime; // Offset: 0x72F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > flameBelchNextUseTime; // Offset: 0x7300

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hudLastActiveTime; // Offset: 0x7308

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > airControlEnableTime; // Offset: 0x7310

    idNetEvent < 15 > replenishedByServer; // Offset: 0x7318

    // for serializing blood punch. only valid on remote clients and server.
    float netBloodpunchCharges; // Offset: 0x7330

    idArray < idAngles , 4 > angleSamples; // Offset: 0x7334

    int currentAngleSample; // Offset: 0x7364

    idTypesafeTime < int , millisecondUnique_t , 1000 > tagInteractionPressTime; // Offset: 0x7368

    bool handleTagUse; // Offset: 0x736C

    bool handleUseItem; // Offset: 0x736D

    // if true will stop player fire till the fire button is released
    bool inhibitFireControl; // Offset: 0x0

    // true if weapon is zooming in/out or fully zoomed in, this is not safe to set for remote clients because it is overriden by their input
    bool zoomedIn; // Offset: 0x0

    // true if player doesn't collide when moving
    bool noClip; // Offset: 0x0

    // true if player is inhibited
    bool inhibited; // Offset: 0x0

    // true if player is inhibited (server only, is serialized)
    bool serverForceInhibit; // Offset: 0x0

    // true if player is weapon wheel inhibited (to be set by logic nodes only)
    bool logicForceInhibitWeaponWheel; // Offset: 0x0

    // if true means code systems like the weapon wheel cannot manipulate inhibit flags - logic nodes have full control
    bool logicBlockCodeFromSettingInhibitFlags; // Offset: 0x0

    // true if the player is incapacitated
    bool incapacitated; // Offset: 0x0

    // true if player is allowed to respawn
    bool canRespawn; // Offset: 0x0

    // show third person player model when dead
    bool showDeadBody; // Offset: 0x0

    // true if player is in menu
    bool isAFK; // Offset: 0x0

    // forces the next landing to be at least a soft landing in TestForAndRespondToLanding
    bool forceSoftLanding; // Offset: 0x0

    // forces the next landing to be ignored in TestForAndRespondToLanding
    bool forceIgnoreLanding; // Offset: 0x0

    // true if player should be incognito to enemies
    bool incognitoMode; // Offset: 0x0

    // true if the player has anti-gravity
    bool hasAntiGravity; // Offset: 0x0

    // true if the current weapon is in a charged state.
    bool chargedWeapon; // Offset: 0x0

    // true if the player currently has infinite ammo
    bool infiniteAmmo; // Offset: 0x0

    // true if the player currently has infinite extra lives
    bool infiniteExtraLives; // Offset: 0x0

    // true if the player currently has infinite ammo on special weapons
    bool infiniteAmmoSpecWpn; // Offset: 0x0

    // true if the player has been lethally wounded in a GK
    bool hasLethalWound; // Offset: 0x0

    // true if player has hostile target
    bool hasHostileTarget; // Offset: 0x0

    // true if player has gone into photomode movement
    bool photoMode; // Offset: 0x0

    // true if player is inhibited from using the chainsaw
    bool chainsawInhibited; // Offset: 0x0

    // true if player is inhibited from loading checkpoints
    bool loadCheckpointInhibited; // Offset: 0x0

    // true if the photo mode free camera is active
    bool photoModeCameraActive; // Offset: 0x0

    // keep the state of the checkpoint inhibit flag
    bool playerInhibitLoadChckPtDuringSync; // Offset: 0x0

    // true is slayer died during invasion
    bool isInvasionSpectating; // Offset: 0x0

    // used for when other systems want to block photo mode in specific circumstances
    int isPhotoModeBlocked; // Offset: 0x7374

    idPlayer::spectatingInfo_t spectatingInfo; // Offset: 0x7378

    // Zoom related
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > zoomFov; // Offset: 0x7380

    // added Doom4 blended zoom
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > zoomBlend; // Offset: 0x73B0

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > zoomEquipmentFovDelta; // Offset: 0x73E0

    // whether the player wants zoom or not
    bool wantZoom; // Offset: 0x7410

    // time we started zooming (undefined if wantZoom == false)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > zoomStartTime; // Offset: 0x7418

    // swimming sound state tracking
    idPlayer::playerSwimmingSoundState_e swimmingSoundState; // Offset: 0x7420

    idSoundWwiseID swimmingSoundStateGroup; // Offset: 0x7424

    idSoundWwiseID swimmingSoundState_in; // Offset: 0x7428

    idSoundWwiseID swimmingSoundState_out; // Offset: 0x742C

    int lastNoAmmoWeaponSwitchFrame; // Offset: 0x7430

    int syncSystemIsReadyFrame; // Offset: 0x7434

    // ------------------------ variables for the weapon kick offset ------------------------ weapon Kick Component
    idWeaponKickComponent weaponKickComponent; // Offset: 0x7438

    bool hasKickStartPitch; // Offset: 0x76B0

    float kickStartPitch; // Offset: 0x76B4

    // currently used by meat hook... (only FOV is implemented)
    idWeaponKickComponent additionalKickComponent; // Offset: 0x76B8

    // OLD WEAPON KICK STUFF
    bool weaponKickIntoYaw; // Offset: 0x7930

    float desiredWeaponKickPitchOffset; // Offset: 0x7934

    float weaponKickPitchIntoSpeedPercent; // Offset: 0x7938

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > weaponKickFromYawOffset; // Offset: 0x7940

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > weaponKickIntoYawOffset; // Offset: 0x7970

    // How fast in degrees per second, that the player recovers from the weapon kick
    float weaponKickPitchFromSpeed; // Offset: 0x79A0

    // How fast in degrees per second, that the player goes into his pitch kick
    float weaponKickPitchIntoSpeed; // Offset: 0x79A4

    // How fast in degrees per second, that the player recovers from the weapon kick
    float weaponKickYawFromSpeed; // Offset: 0x79A8

    // How fast in degrees per second, that the player goes into his pitch kick
    float weaponKickYawIntoSpeed; // Offset: 0x79AC

    // if the player manually changes his pitch by over the delta amount, we stop recovering form the weapon pitch kick
    float weaponKickRecoveryDelta; // Offset: 0x79B0

    // time when the weapon kick will start recovering
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponKickRecoveryTime; // Offset: 0x79B8

    // tracks pitch offset from double jump
    float doubleJumpPitchOffset; // Offset: 0x79C0

    // Angles we are trying to go back to after a sync.
    idAngles syncResetAngles; // Offset: 0x79C4

    // When we stop resetting.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > syncResetTime; // Offset: 0x79D0

    // where the player was located the last time they fired their weapon {{ units = m }}
    idVec3 lastFireOrigin; // Offset: 0x79D8

    // time that the player last fired their weapon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFireTime; // Offset: 0x79E8

    // The fire mode used the last time the player fired their weapon
    weaponFireMode_t lastWeaponFireMode; // Offset: 0x79F0

    // Whether or not the last shot fired was zoomed
    bool lastWeaponFireWasZoomed; // Offset: 0x79F4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTakenTime; // Offset: 0x79F8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAttackTime; // Offset: 0x7A00

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hammerGhostEndTime; // Offset: 0x7A08

    idFireParms lastFireParms; // Offset: 0x7A10

    // Tracks how many times player received damage mitigation damage events in a frame
    int damageMitigationEventCount; // Offset: 0x7CB8

    // tracks whether future damage fx are playing
    bool futureDamageScaleFXPlaying; // Offset: 0x7CBC

    // scale future damage until this time is reached
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > futureDamageScaleEndTime; // Offset: 0x7CC0

    // scale future damage by this much
    float futureDamageScaleMultiplier; // Offset: 0x7CC8

    idHavokQueryId hostileTargetQuery; // Offset: 0x7CD0

    idHavokQueryId havokHostileTargetQuery; // Offset: 0x7CD8

    // server keeps a rolling record of damage the player receives, so that it can be sent out for death report
    idPlayerDamageReceivedHistory damageReceivedHistory; // Offset: 0x7CE0

    // ------------------------ Items ------------------------ current inventory item to use when there's no focus
    idManagedClassPtr < idInventoryItem > curQuickItem; // Offset: 0x7D38

    // hud indication of which quick item is selected
    int curQuickItemSlot; // Offset: 0x7D58

    // how long the player has been using an item (also serves as the reload time when overloading reload as use)
    idTypesafeTime < int , millisecondUnique_t , 1000 > playerUseTime; // Offset: 0x7D5C

    idPlayer::playerUseState_t playerUseState; // Offset: 0x7D60

    idManagedClassPtr < idEntity > initialFocusUsable; // Offset: 0x7D68

    // ------------------------ third person models ------------------------ unified third person hands + legs
    idManagedClassPtr < idAlignedEntity > thirdPersonBody; // Offset: 0x7D88

    // JAF NOTE - This will need to be cleaned up to allow sync entities to be defined using decl resource
    idManagedClassPtr < idSyncEntity > syncMaster; // Offset: 0x7DA8

    // instead of entityDef. That way we can have 1 sync entity that interacts with players/objects that the game can use, rather than having multiple sync entities that need to be spawned. Global Sensitivity Scale ( ramps up over time until 1.0f )
    float gradualSensitivityScalar; // Offset: 0x7DC8

    // ------------------------ Sync melee ------------------------ Sync melee entity setup
    idSyncAttack syncMelee; // Offset: 0x7DD0

    // Need to save the sync entity so that we can refer to it in AnimEvent_ReleasePlayerFromSync.
    idManagedClassPtr < idSyncEntity > savedSyncEntity; // Offset: 0x8420

    // Need to save the sync entity so that we can refer to it in AnimEvent_ReleasePlayerFromSync.
    idManagedClassPtr < idSyncEntity > mostRecentSyncEntity; // Offset: 0x8440

    // the last group we used for glory kills.
    idList < idAtomicString , TAG_IDLIST , false > lastSyncMeleeGroups; // Offset: 0x8460

    // last X frames of the joints we focused on.
    idList < int , TAG_IDLIST , false > jointFocusHistory; // Offset: 0x8478

    // record total heat added so that any deficit can be added at the end
    float chainsawSyncHeatPercentAdded; // Offset: 0x8490

    // records that the player is dying in a sync anim and should not be ragdolled or have a body reaction death anim played
    bool willDieInSync; // Offset: 0x8494

    // last time CheckVelocityForGloryKill failed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastVelocityCheckForGloryKillFailTime; // Offset: 0x8498

    // ------------------------ Guis ------------------------
    idTypesafeTime < int , millisecondUnique_t , 1000 > showObjectivesPushButtonTime; // Offset: 0x84A0

    bool disableSubtitles; // Offset: 0x84A4

    // TODO: replace this concept and do this through HUD state instead; this is a temporary fix for beta.
    bool hideReticle; // Offset: 0x84A5

    // TODO: replace this concept and do this through HUD state instead; this is a temporary fix for beta.
    bool hideHudForCinematic; // Offset: 0x84A6

    bool bringUpObjectivesPushed; // Offset: 0x84A7

    idSWF* loadedGuis[20]; // Offset: 0x84A8

    int tutorialdesiredQuickLaunch; // Offset: 0x8548

    idList < const idDeclTutorialEvent * , TAG_IDLIST , false > tutorialToShow; // Offset: 0x8550

    bool objectiveInWorldShown; // Offset: 0x8568

    // TODO: this is a hack, replace at some point
    bool hideLowHealthFxForPvpEndOfMatch; // Offset: 0x8569

    // minimum weapon points required to show weaponpoint / modbot tutorial
    int minWeaponPoints; // Offset: 0x856C

    // mimimum praetor tokens required to show suit mod tutorial
    int minPraetorTokens; // Offset: 0x8570

    // show weapon / praetor progression tutorials on initial map load
    bool showOnInitialMapLoad; // Offset: 0x8574

    // reset level/checkpoint death count when tutorial is popped
    bool resetCheckpointDeathsWhenShown; // Offset: 0x8575

    // reset level/checkpoint death count when tutorial is popped
    bool resetLevelDeathsWhenShown; // Offset: 0x8576

    // show weapon / praetor progression tutorials after dying x number of times per checkpoint
    int numDeathsPerCheckpoint; // Offset: 0x8578

    // show weapon / praetor progression tutorials after dying x number of times per checkpoint
    int numDeathsPerLevel; // Offset: 0x857C

    // weapon point tutorial decl
    idDeclTutorialEvent* weaponPointTutorial; // Offset: 0x8580

    // mod bot tutorial decl
    idDeclTutorialEvent* modBotTutorial; // Offset: 0x8588

    // mod bot tutorial decl + praetor points
    idDeclTutorialEvent* modBotTutorial_pt; // Offset: 0x8590

    // praetor token tutorial decl
    idDeclTutorialEvent* praetorTokenTutorial; // Offset: 0x8598

    // weapon and praetor tutorial decl
    idDeclTutorialEvent* weaponAndPraetorTutorial; // Offset: 0x85A0

    // codex for the above progression tutorials
    idDeclCodexEntry* progressionTutorialCodex; // Offset: 0x85A8

    // the last checkpoint we died at
    idStr lastCheckpointDeathName; // Offset: 0x85B0

    // the last level we died in
    idStr lastLevelDeathName; // Offset: 0x85E0

    // number of times we've died at the current checkpoint
    int numDeathsCurrentCheckpoint; // Offset: 0x8610

    // number of times we've died in this level
    int numDeathsCurrentLevel; // Offset: 0x8614

    // number of times the player needs to die by the marauder on this save slot before we pop the marauder tutorial
    int numDeathsForAIMarauderTutorial; // Offset: 0x8618

    // number of times to show the AI marauder tutorial
    int numTimesToShowAIMarauderTutorial; // Offset: 0x861C

    // tutorial for when the marauder kills the player
    idDeclTutorialEvent* marauderKilledPlayerTutorial; // Offset: 0x8620

    idList < idPlayer::arGuiInfo_t , TAG_IDLIST , false > activeARGuis; // Offset: 0x8628

    // Marketing hack Tyrant Crucible entity def
    idDeclEntityDef* tyrantCrucibleDef; // Offset: 0x8640

    // Archvile sync glory kill def
    idDeclEntityDef* archvileSyncDef; // Offset: 0x8648

    // trailer camera advanced view shake
    idDeclAdvancedViewShake* tcamViewShake; // Offset: 0x8650

    // Hud related
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > echoStartTime; // Offset: 0x8658

    idVec4 echoLocation; // Offset: 0x8660

    // entity def for the weapon layout.
    idDeclEntityDef* dossierWeaponLayoutDef; // Offset: 0x8670

    // Materials needed for various SP UI elements
    idUIResources_t uiResources; // Offset: 0x8678

    bool contextOptionSelected; // Offset: 0x86B0

    bool ignoreTutorialPause; // Offset: 0x86B1

    // limit how frequently dossier can be opened to prevent spamming
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > dossierCanOpenTime; // Offset: 0x86B8

    // cache hud flags before we transform into demon, so we can go back to correct flags when we transform back
    int hudFlagsBeforeDemon; // Offset: 0x86C0

    // Doom anim abilities to restrict various things
    playerAnimAbilities_t animAbilities; // Offset: 0x86C4

    // save before and restore after a sync
    playerAnimAbilities_t animAbilitiesSaveSync; // Offset: 0x86C6

    idList < idPlayer::playerAnimAbilitiesManaged_t , TAG_IDLIST , false > animAbilitiesManaged; // Offset: 0x86C8

    // needs to be a pointer because this class is __saveobj'd and a reference to it is stored within the influenceManager, there are sequence dependencies which causes savegames to fail if this address is embedded within the presentable
    idPlayerViewCallbacks* viewCallbacks; // Offset: 0x86E0

    // tracks unlockable progress in the dozzier
    idList < idPlayer::arsenalProgressData_t , TAG_IDLIST , false > unlockableProgressDataList; // Offset: 0x86E8

    // (added from Doom4)
    idPlayer::idPlayerCameraShake cameraShake; // Offset: 0x8700

    // added from Doom4 to smooth view transitions when stepping or crouching when the animated bob cycle is active true = crouching, false = standing
    bool stepUpSpringCrouchState; // Offset: 0x8720

    // spring controlling the step-up and crouch for the view {{ ___ts = m }}
    idSpring < idVec1 > stepUpViewSpring; // Offset: 0x8724

    // spring controlling the step-up and crouch for the hands {{ ___ts = m }}
    idSpring < idVec1 > stepUpHandsSpring; // Offset: 0x8754

    // controls the procedural view roll when standing near the edge of cover
    float leanRoll; // Offset: 0x8784

    // ------------------------ physics / explicit motion ------------------------
    idPlayer::idPlayerExplicitMotion_t explicitMotion; // Offset: 0x8788

    // allows individual user commands to be inhibited
    idUCmdTracker::inhibitFlags_t inhibitFlags; // Offset: 0x87FC

    // used by CrashLanding {{ units = m }}
    idVec3 prevOrigin; // Offset: 0x8800

    // used by CrashLanding {{ units = m / s }}
    idVec3 prevVelocity; // Offset: 0x880C

    // used for tracking distance traveled metric {{ units = m }}
    float leftoverDistanceTraveled; // Offset: 0x8818

    // handles firing the weapon on the client
    idClientWeaponFire clientWeaponFire; // Offset: 0x8820

    int throwCount; // Offset: 0x8888

    // used for client authoritative movement
    int teleportCount; // Offset: 0x888C

    float lastSpectatorSnapShotDelta; // Offset: 0x8890

    bool firstPredictionSerialize; // Offset: 0x8894

    // Pointer to entities that we are controlling
    idStaticList < idManagedClassPtr < idEntity > , 4 , false , TAG_IDLIST > controlledEntities; // Offset: 0x8898

    idPlayerAdapter playerAdapter; // Offset: 0x8930

    // on ground / falling / landing {{ units = m }}
    idVec3 lastOnGroundPosition; // Offset: 0x8940

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastOnGroundPositionTime; // Offset: 0x8950

    // {{ units = m }}
    idVec3 highestFallPosition; // Offset: 0x8958

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > highestFallPositionTime; // Offset: 0x8968

    bool wasOnGround; // Offset: 0x8970

    bool playingFallingLargeLandingSound; // Offset: 0x8971

    // used by crash landing code to kill the player in the event that there's no detectable ground to collide with below
    idHavokQueryId havokGroundHeightQuery; // Offset: 0x8978

    // {{ units = m }}
    float groundHeight; // Offset: 0x8980

    idFxSiphonUpdate siphonFxUpdate; // Offset: 0x8988

    // values used for certain game modes to know where a good place to drop the demon rune pickup is deferred query to check ground height to prevent certain actions, determine in air, etc
    idHavokQueryId validDemonPickupGroundHeightQuery; // Offset: 0x89D8

    // deferred query to check if the validDemonPickupGroundHeightQuery returned a position that's valid for the pickup. if so we update lastValidDemonPickupPosition
    idHavokQueryId validDemonPickupContentsQuery; // Offset: 0x89E0

    // last valid position to drop the demon rune pickup {{ units = m }}
    idVec3 lastValidDemonPickupPosition; // Offset: 0x89E8

    int wrongWeapons; // Offset: 0x89F4

    int wrongAmmo; // Offset: 0x89F8

    // getting damaged while controlling something (turret, or whatever)
    bool checkForBlindDamage; // Offset: 0x89FC

    float blindDamage; // Offset: 0x8A00

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > blindEndTime; // Offset: 0x8A08

    bool blinded; // Offset: 0x8A10

    bool stealthed; // Offset: 0x8A11

    bool stealthedShowNameplate; // Offset: 0x8A12

    bool forceDrawNameplate; // Offset: 0x8A13

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBounceFxTime; // Offset: 0x8A18

    int chainsaw_highlightHandle; // Offset: 0x8A20

    idManagedClassPtr < idEntity > chainsawTargetOutOfRange; // Offset: 0x8A28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chainsaw_highlightEndTime; // Offset: 0x8A48

    // player physics
    idHavokPhysics_Player physicsObjHavok; // Offset: 0x8A50

    // water values to use for the player
    idHavokPhysics_WaterValues* waterValues; // Offset: 0xD2C0

    idHands hands; // Offset: 0xD2C8

    // Timer for delaying when we bring up the weapon wheel if the player activates a power weapon and continues activating the weapon wheel
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponWheelActivationDelay; // Offset: 0x16548

    // in MP, if the user does nothing for a while, let a bot take over until they get back.
    idAwayFromKeyboardTracker afkTracker; // Offset: 0x16550

    // in MP, if user does nothing for a while, they will get removed from the match
    idAwayFromKeyboardTracker mpIdleTracker; // Offset: 0x16568

    // ------------------------ the first person view values are always calculated, even if a third person view is used ------------------------ {{ units = m }}
    idVec3 firstPersonViewOrigin; // Offset: 0x16580

    idMat3 firstPersonViewAxis; // Offset: 0x1658C

    // {{ units = m }}
    idVec3 deferredFirstPersonViewOrigin; // Offset: 0x165B0

    idMat3 deferredFirstPersonViewAxis; // Offset: 0x165BC

    // photo mode data (for returning the player to their previous state upon exiting photo mode and use during photo mode) {{ units = m }}
    idVec3 photoModeOrigin; // Offset: 0x165E0

    idMat3 photoModeAxis; // Offset: 0x165EC

    // {{ units = 1 / s }}
    float photoModeFriction; // Offset: 0x16610

    // {{ units = m }}
    float photoModeMaxDist; // Offset: 0x16614

    // {{ units = m }}
    idVec3 overriddenPhotoModeTranslation; // Offset: 0x16618

    bool overridePhotoModePhysics; // Offset: 0x16624

    bool photoModePhysicsWereOverriddenThisFrame; // Offset: 0x16625

    float photoMode1pFOV; // Offset: 0x16628

    bool photoModeSkipViewEffects; // Offset: 0x1662C

    // thruster glide
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > holdingJumpStartTime; // Offset: 0x16630

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > glideStartTime; // Offset: 0x16638

    // {{ units = m / ( s * s ) }}
    idVec3 preGlideGravity; // Offset: 0x16640

    bool buttonTriggeredLastFrame; // Offset: 0x1664C

    bool playerHasJumped; // Offset: 0x1664D

    int canGlideAfterJump; // Offset: 0x16650

    // dash decl for player movement .. need a better place to put this.
    idDeclInventory* dashItemDecl; // Offset: 0x16658

    idAbility_Groundslam* groundslamItem; // Offset: 0x16660

    float goalLateralStartVelocity; // Offset: 0x16668

    // max velocity at end time
    float goalLateralEndVelocity; // Offset: 0x1666C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > goalLateralVelocityStartTime; // Offset: 0x16670

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > goalLateralVelocityEndTime; // Offset: 0x16678

    // For smoothing out client prediction error.  floatdeferredOriginOffsetZ; {{ units = m }} for rotation-based spread variation
    idVec3 weaponSpreadLastViewAxis; // Offset: 0x16680

    // skip the landing results logic for this many frames or -1 for unlimited disable (don't play sounds, take damage or play any specific landing animations)
    int disableLandingResultsFrames; // Offset: 0x1668C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ammoButtonPressTime; // Offset: 0x16690

    // If 'false', then closing the loadout selection screen will force select a loadout
    bool hasSelectedLoadout; // Offset: 0x16698

    int loadoutSelection; // Offset: 0x1669C

    bool canCancelLoadoutSelection; // Offset: 0x166A0

    // If 'false', then closing the demon selection screen will force select a demon
    bool hasSelectedDemon; // Offset: 0x166A1

    int demonSelection; // Offset: 0x166A4

    bool allowDemonSelection; // Offset: 0x166A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > staminaCharge; // Offset: 0x166B0

    float staminaPercent; // Offset: 0x166B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > staminaStopTime; // Offset: 0x166C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > staminaEndTime; // Offset: 0x166C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > staminaStartTime; // Offset: 0x166D0

    float sprintAngle; // Offset: 0x166D8

    // Sprint Parameters
    sprintStats_t sprintStats; // Offset: 0x166DC

    bool isSprinting; // Offset: 0x166F0

    bool queueSprinting; // Offset: 0x166F1

    bool wasSprinting; // Offset: 0x166F2

    // used to block firing for a period of time after sprinting
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSprintTime; // Offset: 0x166F8

    // tracks how long the sprint input has been absent to avoid ending sprint prematurely
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopSprintingTimer; // Offset: 0x16700

    // used for 'thruster' sprint implementation
    bool thrusterSprintMustFinishRecharging; // Offset: 0x16708

    // time the player started sprinting, used for ramp up
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > sprintStart; // Offset: 0x16710

    // time the player will reach full sprint speed, used for ramp up
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > sprintMax; // Offset: 0x16718

    // Dodge Parameters
    dodgeStats_t dodgeStats; // Offset: 0x16720

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDodgeTime; // Offset: 0x16758

    int lastDodgeDirection; // Offset: 0x16760

    idManagedClassPtr < idEntity > lastDodgeTarget; // Offset: 0x16768

    // {{ units = m }}
    idVec3 lastFocalPosition; // Offset: 0x16788

    // {{ units = m }}
    float lastDodgeDistance; // Offset: 0x16794

    float dodgeEnergy; // Offset: 0x16798

    // {{ units = m / s }}
    idVec3 dodgeVelocity; // Offset: 0x1679C

    // Speed scalar for movement.
    float speedScalar; // Offset: 0x167A8

    // velocity away from surface player is on, required to leave the ground. {{ units = m / s }}
    float thrownOffGroundVelocity; // Offset: 0x167AC

    bool disableMovementDuringCustomAnim; // Offset: 0x167B0

    // this player is being carried locally
    bool isBeingCarried; // Offset: 0x167B1

    // this player is being carried according to the server
    bool serverIsBeingCarried; // Offset: 0x167B2

    // The entity which this player is being carried by
    idManagedClassPtr < idEntity > carryingEntity; // Offset: 0x167B8

    // this player is waiting on the GameChallenge to transition us into a DemonPlayer
    bool pendingDemonTransition; // Offset: 0x167D8

    // If player is killed while demon player ability is on cooldown store next valid time here
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > demonPlayerCooldownCarryOver; // Offset: 0x167E0

    // Set true if the demon player was on cooldown at death
    bool demonPlayerWasOnCooldown; // Offset: 0x167E8

    bool inInteractionView; // Offset: 0x167E9

    // true if the player is performing a revive on another player
    idFlags isReviving; // Offset: 0x167EC

    int respawnCount; // Offset: 0x167F0

    // determines if there is an actionable entity in front of the player
    idFocusTracker_Player focusTracker; // Offset: 0x167F8

    // stores the frame when a prop was last use
    int lastPropUsedFrame; // Offset: 0x16AE8

    // last time we used a use proxy;
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUseProxyTime; // Offset: 0x16AF0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastKilledServerTime; // Offset: 0x16AF8

    // idDeclDamage that killed us the last time we died
    idDeclDamage* lastKillingDamageDecl; // Offset: 0x16B00

    // how long to fade out alive renderparm (game time)
    idTypesafeTime < int , millisecondUnique_t , 1000 > lifeFadeTime; // Offset: 0x16B08

    // interpolater to smoothly decay the alive render parm
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > lifeFader; // Offset: 0x16B10

    // next time the actor can show pain
    idTypesafeTime < int , millisecondUnique_t , 1000 > pain_debounce_time; // Offset: 0x16B40

    // scale of sprinting breathing to play
    float breath_sprintScale; // Offset: 0x16B44

    // last ms the player played the radiation warning sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRadiationWarningTime; // Offset: 0x16B48

    // if we've faded the Radiation Damage Sound
    bool fadedRadiationDamageSound; // Offset: 0x16B50

    // whether to play the damaged breathing sound
    bool playDamagedBreathing; // Offset: 0x16B51

    // Teleport/Respawned/Killed events, with relative timing etc
    idStaticList < idPlayer::idPlayerServerPositionOverrideInfo_t , 3 , false , TAG_IDLIST > playerServerPositionOverrideInfo; // Offset: 0x16B58

    unsigned short mostRecentlyUsedServerOverrideIndex; // Offset: 0x16D20

    // What's the last event the client processed from the list?
    unsigned short processedServerOverrideIndex; // Offset: 0x16D22

    // ------------------------ Death Info ------------------------
    deathMessage_t deathInfo; // Offset: 0x16D28

    // Player breadcrumbing system.
    idPlayerBreadCrumbing breadCrumbs; // Offset: 0x16F38

    idPlayerAimAssist aimAssist; // Offset: 0x170E0

    // Melee lunge target
    idProjectileTarget meleeLungeTarget; // Offset: 0x171A8

    // time the last melee lunge started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeLungeStartTime; // Offset: 0x171E0

    // time the last melee lunge stopped
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeLungeStopTime; // Offset: 0x171E8

    bool meleeLungeCanTransitionToSync; // Offset: 0x171F0

    // {{ units = m }}
    float lastLungeDist; // Offset: 0x171F4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > crucibleStartTime; // Offset: 0x171F8

    idInvasion_UpgradeFilterManager invasionUpgradeFilterManager; // Offset: 0x17200

    // Dashboard ( Meters and timers for the player )
    idPlayerDashboard dashboard; // Offset: 0x17290

    // don't access this directly, only use the above functions
    bool challengeLeavingSoon; // Offset: 0x26CA8

    bool challengeRestartingSoon; // Offset: 0x26CA9

    bool challengeLocalRestart; // Offset: 0x26CAA

    bool challengeRemoteRestart; // Offset: 0x26CAB

    int challengeEndTime; // Offset: 0x26CAC

    float lastDecalValue; // Offset: 0x26CB0

    bool wasPaused; // Offset: 0x26CB4

    idList < idPlayer::scoreItem_t , TAG_IDLIST , false > postGameItems; // Offset: 0x26CB8

    // ------------------------ Networking ------------------------ {{ units = m }}
    float networkingPriorityRadius; // Offset: 0x26CD0

    bool sentOfficialSnap; // Offset: 0x26CD4

    idDamageFeedbackComponent damageFeedbackComponent; // Offset: 0x26CD8

    float previousBaseShieldCur; // Offset: 0x276B0

    float previousBaseHealthCur; // Offset: 0x276B4

    idJointAnimator* preSerializationTreeAnimator; // Offset: 0x276B8

    // ...Variables from presentable player
    idArray < idPlayer::damageTaken_t , 12 > playerDamageTaken; // Offset: 0x276C0

    int debugHud_x; // Offset: 0x2F340

    int debugHud_y; // Offset: 0x2F344

    // -1 = not held down, 0 - 3 = pushing to a side
    int currentDPadSelection; // Offset: 0x2F348

    // when the loadout changes,
    bool loadoutChanged; // Offset: 0x2F34C

    bool loadoutCancelled; // Offset: 0x2F34D

    // Temp until we finalize how inputs to server are serialized
    clientToServerUpdateInfo_t clientToServerUpdateInfo; // Offset: 0x2F350

    bool remoteHasJumpedChanged; // Offset: 0x2F4F0

    bool remoteHasDoubleJumpedChanged; // Offset: 0x2F4F1

    bool bouncePadLiftInAir; // Offset: 0x2F4F2

    bool bouncePadIsInTransit; // Offset: 0x2F4F3

    bool bouncePadLockedMovement; // Offset: 0x2F4F4

    // ------------------------ player properties ------------------------ Extra definition data about the player
    idDeclPlayerProps* playerProps; // Offset: 0x2F4F8

    // The player should use a crouch clip model when dead. Most likely used for revive purposes in co-op.
    bool useCrouchClipWhenDead; // Offset: 0x2F500

    // The player should free fall when dead. Most likely used in competitive multiplayer.
    bool freeFallWhenDead; // Offset: 0x2F501

    idDragEntity dragEntity; // Offset: 0x2F508

    // decay curve parameters when standing
    decayParams_s standDecay; // Offset: 0x2F548

    // decay curve parameters when crouching
    decayParams_s crouchDecay; // Offset: 0x2F554

    float oneUpScoreAtLoad; // Offset: 0x2F560

    // ------------------------ legs orientation when turning ------------------------
    idPlayer::playerBodyAnimInfo_t bodyAnimInfo; // Offset: 0x2F568

    idPlayer::serializedPlayerAnimInfo_t serializedAnimInfo; // Offset: 0x2F688

    // cover lean mechanic
    idPlayerMechanicCoverLean playerMechanicCoverLean; // Offset: 0x2F870

    // ledge grab mechanic
    idPlayerMechanicLedgeGrab playerMechanicLedgeGrab; // Offset: 0x2FB70

    // sync mechanic
    idPlayerMechanicSync playerMechanicSync; // Offset: 0x34E30

    // wall grab mechanic
    idPlayerMechanicWallGrab playerMechanicWallGrab; // Offset: 0x34E88

    // wall climb mechanic
    idPlayerMechanicWallClimb playerMechanicWallClimb; // Offset: 0x35130

    // wall climb mechanic
    idPlayerMechanicAntiGravityWallGrab playerMechanicAntiGravityWallGrab; // Offset: 0x368A0

    // ledge springboard
    idPlayerMechanicLedgeSpringBoard playerMechanicLedgeSpringBoard; // Offset: 0x36DA0

    // jump and swing from beams
    idPlayerMechanicGorillaBarJump playerMechanicGorillaBarJump; // Offset: 0x36E48

    // sonic blast mechanic
    idPlayerMechanicSonicBlast playerMechanicSonicBlast; // Offset: 0x36F78

    // interact mechanic
    idPlayerMechanicInteract playerMechanicInteract; // Offset: 0x370C0

    // Blood punch mechanic.
    idPlayerMechanicBloodPunch playerMechanicBloodPunch; // Offset: 0x37160

    idPlayerMechanicManager playerMechanicManager; // Offset: 0x371C0

    // The amount of ability fuel we currently have.
    float playerAbilityFuel; // Offset: 0x371F8

    // Max Amount of Fuel we can carry.
    float playerAbilityFuelMax; // Offset: 0x371FC

    // What value do we start off with.
    float playerAbilityFuelStart; // Offset: 0x37200

    // Amount per second.
    float playerAbilityFuelRate; // Offset: 0x37204

    // How much we regen up to.
    float playerAbilityFuelRateMax; // Offset: 0x37208

    // How much we use per ability Use? ( should this be on the inventory item? )
    float playerAbilityFuelAmountPerUse; // Offset: 0x3720C

    // Used to play audio cue when quick use item is recharged
    bool quickUseItemOnCooldown; // Offset: 0x37210

    idPlayer::cachedMeleeInputs_t cachedMeleeInputs; // Offset: 0x37211

    // health component for players
    idPlayerHealth playerHealth; // Offset: 0x37218

    // damage over time component
    idDOTComponent dotComponent; // Offset: 0x37428

    // energy shell decl (activates with chaingun mod)
    idDeclEntityDef* energyShellDecl; // Offset: 0x462C0

    // energy shell decl used for mp (activates with chaingun mod)
    idDeclEntityDef* energyShellDeclMP; // Offset: 0x462C8

    // the energy shell
    idEnergyShell* energyShell; // Offset: 0x462D0

    // sound RTPC param for health absolute value (0-200)
    idSoundRTPC* playerHealthRTPC; // Offset: 0x462D8

    // so that the RTPC can be updated only when it changes
    float playerHealthForRTPC; // Offset: 0x462E0

    // the states to reset on player shutdown
    idList < const idSoundState * , TAG_IDLIST , false > soundResetStates; // Offset: 0x462E8

    // __def idPlayerEconomyplayerEconomy; the player's current fortune ( money, materials etc ) gore component for players
    idGoreComponent goreComponent; // Offset: 0x46300

    // threat sensor visual data
    idThreatSensorVisualComponent threatSensorVisual; // Offset: 0x47248

    // scale applied to damage
    idDamageScaleTableComponent damageScaleTableComponent; // Offset: 0x472B8

    // DO NOT call this directly. Use GetHUD() instead. Hud for the player.
    idHUD playerHud; // Offset: 0x472D0

    // Hud for the player in Demos.
    idHUD playerDemoHud; // Offset: 0x476C0

    // Hud for demon player
    idHUD demonPlayerHud; // Offset: 0x47AB0

    idVec2 guiObjectScreenCoords; // Offset: 0x47EA0

    // when ai is possessing AI
    bool isControllingAi; // Offset: 0x47EA8

    int vendorKeyIndex; // Offset: 0x47EAC

    // ------------------------ deferred loot queuery ------------------------ the loot query for arrows and wingsticks off a corpse
    idHavokGatherQueryId lootQuery; // Offset: 0x47EB0

    // if true a loot sound was played during the initial looting
    bool lootSoundPlayed; // Offset: 0x47EB8

    // gather all the useable items for online players.
    idHavokGatherQueryId onlinePlayerUseableQuery; // Offset: 0x47EC0

    // the animWeb the player will use for 3rd person animations
    idDeclAnimWeb* bodyAnimWeb; // Offset: 0x47EC8

    // the ACTUAL animWeb the player is using for 3rd person animations
    idDeclAnimWeb* effectiveAnimWeb; // Offset: 0x47ED0

    // the animWeb animator on the player's anim stack
    idAnimWebPlayer bodyWebAnimator; // Offset: 0x47ED8

    // torso animator for one-offs
    idAnimator_Channel torsoChannelAnimator; // Offset: 0x48A18

    // for aim-tracking of the torso
    idAnimator_TorsoTracker torsoTrackerAnimator; // Offset: 0x48B28

    // animator for playing additive twitch pain & fire animations
    idAnimator_Channel torsoAdditiveAnimator; // Offset: 0x48C28

    // animator for playing additive weapon aim grid animations
    idAnimator_Channel torsoAimAdditiveAnimator; // Offset: 0x48D38

    // alias handles for aim anims
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > aliasHandlesAim; // Offset: 0x48E48

    // the aim anim currently being used
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > currentAimAnim; // Offset: 0x48E60

    // the next aim anim to be used
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > nextAimAnim; // Offset: 0x48E62

    idLocomotionParameters locomotionParameters; // Offset: 0x48E64

    // axis the player's model is facing
    idMat3 modelAxis; // Offset: 0x48ECC

    // {{ units = m }}
    idVec3 playerModelOffset; // Offset: 0x48EF0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextQuickChainsawTime; // Offset: 0x48F00

    bool playerWantsChainsaw; // Offset: 0x48F08

    idList < idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > , TAG_IDLIST , false > throwableAttachments; // Offset: 0x48F10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chainsawSwipeMissedTime; // Offset: 0x48F28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeUnderwater; // Offset: 0x48F30

    // Damage inflicted per tick on the player once your breath is out
    idDeclDamage* suffocationDamage; // Offset: 0x48F38

    float waterBoostScale; // Offset: 0x48F40

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > waterBoostStartTime; // Offset: 0x48F48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > waterBoostEndTime; // Offset: 0x48F50

    // max speed scale when sprinting in water
    float waterBoostScaleMax; // Offset: 0x48F58

    // time that boost is at max speed (scale)
    idTypesafeTime < int , millisecondUnique_t , 1000 > waterBoostMaxTimeMS; // Offset: 0x48F5C

    // time after waterBoostMaxTimeSec that it takes to slowdown to normal speed
    idTypesafeTime < int , millisecondUnique_t , 1000 > waterBoostSlowdownTimeMS; // Offset: 0x48F60

    // extra time (after waterBoostMaxTimeSec + waterBoostSlowdownTimeSec) before player can re-activate
    idTypesafeTime < int , millisecondUnique_t , 1000 > waterBoostCooldownTimeMS; // Offset: 0x48F64

    // sound played when water boost activated
    idSoundEvent* waterBoostSound; // Offset: 0x48F68

    // Revive sound event sound event to play when player selects to load a checkpoint after death
    idSoundEvent* playerRevive; // Offset: 0x48F70

    // sound played when the player double jumps.
    idSoundEvent* doubleJumpSound; // Offset: 0x48F78

    // overrides sound played when the player double jumps.
    idSoundEvent* doubleJumpSoundOverride; // Offset: 0x48F80

    idManagedClassPtr < idEntity > deathTrigger; // Offset: 0x48F88

    // Game State Int manager, If we keep this should probably move it up to game instead of player, but leaving here for now. manager for maintaining light data for game
    idGameStateIntManager gameStateIntManager; // Offset: 0x48FA8

    // perks
    idRumbleComponent rumbleComponent; // Offset: 0x48FC0

    hapticFeedbackParms_t weaponHaptics; // Offset: 0x49160

    // Audio Log component
    idAudioLogComponent audioLogComponent; // Offset: 0x49190

    // which messages has the player seen
    idPlayer::infoMessages_t infoMessages; // Offset: 0x491F0

    idList < idPlayer::newInventoryItems_t , TAG_IDLIST , false > newItemList; // Offset: 0x491F8

    // Reticle to use when this player is a spectator
    idDeclWeaponReticle* spectatorWeaponReticle; // Offset: 0x49210

    idUserCmd remoteCurrentPlayerCmd; // Offset: 0x49218

    idUserCmd remotePreviousPlayerCmd; // Offset: 0x492B0

    // Placing more than this causes the oldest entity to disappear; "0" allows unlimited
    int maxPlayerLimitedEntities; // Offset: 0x49348

    // List of entities this player has limis on (eg. slicer grenades)
    idList < playerLimitedEntity_t , TAG_IDLIST , false > playerLimitedEntities; // Offset: 0x49350

    // true if player model is hidden
    bool hidden; // Offset: 0x0

    // true if player is in godmode
    bool godMode; // Offset: 0x0

    // true if the player has infinite health
    bool infiniteHealth; // Offset: 0x0

    // true if the player cannot die
    bool noPlayerDeath; // Offset: 0x0

    // true if the player cannot kill
    bool noPlayerKill; // Offset: 0x0

    // true if player is not targettable by AI
    bool noTarget; // Offset: 0x0

    // true if player is currently reading level state from file. i.e. loading saved inventory on level transition
    bool readingLevelStateFromFile; // Offset: 0x0

    // true if the player is invulnerable to damage - currently only a flag but could turn into a bitmask for specific damage types
    bool invulnerable; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > invulnerableExpireTime; // Offset: 0x49370

    bool waitForInventoryOpenCommand; // Offset: 0x49378

    // time of the last incapacitate
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastIncapacitateTime; // Offset: 0x49380

    bool cachedIsLocallyControlled; // Offset: 0x49388

    bool isViewedFirstPersonLocally; // Offset: 0x49389

    // how long to flash the cursor red when damaging something (ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > hitFlashDurationMS; // Offset: 0x4938C

    // flash the cursor for hit feedback
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hitBeepTime; // Offset: 0x49390

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hitBeepStarTime; // Offset: 0x49398

    // flash the cursor for hit feedback
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > passiveHitBeepTime; // Offset: 0x493A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > passiveHitBeepStarTime; // Offset: 0x493A8

    bool hitCriticalDamage; // Offset: 0x493B0

    // whether to force play the demon possession anim
    bool playDemonPossession; // Offset: 0x493B1

    bool delayDemonTransform; // Offset: 0x493B2

    bool playingThirdPersonSequence; // Offset: 0x493B3

    bool wasTauntingWhenGloryKilled; // Offset: 0x493B4

    idSmartTimer < GAMETIME_SCALED > thirdPersonSequenceOutroTimer; // Offset: 0x493B8

    int serializedEquipmentState; // Offset: 0x493C0

    int actormodifierListIndex; // Offset: 0x493C4

    idSmartTimer < GAMETIME_SCALED > powerWeaponPossessionTime; // Offset: 0x493C8

    // screen FX
    idDeclFX* screenFXDecl; // Offset: 0x493D0

    idPlayer::screenFX_t screenFX[4]; // Offset: 0x493D8

    // list of nearby threats (grenades, exploding bomb cars, etc.)
    idStaticList < threatEntity_t , 4 , false , TAG_IDLIST > nearbyThreats; // Offset: 0x49458

    // Cameras
    idManagedClassPtr < idInteractionCamera > dynamicInteractionCamera; // Offset: 0x49530

    idManagedClassPtr < idSpectatorCamera > spectatorCamera; // Offset: 0x49550

    idManagedClassPtr < idSlowMotionCamera > slowMotionCamera; // Offset: 0x49570

    idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > reviveItemAttachment; // Offset: 0x49590

    // Damage Scale Tables
    idDeclTable* easyTable; // Offset: 0x49598

    idDeclTable* normalTable; // Offset: 0x495A0

    idDeclTable* hardTable; // Offset: 0x495A8

    idDeclTable* nightmareTable; // Offset: 0x495B0

    // Damage Boost Items scale to change damage inflicted by player
    float applyDamageScale; // Offset: 0x495B8

    // gametime the scale should end.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > applyDamageScaleEndTime; // Offset: 0x495C0

    // Invulnerability Boost Item gametime the scale should end.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > invulnerabilityEndTime; // Offset: 0x495C8

    // if true will ignore most dmg
    bool isInvulnerable; // Offset: 0x495D0

    // vulnerability modifier value to multiply by to make the player more/less vulnerable
    float vulnerableModifier; // Offset: 0x495D4

    // Bullet Time Boost Item gametime the scale should end.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > bulletTimeEndTime; // Offset: 0x495D8

    // Authority booster ms the time this scale started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > authorityStartTime; // Offset: 0x495E0

    // ms the scale should end.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > authorityEndTime; // Offset: 0x495E8

    // item icon as displayed in the inventory screen
    idMaterial2* authorityIcon; // Offset: 0x495F0

    // DoF focus point trace info
    idHavokQueryId dofFocusTrace; // Offset: 0x495F8

    float dofCurrentFocus; // Offset: 0x49600

    float dofGoalFocus; // Offset: 0x49604

    // Pickups that take time to Use. Not serialized. Just passed to hud the entity we're picking up
    idManagedClassPtr < idEntity > pickupProgressEntity; // Offset: 0x49608

    // what gameTime did we start picking it up
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pickupProgressStart; // Offset: 0x49628

    // required pickup duration in game ticks
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pickupProgressDuration; // Offset: 0x49630

    // whether this is a friendly or enemy pickup
    bool pickupProgressOwnership; // Offset: 0x49638

    // Standing on AIs if plr is on ai then push player in this dir
    idVec3 onAiPushDir; // Offset: 0x4963C

    // ------------------------ spring camera - from Doom4 for animating the camera ------------------------ FIXME DOOM4 HANDS (added from Doom4 for animating the camera)
    idManagedClassPtr < idSpringCamera > springCamera; // Offset: 0x49648

    // data for reviving others
    idArray < idReviveInfo , 4 > reviveInfo; // Offset: 0x49668

    // this the start time that the revive bar will use
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > userFacingReviveStartTime; // Offset: 0x49708

    // volume that other players must enter to unfreeze/revive us.
    idManagedClassPtr < idVolume > reviveVolume; // Offset: 0x49710

    // most recent player to kill this player
    idManagedClassPtr < idPlayer > lastKillerPlayer; // Offset: 0x49730

    // list of recently wounded enemies for tracker hack module
    idStaticList < trackedInjuredPlayer_t , 11 , false , TAG_IDLIST > trackerList; // Offset: 0x49750

    // most recent spawn position {{ units = m }}
    idVec3 lastSpawnPos; // Offset: 0x49920

    // most recent death position of the player {{ units = m }}
    idVec3 lastDeathPos; // Offset: 0x4992C

    // most recent death damage impact joint of the player ( i.e. where we got shot ).
    idIndex < short , invalidJointIndex_t , - 1 > lastDeathDamageImpactJoint; // Offset: 0x49938

    // Stats & achievements game stats that are reset with a new game, not lifetime profile stats.
    idArray < profileStatValue_t , 1459 > stats; // Offset: 0x4993C

    // game stats that are reset when reaching a checkpoint
    idArray < profileStatValue_t , 1459 > checkPointStats; // Offset: 0x4B008

    // idStatContainerlevelStats; level specific stats only count for a particular level game stats that need to only save on checkpoint go need to add previous value to the
    bool saveStatOnChckPt[1459]; // Offset: 0x4C6D4

    // AI event decl for aiming
    idDeclAiEvent* playerAimEventDecl; // Offset: 0x4CC88

    // AI event decl for interaction
    idDeclAiEvent* playerInteractionEventDecl; // Offset: 0x4CC90

    // AI event decl for body
    idDeclAiEvent* bodyEventDecl; // Offset: 0x4CC98

    // customized weapon wheel order
    idList < int , TAG_IDLIST , false > weaponWheelOrder; // Offset: 0x4CCA0

    dossierPage_t desiredDossierPage; // Offset: 0x4CCB8

    bool forceThirdPersonFXDecl; // Offset: 0x4CCBC

    // Third person FX Decl
    idDeclFX* thirdPersonFXDecl; // Offset: 0x4CCC0

    // The enemy shield color
    idColor enemyShieldColor; // Offset: 0x4CCC8

    // The friendly shield color
    idColor friendlyShieldColor; // Offset: 0x4CCD8

    idPVPUpgradeComponent pvpUpgradeComponent; // Offset: 0x4CCE8

    idDamageNumberCompiler* damageNumberCompiler; // Offset: 0x4CD38

    idHealthNumberCompiler* healthNumberCompiler; // Offset: 0x4CD40

    idCharacterStatusTextCompiler* characterStatusTextCompiler; // Offset: 0x4CD48

    idPlayer::idSpawnDelayedInfo spawnDelayInfo; // Offset: 0x4CD50

    // slayer rating & weapon points
    idArray < int , 9 > upgradeCurrencyList; // Offset: 0x4CD6C

    idArray < int , 9 > upgradeCurrencyList_gained; // Offset: 0x4CD90

    int slayerRating; // Offset: 0x4CDB4

    // # weapon points needed to increase slayer rating
    int weaponPointsPerSlayerRating; // Offset: 0x4CDB8

    // stores the offset from the pusher where we are currently located {{ units = m }}
    idVec3 pusherOffset; // Offset: 0x4CDBC

    // stores the last position we computed for a non local entity push {{ units = m }}
    idVec3 prevPusherOffset; // Offset: 0x4CDC8

    // stores the last position we computed for a non local entity push {{ units = m }}
    idVec3 currPushedPos; // Offset: 0x4CDD4

    // the spawn id of the entity pushing us
    idSpawnId pusherSpawnId; // Offset: 0x4CDE0

    bool onlyKillByGlory; // Offset: 0x4CDE4

    bool cheatMaxedOutWeapons; // Offset: 0x4CDE5

    // nightmare mode params
    idPlayer::nightmareParams_t nightmareParams; // Offset: 0x4CDE8

    // name of health chart to track for this player
    idStrId healthChartName; // Offset: 0x4CE08

    // name of armor chart to track for this player
    idStrId armorChartName; // Offset: 0x4CE0C

    // name of damage chart to track for this player
    idStrId damageChartName; // Offset: 0x4CE10

    int healthChartIndex; // Offset: 0x4CE14

    int armorChartIndex; // Offset: 0x4CE18

    int damageChartIndex; // Offset: 0x4CE1C

    float lastHealthValue; // Offset: 0x4CE20

    float lastArmorValue; // Offset: 0x4CE24

    // the time we interval a damage entry is valid for in ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageTrackingIntervalMs; // Offset: 0x4CE28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageTrackTime; // Offset: 0x4CE30

    // GK modifier values the modifier for glory kill max distances
    float maxDistanceModifierGK; // Offset: 0x4CE38

    // the speed modifier for glory kills
    float speedModifierGK; // Offset: 0x4CE3C

    // the modifier to increase the length of the mods
    float powerUpDurationModMult; // Offset: 0x4CE40

    // the modifier to increase the length of the mods
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > powerUpDurationModTime; // Offset: 0x4CE48

    // Defines the sounds to use when this player is killed
    idDeathSoundTable deathSounds; // Offset: 0x4CE50

    // the inventory loadout that represents the player fully upgraded
    idDeclDevInvLoadout* maxedOutLoadout; // Offset: 0x4CE70

    // the combat encounter decl for SP
    idDeclCombatEncounterScoring* combatEncounterScoringDecl; // Offset: 0x4CE78

    // the currently used combat scoring decl
    idDeclCombatEncounterScoring* currScoringDecl; // Offset: 0x4CE80

    // inventory cache items
    idEnvironmentSuit* enviromentSuit; // Offset: 0x4CE88

    idJumpBoots* jumpBoots; // Offset: 0x4CE90

    idBFG* bfg; // Offset: 0x4CE98

    idThrusters* thrusters; // Offset: 0x4CEA0

    idDodgeJets* dodgeJets; // Offset: 0x4CEA8

    idChargeAttack* chargeAttack; // Offset: 0x4CEB0

    // cache cvar values that are queried from title storage:
    bool mpAllowAirControlOnFirstJump; // Offset: 0x4CEB8

    // {{ units = m / s }}
    float runSpeed; // Offset: 0x4CEBC

    // {{ units = m / s }}
    float maxScaledRunSpeed; // Offset: 0x4CEC0

    // {{ units = m / s }}
    float sprintSpeed; // Offset: 0x4CEC4

    // {{ units = m / s }}
    float crouchSpeed; // Offset: 0x4CEC8

    float backSpeedRatio; // Offset: 0x4CECC

    float strafeSpeedRatio; // Offset: 0x4CED0

    float ledgeGrabSpeedScale; // Offset: 0x4CED4

    idPlayer::sprintMode_t sprintMode; // Offset: 0x4CED8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextAirControlSoundTime; // Offset: 0x4CEE0

    int airControlLastStickSection; // Offset: 0x4CEE8

    // the definition of the object to use as a nightmare marker
    idDeclEntityDef* nightmareMarkerDef; // Offset: 0x4CEF0

    // the definition of the object to use as a nightmare marker for my friends
    idDeclEntityDef* nightmareMarkerDefFriends; // Offset: 0x4CEF8

    // the definition of the object to use as a nightmare marker for my best run
    idDeclEntityDef* nightmareMarkerDefBestRun; // Offset: 0x4CF00

    // the definition of the object to use as a nightmare marker for strangers
    idDeclEntityDef* nightmareMarkerDefPublic; // Offset: 0x4CF08

    // the default name of the killer to use if one is not specified in the list below
    idStrId defaultkillerName; // Offset: 0x4CF10

    // the max number of markers to place in a level, -1 infinite
    int maxNumMarkersLvl; // Offset: 0x4CF14

    idList < idEntity * , TAG_IDLIST , false > nightmareEntityList; // Offset: 0x4CF18

    bool loadSaveCheating; // Offset: 0x4CF30

    idList < idPlayer::slayerGateTeleport_t , TAG_GAME , false > slayerGateTeleport; // Offset: 0x4CF38

    idList < idPlayer::lifeGateTeleport_t , TAG_GAME , false > lifeGateTeleport; // Offset: 0x4CF50

    idPlayer::slayerGatePlayMode_t slayerGatePlayMode; // Offset: 0x4CF68

    // name of map to return to when playing a slayer gated area from the hub (ie: the hub map name)
    idStr slayerGateReturnMapName; // Offset: 0x4CF70

    // this is the idTarget_ChangeLayer or idPlayerStart the player will return to after playing a slayer gated area
    idStr slayerGateReturnEntityName; // Offset: 0x4CFA0

    idManagedClassPtr < idPlayerStart > slayerGatePlayerStart; // Offset: 0x4CFD0

    idPlayer::lifeGatePlayMode_t lifeGatePlayMode; // Offset: 0x4CFF0

    // name of map to return to when playing a life gated area from the hub (ie: the hub map name)
    idStr lifeGateReturnMapName; // Offset: 0x4CFF8

    // this is the idTarget_ChangeLayer or idPlayerStart the player will return to after playing a life gated area
    idStr lifeGateReturnEntityName; // Offset: 0x4D028

    idManagedClassPtr < idPlayerStart > lifeGatePlayerStart; // Offset: 0x4D058

    idInteractable_CollectibleViewer* activeHubAlbum; // Offset: 0x4D078

    // data for checkpoint teleport
    idPlayer::slayerCheckpointTeleport_t slayerCheckpointTeleport; // Offset: 0x4D080

    // Fast travel last (current) warp point during teleportation
    idStr fastTravelDestinationWarpPointName; // Offset: 0x4D098

    idManagedClassPtr < idEntity > collideRepulseEntity; // Offset: 0x4D0C8

    float collideRepulseSpeed; // Offset: 0x4D0E8

    idPlayerMetrics* playerMetricsForSerialization; // Offset: 0x4D0F0

    idList < idPlayer::meleeDamageData_t , TAG_IDLIST , false > meleeDamageList; // Offset: 0x4D0F8

    idList < idPlayer::meleeDamageData_t , TAG_IDLIST , false > processedMeleeDamageList; // Offset: 0x4D110

    bool requestSnapCodex; // Offset: 0x4D128

    // system id for 'HUD' in the event system
    uint16 playerBroadcastSystemId; // Offset: 0x4D12A

    // The available sentinel gifts that may be used
    idList < const idDeclSentinelGift * , TAG_IDLIST , false > availableSentinelGifts; // Offset: 0x4D130

    bool sentinelGiftsActivated; // Offset: 0x4D148

    // sound event to play when a fast travel point has been activated
    idSoundEvent* fastTravlSelSnd; // Offset: 0x4D150

    // sound event to play when game is paused
    idSoundEvent* gamePauseSound; // Offset: 0x4D158

    // sound event to play when game is unpaused
    idSoundEvent* gameUnpauseSound; // Offset: 0x4D160

    // Slayer invasion decl
    idDeclSlayerInvasion_Data* slayerInvasionData; // Offset: 0x4D168

    // fists decl
    idDeclWeapon* weaponFists; // Offset: 0x4D170

    // berserk fists decl
    idDeclWeapon* weaponFistsBerserk; // Offset: 0x4D178

    // Doom5Melee fists decl
    idDeclWeapon* weaponFistsDoom5Melee; // Offset: 0x4D180

    // swim fists decl
    idDeclWeapon* weaponFistsSwim; // Offset: 0x4D188

    // pointing arm decl for wall climb mechanic
    idDeclWeapon* weaponPointingArm; // Offset: 0x4D190

    // crucible decl
    idDeclWeapon* weaponCrucible; // Offset: 0x4D198

    // equipment launcher on left shoulder
    idDeclEquipmentLauncher* equipmentLauncherLeftDecl; // Offset: 0x4D1A0

    // equipment launcher on right shoulder
    idDeclEquipmentLauncher* equipmentLauncherRightDecl; // Offset: 0x4D1A8

    // flame belch for the left equipment launcher
    idDeclWeapon* weaponFlameBelchLeft; // Offset: 0x4D1B0

    // flame belch for the right equipment launcher
    idDeclWeapon* weaponFlameBelchRight; // Offset: 0x4D1B8

    // chainsaw
    idDeclWeapon* weaponChainsaw; // Offset: 0x4D1C0

    // plasma
    idDeclWeapon* weaponPlasma; // Offset: 0x4D1C8

    // chaingun
    idDeclWeapon* weaponChaingun; // Offset: 0x4D1D0

    // hammer
    idDeclWeapon* weaponHammer; // Offset: 0x4D1D8

    // send activation command to this entity on death
    idManagedClassPtr < idEntity > entityToActivateOnDeath; // Offset: 0x4D1E0

    bool receivedFirstRemoteNetworkPos; // Offset: 0x4D200

    // keep track of inventory history
    idInventoryHistory inventoryHistory; // Offset: 0x4D208

    idSoundObject tracerSoundObject; // Offset: 0x4D220

    playerMovementJobData_t playerMovementJobData; // Offset: 0x4D230

    // GUI info on this player.
    idPlayer::guiInfo_t guiInfo; // Offset: 0x4D240

    // for serializing energy shell health.
    float netEnergyShellHealth; // Offset: 0x4D250

    // is the energy shell active from the server?
    bool netEnergyShellActive; // Offset: 0x4D254

    // an ack from the server that it activated this player's shield and we should start reading from netEnergyShellHealth
    idNetEvent < 15 > serverActivatedShield; // Offset: 0x4D258

    idManagedClassPtr < idEntity > quickChainsawAttachmentEnt; // Offset: 0x4D270

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > quickChainsawSwipeSwitchBackTime; // Offset: 0x4D290

    bool replicateWhenHidden; // Offset: 0x4D298

    idManagedClassPtr < idSpectacleCamera > activeSpectacleCamera; // Offset: 0x4D2A0

    playerVolatile_t* playerVolatile; // Offset: 0x4D2C0

    idProxyPtr < idPlayer > proxyPtr; // Offset: 0x4D2C8

    idList < unsigned int , TAG_IDLIST , false > thirdPersonMaterialLocks; // Offset: 0x4D2D0

    unsigned int thirdPersonLockedModelId; // Offset: 0x4D2E8

    unsigned int firstPersonLockedModelId; // Offset: 0x4D2EC

    idList < unsigned int , TAG_IDLIST , false > chainsawMaterialLocks; // Offset: 0x4D2F0

    idList < unsigned int , TAG_IDLIST , false > equipmentLauncherLocks[2]; // Offset: 0x4D308

    idDeclGameItem* currentSkin; // Offset: 0x4D338

    float preFastTravelGravityFactor; // Offset: 0x4D340

    bool spectreEnable; // Offset: 0x4D344

    float spectreFactor; // Offset: 0x4D348

    // time last screecher was melee damaged
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastMeleeDamagedScreecher; // Offset: 0x4D350

}; // Size: 0x4D358
