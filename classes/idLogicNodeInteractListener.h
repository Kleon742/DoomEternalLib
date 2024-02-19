struct idLogicNodeInteractListener : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENTITY = 0,
        INPUT_START = 1,
        INPUT_AUTO_START = 2,
        INPUT_STOP = 3,
        OUTPUT_START = 4,
        OUTPUT_STOP = 5,
        OUTPUT_ENTER_STRING = 6,
        OUTPUT_EXIT_STRING = 7,
        OUTPUT_EVENT_ENTER = 8,
        OUTPUT_EVENT_EXIT = 9
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

}; // Size: 0x68
