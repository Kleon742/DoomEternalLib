struct idLogicNodeModelEncounterDataInput : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_ENCOUNTER_DATA = 0
    };

    struct instanceData_t
    {
        idEncounterLogicData_t encounterData; // Offset: 0x0

    }; // Size: 0xB8

    // Data to output
    idEncounterLogicData_t testData; // Offset: 0x10

}; // Size: 0xC8
