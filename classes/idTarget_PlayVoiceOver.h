struct idTarget_PlayVoiceOver : idTarget
{
    // the voice over decl to play on targetted entities
    idDeclVoiceOver* voiceOver; // Offset: 0xB88

    // set to false if you don't want the AI to play this VO when they're in combat
    bool playInCombat; // Offset: 0xB90

}; // Size: 0xB98
