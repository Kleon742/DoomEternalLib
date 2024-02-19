struct idLogicNodeEntityOnPickUp : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_ENTITY = 2,
        COUNT = 3
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

}; // Size: 0x68
