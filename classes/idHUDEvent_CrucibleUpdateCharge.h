struct idHUDEvent_CrucibleUpdateCharge
{
    struct idCrucibleChargeData_t
    {
        int maxCharge; // Offset: 0x0

        int currentCharge; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_CrucibleUpdateCharge::idCrucibleChargeData_t info; // Offset: 0x0

}; // Size: 0x8
