struct idMainMenu_Screen_MatchBrowser : idMenuElement
{
    idSWFWidget_SectionList* matchList; // Offset: 0x100

    gameType_t filterGameType; // Offset: 0x108

    idList < gameBrowserEntry_t , TAG_IDLIST , false > games; // Offset: 0x110

    idProxyPtr < idMainMenu_Screen_MatchBrowser > proxyPtr; // Offset: 0x128

    bool isSearching; // Offset: 0x130

    bool serverListReady; // Offset: 0x131

}; // Size: 0x138
