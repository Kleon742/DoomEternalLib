struct idMenuElement_Tutorial : idMenuElement
{
    idDeclTutorialEvent* tutorialDecl; // Offset: 0x100

    bindSet_t bindset; // Offset: 0x108

    idSWFWidget_Tutorial* simpleTutorial; // Offset: 0x110

    idSWFWidget_Tutorial* textTutorial; // Offset: 0x118

    idSWFWidget_Tutorial* currentTutorial; // Offset: 0x120

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > inputBufferTime; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showTimeBuffer; // Offset: 0x130

    int menuBroadCastID; // Offset: 0x138

}; // Size: 0x140
