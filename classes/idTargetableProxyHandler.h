struct idTargetableProxyHandler : idAnimatedEntity
{
    enum behaviorState_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        INACTIVE = 1,
        IDLE = 2,
        ACTIVE = 3,
        MAX_STATES = 4
    };

    enum behaviorTransitions_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_IDLE = 0,
        INITIALIZE_to_INACTIVE = 1,
        INACTIVE_to_IDLE = 2,
        IDLE_to_INACTIVE = 3,
        IDLE_to_ACTIVE = 4,
        ACTIVE_to_IDLE = 5,
        ACTIVE_to_INACTIVE = 6,
        MAX_TRANSITIONS = 7
    };

    struct targetProxy_t
    {
        // AI Proxy Target for targeting (meat hook, etc.). Do NOT attach any other entity type than idTarget_SmartAIProxy.
        idManagedClassPtr < idEntity > proxyEntity; // Offset: 0x0

        // Tag name for identifying this proxy.
        idAtomicString proxyTagName; // Offset: 0x20

    }; // Size: 0x28

    typedef idInternalFsm < idTargetableProxyHandler , idTargetableProxyHandler::behaviorState_t , idTargetableProxyHandler::behaviorTransitions_t > idTargetableProxyHandlerFSM;

    idInternalFsm < idTargetableProxyHandler , idTargetableProxyHandler::behaviorState_t , idTargetableProxyHandler::behaviorTransitions_t >* fsm; // Offset: 0x1B48

    // List of Target Proxy structs which contain the Target_AIProxy and joint name. Additional entries in the list allow for more types of targeting or more target positions.
    idList < idTargetableProxyHandler::targetProxy_t , TAG_IDLIST , false > proxyList; // Offset: 0x1B50

    // The overall behavior type of this proxy handler. Defaults to cooldown. This determines how the internal state machine is built, which means this CANNOT be changed at runtime.
    handlerBehaviorType_t behaviorType; // Offset: 0x1B68

    // The action taken once a proxy is triggered. Defaults to none. If an action is needed that is not supported, reach out to programming.
    handlerActionType_t actionType; // Offset: 0x1B6C

    // The cooldown duration. Only relevant if using the cooldown or inverse cooldown behaviors. For inverse cooldown, this is the length of time the handler remains active. {{ units == ms }}
    idTypesafeTime < int , millisecondUnique_t , 1000 > cooldownDuration; // Offset: 0x1B70

    // If true, the cooldown will start when hit (good for shooting it). If false, it will start when active state finishes (e.g. time since meat hook released).
    bool cooldownBasedOnHit; // Offset: 0x1B74

    // If true, the action will be done on hit, If false, the action will be done when the hit (or meat hook) finishes.
    bool executeActionOnHit; // Offset: 0x1B75

    // If true, the handler will use the last player that activated an AI proxy as the activator for any attached non-AI Proxy targets. Defaults to false.
    bool usePlayerAsActivator; // Offset: 0x1B76

    // If true, the handler will start inactive regardless of behavior. Activating the handler will toggle between the chosen behavior and inactive. Defaults to false.
    bool startInactive; // Offset: 0x1B77

    // The sound played when the proxies are hit/connected to. One shot sound, not a loop.
    idSoundEvent* connectSound; // Offset: 0x1B78

    // Ambient environment looping sound
    idSoundEvent* ambientLoopSound; // Offset: 0x1B80

    // Whether this handler should use the 360-degree models. Defaults to false.
    bool isOmnidirectional; // Offset: 0x1B88

    // one-sided active model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* oneSidedActiveModel; // Offset: 0x1B90

    // one-sided inactive model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* oneSidedInactiveModel; // Offset: 0x1B98

    // all-sided active model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* allSidedActiveModel; // Offset: 0x1BA0

    // all-sided inactive model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* allSidedInactiveModel; // Offset: 0x1BA8

    // one-sided active FX model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* oneSidedActiveFXModel; // Offset: 0x1BB0

    // one-sided inactive FX model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* oneSidedInactiveFXModel; // Offset: 0x1BB8

    // all-sided active FX model. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* allSidedActiveFXModel; // Offset: 0x1BC0

    // all-sided inactive FXmodel. Only put models here, do not put a model in the render model info section of the entity def.
    idStaticModel* allSidedInactiveFXModel; // Offset: 0x1BC8

    // Speed and direction (+/-) of rings when active {{ units == deg/s }}
    float activeFXRotVelocity; // Offset: 0x1BD0

    // Speed and direction (+/-) of rings when inactive {{ units == deg/s }}
    float inactiveFXRotVelocity; // Offset: 0x1BD4

    // When we go into an Enter_XXXXX function, we cache what our previous state was
    idTargetableProxyHandler::behaviorState_t previousState; // Offset: 0x1BD8

    // When we go into an Exit_XXXXX function, we cache what our next state it
    idTargetableProxyHandler::behaviorState_t nextState; // Offset: 0x1BDC

    // If not NO_STATE, the next time the FSM is serviced it will override the state and be reset to NO_STATE.
    idTargetableProxyHandler::behaviorState_t overrideState; // Offset: 0x1BE0

    // The desired transition determined during the service of each state. Acted upon in the exit.
    idTargetableProxyHandler::behaviorTransitions_t desiredTransition; // Offset: 0x1BE4

    // The game time when an AI Proxy was hit (or released, based on m_cooldownBasedOnHit), used for determining cool down behavior
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cooldownStartTime; // Offset: 0x1BE8

    // Whether or not we are currently cooling down
    bool coolingDown; // Offset: 0x1BF0

    // Whether or not to do the specified action. We can stay in the active state for many frames, and we only want to do the action once per activation.
    bool canExecuteAction; // Offset: 0x1BF1

    // The index of the last AI Proxy that was successfully activated
    int lastActiveProxyIndex; // Offset: 0x1BF4

    // Are we currently forced to be inactive
    bool forcedInactive; // Offset: 0x1BF8

    // Did our extra render models get initialized correctly.
    bool modelsInitCorrectly; // Offset: 0x1BF9

    idRenderModel* oneSidedActive; // Offset: 0x1C00

    idRenderModel* oneSidedInactive; // Offset: 0x1C08

    idRenderModel* allSidedActive; // Offset: 0x1C10

    idRenderModel* allSidedInactive; // Offset: 0x1C18

    idRenderModel* oneSidedActiveFX; // Offset: 0x1C20

    idRenderModel* oneSidedInactiveFX; // Offset: 0x1C28

    idRenderModel* allSidedActiveFX; // Offset: 0x1C30

    idRenderModel* allSidedInactiveFX; // Offset: 0x1C38

    idRenderModel* currentFX; // Offset: 0x1C40

    float currentRotation; // Offset: 0x1C48

    // debug bools to be removed post-prototype stage
    bool canPrintInactiveService; // Offset: 0x1C4C

    bool canPrintIdleService; // Offset: 0x1C4D

    bool canPrintActiveService; // Offset: 0x1C4E

    bool debugModelState; // Offset: 0x1C4F

}; // Size: 0x1C50
