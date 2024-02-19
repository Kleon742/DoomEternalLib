struct idLogicNodeModelEncounterSpawnTypeInput : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_ENCOUNTER_SPAWN_TYPE = 0
    };

    struct instanceData_t
    {
        idEncounterLogicAIMemberData_t spawnTypeData; // Offset: 0x0

    }; // Size: 0x38

    // Data to output
    idEncounterLogicAIMemberData_t testData; // Offset: 0x10

}; // Size: 0x48
