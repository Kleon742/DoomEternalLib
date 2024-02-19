struct idLobbyMenu_BattleArena_WaitingForPlayers : idMenuElement
{
    bool shouldUpdateQueue; // Offset: 0x100

    bool goToIntro; // Offset: 0x101

    bool isReady; // Offset: 0x102

    bool hasSentLoadedMsg; // Offset: 0x103

    bool isErrorOut; // Offset: 0x104

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeoutTime; // Offset: 0x108

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > readyUpTime; // Offset: 0x110

    idSWFWidget_List* badgeList; // Offset: 0x118

}; // Size: 0x128
