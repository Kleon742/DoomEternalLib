struct idLogicNodeHordeRoundStartMenu
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_INDEX = 2
    };

    // The notification to fire when the horde command gets processed
    int currentIndex; // Offset: 0x0

}; // Size: 0x4
