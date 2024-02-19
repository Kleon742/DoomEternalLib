struct idLogicNodeEntityOnStartAnim : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_ANIM_INDEX = 2,
        INPUT_ENTITY = 3,
        COUNT = 4
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

}; // Size: 0x68
