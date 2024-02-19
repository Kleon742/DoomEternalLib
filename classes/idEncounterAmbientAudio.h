struct idEncounterAmbientAudio : idInfo
{
    // List of allowed AI types to pull from the aiTypeDef for playback. This will have to match with the current ambient audio AI types.
    eEncounterSpawnType_t allowedAITypes; // Offset: 0xB90

    idList < const idSoundEvent * , TAG_IDLIST , false > aiTypSoundHandles; // Offset: 0xB98

}; // Size: 0xBB0
