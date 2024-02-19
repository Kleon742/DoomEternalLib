struct idDoubleBarrelShotgun : idWeapon
{
    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        IDLE = 1,
        LAUNCH_HOOK = 2,
        HOOK_CONNECTED = 3,
        PULL_BACK = 4,
        PULLED_FORWARD = 5,
        HOOK_DEFLECTED = 6,
        HOOK_REWIND = 7,
        MAX_STATES = 8
    };

    enum transition_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_IDLE = 0,
        IDLE_to_LAUNCH_HOOK = 1,
        LAUNCH_HOOK_to_IDLE = 2,
        LAUNCH_HOOK_to_HOOK_CONNECTED = 3,
        LAUNCH_HOOK_to_HOOK_REWIND = 4,
        LAUNCH_HOOK_to_HOOK_DEFLECTED = 5,
        HOOK_CONNECTED_to_PULL_BACK = 6,
        HOOK_CONNECTED_to_PULLED_FORWARD = 7,
        HOOK_CONNECTED_to_HOOK_DEFLECTED = 8,
        HOOK_CONNECTED_to_HOOK_REWIND = 9,
        PULL_BACK_to_IDLE = 10,
        PULLED_FORWARD_to_IDLE = 11,
        HOOK_DEFLECTED_to_IDLE = 12,
        HOOK_REWIND_to_IDLE = 13,
        MAX_TRANSITIONS = 14
    };

    struct chainLosTest_t
    {
        idHavokQueryId losQuery; // Offset: 0x0

        int consecutiveHitCount; // Offset: 0x8

    }; // Size: 0x10

    struct linkInfo_t
    {
        idRenderModel* rm; // Offset: 0x0

        float angleRad; // Offset: 0x8

    }; // Size: 0x10

    typedef idInternalFsm < idDoubleBarrelShotgun , idDoubleBarrelShotgun::state_t , idDoubleBarrelShotgun::transition_t > idInternalFSM;

    // internal state machine for the object
    idInternalFsm < idDoubleBarrelShotgun , idDoubleBarrelShotgun::state_t , idDoubleBarrelShotgun::transition_t >* fsm; // Offset: 0x3BA0

    // whether we are active or not
    bool active; // Offset: 0x3BA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x3BB0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > launchTime; // Offset: 0x3BB8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hookedConnectionTime; // Offset: 0x3BC0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lostConnectionTime; // Offset: 0x3BC8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > releaseConnectionTime; // Offset: 0x3BD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > killMostRecentTargetTime; // Offset: 0x3BD8

    idVec3 launchDir; // Offset: 0x3BE0

    idAngles lastViewAngles; // Offset: 0x3BEC

    idAngles viewAdjustAngles; // Offset: 0x3BF8

    idManagedClassPtr < idAI2 > hookedAI; // Offset: 0x3C08

    // used to determine if a hooked AI just died
    idManagedClassPtr < idAI2 > previouslyHookedAI; // Offset: 0x3C28

    idManagedClassPtr < idDemonPlayer > hookedDemonPlayer; // Offset: 0x3C48

    // Player OR Demon Player
    idManagedClassPtr < idPlayer > hookedPlayer; // Offset: 0x3C68

    // AI Proxy. All AI Proxies can potentially be meat hooked, but we cast to idTarget_SmartAIProxy in some cases
    idManagedClassPtr < idTarget_AIProxy > hookedAIProxy; // Offset: 0x3C88

    // remaining distance
    float distanceToMove; // Offset: 0x3CA8

    // distance at the start of the pull
    float totalDistanceToMove; // Offset: 0x3CAC

    float distanceMoved; // Offset: 0x3CB0

    float actualDistanceMoved; // Offset: 0x3CB4

    // for targets outside the decl stopPullingDist we use that, but for targets within it we use half the starting dist
    float stopPullingDistToTarget; // Offset: 0x3CB8

    float prevDistance; // Offset: 0x3CBC

    float recenterViewRate; // Offset: 0x3CC0

    float originalMovementScale; // Offset: 0x3CC4

    idVec3 previousPos; // Offset: 0x3CC8

    idVec3 previousVel; // Offset: 0x3CD4

    idVec3 appliedVel; // Offset: 0x3CE0

    idVec3 viewTargetPos; // Offset: 0x3CEC

    idVec3 chainWeaponPos; // Offset: 0x3CF8

    idMat3 chainWeaponAxis; // Offset: 0x3D04

    idVec3 prevMeatHookPosition; // Offset: 0x3D28

    float lateralMoveAdjust; // Offset: 0x3D34

    float chainLateralMoveAdjust; // Offset: 0x3D38

    float initialUpwardVelocity; // Offset: 0x3D3C

    float originalGravityScale; // Offset: 0x3D40

    idVec3 moveDir; // Offset: 0x3D44

    idMat3 moveDirAxis; // Offset: 0x3D50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pulledForwardStartTime; // Offset: 0x3D78

    int playerStuckCount; // Offset: 0x3D80

    int hookClipMask; // Offset: 0x3D84

    int hookContents; // Offset: 0x3D88

    int inhibitFlags; // Offset: 0x3D8C

    bool aiConnectionLost; // Offset: 0x3D90

    bool aiMovingTowardsPlayer; // Offset: 0x3D91

    bool aiReachedPlayer; // Offset: 0x3D92

    bool aiStoppedMoving; // Offset: 0x3D93

    bool aiMovingAwayFromPlayer; // Offset: 0x3D94

    bool breakHookConnection; // Offset: 0x3D95

    bool meatHookIsAvailable; // Offset: 0x3D96

    bool meatHookWasAvailable; // Offset: 0x3D97

    bool playerMoveDone; // Offset: 0x3D98

    bool recenterView; // Offset: 0x3D99

    bool playerViewOverride; // Offset: 0x3D9A

    bool enteredMeatHookFSM; // Offset: 0x3D9B

    bool hookIsMovingBackToPlayer; // Offset: 0x3D9C

    bool hookIsRewound; // Offset: 0x3D9D

    bool raiseToTarget; // Offset: 0x3D9E

    bool chainRemapped; // Offset: 0x3D9F

    bool firedDuringLaunch; // Offset: 0x3DA0

    bool forcedPlayerMoveDone; // Offset: 0x3DA1

    idDoubleBarrelShotgun::transition_t transitionFromHooked; // Offset: 0x3DA4

    idManagedClassPtr < idEntity > mostRecentTarget_cached; // Offset: 0x3DA8

    idIndex < short , invalidJointIndex_t , - 1 > mostRecentTargetJointIndex_cached; // Offset: 0x3DC8

    idManagedClassPtr < idEntity > mostRecentTarget; // Offset: 0x3DD0

    idIndex < short , invalidJointIndex_t , - 1 > mostRecentTargetJointIndex; // Offset: 0x3DF0

    idManagedClassPtr < idProjectile_MeatHook > meatHookProjectile; // Offset: 0x3DF8

    idDeclWeapon_DoubleBarrelShotgun::meatHook_t* meatHookDecl; // Offset: 0x3E18

    idCurve_CatmullRomSpline < idVec3 > crSpline; // Offset: 0x3E20

    idCurve_Spline < idVec3 >* spline; // Offset: 0x3E80

    idRibbon2 chainRibbon; // Offset: 0x3E88

    idList < idDoubleBarrelShotgun::chainLosTest_t , TAG_IDLIST , false > chainBlockedLOSTests; // Offset: 0x3FA0

    idStaticList < idDoubleBarrelShotgun::linkInfo_t , 150 , false , TAG_IDLIST > chainLinks; // Offset: 0x3FB8

    // to support additive anims
    float distanceToAnimateAdditiveLaunch; // Offset: 0x4930

    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > weaponPullAdditiveAnimToPlay; // Offset: 0x4934

    float distanceToAnimateAdditivePull; // Offset: 0x4938

    bool playingWeaponPullAdditiveAnim; // Offset: 0x493C

    bool stopWeaponPullAdditiveAnim; // Offset: 0x493D

    idAtomicHandleT < aliasRefType_t > handsPullAdditiveAnimToPlay; // Offset: 0x4940

    bool playingHandsPullAdditiveAnim; // Offset: 0x4948

    bool stopHandsPullAdditiveAnim; // Offset: 0x4949

    idAtomicHandleT < aliasRefType_t > handsJoltAdditiveAnimToPlay; // Offset: 0x4950

    bool playingHandsJoltAdditiveAnim; // Offset: 0x4958

    bool showingMeathookGeo; // Offset: 0x4959

}; // Size: 0x4960
