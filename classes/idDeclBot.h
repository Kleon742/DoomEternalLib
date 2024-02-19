struct idDeclBot : idGameDeclTypeInfo
{
    // the name of the bot
    idStr botName; // Offset: 0x90

    // FSM for high level behavior (roam, combat, etc)
    idAtomicString highLevelFSMName; // Offset: 0xC0

    // FSM for low level behavior (POI detection, etc)
    idAtomicString lowLevelFSMName; // Offset: 0xC8

    // optional AI to spawn that will be bound to player and control this bot/player duo
    idDeclEntityDef* aiMaster; // Offset: 0xD0

}; // Size: 0xD8
