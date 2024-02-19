struct idLogicNodeEncounterAction : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENTITY = 0,
        INPUT_ACTIVATE = 1,
        OUTPUT_ACTIVATE = 2
    };

    idEncounterAction_t encounterAction; // Offset: 0x38

}; // Size: 0x40
