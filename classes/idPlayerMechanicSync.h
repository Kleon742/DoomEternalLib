struct idPlayerMechanicSync : idPlayerMechanic
{
    // syncEntity list generated for each unique sync anim submitted during load
    idList < idManagedClassPtr < idSyncEntity > , TAG_IDLIST , false > syncAnimEntities; // Offset: 0x28

    // When we stop polling for sync melee.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > syncAttackPollTime; // Offset: 0x40

    // When was the last time we had a valid sync.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastValidSyncTime; // Offset: 0x48

    // Last input we had when we init'd
    playerInput_t syncAttackLastInput; // Offset: 0x50

}; // Size: 0x58
