struct idSWFWidget_TutorialObjective : idSWFWidget
{
    idDeclTutorialEvent::tutorialObjective_t* tutorialDecl; // Offset: 0x180

    swfPlatform_t currentSWFPlatform; // Offset: 0x188

    bool isComplete; // Offset: 0x18C

    bool nextIsComplete; // Offset: 0x18D

    int bindset; // Offset: 0x190

}; // Size: 0x198
