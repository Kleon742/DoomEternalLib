struct idHUDEvent_UpdateAvailableUpgrades
{
    struct updateAvailableUpgradesData_t
    {
        int availableWeaponMods; // Offset: 0x0

        int availableWeaponModUpgrades; // Offset: 0x4

        int availableSuitPerks; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_UpdateAvailableUpgrades::updateAvailableUpgradesData_t info; // Offset: 0x0

}; // Size: 0xC
