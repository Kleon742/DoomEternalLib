struct idAIDeathSound
{
    // the type of damage that can trigger this death sound; if NULL, play for all damage types
    idDeclDamage* damageType; // Offset: 0x0

    // the voiceover decl to trigger when the AI is killed (**FIXME**: currently not implemented)
    idDeclVoiceOver* voiceOver; // Offset: 0x8

    // sound shader decl to trigger when the AI is killed
    idSoundEvent* soundShader; // Offset: 0x10

}; // Size: 0x18
