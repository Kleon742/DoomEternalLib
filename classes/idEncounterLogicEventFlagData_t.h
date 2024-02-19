struct idEncounterLogicEventFlagData_t
{
    // Encounter event variables Encounter event
    eEncounterEventFlags_t event_type; // Offset: 0x0

    // Optional string for encounter events
    idStr event_string; // Offset: 0x8

    // Telemetry activity for this event
    eTelemetrySubActivityType_t TelemetrySubActivity; // Offset: 0x38

}; // Size: 0x40
