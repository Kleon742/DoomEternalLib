struct idHUDEvent_DossierWeaponWheelSizeAndOrderUpdate
{
    struct dossierWeaponWheelSizeAndOrderData_t
    {
        int size; // Offset: 0x0

        int weaponOrder[8]; // Offset: 0x4

    }; // Size: 0x24

    idHUDEvent_DossierWeaponWheelSizeAndOrderUpdate::dossierWeaponWheelSizeAndOrderData_t info; // Offset: 0x0

}; // Size: 0x24
