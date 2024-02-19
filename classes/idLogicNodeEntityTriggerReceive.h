struct idLogicNodeEntityTriggerReceive : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENTITIES = 0,
        OUTPUT_START_TOUCH = 1,
        OUTPUT_TOUCH = 2,
        OUTPUT_UNTOUCH = 3,
        OUTPUT_ENTITY = 4,
        OUTPUT_FACING = 5,
        INPUT_START = 6,
        INPUT_AUTO_START = 7,
        INPUT_STOP = 8,
        OUTPUT_START = 9,
        OUTPUT_STOP = 10
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicList < idLogicEntityPtr > entityList; // Offset: 0x40

}; // Size: 0x80
