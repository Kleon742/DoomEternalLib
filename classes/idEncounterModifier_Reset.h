struct idEncounterModifier_Reset : idBloatedEntity
{
    // Reseting the script index will force the manager to reset to the very first script. Otherwise, the manager will repeat the current index.
    bool resetScriptIndex; // Offset: 0xB88

    // Encounter manager to modify
    idManagedClassPtr < idEncounterManager > encounterScriptManager; // Offset: 0xB90

    // FOrce the AI to flee rather than immediately delete
    bool forceAIToFlee; // Offset: 0xBB0

}; // Size: 0xBB8
