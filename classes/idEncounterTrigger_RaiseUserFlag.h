struct idEncounterTrigger_RaiseUserFlag : idTrigger
{
    // The manager(s) that link to this trigger
    idList < idManagedClassPtr < idEncounterManager > , TAG_IDLIST , false > owners; // Offset: 0xC90

    // Flag that will be raised when the trigger is hit
    idStr userFlag; // Offset: 0xCA8

    // AI memory keys to be set on all active AI in this encounter
    idList < idAtomicString , TAG_IDLIST , false > aiMemoryKeys; // Offset: 0xCD8

    // Clear all AI memory keys when exiting the trigger
    bool clearKeysOnExit; // Offset: 0xCF0

}; // Size: 0xCF8
