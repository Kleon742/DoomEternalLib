struct dossierWeaponInfo_t
{
    idHUDEvent_DossierWeaponUpdate::dossierWeaponData_t weaponData; // Offset: 0x0

    idList < idHUDEvent_DossierModUpdate::dossierModData_t , TAG_IDLIST , false > modData; // Offset: 0x68

}; // Size: 0x80
