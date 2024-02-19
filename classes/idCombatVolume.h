struct idCombatVolume : idVolume
{
    typedef idList < idCombatVolumeGroup * > combatVolumeGroupPtrList_t;

    // all groups being tracked in this volume
    idList < idCombatVolumeGroup * , TAG_IDLIST , false > groups; // Offset: 0xC20

}; // Size: 0xC38
