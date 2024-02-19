struct idLogicNodeEntityMoveTo
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
        OUTPUT_DONE = 8,
        INPUT_OFFSET_RELATIVE = 9,
        INPUT_AUTO_START = 10,
        OUTPUT_STOP = 11
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

    idLogicNodeEntityMoveTo::logicMoveToSwitch_t moveToSwitch; // Offset: 0x0

    idLogicNodeEntityMoveTo::logicMoveToType_t moveToType; // Offset: 0x4

    idLogicEntityPtr entity; // Offset: 0x8

    idLogicEntityPtr target; // Offset: 0x30

    idVec3 position; // Offset: 0x58

    idVec3 endPosition; // Offset: 0x64

    idVec3 velocity; // Offset: 0x70

    idTypesafeTime < int , millisecondUnique_t , 1000 > deltaTime; // Offset: 0x7C

    idTypesafeTime < int , millisecondUnique_t , 1000 > endTime; // Offset: 0x80

    float speed; // Offset: 0x84

    bool isRelativeTransform; // Offset: 0x88

    bool skipStepMove; // Offset: 0x89

}; // Size: 0x90
