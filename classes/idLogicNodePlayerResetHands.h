struct idLogicNodePlayerResetHands
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerNum; // Offset: 0x0

    logicNodePlayerResetHandsInfo_t resetInfo; // Offset: 0x8

}; // Size: 0x20
