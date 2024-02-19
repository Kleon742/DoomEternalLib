struct idLogicNodeEntityPositionalInterpolation
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        INITIAL_POSITION = 2,
        DESTINATION_POSITION = 3,
        INPUT_ENTITY = 4,
        INPUT_TIME = 5,
        OUTPUT_DONE = 6,
        INPUT_USE_CAMERA_HEIGHT = 7,
        INPUT_STOP = 8,
        OUTPUT_STOP = 9,
        INPUT_SPEED = 10
    };

    enum logicMoveToSwitch_t : int
    {
        MOVE_TO_SWITCH_TIME = 0,
        MOVE_TO_SWITCH_SPEED = 1
    };

    idLogicEntityPtr entity; // Offset: 0x0

    idPhysics* physics; // Offset: 0x28

    idVec3 initialPosition; // Offset: 0x30

    idVec3 destinationPosition; // Offset: 0x3C

    idVec3 movementVelocity; // Offset: 0x48

    idTypesafeTime < int , millisecondUnique_t , 1000 > movementTime; // Offset: 0x54

    float movementSpeed; // Offset: 0x58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementStart; // Offset: 0x60

    bool usePlayersCameraHeight; // Offset: 0x68

}; // Size: 0x70
