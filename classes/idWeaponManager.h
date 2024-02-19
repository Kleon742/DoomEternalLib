struct idWeaponManager
{
    // Milestone for collecting all weapon masteries.
    idDeclMilestone* masterAllWeapons; // Offset: 0x0

    // required weapon mastery milestones to be reached for the all weapon milestone.
    idList < idDeclMilestone * , TAG_IDLIST , false > requiredMasteredWeapons; // Offset: 0x8

    // All potential weapons order in the dossier
    idList < const idDeclWeapon * , TAG_IDLIST , false > dossierOrderWeaponList; // Offset: 0x20

    idList < const idDeclWeapon * , TAG_IDLIST , false > weaponList; // Offset: 0x38

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x50

}; // Size: 0x70
