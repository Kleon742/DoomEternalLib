struct idHUDEvent_AcquireRadShield
{
    struct radSheildData_t
    {
        // how much shield is available when fully charged
        float maxRadShieldAmount; // Offset: 0x0

        // how much shield is currently available
        float radShieldCharge; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_AcquireRadShield::radSheildData_t info; // Offset: 0x0

}; // Size: 0x8
