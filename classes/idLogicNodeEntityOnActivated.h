struct idLogicNodeEntityOnActivated : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        INPUT_ENTITY = 1,
        INPUT_STOP = 2,
        OUTPUT_ACTIVATED = 3,
        OUTPUT_ENTITY = 4,
        INPUT_AUTO_START = 5,
        OUTPUT_START = 6,
        OUTPUT_STOP = 7
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

    idStr entityName; // Offset: 0x68

    idStr nodeName; // Offset: 0x98

}; // Size: 0xC8
