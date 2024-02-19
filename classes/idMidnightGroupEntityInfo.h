struct idMidnightGroupEntityInfo
{
    enum enum_22700 : int
    {
        MAX_ENTITY_FOR_A_GROUP = 8
    };

    // indicate the group name
    idAtomicString groupName; // Offset: 0x0

    // dynamic flags to apply to the group (so to all entities in the group)
    idMidnight::groupDynFlags_t dynamicFlags; // Offset: 0x8

    // indicate the entity
    idStaticList < idSpawnId , 8 , false , TAG_IDLIST > entities; // Offset: 0x10

}; // Size: 0x48
