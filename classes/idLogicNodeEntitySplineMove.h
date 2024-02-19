struct idLogicNodeEntitySplineMove
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        INPUT_STOP = 2,
        INPUT_ENTITY = 3,
        INPUT_TARGET = 4,
        INPUT_TIME = 5,
        INPUT_SPEED = 6,
        INPUT_INIT_AXIS_TO_SPLINE = 7,
        INPUT_USE_SPLINE_AXIS = 8,
        INPUT_RUN_BACKWARDS = 9,
        OUTPUT_DONE = 10,
        INPUT_AUTO_START = 11,
        OUTPUT_STOP = 12
    };

    enum logicSplineMoveSwitch_t : int
    {
        SPLINE_MOVE_TIME = 0,
        SPLINE_MOVE_SPEED = 1
    };

    idLogicNodeEntitySplineMove::logicSplineMoveSwitch_t logicSplineMoveSwitch; // Offset: 0x0

    idLogicEntityPtr entity; // Offset: 0x8

}; // Size: 0x30
