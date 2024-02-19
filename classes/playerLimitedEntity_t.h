struct playerLimitedEntity_t
{
    // entity being tracked
    idManagedClassPtr < idEntity > playerLimitedEntity; // Offset: 0x0

    // is this entity being limited by the player respawning
    bool lifeLimited; // Offset: 0x20

}; // Size: 0x28
