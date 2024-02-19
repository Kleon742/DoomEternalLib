struct idLogicNodeEncounterAIDeathEvent : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENCOUNTER_ENTITY = 0,
        OUTPUT_ENCOUNTER_ENTITY = 1,
        PIN_DYNAMIC_MASK = -16
    };

    struct output_t
    {
        // Identifier
        unsigned int id; // Offset: 0x0

        // AI type
        eEncounterSpawnType_t aiType; // Offset: 0x8

        // AI Label
        idStr aiLabel; // Offset: 0x10

        // Locked
        bool locked; // Offset: 0x40

        // Interface name for the node (generated)
        idStr name; // Offset: 0x48

    }; // Size: 0x78

    idLogicEntityPtr entity; // Offset: 0x38

    // Outputs
    idList < idLogicNodeEncounterAIDeathEvent::output_t , TAG_LOGIC , false > outputs; // Offset: 0x60

    logicNodeReference_t node; // Offset: 0x78

}; // Size: 0x80
