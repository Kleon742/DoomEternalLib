struct idEncounterExitData_t
{
    // Should the AI play the despawn anim?
    bool despawn; // Offset: 0x0

    // What types of AI should flee?
    eEncounterSpawnType_t despawnAITypes; // Offset: 0x8

    // Should the AI retreat and despawn?
    bool forceAIToFlee; // Offset: 0x10

    // What types of AI should flee?
    eEncounterSpawnType_t fleeAITypes; // Offset: 0x18

    // Should the AI retreat and hide?
    bool sendAIToHide; // Offset: 0x20

    // This will reset the current script
    bool resetScriptOnExit; // Offset: 0x21

    // Clear all lockdown flags.
    bool clearLockDownFlag; // Offset: 0x22

    // This will disable the encounter manager. It will no longer respond to activate events.
    bool disableScriptOnExit; // Offset: 0x23

    // End active telemetry for this encounter
    bool endTelemetry; // Offset: 0x24

}; // Size: 0x28
