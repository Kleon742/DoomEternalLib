struct idLogicNodeModelEncounterExitScript : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_ENCOUNTER_ENTITY = 1,
        INPUT_EXIT_COMMAND = 2,
        OUTPUT_ACTIVATE = 3,
        OUTPUT_ENCOUNTER_ENTITY = 4
    };

    // Encounter entity
    idLogicEntityPtr entity; // Offset: 0x10

    // Exit flags to send the encounter
    idEncounterLogicEventFlagData_t exitFlags; // Offset: 0x38

}; // Size: 0x78
