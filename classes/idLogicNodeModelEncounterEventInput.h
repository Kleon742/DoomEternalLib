struct idLogicNodeModelEncounterEventInput : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_ENCOUNTER_EVENT_FLAG = 0
    };

    struct instanceData_t
    {
        idEncounterLogicEventFlagData_t spawnTypeData; // Offset: 0x0

    }; // Size: 0x40

    // Data to output
    idEncounterLogicEventFlagData_t testData; // Offset: 0x10

}; // Size: 0x50
