struct idLogicNodeEntityDormancy
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_ENTITIES = 2
    };

    bool dormant; // Offset: 0x0

}; // Size: 0x1
