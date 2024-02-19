struct idLogicNodeRotatePoint
{
    enum logicIds_t : int
    {
        INPUT_ROT_VECTOR = 0,
        INPUT_ROT_POS = 1,
        INPUT_ANGLE = 2,
        INPUT_POINT = 3,
        OUTPUT_VALUE = 4
    };

    enum rotationMode_t : int
    {
        LOCAL_SPACE = 0,
        WORLD_SPACE = 1
    };

    // the input type we need
    inputType_t inputType; // Offset: 0x0

    // the rotation mode we need
    idLogicNodeRotatePoint::rotationMode_t rotationMode; // Offset: 0x4

}; // Size: 0x8
