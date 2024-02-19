struct idSWFWidget_Tutorial : idSWFWidget
{
    idDeclTutorialEvent* tutorialDecl; // Offset: 0x180

    idHUDMenu_Tutorial* menu_tutorial; // Offset: 0x188

    bindSet_t bindset; // Offset: 0x190

    idSWFWidget_Button* button; // Offset: 0x198

    bool dismissed; // Offset: 0x1A0

    swfPlatform_t currentSWFPlatform; // Offset: 0x1A4

    bool beingUsedInShell; // Offset: 0x1A8

}; // Size: 0x1B0
