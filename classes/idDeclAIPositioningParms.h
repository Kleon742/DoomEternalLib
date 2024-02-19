struct idDeclAIPositioningParms : idGameDeclTypeInfo
{
    // string used for lookup from fsm or encounter roles
    idStr dataName; // Offset: 0x90

    // actual parms
    aiPositioningParms_t data; // Offset: 0xC0

    // don't use hangouts more than once per x seconds
    float hangoutCooldownInSeconds; // Offset: 0x210

}; // Size: 0x218
