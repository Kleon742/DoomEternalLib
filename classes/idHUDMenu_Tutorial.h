struct idHUDMenu_Tutorial : idHUDElement
{
    idDeclTutorialEvent* tutorialDecl; // Offset: 0xF8

    bindSet_t bindset; // Offset: 0x100

    idSWFWidget_Tutorial* simpleTutorial; // Offset: 0x110

    idSWFWidget_Tutorial* textTutorial; // Offset: 0x118

    idSWFWidget_Tutorial* currentTutorial; // Offset: 0x120

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > inputBufferTime; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showTimeBuffer; // Offset: 0x130

    // weapon / upgrade info
    int numWeaponPoints; // Offset: 0x138

    int numPraetorTokens; // Offset: 0x13C

    int weaponModsAvailable; // Offset: 0x140

    int suitUpgradesAvailable; // Offset: 0x144

}; // Size: 0x148
