struct idEncounterTrigger_AmbientAIAudio : idTrigger
{
    // The manager(s) that link to this trigger
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > owners; // Offset: 0xC90

    // List of audio files that will be pulled from the aiTypeDef based on ai type
    eEncounterSpawnType_t aiAudioType; // Offset: 0xCA8

    // Once the trigger volume is exited, this is the time before the next re-trigger
    milliToGameTime_t retriggerTimeMS; // Offset: 0xCB0

    // Once the trigger volume is exited, this is the duration of the volume fade
    milliToGameTime_t attenuationTimeMS; // Offset: 0xCC0

    // Group of ambient audio speakers
    idList < idManagedClassPtr < idEncounterAmbientAudio > , TAG_IDLIST , false > ambientSpeakers; // Offset: 0xCD0

    // Type def file to pull sound for specific ai types
    idDeclActorPopulation* aiTypeDefAssignments; // Offset: 0xCE8

}; // Size: 0xCF0
