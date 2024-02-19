struct idHUDEvent_DossierWeaponMasteryChallengeUpdate
{
    struct weaponMasteryChallengeData_t
    {
        idDeclUnlockable* unlockableDecl; // Offset: 0x0

        int progress; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_DossierWeaponMasteryChallengeUpdate::weaponMasteryChallengeData_t info; // Offset: 0x0

}; // Size: 0x10
