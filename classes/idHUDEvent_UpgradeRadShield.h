struct idHUDEvent_UpgradeRadShield
{
    struct upgradeRadShieldData_t
    {
        // current percentage of charge
        float currentRadShield; // Offset: 0x0

        // maximum percentage of charge
        float maxRadShield; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_UpgradeRadShield::upgradeRadShieldData_t info; // Offset: 0x0

}; // Size: 0x8
