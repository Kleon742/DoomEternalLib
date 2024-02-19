struct idLogicNodeModelSwitchInt_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_VALUE = 1,
        OUTPUT_DEFAULT = 2,
        PIN_DYNAMIC_MASK = -16
    };

    struct case_t
    {
        // Identifier
        unsigned int id; // Offset: 0x0

        // Value
        int value; // Offset: 0x4

    }; // Size: 0x8

    // Cases
    idList < idLogicNodeModelSwitchInt_v2::case_t , TAG_LOGIC , false > cases; // Offset: 0x10

}; // Size: 0x28
