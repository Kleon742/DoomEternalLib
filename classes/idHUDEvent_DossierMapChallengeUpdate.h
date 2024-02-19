struct idHUDEvent_DossierMapChallengeUpdate
{
    struct dossierMapChallengeData_t
    {
        int index; // Offset: 0x0

        idDeclUnlockable* challenge; // Offset: 0x8

        int gained; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_DossierMapChallengeUpdate::dossierMapChallengeData_t info; // Offset: 0x0

}; // Size: 0x18
