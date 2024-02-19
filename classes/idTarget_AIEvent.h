struct idTarget_AIEvent : idTarget
{
    // AI event to spawn when triggered
    idDeclAiEvent* eventDecl; // Offset: 0xB88

    // handle of the event that was triggered
    idHandle < int , invalidAIEvent_t , INVALID_AIEVENT > eventHandle; // Offset: 0xB90

}; // Size: 0xB98
