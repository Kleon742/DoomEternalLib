struct idHUDEvent_PipWeaponSetup
{
    struct weaponSetupData_t
    {
        int currentAmmo; // Offset: 0x0

        int maxAmmo; // Offset: 0x4

        int ammoPerShot; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_PipWeaponSetup::weaponSetupData_t info; // Offset: 0x0

}; // Size: 0xC
