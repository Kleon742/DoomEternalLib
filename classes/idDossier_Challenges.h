struct idDossier_Challenges : idMenuElement
{
    // Header
    idSWFWidget_HeaderText* header; // Offset: 0x100

    // Challenge Data
    challengeInfo_t missionChallengeData[3]; // Offset: 0x108

    // Mission/Weekly Selector Tabs
    idSWFWidget_TabList* tabList; // Offset: 0x618

    idSWFWidget_TabButton* missionTab; // Offset: 0x620

    idSWFWidget_TabButton* weaponTab; // Offset: 0x628

    idSWFWidget_TabButton* weeklyTab; // Offset: 0x630

    // Mission Challenge View
    idSWFWidget* missionView; // Offset: 0x638

    idSWFWidget_Button_ChallengeCard* missionChallengeCards[3]; // Offset: 0x640

    // Weekly Challenge View
    idSWFWidget_Dossier_WeeklyChallenges* weeklyView; // Offset: 0x658

    idSWFWidget_DynamicGrid* weaponChallengeGrid; // Offset: 0x660

    idList < challengeInfo_t , TAG_IDLIST , false > weaponChallengeData; // Offset: 0x668

    // flag if there is only weekly challenges and we haven't got the data yet
    bool isLoading; // Offset: 0x680

    // Pins n' Things
    idStaticList < challengeInfo_t , 3 , false , TAG_IDLIST > pinnedChallenges; // Offset: 0x690

}; // Size: 0xBB8
