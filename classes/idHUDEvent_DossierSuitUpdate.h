struct idHUDEvent_DossierSuitUpdate
{
    struct dossierSuitData_t
    {
        idPerkFamily* category; // Offset: 0x0

        int groupIndex; // Offset: 0x8

        bool isUnlocked; // Offset: 0xC

        bool isUpgradeActive[3]; // Offset: 0xD

    }; // Size: 0x10

    idHUDEvent_DossierSuitUpdate::dossierSuitData_t info; // Offset: 0x0

}; // Size: 0x10
