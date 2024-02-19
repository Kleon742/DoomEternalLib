struct idDeclOnlineFiction : idGameDeclTypeInfo
{
    // The voice over played during the intro
    idDeclVoiceOver* voiceOver; // Offset: 0x90

    // name of person to print for subtitle for voiceover
    idStrId voiceOverTalkerName; // Offset: 0x98

    // Start condition for the intro FX. FX should be created on player.fx
    fxCondition_t fxCondition; // Offset: 0x9C

}; // Size: 0xA0
