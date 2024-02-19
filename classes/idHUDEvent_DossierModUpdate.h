struct idHUDEvent_DossierModUpdate
{
    struct dossierModData_t
    {
        idDeclWeapon* weapon; // Offset: 0x0

        idPerkFamily* mod; // Offset: 0x8

        bool isUnlocked; // Offset: 0x10

        bool isActive; // Offset: 0x11

        short isUpgradeActive[3]; // Offset: 0x12

        int masteryChallengeProgress; // Offset: 0x18

        bool isMasteryUnlocked; // Offset: 0x1C

    }; // Size: 0x20

    idHUDEvent_DossierModUpdate::dossierModData_t info; // Offset: 0x0

}; // Size: 0x20
