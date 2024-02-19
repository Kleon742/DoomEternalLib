struct idLogicNodePlayerToggleInfExtraLives
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerId; // Offset: 0x0

    idLogicNodeInfExtraLivesType nodeType; // Offset: 0x4

}; // Size: 0x8
