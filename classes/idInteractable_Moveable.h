struct idInteractable_Moveable : idInteractable
{
    enum moveableState_t : int
    {
        NO_STATE = -1,
        INIT_STATE = 0,
        IDLE_STATE = 1,
        WAIT_STATE = 2,
        MOVE_STATE = 3,
        ROTATE_STATE = 4,
        ROTATE_MOVE_STATE = 5,
        MAX_STATES = 6
    };

    enum moveableTransitions_t : int
    {
        NO_TRANSITION = -1,
        WAIT_TRANSITION = 0,
        MOVE_TRANSITION = 1,
        ROTATE_TRANSITION = 2,
        ROTATE_MOVE_TRANSITION = 3,
        IDLE_TRANSITION = 4,
        MAX_TRANSITIONS = 5
    };

    struct moveableNodeData_t
    {
        // the node name related to this data
        idTypeInfoGraphPath nodeName; // Offset: 0x0

        // the entity that is the destination ( point, axis )
        idManagedClassPtr < idEntity > destinationEntity; // Offset: 0x30

        // the time it will take to get to this position in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > totalMoveTimeMs; // Offset: 0x50

        // the time it will take to get to this position in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > accelerationTimeMs; // Offset: 0x54

        // the time it will take to get to this position in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > decelerationTimeMs; // Offset: 0x58

        // the time ( milliseconds ) it will take before we start moving i.e. delay before movement, -1 indicates infinite wait until IA_ELEVATOR_WAIT_END command is sent
        idTypesafeTime < int , millisecondUnique_t , 1000 > waitTimeMs; // Offset: 0x5C

        // the speed to move at in units of length per second towards this entity
        float maxSpeed; // Offset: 0x60

        // whether we want to rotate to the axis of the destination
        bool rotateToAxis; // Offset: 0x64

    }; // Size: 0x68

    typedef idInternalFsm < idInteractable_Moveable , idInteractable_Moveable::moveableState_t , idInteractable_Moveable::moveableTransitions_t > idInteractableMoveableFSM;

    // internal state machine for the object
    idInternalFsm < idInteractable_Moveable , idInteractable_Moveable::moveableState_t , idInteractable_Moveable::moveableTransitions_t >* internalFSM; // Offset: 0x2B50

    // contents flag for the mover
    contentsFlags_t contentsFlags; // Offset: 0x2B58

    // content mask for the clip model
    contentMask_t contentMaskClip; // Offset: 0x2B5C

    // the data associated with the graph
    idList < idInteractable_Moveable::moveableNodeData_t , TAG_IDLIST , false > nodeMovementData; // Offset: 0x2B60

    // if true removes the ability of the player to jump on this mover
    bool disablePlayerJump; // Offset: 0x2B78

    // whether we are moving or not
    bool isMoving; // Offset: 0x2B79

    // whether we are waiting to move or not
    bool waitingToMove; // Offset: 0x2B7A

    // the time holder of the stage, can be beginning or mid time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageTime; // Offset: 0x2B80

    // pointer to the node data we are currently using
    idInteractable_Moveable::moveableNodeData_t* moveData; // Offset: 0x2B88

}; // Size: 0x2B90
