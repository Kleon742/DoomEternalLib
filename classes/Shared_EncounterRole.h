struct Shared_EncounterRole : idAIStateTransition
{
    // only transition if current role matches one of these
    idList < encounterGroupRole_t , TAG_AI_FSM , false > include; // Offset: 0xF8

    // only transition if current role isn't in this list
    idList < encounterGroupRole_t , TAG_AI_FSM , false > exclude; // Offset: 0x110

}; // Size: 0x128
