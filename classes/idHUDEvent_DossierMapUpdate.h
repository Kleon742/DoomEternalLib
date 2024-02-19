struct idHUDEvent_DossierMapUpdate
{
    struct dossierMapData_t
    {
        idObjectiveData_t objectiveData; // Offset: 0x0

        int mapScoringFrame; // Offset: 0xB8

        int secretCombatFrame; // Offset: 0xBC

        int slayerGateFrame; // Offset: 0xC0

        int bossCombatFrame; // Offset: 0xC4

        bool hasSlayerKey; // Offset: 0xC8

    }; // Size: 0xD0

    idHUDEvent_DossierMapUpdate::dossierMapData_t info; // Offset: 0x0

}; // Size: 0xD0
