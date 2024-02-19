struct idDemonPlayerHands : idEventReceiver
{
    enum showAnimType_t : int
    {
        SHOWANIMTYPE_POP = 0,
        SHOWANIMTYPE_BRINGUP = 1,
        SHOWANIMTYPE_SPAWN = 2
    };

    enum meleeTraceSlot_t : int
    {
        MELEE_TRACE_SLOT_LEFT = 0,
        MELEE_TRACE_SLOT_RIGHT = 1,
        MELEE_TRACE_SLOTS_NUM = 2
    };

    enum demonPlayerHandsBlend_t : int
    {
        DEMONPLAYERHANDSBLEND_FULL = 0,
        DEMONPLAYERHANDSBLEND_ADDITIVE = 1
    };

    struct meleeTraceSlotData_t
    {
        idMeleeTrace meleeTrace; // Offset: 0x0

        idStaticList < idSpawnId , 8 , false , TAG_IDLIST > meleeHitEntities; // Offset: 0x358

    }; // Size: 0x390

    struct meleeFeedBack_t
    {
        // how much the controller shakes on low rumble for hit
        float controllerShakeHighMag; // Offset: 0x0

        // how long in MS the controller will shake.
        idTypesafeTime < int , millisecondUnique_t , 1000 > controllerShakeHighTime; // Offset: 0x4

        // how much the controller shakes on high rumble for hit
        float controllerShakeLowMag; // Offset: 0x8

        // how long in MS the controller will shake.
        idTypesafeTime < int , millisecondUnique_t , 1000 > controllerShakeLowTime; // Offset: 0xC

    }; // Size: 0x10

    // the hands tree animator
    idRenderModelSkinned* renderModel; // Offset: 0x38

    idAnimStack animStack; // Offset: 0x40

    // animWeb player
    idAnimWebDemonPlayerHands webAnimator; // Offset: 0xC80

    // for additional blends
    idAnimator_Channel blendAnimator; // Offset: 0x1550

    // for additive anims
    idAnimator_Channel additiveAnimator; // Offset: 0x1660

    // additive hands bob cycle with animated camera bob
    idDemonPlayerHandsBobCycle handsBobCycle; // Offset: 0x1770

    // additive hands animator for hit reactions
    idDemonPlayerHandsHitReactions handsHitReactions; // Offset: 0x2150

    // whether all additive anims are suppressed or enabled
    bool suppressAllAdditiveAnims; // Offset: 0x2AB8

    // on/off switch for additive weapon lag
    bool additiveLagEnable; // Offset: 0x2AB9

    bool doObstructionTest; // Offset: 0x2ABA

    // the demon the hands go with.
    idManagedClassPtr < idDemonPlayer > ownerDemon; // Offset: 0x2AC0

    // true if render models are actually linked to the renderer
    bool linked; // Offset: 0x2AE0

    // bring up anim has completed
    bool bringUpComplete; // Offset: 0x2AE1

    // List of all blend anims the hands could play
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > blendAliasList; // Offset: 0x2AE8

    // Model for this demon to use for first person hands.
    idDeclMD6* declHandsModel; // Offset: 0x2B00

    // defaults to declHandsModel, but can be changed by customization
    idDeclMD6* handsModelToUse; // Offset: 0x2B08

    // Anim web for this demon to use for first person hands.
    idDeclAnimWeb* declAnimWeb; // Offset: 0x2B10

    // starting sub web for the hands
    idStr startSubWeb; // Offset: 0x2B18

    // starting anim node for the hands
    idStr startNode; // Offset: 0x2B48

    // additive animated bob cycle (move to playerprops?)
    idHandsBobCycleData_t handsBobCycleData; // Offset: 0x2B78

    // how much of the bob cycle anim to apply
    float handsBobCycleAlpha; // Offset: 0x2B88

    // speed demons must be going forward in order to try to show hands in a sprint bob anim {{ units = m / s }}
    float handsBobMinSpeedForSprint; // Offset: 0x2B8C

    // additive animated hit reaction data for hands
    idHandsHitReactionData_t handsHitReactionData; // Offset: 0x2B90

    // lag animation
    idDemonPlayerAdditiveLagAnim additiveLag[2]; // Offset: 0x2BC0

    // The demon has forced the hands to this certain axis
    idMat3 forcedAxis; // Offset: 0x3090

    // Has the demon forced the hands' axis
    bool isAxisForced; // Offset: 0x30B4

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x30B8

    // cache whether we are initialized
    bool fxHandleInit; // Offset: 0x30C0

    // fx decl to use for the hands fxManager
    idDeclFX* fxDecl; // Offset: 0x30C8

    // fx decl to use when a cosmetic wants to override the base fx
    idDeclFX* overrideFXDecl; // Offset: 0x30D0

    idArray < idDemonPlayerHands::meleeTraceSlotData_t , 2 > meleeTraceSlots; // Offset: 0x30D8

    // impact effect for melee attacks
    idDeclImpactEffect* meleeImpactEffect; // Offset: 0x37F8

    // offset in the view direction to push the trace {{ units = m }}
    float meleeTraceOffset; // Offset: 0x3800

    // use double jump anim web state
    bool hasDoubleJumpAnimWebState; // Offset: 0x3804

    // the variables for the players controller shake on melee hit
    idDemonPlayerHands::meleeFeedBack_t meleeFeedBack; // Offset: 0x3808

    // min value for maxFallHeightMeasurement to trigger a heavy land anim {{ units = m }}
    float minHeightForHeavyLandAnim; // Offset: 0x3818

    // whether we're currently measuring our fall height or not
    bool fallHeightMeasurementActive; // Offset: 0x381C

    // max fall height achieved {{ units = m }}
    float maxFallHeightMeasurement; // Offset: 0x3820

    miscEntityFlags_t miscFlags; // Offset: 0x3824

    // cosmetic fx
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > cosmeticFxActionGroup; // Offset: 0x3828

    bool allowFireDuringDoubleJump; // Offset: 0x3830

    bool inChainAnimWindow; // Offset: 0x3831

}; // Size: 0x3838
