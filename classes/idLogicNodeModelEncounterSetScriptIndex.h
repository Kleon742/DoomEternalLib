struct idLogicNodeModelEncounterSetScriptIndex : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_ENCOUNTER_ENTITY = 1,
        INPUT_INDEX = 2,
        OUTPUT_ACTIVATE = 3,
        OUTPUT_ENCOUNTER_ENTITY = 4
    };

    // Encounter entity
    idLogicEntityPtr entity; // Offset: 0x10

}; // Size: 0x38
