struct idLogicNodePlayerInfiniteHammer
{
    enum idLogicNodeInfHammerType : int
    {
        ENABLE = 0,
        DISABLE = 1
    };

    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerId; // Offset: 0x0

    idLogicNodePlayerInfiniteHammer::idLogicNodeInfHammerType nodeType; // Offset: 0x4

}; // Size: 0x8
