struct idAutomapSectionRevealTrigger : idTrigger
{
    // Encounter Managers associated with this trigger. DO NOT ADD the encounter to the targets list. This will make the trigger activate the encounter
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > associatedEncounterManagers; // Offset: 0xC90

}; // Size: 0xCA8
