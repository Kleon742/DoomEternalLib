struct idHUDEvent_BloodPunchUpdate
{
    struct bloodPunchUpdateData_t
    {
        float currentCharge; // Offset: 0x0

        float maxCharge; // Offset: 0x4

        float lowHealthThreshold; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_BloodPunchUpdate::bloodPunchUpdateData_t info; // Offset: 0x0

}; // Size: 0xC
