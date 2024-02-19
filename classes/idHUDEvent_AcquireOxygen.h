struct idHUDEvent_AcquireOxygen
{
    struct oxygenData_t
    {
        // how much oxygen is available when fully charged
        float maxOxygenAmount; // Offset: 0x0

        // how much oxygen is currently available
        float oxygenCharge; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_AcquireOxygen::oxygenData_t info; // Offset: 0x0

}; // Size: 0x8
