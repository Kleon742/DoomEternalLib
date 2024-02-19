struct idTarget_ModifyGroup : idTarget
{
    // the name of the group to modify
    idStr groupName; // Offset: 0xB88

    // the new own group alert state for the group
    idEncounterState ownGroupAlertState; // Offset: 0xBB8

    // the new other group alert state for the group
    idEncounterState otherGroupAlertState; // Offset: 0xBE0

}; // Size: 0xC08
