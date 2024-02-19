struct idEncounterTrigger_Commit : idTrigger
{
    // The manager(s) that link to this trigger
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > owners; // Offset: 0xC90

    // Telemetry Sub Activity binding.
    eTelemetrySubActivityType_t TelemetrySubActivity; // Offset: 0xCA8

    bool triggerActivated; // Offset: 0xCAC

}; // Size: 0xCB0
