struct idTarget_StartSoundShader : idTarget
{
    // voice over to play on the player
    idDeclVoiceOver* voToPlay; // Offset: 0xB88

    // if voice over is null play this sound on the player
    idSoundEvent* soundToPlay; // Offset: 0xB90

    // text to display for subtitles
    idStrId fromWho; // Offset: 0xB98

}; // Size: 0xBA0
