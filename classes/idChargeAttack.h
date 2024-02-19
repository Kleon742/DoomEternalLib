struct idChargeAttack : idInventoryItem
{
    enum chargeAttackState_t : int
    {
        NO_STATE = -1,
        INITIALIZE_STATE = 0,
        IDLE_STATE = 1,
        SHOW_FISTS_STATE = 2,
        MOVE_STATE = 3,
        SYNC_ANIM_STATE = 4,
        WAIT_FOR_ANIM_STATE = 5,
        WAIT_FOR_SYNC_STATE = 6,
        FINISH_STATE = 7,
        MAX_STATES = 8
    };

    enum chargeAttackTransitions_t : int
    {
        NO_TRANSITION = -1,
        INIT_DONE_TRANSITION = 0,
        SHOW_FISTS_TRANSITION = 1,
        MOVE_TO_TARGET_TRANSITION = 2,
        DO_INTERACTION_TRANSITION = 3,
        WAIT_FOR_SYNC_ANIM_TRANSITION = 4,
        WAIT_FOR_INTERACTION_TRANSITION = 5,
        FINISH_INTERACTION_TRANSITION = 6,
        FINISH_CHARGE_TRANSITION = 7,
        MAX_TRANSITIONS = 8
    };

    typedef idInternalFsm < idChargeAttack , idChargeAttack::chargeAttackState_t , idChargeAttack::chargeAttackTransitions_t > idChargeFSM;

    // updates the debug arrow to the target if the cvar is enabled the player entity that carries the item
    idManagedClassPtr < idPlayer > playerEntity; // Offset: 0x110

    // whether we are currently doing a charge attack
    bool active; // Offset: 0x130

    // the target selected to kill
    idManagedClassPtr < idAnimatedEntity > selectedTarget; // Offset: 0x138

    // velocity vector to the target in units / second
    idVec3 vec3SpeedToTarget; // Offset: 0x158

    // the time to end the slide movement
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeToEndTarget; // Offset: 0x168

    // the time to stop trying to sync with a target.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeToStopTryToSync; // Offset: 0x170

    // player weapon restored to this after we have finished
    idDeclWeapon* previousWeapon; // Offset: 0x178

    idDeclWeapon* fistsWeapon; // Offset: 0x180

    // whether we are allowed to move while the arms come up
    bool moveWhileArmsComeUp; // Offset: 0x188

    // whether its available to use or not
    bool overrideStagger; // Offset: 0x189

    // whether the charge attack is equipped or not
    bool equipped; // Offset: 0x18A

    // allow airmove
    bool airMove; // Offset: 0x18B

    // client reliable message spam protection
    bool readyToTryExecute; // Offset: 0x18C

    // the result of the slide move for the playerhavok'd
    idHavokQueryId slideResult; // Offset: 0x190

    // the actual current upgrade to the gk distance
    float curDistUpgrade; // Offset: 0x198

    // the player condition to use
    fxCondition_t fxCondition; // Offset: 0x19C

    // internal state machine for the object
    idInternalFsm < idChargeAttack , idChargeAttack::chargeAttackState_t , idChargeAttack::chargeAttackTransitions_t >* internalFSM; // Offset: 0x1A0

}; // Size: 0x1A8
