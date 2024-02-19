struct botEntityInfo_t
{
    // if true, entity is alive and in the world, and able to be targeted. If false, it still exists, but is hidden ( ex: a pickup thats waiting to respawn ).
    bool active; // Offset: 0x0

    // various flags that define how we can be used/manipulated/avoided/etc by the bot. Look at "botEntityFlags_t"
    int entityFlags; // Offset: 0x4

    // the type of entity we are. This should never == 0 ( else it shouldn't be on this list ). Look at "botEntityType_t"
    int entityType; // Offset: 0x8

    // for items that have an amount attached to them ( loot pickups, for example ).
    int entityAmount; // Offset: 0xC

    // a pointer to the actual entity, for quick lookup.
    idManagedClassPtr < const idEntity > entity; // Offset: 0x10

}; // Size: 0x30
