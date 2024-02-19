struct idHUDEvent_ShowTutorial
{
    struct showTutorialData_t
    {
        idDeclTutorialEvent* tutorialDecl; // Offset: 0x0

        int numWeaponPoints; // Offset: 0x8

        int numPraetorTokens; // Offset: 0xC

        int weaponModsAvailable; // Offset: 0x10

        int suitUpgradesAvailable; // Offset: 0x14

        int bindsetOverride; // Offset: 0x18

    }; // Size: 0x20

    idHUDEvent_ShowTutorial::showTutorialData_t info; // Offset: 0x0

}; // Size: 0x20
