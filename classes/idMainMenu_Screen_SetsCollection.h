struct idMainMenu_Screen_SetsCollection : idMenuElement
{
    idSWFWidget_Grid* grid; // Offset: 0x100

    idList < idMenu_GridData * , TAG_IDLIST , false > ownedSets; // Offset: 0x108

    idSWFWidget_Button* prevPageButton; // Offset: 0x120

    idSWFWidget_Button* nextPageButton; // Offset: 0x128

}; // Size: 0x130
