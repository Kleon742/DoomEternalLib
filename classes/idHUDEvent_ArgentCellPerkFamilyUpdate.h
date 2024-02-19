struct idHUDEvent_ArgentCellPerkFamilyUpdate
{
    struct perkFamilyInfo_t
    {
        idDeclPerk* mastery; // Offset: 0x0

        idDeclPerk* perk1; // Offset: 0x8

        idDeclPerk* perk2; // Offset: 0x10

        bool perk1Obtained; // Offset: 0x18

        bool perk2Obtained; // Offset: 0x19

    }; // Size: 0x20

    idHUDEvent_ArgentCellPerkFamilyUpdate::perkFamilyInfo_t info; // Offset: 0x0

}; // Size: 0x20
