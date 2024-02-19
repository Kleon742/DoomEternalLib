struct idEncounterGroupRelation
{
    // the name of the other group this relationship is for
    idStr otherGroupName; // Offset: 0x0

    // state AI will transition to when hearing gunfire from other group
    idEncounterState gunfireState; // Offset: 0x30

    // state AI will transition to when hearing an alert from other group
    idEncounterState alertState; // Offset: 0x58

}; // Size: 0x80
