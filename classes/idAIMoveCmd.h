struct idAIMoveCmd
{
    enum destEntityType_t : int
    {
        DEST_ENT_NONE = 0,
        DEST_ENT_ENEMY = 1,
        DEST_POS_GOAL = 2
    };

    enum DestinationType : int
    {
        MOVE_NONE = 0,
        MOVE_ENTITY = 1,
        MOVE_POSITION = 2
    };

    idList < idVec3 , TAG_IDLIST , false > explicitPath; // Offset: 0x0

    idAIMoveCmd::DestinationType destType; // Offset: 0x18

    idEntityPtr_ThreadSafe < idEntity > destEnt; // Offset: 0x20

    // {{ units = m }}
    idVec3 destEntOffset; // Offset: 0x38

    // {{ units = m }}
    idVec3 destPos; // Offset: 0x44

    idVec3 destNormal; // Offset: 0x50

    idIndex < int , invalidArea_t , - 1 > destAreaNum; // Offset: 0x5C

    // const idTypeInfoMeleeInteractionGraphNode *destInteraction;  destination animation will only be updated outside this distance {{ units = m * m }}
    float destAnimUpdateDistanceMinSqr; // Offset: 0x60

    idAnimWebState destAnim; // Offset: 0x68

    idAtomicString overrideMoveCylePostfix; // Offset: 0x88

    idList < moveCycleAnim_t , TAG_IDLIST , false >* moveCycleAnims; // Offset: 0x90

    idAIMoveCmd::destEntityType_t destEntityType; // Offset: 0x98

    aiArrivalAction_t arrivalAction; // Offset: 0x9C

    // {{ units = m }}
    float arrivalRadius; // Offset: 0xA0

    // {{ units = m }}
    float arrivalHeight; // Offset: 0xA4

    // {{ units = m }}
    float arrivalBuffer; // Offset: 0xA8

    // {{ units = m }}
    float planeArrivalRadius; // Offset: 0xAC

    // {{ units = m }}
    float alignmentDistance; // Offset: 0xB0

    // {{ units = m }}
    float navTolerance; // Offset: 0xB4

    // {{ units = m }}
    float verticalNavTolerance; // Offset: 0xB8

    bool attemptArrivalAlign; // Offset: 0xBC

    aiArrivalOrientation_t arriveOrient; // Offset: 0xC0

    idMat3 arriveAxis; // Offset: 0xC4

    float arriveOrientAngleTolerance; // Offset: 0xE8

    moveFlags_t moveFlags; // Offset: 0xF0

    idIndex < int , invalidAIDataID_t , - 1 > initialPathDataID; // Offset: 0xF8

    idEventDef* startMoveEvent; // Offset: 0x100

    // reason for this movement -- used to track failures of specific movement types so that the AI can avoid trying them over and over
    aiMoveReason_t moveReason; // Offset: 0x108

    // for debugging;
    idAtomicString userString; // Offset: 0x110

    // outside of this radius, we should move to a dynamic position {{ units = m * m }}
    float dynamicRadius; // Offset: 0x118

    walkState_t walkstate; // Offset: 0x11C

    walkstateManagementFlags_t walkstateManagementFlags; // Offset: 0x120

}; // Size: 0x128
