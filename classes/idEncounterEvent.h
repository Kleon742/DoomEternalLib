struct idEncounterEvent : idEventReceiver
{
    // The manager that created the event
    idManagedClassPtr < idEncounterManager > owner; // Offset: 0x38

    // Optional label
    idStr label; // Offset: 0x58

    eEncounterSpawnType_t trackedType; // Offset: 0x88

}; // Size: 0x90
