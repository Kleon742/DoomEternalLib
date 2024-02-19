struct idLogicNodeEncounterFlagFlow : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENCOUNTER_ENTITY = 0,
        OUTPUT_ENCOUNTER_ENTITY = 1,
        INPUT_AUTO_ACTIVATE = 2,
        INPUT_ACTIVATE = 3,
        PIN_DYNAMIC_MASK = -16
    };

    struct output_t
    {
        // Identifier
        unsigned int id; // Offset: 0x0

        // Event type
        eEncounterEventFlags_t eventType; // Offset: 0x4

        // User Flag string
        idStr flagString; // Offset: 0x8

        // Locked
        bool locked; // Offset: 0x38

        // Interface name for the node (generated)
        idStr name; // Offset: 0x40

    }; // Size: 0x70

    idLogicEntityPtr entity; // Offset: 0x38

    // Outputs
    idList < idLogicNodeEncounterFlagFlow::output_t , TAG_LOGIC , false > outputs; // Offset: 0x60

    logicNodeReference_t node; // Offset: 0x78

}; // Size: 0x80
