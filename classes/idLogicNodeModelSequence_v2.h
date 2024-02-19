struct idLogicNodeModelSequence_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        PIN_DYNAMIC_MASK = -16
    };

    struct output_t
    {
        // Identifier
        unsigned int id; // Offset: 0x0

        // Name
        idStr name; // Offset: 0x8

        // Locked
        bool locked; // Offset: 0x38

    }; // Size: 0x40

    // Outputs
    idList < idLogicNodeModelSequence_v2::output_t , TAG_LOGIC , false > outputs; // Offset: 0x10

}; // Size: 0x28
