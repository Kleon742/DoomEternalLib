struct idLogicNodePlayerSetNoPlayerDeath
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_PLAYER = 1,
        INPUT_BOOL = 2,
        OUTPUT_ACTIVATE = 3
    };

    int playerNum; // Offset: 0x0

    idLogicEntityPtr specifiedEntity; // Offset: 0x8

}; // Size: 0x30
