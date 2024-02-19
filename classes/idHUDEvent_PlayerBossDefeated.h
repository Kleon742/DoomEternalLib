struct idHUDEvent_PlayerBossDefeated
{
    struct idPlayerBossDefeatedData_t
    {
        idDeclPerk* newMod; // Offset: 0x0

        int numPoints; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_PlayerBossDefeated::idPlayerBossDefeatedData_t info; // Offset: 0x0

}; // Size: 0x10
