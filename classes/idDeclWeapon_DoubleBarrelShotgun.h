struct idDeclWeapon_DoubleBarrelShotgun : idDeclWeapon_Data
{
    struct meatHook_t
    {
        enum aiHookResult_t : int
        {
            AI_MOVES_TO_PLAYER = 0,
            PLAYER_MOVES_TO_AI = 1,
            HOOK_DEFLECTED = 2
        };

        enum aiSurfaceResult_t : int
        {
            HOOK_DEFLECTED_FROM_SURF = 0,
            HOOK_REMOVES_SHIELD = 1
        };

        struct aiHookInfo_t
        {
            // AIs included in this result
            aiMonsterType_t aiAffected; // Offset: 0x0

            // result of hooking these AI
            idDeclWeapon_DoubleBarrelShotgun::meatHook_t::aiHookResult_t hookReactionType; // Offset: 0x8

        }; // Size: 0x10

        struct surfHookInfo_t
        {
            // surface type
            surfTypes_t surfaceType; // Offset: 0x0

            // result of hooking touching this surface
            idDeclWeapon_DoubleBarrelShotgun::meatHook_t::aiSurfaceResult_t hookReactionType; // Offset: 0x4

        }; // Size: 0x8

        struct breakPullingInfo_t
        {
            // additional upward velocity added to player when he breaks out of a meat hook pull
            float additionalUpVel; // Offset: 0x0

            // when non-zero, amount of forward velocity added to player when he breaks out of a meat hook pull (-value moves backwards)
            float additionalFwdVel; // Offset: 0x4

            // slow lateral speed to this value
            float goalLateralSpeed; // Offset: 0x8

            // max time to reach goalLateralSpeed
            idTypesafeTime < int , millisecondUnique_t , 1000 > goalLateralSpeedTime; // Offset: 0xC

        }; // Size: 0x10

        // scale applied to meat hook animation
        float activationAnimSpeedScale; // Offset: 0x0

        // time (in MS) before player pulls target towards him
        idTypesafeTime < int , millisecondUnique_t , 1000 > pauseBeforePullTime; // Offset: 0x4

        // time (in MS) before player is pulled towards target
        idTypesafeTime < int , millisecondUnique_t , 1000 > pauseBeforePlayerPulledTime; // Offset: 0x8

        // time (in MS) before hook is deflected off target
        idTypesafeTime < int , millisecondUnique_t , 1000 > pauseBeforeDeflectTime; // Offset: 0xC

        // time (in MS) to wait before forgetting most recent target (after actually losing it from target list)
        idTypesafeTime < int , millisecondUnique_t , 1000 > killMostRecentTargetTimeMS; // Offset: 0x10

        // speed that target is pulled back to player
        float pullTargetSpeed; // Offset: 0x14

        // speed that player is pulled towards target
        float playerPulledSpeed; // Offset: 0x18

        // speed that player is pulled towards target when target is an idTarget_SmartAIProxy
        float playerAIProxyPulledSpeed; // Offset: 0x1C

        // initial upward velocity when player gets pulled to target
        float playerPulledUpVelocity; // Offset: 0x20

        // For large targets apply this additional z velocity to give a less linear path
        float playerAdditionalUpwardVelocityForLargeTargets; // Offset: 0x24

        // Required height delta to apply the upward z velocity
        float playerAdditionalUpwardVelocityHeightDelta; // Offset: 0x28

        // speed that hook travels back to player after hooking a target
        float retractHookedSpeed; // Offset: 0x2C

        // speed that hook travels back to player after being deflected
        float retractDeflectionSpeed; // Offset: 0x30

        // list of surface types and result of hook touching it
        idList < idDeclWeapon_DoubleBarrelShotgun::meatHook_t::surfHookInfo_t , TAG_IDLIST , false > surfHookInfolist; // Offset: 0x38

        // list of AI and how they deal with being hooked
        idList < idDeclWeapon_DoubleBarrelShotgun::meatHook_t::aiHookInfo_t , TAG_IDLIST , false > aiHookInfoList; // Offset: 0x50

        // distance from player to stop pulling AI
        float stopPullingAiDistFromPlayer; // Offset: 0x68

        // distance from AI to stop pulling player
        float stopPullingPlayerDistFromAI; // Offset: 0x6C

        // distance from Smart AI Proxy to stop pulling player. Only used if >= 0.
        float stopPullingPlayerDistFromSmartAIProxy; // Offset: 0x70

        // for targets closer than the stop pulling distances, use this percent of the start distance to stop pulling
        float nearTargetStopPullingDistPctStartDist; // Offset: 0x74

        // angle threshold between actual displacement and the desired displacement for a straight line to consider the player "stuck"
        idTypesafeNumber < float , DegreesUnique_t > desiredVsActualDisplacementAngleThresholdForStuckCheck; // Offset: 0x78

        // table used for the speed to pull AI towards player
        idDeclTable* pullAITable; // Offset: 0x80

        // table used for the speed to pull player towards AI
        idDeclTable* pullPlayerTable; // Offset: 0x88

        // sound played when hook attached to AI
        idSoundEvent* hookAttachSound; // Offset: 0x90

        // sound played when hook is pulled back to player (NOT when player pulled to target or vice-versa)
        idSoundEvent* hookPullingSound; // Offset: 0x98

        // screen shake when hook hits AI
        idDeclAdvancedViewShake* hookLandsScreenShakeDecl; // Offset: 0xA0

        // sound played when hook pull starts
        idSoundEvent* playerPullStartSound; // Offset: 0xA8

        // sound played when hook pull ends
        idSoundEvent* playerPullEndSound; // Offset: 0xB0

        // sound played when hook pull goes wrong and must be broken
        idSoundEvent* playerPullBreakSound; // Offset: 0xB8

        // silent sound played when hook pull goes wrong and must be broken that can clean up other sounds that might otherwise remain playing
        idSoundEvent* playerSilentBreakSound; // Offset: 0xC0

        // screen shake when hook hits AI
        idDeclAdvancedViewShake* playerPullBreakScreenShakeDecl; // Offset: 0xC8

        // play on weapon during meathook pull
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > weaponPullAdditiveAnim; // Offset: 0xD0

        // play on hands during meathook pull
        idAtomicHandleT < aliasRefType_t > handsPullAdditiveAnim; // Offset: 0xD8

        // jolt the hands after meathook finishes retracting
        idAtomicHandleT < aliasRefType_t > handsPostRetractJoltAnim; // Offset: 0xE0

        // duration of hands post-retract jolt anim
        milliToGameTime_t handsPostRetractJoltAnimDurationMS; // Offset: 0xE8

        // ribbon for mastery fx
        idDeclRibbon2* declRibbon2; // Offset: 0xF8

        // meat hook mastery perk
        idDeclPerk* masteryPerk; // Offset: 0x100

        // remap from/to when mastery is active
        materialRemap_t masteryChainRemap; // Offset: 0x108

        // when player jumps while using chain
        idDeclWeapon_DoubleBarrelShotgun::meatHook_t::breakPullingInfo_t jumpBreaksPulling; // Offset: 0x118

        // when player fires weapon while using chain
        idDeclWeapon_DoubleBarrelShotgun::meatHook_t::breakPullingInfo_t firingBreaksPulling; // Offset: 0x128

        // sound played being pulled and player breaks out of it
        idSoundEvent* breakChainSound; // Offset: 0x138

        // distance to adjust 'goal' when lateral move is activated
        float goalOffsetDistanceDuringLateralMove; // Offset: 0x140

        // scale the sensitivity for the controller
        float sensitivity_scale_controller; // Offset: 0x144

        // scale the sensitivity for the mouse
        float sensitivity_scale_mouse; // Offset: 0x148

        // scale the movement for the controller
        float movement_scale_controller; // Offset: 0x14C

        // scale the movement for the keyboard
        float movement_scale_keyboard; // Offset: 0x150

        // scale the movement for the controller when wading
        float movement_scale_controller_wading; // Offset: 0x154

        // scale the movement for the keyboard
        float movement_scale_keyboard_wading; // Offset: 0x158

        // scale the movement for grapple points
        float movement_scale_grapple; // Offset: 0x15C

        // rate at which player's lateral movement is removed and player moves back towards the target
        float lateralMovementReduction; // Offset: 0x160

        // defines meat hook perk decl
        idDeclPerk* meatHookPerkDecl; // Offset: 0x168

        // kick params when hook attaches to AI -- only FOV is implemented
        weaponFeedBack_t connectKick; // Offset: 0x170

        // view adjust rate (angles per sec) while flying towards target (controller)
        float userAdjustRate_stick; // Offset: 0x388

        // view adjust rate (angles per sec) while flying towards target (mouse)
        float userAdjustRate_mouse; // Offset: 0x38C

        // max angle user can adjust view while flying towards target
        float maxUserAdjustAngle; // Offset: 0x390

        // not view adjustment inside centered dead zone
        float stickDeadZone; // Offset: 0x394

        // angles (per sec) that view is adjusted back towards target
        float recenterAdjustRate; // Offset: 0x398

        // speed at which player bounces of AI that was being hooked
        float collisionRepulseSpeed; // Offset: 0x39C

        // track to target within this fov
        float targetHorizontalFov; // Offset: 0x3A0

        // track to target within this fov
        float targetVerticalFov; // Offset: 0x3A4

        // max distance of possible targets
        float maxTargetDistance; // Offset: 0x3A8

        // gravity is scaled by this amount (from normal gravity)
        float gravityScale; // Offset: 0x3AC

        // min angle away from target that grenade will be thrown
        float minShootAngle; // Offset: 0x3B0

        // min dist will use "0" for minShootAngle
        float minShootAngleDist; // Offset: 0x3B4

        // max dist (or greater) will use full minShootAngle value
        float maxShootAngleDist; // Offset: 0x3B8

        // fractional value ( 0.0 - 1.0 ) that determines when to curve ( 0.0 == player, 1.0 == target, 0.5 == halfway between player and target )
        float curvePlaneFrac; // Offset: 0x3BC

        // entity that has the chain link model
        idDeclEntityDef* chainEntityDecl; // Offset: 0x3C0

        // name of chain link model
        idStrRenderModel chainLinkModelName; // Offset: 0x3C8

        // names of meshes to hide / show while meathook is in use
        idList < idStr , TAG_IDLIST , false > meatHookMeshNames; // Offset: 0x3D0

        // do the LOS test for walls etc
        bool chainBlockedLOSTestEnabled; // Offset: 0x3E8

        // minimum time hooked before performing LOS tests
        idTypesafeTime < int , millisecondUnique_t , 1000 > hookedDelayBeforeDoingLOSTests; // Offset: 0x3EC

        // num consecutive blocked los tests to disconnect chain
        int numConsecutiveChainBlockedLOSTestsToBreakConnection; // Offset: 0x3F0

        // more than 1.0 increases movement speed (but remains framerate independent)
        idBranchedOptionValue < declInputBranch_t , float > pvpMovementScale; // Offset: 0x3F8

    }; // Size: 0x420

    // anim state to use when shooting the first barrel
    idAtomicString shootFirstBarrelAnim; // Offset: 0x90

    // anim state that signals the start of the shooting of the secobnd barrel
    idAtomicString shootSecondBarrelStartAnim; // Offset: 0x98

    // anim state to use when shooting the second barrel and reloading.
    idAtomicString shootSecondBarrelWithReloadAnim; // Offset: 0xA0

    // anim state to use when shooting the second barrel and no reloading.
    idAtomicString shootSecondBarrelNoReloadAnim; // Offset: 0xA8

    // meat hook data
    idDeclWeapon_DoubleBarrelShotgun::meatHook_t meatHook; // Offset: 0xB0

}; // Size: 0x4D0
