struct idHUDEvent_UpdateUserCurrencies
{
    struct updateUserCurrencyData_t
    {
        int weaponPoints; // Offset: 0x0

        int praetorPoints; // Offset: 0x4

        int masteryPoints; // Offset: 0x8

        int runeUpgradePoints; // Offset: 0xC

        int sentinelBatteryPoints; // Offset: 0x10

    }; // Size: 0x14

    idHUDEvent_UpdateUserCurrencies::updateUserCurrencyData_t info; // Offset: 0x0

}; // Size: 0x14
