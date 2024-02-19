struct idLogicNodeEncounterListener : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENTITY = 0,
        INPUT_AUTO_START = 1,
        OUTPUT_ENCOUNTER_SPAWN_DATA = 2,
        OUTPUT_ENCOUNTER_DAMAGE_DATA = 3,
        OUTPUT_ENCOUNTER_EVENT_FLAG_DATA = 4,
        OUTPUT_ENCOUNTER_EVENT_LOGIC_FLAG_DATA = 5,
        OUTPUT_EVENT_AI_SPAWNED = 6,
        OUTPUT_EVENT_AI_DAMAGED = 7,
        OUTPUT_EVENT_FLAG_REGISTERED = 8,
        OUTPUT_EVENT_LOGIC_FLAG_RAISED = 9,
        OUTPUT_EVENT_SCRIPT_COMPLETE = 10,
        INPUT_SET_INDEX = 11,
        OUTPUT_ENCOUNTER_AI_DEATH_DATA = 12,
        OUTPUT_EVENT_AI_DEATH = 13,
        INPUT_START_ENCOUNTER = 14
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

}; // Size: 0x68
