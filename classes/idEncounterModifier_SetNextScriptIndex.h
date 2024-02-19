struct idEncounterModifier_SetNextScriptIndex : idBloatedEntity
{
    // Next script index to run
    int nextIndex; // Offset: 0xB88

    // Encounter manager to modify
    idManagedClassPtr < idEncounterManager > encounterScriptManager; // Offset: 0xB90

}; // Size: 0xBB0
