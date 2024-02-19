struct idEncounterTrigger_Exit : idTrigger
{
    bool watchForPlayerExit; // Offset: 0xC90

    // The manager(s) that link to this trigger
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > owners; // Offset: 0xC98

    // This will reset the current script
    bool resetScriptOnExit; // Offset: 0xCB0

    // Clear all lockdown flags.
    bool clearLockDownFlag; // Offset: 0xCB1

    // Should the AI retreat and despawn?
    bool forceAIToFlee; // Offset: 0xCB2

    // What types of AI should flee?
    eEncounterSpawnType_t fleeAITypes; // Offset: 0xCB8

    // Should the AI retreat and hide?
    bool sendAIToHide; // Offset: 0xCC0

    // Should the AI play the despawn anim?
    bool despawn; // Offset: 0xCC1

    // What types of AI should flee?
    eEncounterSpawnType_t despawnAITypes; // Offset: 0xCC8

    // This will disable the encounter manager. It will no longer respond to activate events.
    bool disableScriptOnExit; // Offset: 0xCD0

    // Rather than activating when the player enters the trigger, it will activate when the player leaves the trigger.
    bool activateOnUntouch; // Offset: 0xCD1

    // Stop Telemetry from tracking the current Encounter.
    bool stopTelemtrySubActivity; // Offset: 0xCD2

}; // Size: 0xCD8
