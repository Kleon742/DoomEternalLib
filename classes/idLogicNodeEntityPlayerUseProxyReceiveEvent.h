struct idLogicNodeEntityPlayerUseProxyReceiveEvent : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_AUTO_START = 0,
        INPUT_START = 1,
        INPUT_STOP = 2,
        INPUT_ENTITY = 3,
        OUTPUT_EVENT = 4,
        OUTPUT_ENTITY = 5,
        OUTPUT_START = 6,
        OUTPUT_STOP = 7
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

}; // Size: 0x68
