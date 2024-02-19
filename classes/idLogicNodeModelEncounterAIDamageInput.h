struct idLogicNodeModelEncounterAIDamageInput : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_ENCOUNTER_AI_DAMAGE = 0
    };

    struct instanceData_t
    {
        idEncounterLogicAIDamageData_t aiDamageData; // Offset: 0x0

    }; // Size: 0x40

    // Data to output
    idEncounterLogicAIDamageData_t testData; // Offset: 0x10

}; // Size: 0x50
