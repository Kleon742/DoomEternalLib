struct idLogicNodeRayTrace : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_POSITION = 2,
        INPUT_DIRECTION = 3,
        OUTPUT_ENTITY = 4
    };

    idTraceHelper trace; // Offset: 0x38

    contentsFlags_t contentsFlags; // Offset: 0x108

}; // Size: 0x110
