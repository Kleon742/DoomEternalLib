struct idHUDEvent_UpgradeEarningsNotification
{
    struct earningsData_t
    {
        idMaterial2* icon; // Offset: 0x0

        int amount; // Offset: 0x8

        swfNamedColors_t color; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_UpgradeEarningsNotification::earningsData_t info; // Offset: 0x0

}; // Size: 0x10
