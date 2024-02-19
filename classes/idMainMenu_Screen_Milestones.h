struct idMainMenu_Screen_Milestones : idMenuElement
{
    idProxyPtr < idMainMenu_Screen_Milestones > proxyPtr; // Offset: 0x100

    idDeferredFuncList deferred; // Offset: 0x108

    idSWFWidget_List* milestoneList; // Offset: 0x150

    idSWFWidget_MilestoneInspection* milestoneInspection; // Offset: 0x158

    int currentCategory; // Offset: 0x160

    idList < mileStoneCategory_t , TAG_IDLIST , false > categories; // Offset: 0x168

}; // Size: 0x180
