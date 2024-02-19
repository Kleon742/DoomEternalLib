struct idDeclFX : idDeclTypeInfo
{
    // TODO: It would be nice to remove this additional list - it only exists for the current fx editor. editEvents does not store the implicit events needed by the game so that the fx editor is not cluttered with runtime stages. list of events for this fx
    idList < idFXSingleAction , TAG_FX , false > editEvents; // Offset: 0x88

    // this gets incremented each time a change is made so that systems referencing the fx decl can re-initialize when changed
    int changeId; // Offset: 0xA0

    // the max num of items in this cycle, -1 means infinite
    int cycleConditionMax; // Offset: 0xA4

    // if not == FX_NONE, this decl will cycle through the cycle start conditions
    fxCondition_t cycleStartCondition; // Offset: 0xA8

    // if true we will cycle the events from the initial condition received
    bool cycleEvents; // Offset: 0xAC

    idList < unsigned int , TAG_IDLIST , false > materialLocks; // Offset: 0xE0

}; // Size: 0xF8
