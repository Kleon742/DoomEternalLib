struct idHands : idEventReceiver
{
    enum handsAction_t : int
    {
        HANDSACTION_NONE = 0,
        HANDSACTION_IDLE = 1,
        HANDSACTION_FORCE_IDLE = 2,
        HANDSACTION_FIRE = 3,
        HANDSACTION_CEASEFIRE = 4,
        HANDSACTION_DRYFIRE = 5,
        HANDSACTION_RELOAD = 6,
        HANDSACTION_MELEE = 7,
        HANDSACTION_MELEE_RIGHT = 8,
        HANDSACTION_MELEE_LEFT = 9,
        HANDSACTION_BRINGDOWN = 10,
        HANDSACTION_BRINGUP = 11,
        HANDSACTION_THROWATTACH = 12,
        HANDSACTION_THROWITEM = 13,
        HANDSACTION_JUMP = 14,
        HANDSACTION_FALL = 15,
        HANDSACTION_CUSTOM_ANIM = 16,
        HANDSACTION_LAND_NO_ANIM = 17,
        HANDSACTION_LAND_SM = 18,
        HANDSACTION_LAND_MED = 19,
        HANDSACTION_LAND_LG = 20,
        HANDSACTION_LAND_XLG = 21,
        HANDSACTION_GENERIC_HIDE_INSTANT = 22,
        HANDSACTION_GENERIC_HIDE_ANIMATED = 23,
        HANDSACTION_GENERIC_HIDE_MOD_SWITCH = 24,
        HANDSACTION_GENERIC_UNHIDE = 25,
        HANDSACTION_CHAINSAW_FAILED_GK = 26,
        HANDSACTION_CHAINSAW_PULL_CORD = 27,
        HANDSACTION_CHAINSAW_REV = 28,
        HANDSACTION_CHAINSAW_STOP_CUTTING = 29,
        HANDSACTION_CHAINSAW_STAB = 30,
        HANDSACTION_CHAINSAW_STAB_FAIL = 31,
        HANDSACTION_HAMMER_THROW = 32,
        HANDSACTION_HAMMER_SLAM = 33,
        HANDSACTION_ENTER_WATER = 34,
        HANDSACTION_SWIM_BACKWARD = 35,
        HANDSACTION_SWIM_DOWN = 36,
        HANDSACTION_SWIM_FORWARD = 37,
        HANDSACTION_SWIM_LEFT = 38,
        HANDSACTION_SWIM_RIGHT = 39,
        HANDSACTION_SWIM_UP = 40,
        HANDSACTION_EXIT_WATER = 41,
        HANDSACTION_CHARGE = 42,
        HANDSACTION_MAX = 43
    };

    enum pendingActionResult_t : int
    {
        PAR_APPROVE = 0,
        PAR_DENY = 1,
        PAR_DENY_AND_CLEAR = 2,
        PAR_APPROVE_AND_CLEAR = 3,
        PAR_MAX = 4
    };

    enum handsState_t : int
    {
        HS_NONE = -1,
        HS_IDLE = 0,
        HS_RELOADING = 1,
        HS_RELOADING_DOUBLE = 2,
        HS_FALL_IDLE = 3,
        HS_HIDDEN = 4,
        HS_LOOPING_SHOOT_STATE = 5,
        HS_LOOPING_DRYFIRE_STATE = 6,
        HS_CHARGE_IDLE = 7,
        HS_CHARGE_LOOPING_SHOOT_STATE = 8,
        HS_CHARGE_LOOPING_DRYFIRE_STATE = 9,
        HS_CHAINSAW_REV = 10,
        HS_CHAINSAW_STAB = 11,
        HS_SWIM_IDLE = 12,
        HS_POWER_CORE_IDLE = 13,
        HS_TRANSITIONING = 14,
        HS_MAX = 15
    };

    enum meleeLTRTSlot_t : int
    {
        MELEELTRTSLOT_1 = 0,
        MELEELTRTSLOT_2 = 1,
        MELEELTRTSLOT_MAX = 2
    };

    enum meleeAlternatingSlot_t : int
    {
        MELEEALTERNATINGSLOT_RIGHT = 0,
        MELEEALTERNATINGSLOT_LEFT = 1,
        MELEEALTERNATINGSLOT_MAX = 2
    };

    enum meleeD5Type_t : int
    {
        MELEE_D5_NONE = 0,
        MELEE_D5_FORWARD = 1,
        MELEE_D5_POWER_STRIKE = 2,
        MELEE_D5_COMBO = 3
    };

    enum handHideReason_t : int
    {
        HAND_HIDE_GENERIC = 1,
        HAND_HIDE_ZOOM = 2,
        HAND_HIDE_SPECIAL = 4,
        HAND_HIDE_SERVER_AUTHORITATIVE = 8,
        HAND_HIDE_SPECTATING = 16
    };

    enum fireModeInhibitedReason_t : int
    {
        FMI_WAIT_FOR_FIRE_OR_DRYFIRE = 1,
        FMI_SET_FIREMODE_FAILED = 2
    };

    enum handsActionPriority_t : int
    {
        HANDSACTION_PRI_NORMAL = 0,
        HANDSACTION_PRI_LOW = 1
    };

    enum animWebStateNames_t : int
    {
        AWSN_bringdown = 0,
        AWSN_bringup = 1,
        AWSN_bringup_intro = 2,
        AWSN_chainsaw_pull_cord = 3,
        AWSN_chainsaw_rev_into = 4,
        AWSN_chainsaw_rev_loop = 5,
        AWSN_chainsaw_rev_recovery = 6,
        AWSN_chainsaw_stab_fail = 7,
        AWSN_chainsaw_stab_into = 8,
        AWSN_chainsaw_stab_loop = 9,
        AWSN_chainsaw_stab_recovery = 10,
        AWSN_chainsaw_stop_cutting = 11,
        AWSN_charge_dryfire = 12,
        AWSN_charge_dryfirestate = 13,
        AWSN_charge_idle = 14,
        AWSN_charge_into = 15,
        AWSN_charge_charge = 16,
        AWSN_charge_out = 17,
        AWSN_charge_out_from_charge_into = 18,
        AWSN_charge_shoot = 19,
        AWSN_charge_shoot_again = 20,
        AWSN_charge_shoot_delay = 21,
        AWSN_charge_shoot_to_charge_idle = 22,
        AWSN_charge_shootstate = 23,
        AWSN_charge_shootstate_into = 24,
        AWSN_charge_shootstate_recovery = 25,
        AWSN_charge_idle_lock_into = 26,
        AWSN_charge_idle_lock_out = 27,
        AWSN_custom = 28,
        AWSN_dh_flag = 29,
        AWSN_dryfire = 30,
        AWSN_dryfirestate = 31,
        AWSN_fall = 32,
        AWSN_fall_loop = 33,
        AWSN_generic_hide = 34,
        AWSN_generic_hide_into = 35,
        AWSN_generic_unhide = 36,
        AWSN_generic_unhide_mod_select = 37,
        AWSN_idle = 38,
        AWSN_idle_alt = 39,
        AWSN_jump = 40,
        AWSN_land_lg = 41,
        AWSN_land_med = 42,
        AWSN_land_sm = 43,
        AWSN_melee_directional = 44,
        AWSN_melee_combo_into = 45,
        AWSN_melee_combo_melee = 46,
        AWSN_melee_combo_miss = 47,
        AWSN_melee_into = 48,
        AWSN_melee_melee = 49,
        AWSN_melee_miss = 50,
        AWSN_melee_l1 = 51,
        AWSN_melee_left_out = 52,
        AWSN_melee_r1 = 53,
        AWSN_melee_r1_first = 54,
        AWSN_melee_right_out = 55,
        AWSN_quick_chainsaw_miss = 56,
        AWSN_reload = 57,
        AWSN_reloaddouble = 58,
        AWSN_reloadfromempty = 59,
        AWSN_reloadout = 60,
        AWSN_reloadoutfromempty = 61,
        AWSN_shoot = 62,
        AWSN_alt_shoot = 63,
        AWSN_shoot_again = 64,
        AWSN_shoot_charge = 65,
        AWSN_shoot_delay = 66,
        AWSN_shoot_delay_2 = 67,
        AWSN_shoot_end_no_reload = 68,
        AWSN_shoot_last_round = 69,
        AWSN_shootstate = 70,
        AWSN_shootstate_into = 71,
        AWSN_shootstate_recovery = 72,
        AWSN_swim_backward = 73,
        AWSN_swim_down = 74,
        AWSN_swim_fists = 75,
        AWSN_swim_fists_breach_up = 76,
        AWSN_swim_forward = 77,
        AWSN_swim_left = 78,
        AWSN_swim_sprint_fwd = 79,
        AWSN_swim_right = 80,
        AWSN_swim_up = 81,
        AWSN_throw = 82,
        AWSN_shootstate_single = 83,
        AWSN_hammer_throw = 84,
        AWSN_hammer_slam_into = 85,
        AWSN_hammer_slam_miss = 86,
        AWSN_hammer_slam_hit = 87,
        AWSN_MAX = 88
    };

    enum additiveOffsetAnimType_t : int
    {
        ADDITIVE_OFFSET_ANIM_NONE = 0,
        ADDITIVE_OFFSET_ANIM_IDLE = 1,
        ADDITIVE_OFFSET_ANIM_ZOOM = 2,
        ADDITIVE_OFFSET_ANIM_MELEE = 3,
        ADDITIVE_OFFSET_ANIM_EMPTY_WEAPON = 4
    };

    struct idHandsAction
    {
        // action to perform
        idHands::handsAction_t action; // Offset: 0x0

        // weapon associated with action
        idManagedClassPtr < idWeapon > weapon; // Offset: 0x8

        // specifically request the intro bringup?
        bool useIntroBringup; // Offset: 0x28

        // throwable item associated with action
        idDeclThrowable* throwable; // Offset: 0x30

        // custom anim to play
        idHandsCustomAnimSelect customAnim; // Offset: 0x38

        // custom weapon anim to play
        idHandsCustomWeaponAnimSelect customWeaponAnim; // Offset: 0x3C

        // chainsaw failed gk anims
        idHandsFailedChainsawSelect chainFailedAnim; // Offset: 0x40

        // time stamp when the action was queued
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x48

    }; // Size: 0x50

    struct weaponFireFlags_t
    {
        // true if we're telling the weapon to fire
        bool fireInput; // Offset: 0x0

        bool allowedToFire; // Offset: 0x1

        // Used to determine if 'fireInput' should be set. true if input is in a state such that the weapon wants to fire
        bool hasAttackInput; // Offset: 0x2

        // attack input exists but firing is not allowed
        bool wantsDryfire; // Offset: 0x3

        // true if it's the first frame the input has requested an attack. There's ambiguity here because sometimes it represents ATTACK1 and sometimes ALTFIRE.
        bool inputStartedThisFrame; // Offset: 0x4

        // fire without hands actions and without animating
        bool fireSecondaryInstantly; // Offset: 0x5

        // If true, weapon FireMode will get set to WEAPONFIREMODE_SECONDARY
        bool secondaryReady; // Offset: 0x6

        // If this and 'secondaryReady' are true, the weapon's secondary fire trigger will be pulled
        bool secondaryTriggered; // Offset: 0x7

        // If true, the weapon's secondary fire trigger will be released
        bool secondaryReleased; // Offset: 0x8

        // If true, pulls the weapon's alt-trigger
        bool secondaryPulled; // Offset: 0x9

        // Determines if 'hasAttackInput' should be set on 'secondaryTriggered' or 'secondaryReleased'
        bool secondaryAttackOnRelease; // Offset: 0xA

        // tracks whether the fire mode failed to set, so that a dryfire sound can play
        bool failedToSetFireMode; // Offset: 0xB

    }; // Size: 0xC

    struct handsSubWebInfo_t
    {
        idAtomicString subWebName; // Offset: 0x0

        idArray < idIndex < idAnimWeb::StateIndexType , idAnimWeb::invalidStateIndex_t > , 88 > stateIndices; // Offset: 0x8

        // the following states are arrayed and don't fit into the enum scheme
        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > meleeLTRTRightNamesStateIndices[2]; // Offset: 0xB8

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > meleeLTRTLeftNamesStateIndices[2]; // Offset: 0xBC

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > meleeAlternatingRightStateIndices[2]; // Offset: 0xC0

        idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > meleeAlternatingLeftStateIndices[2]; // Offset: 0xC4

    }; // Size: 0xC8

    struct handsAnimwebInfo_t
    {
        // list of info for all the subwebs indexed by SubWebIndex
        idList < idHands::handsSubWebInfo_t , TAG_IDLIST , false > subWebInfos; // Offset: 0x0

        // swim fists
        idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > swimFistsSubWebIndex; // Offset: 0x18

    }; // Size: 0x20

    struct additiveJumpFallLandAnims_t
    {
        // enable/disable additive anims
        bool enable; // Offset: 0x0

        // jumped
        bool jumped; // Offset: 0x1

        // falling
        bool falling; // Offset: 0x2

        // tracks the type of landing while it plays
        idHands::handsAction_t landing; // Offset: 0x4

        // tracks when falling started so that erroneous short falls can avoid playing land anims
        int fallingStartFrame; // Offset: 0x8

        // hands additive idle anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > idle; // Offset: 0xC

        // hands additive jump anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > jump; // Offset: 0xE

        // alpha value
        float jump_alpha; // Offset: 0x10

        // hands additive fall anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > fall; // Offset: 0x14

        // alpha value
        float fall_alpha; // Offset: 0x18

        // hands additive land_small anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > land_small; // Offset: 0x1C

        // alpha value
        float land_small_alpha; // Offset: 0x20

        // hands additive land_medium anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > land_medium; // Offset: 0x24

        // alpha value
        float land_medium_alpha; // Offset: 0x28

        // hands additive land_large anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > land_large; // Offset: 0x2C

        // alpha value
        float land_large_alpha; // Offset: 0x30

        // hands additive land_xlarge anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > land_xlarge; // Offset: 0x34

        // alpha value
        float land_xlarge_alpha; // Offset: 0x38

    }; // Size: 0x3C

    struct additiveOffsetAnimSet_t
    {
        idAtomicHandleT < aliasRefType_t > additiveOffsetAnim; // Offset: 0x0

        // all the anims that are used during the influence of the additive offset anim
        idList < idStr , TAG_IDLIST , false > anims; // Offset: 0x8

        // the weapons that contributed to the list of anims
        idList < idStr , TAG_IDLIST , false > weapons; // Offset: 0x20

    }; // Size: 0x38

    struct handsResetParms_t
    {
        // use a specific weapon
        idDeclWeapon* useWeapon; // Offset: 0x0

        // true = start in idle, false = start in bring up
        bool resetToIdle; // Offset: 0x8

        // force reset the web
        bool forceResetAnimWeb; // Offset: 0x9

        // use the last weapon you had
        bool useLastWeapon; // Offset: 0xA

        // use the bring up
        bool useBringup; // Offset: 0xB

        // use the intro bring up
        bool introBringup; // Offset: 0xC

        // do we have a reset pending or not?
        bool isPending; // Offset: 0xD

        // if this flag is true no other resets will pend until this one is executed
        bool reliableIsPending; // Offset: 0xE

    }; // Size: 0x10

    struct handsFlags_t
    {
        // flag specifies whether the transition to the next stage is allowed
        bool meleeEnableNextStage; // Offset: 0x0

        // tracks when weapon is reloading
        bool isReloading; // Offset: 0x0

        // true if playing a shootToReload anims
        bool isReloadingFromShoot; // Offset: 0x0

        // HACK until I can figure out why MP DB shotgun stopped allowing throw to interrupt post-shoot reload
        bool throwIgnoresIsReloading; // Offset: 0x0

        // tracks when reload event has fired
        bool hasReloaded; // Offset: 0x0

        // tracks whether shell has ejected or not (used to decide if interrupted DB shoottoreload should reload or reloadfromempty)
        bool shellEjected; // Offset: 0x0

        // tracks transitions that can be interrupted (also allows frame events to affect interruptibility)
        bool isInterruptibleTransition; // Offset: 0x0

        // tracks transitions that can be interrupted for melee only
        bool isInterruptibleTransitionForMelee; // Offset: 0x0

        // tracks transitions that can be interrupted for weapon switching only
        bool isInterruptibleTransitionForWeaponSwitch; // Offset: 0x0

        // tracks whether a fire, dryfire, or melee attack anim is playing
        bool isAttackAnimPlaying; // Offset: 0x0

        // true when a fire anim is playing, as well as when the hands are pathing to the fire state (use isWeaponFiring to test if weapon is actually firing)
        bool isFireAnimPlaying; // Offset: 0x0

        // true when a weapon with a "shoot_again" state is playing that animation
        bool isShootAgainAnimPlaying; // Offset: 0x0

        // true when a weapon with a burstShootAgain anim is playing that animation
        bool isBurstShootAgainAnimPlaying; // Offset: 0x0

        // turns on when weapon fire event is triggered, turns off when hands begin pathing to a non-firing state
        bool isWeaponFiring; // Offset: 0x0

        // tracks when the Fire pending action has been processed and is pending
        bool weaponWillFire; // Offset: 0x0

        // tracks when the Dryfire pending action has been processed and is pending
        bool weaponWillDryfire; // Offset: 0x0

        // if true the dryfire was from secondary input
        bool dryfireFromSecondaryFireInput; // Offset: 0x0

        // a fire was initiated but something went wrong and ::FireWeapon exited without firing, use to prevent shell ejection in this case
        bool weaponFireAborted; // Offset: 0x0

        // tracks whether the weapon was empty or not when reloading was initiated
        bool isReloadingFromEmpty; // Offset: 0x0

        // tracks whether something is being thrown
        bool isThrowing; // Offset: 0x0

        // tracks whether a melee animation is active
        bool isMeleeAnimPlaying; // Offset: 0x0

        // tracks whether we are in the lunge portion of our melee
        bool isMeleeLungeActive; // Offset: 0x0

        // whether melee always starts from the right hand
        bool isMeleeCurrentHandRight; // Offset: 0x0

        // melee anim was triggered this frame
        bool meleeTriggeredThisFrame; // Offset: 0x0

        // melee needs a new lunge target
        bool newMeleeLungeTargetThisFrame; // Offset: 0x0

        // flags whether a melee was caused by a fire input
        bool meleeFromFireInput; // Offset: 0x0

        // tracks whether the melee interrupted something so that it can't interrupt twice on the same melee attack
        bool meleeInterruptedSomething; // Offset: 0x0

        // tracks whether zooming has been inhibited by an anim event
        bool zoomInhibited; // Offset: 0x0

        // inhibits the Hide() command issued inside the HS_HIDDEN hands state
        bool hideInhibited; // Offset: 0x0

        // bringup anim is playing
        bool isChangingWeapon; // Offset: 0x0

        // flags whether the bringdown portion of the weapon change has finished playing
        bool changingWeaponBringdownEnded; // Offset: 0x0

        // flags whether the hide animation has finished playing
        bool genericHideEnded; // Offset: 0x0

        // toggling idle mode
        bool isTogglingIdleMode; // Offset: 0x0

        // queuing a burst
        bool burstQueued; // Offset: 0x0

        // a queued burst is starting
        bool startingQueuedBurst; // Offset: 0x0

        // swimming
        bool swimming; // Offset: 0x0

        // true if the melee is supposed to be a one hit kill
        bool shouldPerformOneHitMeleeKill; // Offset: 0x0

        // true if the weapon is playing a charge animation
        bool isCharging; // Offset: 0x0

        // true if the weapon has requested a charge animation
        bool isChargeRequested; // Offset: 0x0

        // true if the weapon is blending to the charge state
        bool isBlendingToCharge; // Offset: 0x0

        // charge-charge weapons don't start charging into charge_into blends to charge_charge
        bool hasReachedChargeCharge; // Offset: 0x0

        // true if the weapon is blending back from the charge state
        bool isBlendingFromCharge; // Offset: 0x0

        // force the intro bringup one time
        bool forceIntroBringupOnce; // Offset: 0x0

        // force the intro accent bringup one time
        bool forceIntroAccentBringupOnce; // Offset: 0x0

        // true while the intro bringup is playing
        bool playingIntroBringup; // Offset: 0x0

        // allow sprint melee to kick-in
        bool allowSprintMelee; // Offset: 0x0

        // tracks whether a chainsaw rev anim is playing
        bool revAnimPlaying; // Offset: 0x0

        // tracks whether a mod-change anim is playing
        bool modChangeAnimPlaying; // Offset: 0x0

        // tracks whether new mod can be used yet
        bool newModIsUsable; // Offset: 0x0

        // tracks whether the weapon needs reload so we can force fake reloads on noAmmoCache weapons
        bool weaponNeedsReload; // Offset: 0x0

        // tracks whether the chainsaw stab failed
        bool chainsawStabFailed; // Offset: 0x0

        // tracks whether the chainsaw swipe failed
        bool chainsawSwipeFailed; // Offset: 0x0

        // tracks whether a custom anim is playing
        bool customAnimPlaying; // Offset: 0x0

        // tracks that idle is being forced and should not be interrupted (as this is for berserk, we need to allow the weapon change out)
        bool forceUninterruptibleUntilIdle; // Offset: 0x0

        // tracks whether the hands have a temporary left hand attachment that should be cleared on state transition
        bool hasTempLeftAttachment; // Offset: 0x0

        // tracks whether the hands have a temporary right hand attachment that should be cleared on state transition
        bool hasTempRightAttachment; // Offset: 0x0

        // tracks whether hands were in HS_IDLE state when charging started
        bool startedChargingFromIdle; // Offset: 0x0

        // tracks if we requested a third person interaction anim
        bool startedThirdPersonInteract; // Offset: 0x0

    }; // Size: 0x8

    struct handsWeaponZoomFX_t
    {
        // the weapon the condition applies to
        idWeapon* weapon; // Offset: 0x0

        // what the FX thinks the zoomed state is for this weapon
        bool zoomed; // Offset: 0x8

    }; // Size: 0x10

    struct idSort_StrSort : idSort_Quick < idStr , idHands::idSort_StrSort >
    {
    }; // Size: 0x8

    typedef void (idHands::*handsWeaponHandler_t)(idWeapon * weapon , const idPlayerControllerBase & playerController);

    // atomic strings with the names of all the animWebStateNames
    idAtomicString handsAtomicStrings[88]; // Offset: 0x38

    idHands::handsAnimwebInfo_t handsAnimWebInfo; // Offset: 0x2F8

    // additive jump/fall/land channel populated with additive hands anims to replace base animweb behavior
    idHands::additiveJumpFallLandAnims_t additiveJumpFallLandAnims; // Offset: 0x318

    idPlayer* owner; // Offset: 0x358

    // current stats tag for chainsaw attack
    weaponStatsTag_t chainsawStatsTag; // Offset: 0x360

    idRenderModelSkinned* renderModel; // Offset: 0x370

    idAnimStack animStack; // Offset: 0x378

    // the last time we processed anim events for the hands
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastProcessAnimEventTime; // Offset: 0xFB8

    int lastUpdateVisualsFrame; // Offset: 0xFC0

    idAnimWebHands webAnimator; // Offset: 0xFC8

    // for tracking animation state changes
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > prevSubWebIndex; // Offset: 0x1968

    // for tracking animation state changes
    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > prevNodeIndex; // Offset: 0x196A

    // for tracking
    idHands::handsState_t prevHandsState; // Offset: 0x196C

    // if we're transitioning, this is our destination state
    idHands::handsState_t destHandsState; // Offset: 0x1970

    // a weapon whose EquipWeapon logic is delayed until the hands are initialized
    idWeapon* delayedEquipWeapon; // Offset: 0x1978

    // for additive pain / flinch anims and such
    idManagedChannelAnimator additiveAnimator; // Offset: 0x1980

    idAnimator_Paused additivePausedAnimator; // Offset: 0x1AC8

    // a dedicated channel for additive camera anims
    idManagedChannelAnimator additiveCameraAnimator; // Offset: 0x1B20

    // additive hands hit reactions
    idHandsHitReactions handsHitReactions; // Offset: 0x1C68

    // for applying a dedicated additive offset to the hands/weapon
    idManagedChannelAnimator additiveOffsetAnimator; // Offset: 0x25E0

    // flag indicates that all additive anims should be turned off
    bool suppressAllAdditiveAnims; // Offset: 0x2728

    // for additive jump, fall and land animations
    idManagedChannelAnimator additiveJumpFallLandAnimator; // Offset: 0x2730

    // For using the joint mod to handle the weapon lag joint mod animator
    idAnimator_Paused jointModLagAnimator; // Offset: 0x2878

    int leftHandJointModIndex; // Offset: 0x28D0

    int rightHandJointModIndex; // Offset: 0x28D4

    int worldPropJointModIndex; // Offset: 0x28D8

    int leftShoulderJointModIndex; // Offset: 0x28DC

    int rightShoulderJointModIndex; // Offset: 0x28E0

    idIndex < short , invalidJointIndex_t , - 1 > jointIndexLeftHand; // Offset: 0x28E4

    idIndex < short , invalidJointIndex_t , - 1 > jointIndexRightHand; // Offset: 0x28E6

    idIndex < short , invalidJointIndex_t , - 1 > jointIndexWorldProp; // Offset: 0x28E8

    idIndex < short , invalidJointIndex_t , - 1 > jointIndexLeftShoulder; // Offset: 0x28EA

    idIndex < short , invalidJointIndex_t , - 1 > jointIndexRightShoulder; // Offset: 0x28EC

    // {{ units = m }}
    idVec3 weaponLagPosition; // Offset: 0x28F0

    // {{ units = m / s }}
    idVec3 weaponLagVelocity; // Offset: 0x28FC

    idMat3 weaponLagAxis; // Offset: 0x2908

    // {{ units = m }}
    idVec3 weaponBobPosition; // Offset: 0x292C

    float weaponBobAngle; // Offset: 0x2938

    idVec3 weaponBobOrientAngles; // Offset: 0x293C

    int weaponBobNumSteps; // Offset: 0x2948

    // to fade bob cycle away when not moving
    idSpring < idVec1 > weaponBobAlpha; // Offset: 0x294C

    // the current additive offset anim
    idHands::additiveOffsetAnimType_t additiveOffsetAnimType; // Offset: 0x297C

    // handle for global fx manager
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x2980

    // cache init status
    bool fxHandleInit; // Offset: 0x2988

    // hands fx decl
    idDeclFX* fxDecl; // Offset: 0x2990

    // for testing new models only... may be either an .lwo or .md5
    idRenderModel* testModel; // Offset: 0x2998

    // if this is nonzero, something external to the hands wants them hidden
    unsigned int hiddenReasons; // Offset: 0x29A0

    // Hidden reasons serialized from server
    unsigned char serverHiddenReasons; // Offset: 0x29A4

    // if false, update the hands
    bool disabled; // Offset: 0x29A5

    // if true, set the disabled flag after next update.
    bool shouldDisable; // Offset: 0x29A6

    // if true, will set the show flag after next update.
    bool shouldShowAfterUpdate; // Offset: 0x29A7

    // true if render models are actually unlinked from the renderer
    bool unlinked; // Offset: 0x29A8

    // true if the hands md6 changed during the last cosmetic application/set model
    bool md6Changed; // Offset: 0x29A9

    equipSlot_t pickupSlot; // Offset: 0x29AC

    // data for the item held in the right hand
    idHandsItem rightItem; // Offset: 0x29B0

    // data for the item held in the left hand
    idHandsItem leftItem; // Offset: 0x3728

    // data for the item on the head (i.e. thermal visor)
    idHandsItem headItem; // Offset: 0x44A0

    // data for the item on the left shoulder (equipment launcher)
    idHandsItem leftShoulderItem; // Offset: 0x5218

    // data for the item on the right shoulder (equipment launcher)
    idHandsItem rightShoulderItem; // Offset: 0x5F90

    // data for the item on the left launcher
    idHandsItem leftLauncherItem; // Offset: 0x6D08

    // data for the item on the right launcher
    idHandsItem rightLauncherItem; // Offset: 0x7A80

    // precalcuated web index of the chainsaw quick attacks
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > chainsawQuickWebIndex; // Offset: 0x87F8

    // chainsaw quick attack failed state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > chainsawQuickStateIndex; // Offset: 0x87FA

    // custom anim web index
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > customAnimWebIndex; // Offset: 0x87FC

    // custom anim state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > customAnimStateIndex; // Offset: 0x87FE

    // precalcuated web index of the hammer quick attacks
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > hammerQuick_WebIndex; // Offset: 0x8800

    // hammer throw state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > hammerQuick_ThrowStateIndex; // Offset: 0x8802

    // hammer throw state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > hammerQuick_SlamIntoStateIndex; // Offset: 0x8804

    // hammer throw state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > hammerQuick_SlamMissStateIndex; // Offset: 0x8806

    // hammer throw state index
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > hammerQuick_SlamHitStateIndex; // Offset: 0x8808

    idWeapon* hammerQuick_PrevWeapon; // Offset: 0x8810

    float hammerQuick_PrevWeaponChargePercent; // Offset: 0x8818

    float hammerQuick_PrevWeaponChargePerShotChargeVal; // Offset: 0x881C

    // item that is being thrown ( note this item IS subject to deletion from the player inventory )
    idManagedClassPtr < idThrowableItem > throwItem; // Offset: 0x8820

    // for ensuring any item equipped during a custom anim can be unequipped even if the anim is interrupted and misses the unequip anim event
    idDeclInventory* customAnimInventoryItem; // Offset: 0x8840

    // The frame that a custom anim started
    int customAnimStartFrame; // Offset: 0x8848

    idManagedClassPtr < idInventoryItem > quickChainsawActiveWeapon; // Offset: 0x8850

    // rotation offset of model
    idAngles modelAngles; // Offset: 0x8870

    // scaling factor for model
    float modelScale; // Offset: 0x887C

    // origin offset for model
    idVec3 modelOffset; // Offset: 0x8880

    // rotation and scale transform
    idMat3 modelAxis; // Offset: 0x888C

    // set to next weapon when switching right weapon
    idWeapon* nextWeaponRight; // Offset: 0x88B0

    // set to next weapon when switching left weapon
    idWeapon* nextWeaponLeft; // Offset: 0x88B8

    // stores a pending weapon change when that change is superceded by another hands action
    idWeapon* queuedNextWeaponRight; // Offset: 0x88C0

    // the time of the most recent weapon change
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > selectWeaponTimeMS; // Offset: 0x88C8

    // an override weapon to equip when unhiding the hands (used to re-select the weapon that was equipped prior to entering water after exiting water via a ladder)
    idManagedClassPtr < idWeapon > genericUnhideOverrideWeapon; // Offset: 0x88D0

    // flag to track whether the fire button has been released for a single-tap weapon, so another fire can occur
    bool fireNeedsRelease[2]; // Offset: 0x88F0

    // tracks when a fire mode is desired but inhibited for some reason, uses flags fireModeInhibitedReason_t
    int fireModeInhibited[2]; // Offset: 0x88F4

    int inputStartedFrame[2]; // Offset: 0x88FC

    // updated every frame
    idHands::weaponFireFlags_t fireFlags; // Offset: 0x8904

    // fire flags from the previous update
    idHands::weaponFireFlags_t fireFlagsPrev; // Offset: 0x8910

    // {{ units = m }}
    idVec3 lockOnPosition; // Offset: 0x891C

    // extra world translation of hands model {{ units = m }}
    idVec3 extraWorldTranslation; // Offset: 0x8928

    // extra world rotation of hands model
    idMat3 extraWorldRotation; // Offset: 0x8934

    // applies damage during a multi-frame melee trace
    idMeleeTrace handsMeleeTrace; // Offset: 0x8958

    bool handsMeleeTraceHit; // Offset: 0x8CB0

    // the power strike level, or 0 if not a power strike
    int handsMeleePowerStrikeLevel; // Offset: 0x8CB4

    char* handsMeleeTraceSlotName; // Offset: 0x8CB8

    char* handsMeleeTraceJointName; // Offset: 0x8CC0

    bool handsMeleeTraceStartDeferred; // Offset: 0x8CC8

    // next action player wants to perform
    idHands::idHandsAction pendingAction; // Offset: 0x8CD0

    // if true, reset the looping idle animation for this hand controller
    bool resetIdle; // Offset: 0x8D20

    // for projectile bursts (that are too fast for being controlled with frame commands)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > burstShootEndTime; // Offset: 0x8D28

    // shoot a projectile every x ms
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > burstShootInterval; // Offset: 0x8D30

    // time we last fired a burst projectile
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBurstShootTime; // Offset: 0x8D38

    // last time we fired our weapon (for debugging only)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastWeaponFireTime; // Offset: 0x8D40

    // force the auto aim to something during burst {{ units = m }}
    idVec3 burstShootAimPoint; // Offset: 0x8D48

    // anim rate scale for shoot anim for weapons that use looping shoot state
    float shootAnimRate; // Offset: 0x8D54

    // anim rate scale for shoot_charge anim
    float shootChargeAnimRate; // Offset: 0x8D58

    // don't change the shoot delay scale while an anim transition is in progress
    float shootDelayScaleDeferredUntilTransitionFinishes; // Offset: 0x8D5C

    // or else the animation could be incorrectly affected
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > zoomHandsWeaponFovRatio; // Offset: 0x8D60

    idHands::handsResetParms_t queuedResetParms; // Offset: 0x8D90

    idHands::handsFlags_t handsFlags; // Offset: 0x8DA0

    // flags from the previous frame
    idHands::handsFlags_t prevHandsFlags; // Offset: 0x8DA8

    idHands::meleeLTRTSlot_t meleeLTRTSlot; // Offset: 0x8DB0

    idHands::meleeAlternatingSlot_t meleeAlternatingSlot; // Offset: 0x8DB4

    idHands::meleeD5Type_t meleeD5Type; // Offset: 0x8DB8

    // earliest time for another d5 melee
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeD5NextMeleeTime; // Offset: 0x8DC0

    idWeapon* meleeD5PrevWeapon; // Offset: 0x8DC8

    float meleeD5PrevWeaponChargePercent; // Offset: 0x8DD0

    float meleeD5PrevWeaponChargePerShotChargeVal; // Offset: 0x8DD4

    idSpring < idVec1 > meleeD5MeleeScaleSpring; // Offset: 0x8DD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeD5MeleeHitScaleHoldEndTime; // Offset: 0x8E08

    // time of melee hit, to test for combo
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeD5MeleeLastHitTime; // Offset: 0x8E10

    // for weapons with both directional and staged melee (chainsaw), this specifies which to use (chainsaw)
    bool useChainsawMeleeStrike; // Offset: 0x8E18

    // If true, the hands will attempt to fire once AllowedToFire() is true
    bool queuedFireFromSprint; // Offset: 0x8E19

    // for debugging/tweaking: the gametime that the throw button was released
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > throwActionReleaseStartTime; // Offset: 0x8E20

    // time that the current reload started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > reloadStartTime; // Offset: 0x8E28

    // tracks whether a noAmmoCache weapon needs a reload so we can trigger 'fake' reloads on noAmmoCache weapons when their ammo is replenished
    bool weaponNeedsReload; // Offset: 0x8E30

    bool ignoreHiddenState; // Offset: 0x8E31

    bool startedDOF; // Offset: 0x8E32

    bool hidHud; // Offset: 0x8E33

    bool hidReticle; // Offset: 0x8E34

    // if true, we don't allow fire modes to be changed via the hands (used by rocket lock on burst)
    bool blockFireModeChange; // Offset: 0x8E35

    // if true, we don't allow alt fire to go through (used by cursed prowler's curse status effect)
    bool blockAltFire; // Offset: 0x8E36

    // the fov scale that we force via an anim-event or code. It will take precedent over everything _except_ hands_fovScale
    float forceHandsFOVScale; // Offset: 0x8E38

    idMat3 overrideStartFxAxis; // Offset: 0x8E3C

    idDeclWeapon* rememberedDeclWeapon; // Offset: 0x8E60

    // looping shoot next update time for changing the dynamic blend of the weapon shootstate anims
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > loopingShootStateNextUpdateTime; // Offset: 0x8E68

    // spring to smooth the weight transitions
    idSpring < idVec3 > loopingShootStateSpring; // Offset: 0x8E70

    // ribbon used to display projectile trajectories. -- should we move this somewhere else?
    idRibbon2 projectileRibbon; // Offset: 0x8EC8

    // weapon loaded blend spring
    idSpring < idVec1 > weaponLoadedBlendSpring; // Offset: 0x8FE0

    // chainsaw stuff
    idSpring < idVec1 > chainsawMeleeScaleSpring; // Offset: 0x9010

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chainsawMeleeScaleCutStartTime; // Offset: 0x9040

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chainsawMeleeScaleCutEndTime; // Offset: 0x9048

    // blends between normal idle and stab idle
    idSpring < idVec1 > chainsawIdleSpring; // Offset: 0x9050

    void (idHands::*weaponUpdateHandler)(idWeapon * weapon , const idPlayerControllerBase & playerController); // Offset: 0x9080

    idHands::handsWeaponZoomFX_t weaponZoomFX; // Offset: 0x9088

    // stores the restore value when there is a weapon fire-mode specific override
    float gravityScaleSave; // Offset: 0x9098

    // stores the restore value when there is a weapon fire-mode specific override {{ units = 1 / s }}
    float airFrictionSave; // Offset: 0x909C

    // stores the restore value when there is a weapon fire-mode specific override
    idVec3 airSpeedScalarsSave; // Offset: 0x90A0

    // stores the restore value when there is a weapon fire-mode specific override {{ units = 1 / s }}
    float doubleJumpFrictionSave; // Offset: 0x90AC

    // stores the restore value when there is a weapon fire-mode specific override
    int doubleJumpFrictionZScaleSave; // Offset: 0x90B0

    // query to test for clear path from view to aim pos to check if there is target line-of-sight
    idHavokQueryId viewPosAimPosQuery; // Offset: 0x90B8

    // query to test for clear path from view to muzzle to check if the muzzle is penetrating through geo
    idHavokQueryId viewPosMuzzlePosQuery; // Offset: 0x90C0

    // query to test for clear path from actual fire pos to apparent fire pos so that muzzleOffset can
    idHavokQueryId firePosMuzzlePosQuery; // Offset: 0x90C8

    // be ignored if it will put the firePos into a bad place
    int deferredAimPosMuzzlePosQueriesFrame; // Offset: 0x90D0

    trace_t deferredViewPosAimPosResult; // Offset: 0x90D4

    trace_t deferredViewPosMuzzlePosResult; // Offset: 0x9154

    trace_t deferredFirePosMuzzlePosResult; // Offset: 0x91D4

    // cosmetic fx
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > cosmeticFxActionGroup; // Offset: 0x9258

    cosmeticSkinData_t* savedCosmeticSkin; // Offset: 0x9260

    cosmeticSkinData_t* cosmeticSkinData; // Offset: 0x9268

    unsigned int lockedModelIds[2]; // Offset: 0x9270

    // records the frame of the last-set firemode
    int setWeaponFireModeFrame; // Offset: 0x9278

}; // Size: 0x9280
