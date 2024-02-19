struct idHUDEvent_PlayerDashboardUpdate
{
    struct playerDashboardData_t
    {
        // value for the dash meter
        float dashValue; // Offset: 0x0

        float rechargeValue; // Offset: 0x4

        float powerStrikeValue; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_PlayerDashboardUpdate::playerDashboardData_t info; // Offset: 0x0

}; // Size: 0xC
