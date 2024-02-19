struct idDemonPlayerHandsBobCycle : idEventReceiver
{
    enum webState_t : int
    {
        WEBSTATE_IDLE = 0,
        WEBSTATE_RUN_R_END = 1,
        WEBSTATE_RUN_L_END = 2,
        WEBSTATE_SPRINT_R_END = 3,
        WEBSTATE_SPRINT_L_END = 4,
        WEBSTATE_TRANSITIONING = 5,
        WEBSTATE_MAX = 6
    };

    enum handsBobCycle_t : int
    {
        HANDSBOBCYCLE_DEFAULT = 0,
        HANDSBOBCYCLE_MAX = 1
    };

    enum footStep_t : int
    {
        FOOTSTEP_NONE = 0,
        FOOTSTEP_RIGHT = 1,
        FOOTSTEP_LEFT = 2,
        FOOTSTEP_LEGS_CROSSING = 3,
        FOOTSTEP_MAX = 4
    };

    idDemonPlayer* owner; // Offset: 0x38

    idAnimWebHandsBobCycle webAnimator; // Offset: 0x40

    // spring to smooth the bob cycle direction weights
    idSpring < idVec2 > directionSpring; // Offset: 0x900

    // spring to smooth the blend alpha values
    idSpring < idVec1 > blendAlphaSpring; // Offset: 0x944

    // delay before to idle bob cycle after jumping or starting a fall, to avoid unintended returns to idle when traveling over irregular ground
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > idleDelayTime; // Offset: 0x978

    bool wasFalling; // Offset: 0x980

    // tracks the time for which we can't change bob cycles. if <= 0, we can change
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > noChangeTime; // Offset: 0x988

    // tracks the length of time with no user input - used to damp out unintended changes to the idle bob cycle
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > noInputTime; // Offset: 0x990

    // current handsBobCycle
    idDemonPlayerHandsBobCycle::handsBobCycle_t handsBobCycle; // Offset: 0x998

    // current bobType
    bobType_t bobType; // Offset: 0x99C

    // tracks the half-cycle state - will generally alternate between 'left' and 'right'
    idDemonPlayerHandsBobCycle::footStep_t footStepState; // Offset: 0x9A0

    // footstep events during the half-cycles - these mark the foot impacts as well as the legs crossing events
    idDemonPlayerHandsBobCycle::footStep_t footStepEvent; // Offset: 0x9A4

    // stores the time of the previous event, to allow rejection of bogus events that occur due to consequences of anim rate scaling causing varying anim startTime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > footStepEventTime[4]; // Offset: 0x9A8

    // flag indicates when the left cycle anim is starting to blend out
    bool leftCycleEnded; // Offset: 0x9C8

    // flag indicates when the right cycle anim is starting to blend out
    bool rightCycleEnded; // Offset: 0x9C9

    // suppress the bob cycle during melee executed while sprinting
    bool suppressDuringMelee; // Offset: 0x9CA

    // tracks whether a sprint transition is playing
    bool sprintTransitionPlaying; // Offset: 0x9CB

    // duration in seconds for the sprint_to_idle transition animation
    float sprint2idleDurationSecs; // Offset: 0x9CC

    // duration in seconds for the sprint_to_run transition animation
    float sprint2runDurationSecs; // Offset: 0x9D0

    // only used to track whether current decl agrees with the inited data
    idDeclHandsBobCycle* initedDecl; // Offset: 0x9D8

}; // Size: 0x9E0
