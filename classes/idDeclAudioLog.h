struct idDeclAudioLog : idGameDeclTypeInfo
{
    // What sound to play for this audio log.
    idSoundEvent* sound; // Offset: 0x90

    // What codex Entry does this correspond to.
    idDeclCodexEntry* codexEntry; // Offset: 0x98

}; // Size: 0xA0
