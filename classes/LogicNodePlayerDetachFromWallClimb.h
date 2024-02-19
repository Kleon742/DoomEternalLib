struct LogicNodePlayerDetachFromWallClimb
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        INPUT_ENTITY = 2,
        OUTPUT_DONE = 3
    };

    idLogicEntityPtr entity; // Offset: 0x0

    idPhysics* physics; // Offset: 0x28

}; // Size: 0x30
