struct idHUDEvent_DemonPlayerHealthUpgraded
{
    struct demonPlayerHealthData_t
    {
        // New total health
        float newHealth; // Offset: 0x0

        float curHealth; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_DemonPlayerHealthUpgraded::demonPlayerHealthData_t info; // Offset: 0x0

}; // Size: 0x8
