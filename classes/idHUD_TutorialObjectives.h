struct idHUD_TutorialObjectives : idHUDElement
{
    idDeclTutorialEvent* tutorialDecl; // Offset: 0xF8

    int bindset; // Offset: 0x100

    idList < idSWFWidget_TutorialObjective * , TAG_IDLIST , false > objectiveList; // Offset: 0x108

    int numItemSprites; // Offset: 0x120

    bool updateObjectiveList; // Offset: 0x124

}; // Size: 0x128
