struct idEncounterModifier_SetEnabledState : idBloatedEntity
{
    // State to set the script manager to
    bool enabled; // Offset: 0xB88

    // Encounter manager to modify
    idManagedClassPtr < idEncounterManager > encounterScriptManager; // Offset: 0xB90

}; // Size: 0xBB0
