struct idLogicNodeEncounterLogicFlagListener : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENCOUNTER_ENTITY = 0,
        OUTPUT_ENCOUNTER_ENTITY = 1,
        OUTPUT_EVENT_LOGIC_FLAG_RAISED = 2,
        OUTPUT_ENCOUNTER_EVENT_LOGIC_FLAG_DATA = 3
    };

    // voidStartInternal( idLogicNodeInstance & instance ); voidStopInternal();
    logicNodeReference_t node; // Offset: 0x38

    idLogicEntityPtr entity; // Offset: 0x40

}; // Size: 0x68
