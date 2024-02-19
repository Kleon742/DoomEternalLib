struct idHUDEvent_OpenDossier
{
    struct openDossierPlayerData_t
    {
        dossierPage_t desiredScreen; // Offset: 0x0

        int weaponPoints; // Offset: 0x4

        int praetorPoints; // Offset: 0x8

        int masteryPoints; // Offset: 0xC

        int runeUpgradePoints; // Offset: 0x10

        int sentinelBatteryPoints; // Offset: 0x14

        // 0 vanilla, 1 dlc1, 2 dlc2, ect..
        int campaignIndex; // Offset: 0x18

        bool pageIsAvailable[6]; // Offset: 0x1C

    }; // Size: 0x24

    idHUDEvent_OpenDossier::openDossierPlayerData_t info; // Offset: 0x0

}; // Size: 0x24
