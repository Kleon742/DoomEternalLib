struct idAbility_Dash : idInventoryItem
{
    enum state_t : int
    {
        NO_STATE = -1,
        INITIALIZE = 0,
        IDLE = 1,
        ACTIVE = 2,
        HIT_AI = 3,
        RESET = 4,
        MAX_STATES = 5
    };

    enum transition_t : int
    {
        NO_TRANSITION = -1,
        INITIALIZE_to_IDLE = 0,
        IDLE_to_ACTIVE = 1,
        ACTIVE_to_IDLE = 2,
        ACTIVE_to_HIT_AI = 3,
        HIT_AI_to_IDLE = 4,
        HIT_AI_to_ACTIVE = 5,
        RESET_ALL = 6,
        RESET_to_IDLE = 7,
        MAX_TRANSITIONS = 8
    };

    struct recentDamage_t
    {
        idSpawnId spawnId; // Offset: 0x0

        int gameFrame; // Offset: 0x4

    }; // Size: 0x8

    typedef idInternalFsm < idAbility_Dash , idAbility_Dash::state_t , idAbility_Dash::transition_t > idInternalFSM;

    // internal state machine for the object
    idInternalFsm < idAbility_Dash , idAbility_Dash::state_t , idAbility_Dash::transition_t >* fsm; // Offset: 0x110

    // whether we are active or not
    bool active; // Offset: 0x118

    bool wasActivatedDuringBouncePadTime; // Offset: 0x119

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x120

    // server time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > uniqueTimeStamp; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > regainControlTime; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > regenStartTime; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > minNextUseTime; // Offset: 0x140

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRegenDelayTime; // Offset: 0x148

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > validAutoAttachTime; // Offset: 0x150

    idVec3 dashDir; // Offset: 0x158

    // the distance traveled so far in the current dash
    float dashDist; // Offset: 0x164

    // the total distance the dash will travel without interference
    float dashDistMax; // Offset: 0x168

    // records positions to track total distance
    idVec3 lastPos; // Offset: 0x16C

    // check for walls.
    idHavokQueryId meleeWallCheck; // Offset: 0x178

    // check for water volume.
    idHavokQueryId waterVolumeCheck; // Offset: 0x180

    // havok'd
    idHavokQueryId clipQuery[2]; // Offset: 0x188

    // havok'd
    idHavokQueryId gravityClipQuery; // Offset: 0x198

    // {{ units = m / s }}
    idVec3 gravityVel; // Offset: 0x1A0

    bool startedOnGround; // Offset: 0x1AC

    bool restartActiveDash; // Offset: 0x1AD

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prevGravityAppliedGt; // Offset: 0x1B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > bouncePadActiveUntilTime; // Offset: 0x1B8

    bool isAIStaggeredAndPlayerIsTheAir; // Offset: 0x1C0

    bool meleeQueued; // Offset: 0x1C1

    bool dashedInWater; // Offset: 0x1C2

    idInventoryItemUpgrade upgradeComponent; // Offset: 0x1C8

    idDeclAbility_Dash* dashDecl; // Offset: 0x1F8

}; // Size: 0x200
