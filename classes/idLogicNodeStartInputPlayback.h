struct idLogicNodeStartInputPlayback
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_DONE = 2,
        INPUT_START = 3,
        OUTPUT_START = 4
    };

    idStr testName; // Offset: 0x0

}; // Size: 0x30
