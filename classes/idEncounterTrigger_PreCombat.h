struct idEncounterTrigger_PreCombat : idTrigger
{
    // The manager(s) that link to this trigger
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > owners; // Offset: 0xC90

    // This sets the active script index, allowing for multiple entry points to activate different scripts.
    int startingScriptIndex; // Offset: 0xCA8

}; // Size: 0xCB0
