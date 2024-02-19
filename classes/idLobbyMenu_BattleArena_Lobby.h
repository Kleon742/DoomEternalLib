struct idLobbyMenu_BattleArena_Lobby : idBattleArena_LobbyMenuBase
{
    enum lobbyState_t : int
    {
        INVALID = 0,
        NORMAL = 1,
        PLAYER_VOTING = 2,
        COUNT = 3
    };

    asyncio::idTaskResultPtr < bool , bool > rewardsProgressUpdate; // Offset: 0x108

    idLobbyMenu_BattleArena_Lobby::lobbyState_t nextState; // Offset: 0x110

    idLobbyMenu_BattleArena_Lobby::lobbyState_t currentState; // Offset: 0x114

    idSWFWidget_List* slotList; // Offset: 0x118

    idSWFWidget* timer; // Offset: 0x120

    idSWFWidget* playerCount; // Offset: 0x128

    idSWFWidget_BattleArenaLobby_SlotListItem* slotItems[3]; // Offset: 0x130

    bool matchIsLaunching; // Offset: 0x148

    bool localUserIsSlotted; // Offset: 0x149

    bool localUserIsReady; // Offset: 0x14A

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameStartTime; // Offset: 0x150

    idStr rootCameraPlacement; // Offset: 0x158

    bool updatePlayerQueue; // Offset: 0x188

    bool updateCommandBar; // Offset: 0x189

    bool blockLoadout; // Offset: 0x18A

}; // Size: 0x190
