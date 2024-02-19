struct idHUDEvent_DossierWeaponUpdate
{
    struct dossierWeaponData_t
    {
        idDeclWeapon* weaponDecl; // Offset: 0x0

        bool isEquipped; // Offset: 0x8

        idDeclWarehouseItem* skins[10]; // Offset: 0x10

        int weaponWheelMasterIndex; // Offset: 0x60

    }; // Size: 0x68

    idHUDEvent_DossierWeaponUpdate::dossierWeaponData_t info; // Offset: 0x0

}; // Size: 0x68
