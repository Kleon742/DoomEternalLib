struct idHUDEvent_PowerupMeter
{
    struct powerupMeterData_t
    {
        idDeclStatusEffect* powerupDecl; // Offset: 0x0

        float powerupPercentage; // Offset: 0x8

        int powerupDuration; // Offset: 0xC

    }; // Size: 0x10

    idHUDEvent_PowerupMeter::powerupMeterData_t info; // Offset: 0x0

}; // Size: 0x10
