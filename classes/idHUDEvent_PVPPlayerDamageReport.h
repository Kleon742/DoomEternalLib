struct idHUDEvent_PVPPlayerDamageReport
{
    struct idPlayerDamageEntry
    {
        unsigned int attackerLobbyUserId; // Offset: 0x0

        char attackerStr[128]; // Offset: 0x4

        char damageTypeStr[128]; // Offset: 0x84

        int damageAmount; // Offset: 0x104

        idMaterial2* damageIcon; // Offset: 0x108

        bool isKillingBlow; // Offset: 0x110

    }; // Size: 0x118

    struct idPVPPlayerDamageReport_t
    {
        idHUDEvent_PVPPlayerDamageReport::idPlayerDamageEntry damageEntries[6]; // Offset: 0x0

        unsigned char numItems; // Offset: 0x690

        bool force; // Offset: 0x691

        bool forceKiller; // Offset: 0x692

    }; // Size: 0x698

    idHUDEvent_PVPPlayerDamageReport::idPVPPlayerDamageReport_t info; // Offset: 0x0

}; // Size: 0x698
