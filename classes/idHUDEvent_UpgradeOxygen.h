struct idHUDEvent_UpgradeOxygen
{
    struct upgradeOxygenData_t
    {
        // current percentage of charge
        float currentOxygen; // Offset: 0x0

        // maximum percentage of charge
        float maxOxygen; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_UpgradeOxygen::upgradeOxygenData_t info; // Offset: 0x0

}; // Size: 0x8
