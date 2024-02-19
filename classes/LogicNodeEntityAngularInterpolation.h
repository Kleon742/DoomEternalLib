struct LogicNodeEntityAngularInterpolation
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        INITIAL_ORIENTATION = 2,
        DESTINATION_ORIENTATION = 3,
        INPUT_ENTITY = 4,
        INPUT_TIME = 5,
        OUTPUT_DONE = 6,
        INPUT_STOP = 7,
        OUTPUT_STOP = 8,
        INPUT_INITIAL_VECTOR = 9,
        INPUT_DESTINATION_VECTOR = 10,
        INPUT_SPEED = 11
    };

    idLogicEntityPtr entity; // Offset: 0x0

    idPhysics* physics; // Offset: 0x28

    idQuat initalOrientation; // Offset: 0x30

    idQuat destinationOrientation; // Offset: 0x40

    idTypesafeTime < int , millisecondUnique_t , 1000 > movementTime; // Offset: 0x50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementStart; // Offset: 0x58

}; // Size: 0x60
