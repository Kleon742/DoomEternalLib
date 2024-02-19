struct idEncounterEvent_WaitForEventFlag : idEncounterEvent_Wait
{
    // The flag that needs to be raised
    eEncounterEventFlags_t eventWaitFlag; // Offset: 0xA8

    // true if the flag has been rasied since the event was activated
    bool flagHasBeenRaised; // Offset: 0xAC

    // User flag to test against. This only pertains to user flags on raiseUserFlag Triggers
    idStr userFlag; // Offset: 0xB0

}; // Size: 0xE0
