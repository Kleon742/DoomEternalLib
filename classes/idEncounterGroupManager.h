struct idEncounterGroupManager : idClass
{
    // the list of all groups
    idList < idEncounterGroup , TAG_IDLIST , false > groups; // Offset: 0x10

    // next time to update groups
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextThinkTime; // Offset: 0x28

    // hash for looking up groups by handle
    idHashIndex hashIndex; // Offset: 0x30

    // running counter for group handles
    short curHandle; // Offset: 0x60

}; // Size: 0x68
