struct idAmbientTriggerModifier_SetAITypes : idBloatedEntity
{
    // Set the ai types that will be requested from ambient speakers
    eEncounterSpawnType_t requestedAITypes; // Offset: 0xB88

    // Trigger to change
    idManagedClassPtr < idEncounterTrigger_AmbientAIAudio > ambientSoundTrigger; // Offset: 0xB90

}; // Size: 0xBB0
