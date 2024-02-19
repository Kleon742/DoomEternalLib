struct idCombatVolumeGroup : idClass
{
    typedef idList < idManagedClassPtr < idActor > > actorList_t;

    // actual volume--needed for bounds checks
    idCombatVolume* combatVolume; // Offset: 0x10

    // name of this group or "" for players
    idStr groupName; // Offset: 0x18

    // all actors (or players) in the volume
    idList < idManagedClassPtr < idActor > , TAG_IDLIST , false > actors; // Offset: 0x48

    // periodically remove those that die or leave
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextUpdateTime; // Offset: 0x60

}; // Size: 0x68
