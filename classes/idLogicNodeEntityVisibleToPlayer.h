struct idLogicNodeEntityVisibleToPlayer
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_ENTITY = 1,
        OUTPUT_ACTIVATE = 2,
        INPUT_POSITION = 3,
        INPUT_RADIUS = 4,
        INPUT_FOV = 5,
        INPUT_DEBUG_BOOL = 6,
        OUTPUT_BOOL = 7
    };

    int playerNum; // Offset: 0x0

}; // Size: 0x4
