struct idMainMenu_Screen_MasterLevels : idMenuElement
{
    idDeclCampaign* campaignDecl; // Offset: 0x100

    idSWFWidget_SectionList* masterLevelOptionsList; // Offset: 0x108

    idSWFWidget_MasterLevelInfo* masterLevelInfo; // Offset: 0x110

    idSWFWidget* absolutelyNothing; // Offset: 0x118

    idList < masterLevelInfo_t , TAG_IDLIST , false > activeMasterLevels; // Offset: 0x120

}; // Size: 0x138
