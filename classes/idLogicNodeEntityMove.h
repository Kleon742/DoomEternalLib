struct idLogicNodeEntityMove
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        INPUT_STOP = 1,
        OUTPUT_START = 2,
        INPUT_ENTITY = 3,
        INPUT_TARGET = 4,
        INPUT_POSITION = 5,
        INPUT_TIME = 6,
        INPUT_SPEED = 7,
        INPUT_ACCEL = 8,
        INPUT_DECEL = 9,
        OUTPUT_DONE = 10,
        INPUT_OFFSET_RELATIVE = 11,
        INPUT_AUTO_START = 12,
        OUTPUT_STOP = 13
    };

    enum logicMoveToSwitch_t : int
    {
        MOVE_TO_SWITCH_TIME = 0,
        MOVE_TO_SWITCH_SPEED = 1
    };

    enum logicMoveToType_t : int
    {
        MOVE_TO_TYPE_ABSOLUTE = 0,
        MOVE_TO_TYPE_OFFSET = 1
    };

    enum moveStage_t : int
    {
        ACCELERATION_STAGE = 0,
        LINEAR_STAGE = 1,
        DECELERATION_STAGE = 2,
        STOP_STAGE = 3,
        FINISHED_STAGE = 4
    };

    idLogicNodeEntityMove::logicMoveToSwitch_t moveToSwitch; // Offset: 0x0

    idLogicNodeEntityMove::logicMoveToType_t moveToType; // Offset: 0x4

    idLogicEntityPtr entity; // Offset: 0x8

    idVec3 endPosition; // Offset: 0x30

    idVec3 moveVelocity; // Offset: 0x3C

    idTypesafeTime < int , millisecondUnique_t , 1000 > accelTime; // Offset: 0x48

    idTypesafeTime < int , millisecondUnique_t , 1000 > linearTime; // Offset: 0x4C

    idTypesafeTime < int , millisecondUnique_t , 1000 > decelTime; // Offset: 0x50

    float speed; // Offset: 0x54

    idLogicNodeEntityMove::moveStage_t stage; // Offset: 0x58

    idLogicNodeEntityMove::moveStage_t entStage; // Offset: 0x5C

    bool isRelativeTransform; // Offset: 0x60

}; // Size: 0x68
