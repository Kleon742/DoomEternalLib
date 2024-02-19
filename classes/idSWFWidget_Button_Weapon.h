struct idSWFWidget_Button_Weapon : idSWFWidget_Button
{
    idDeclWeapon* weapon; // Offset: 0x2A0

    bool equipped; // Offset: 0x2A8

    dossierWeaponInfo_t* weaponInfo; // Offset: 0x2B0

    idList < idHUDEvent_DossierModUpdate::dossierModData_t , TAG_IDLIST , false > modList; // Offset: 0x2B8

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > skinList; // Offset: 0x2D0

    int numModsAcquired; // Offset: 0x2E8

}; // Size: 0x2F0
