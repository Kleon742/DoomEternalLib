struct idSWFWidget_BattleArenaLobby_PostmatchOptions : idSWFWidget
{
    enum postmatchOption_t : int
    {
        INVALID = -1,
        SHUFFLE = 0,
        REMATCH = 1,
        COUNT = 2
    };

    idSWFWidget_Button* moveLeft; // Offset: 0x180

    idSWFWidget_Button* moveRight; // Offset: 0x188

    idSWFWidget_BattleArenaLobby_PostmatchOptions::postmatchOption_t currentOption; // Offset: 0x190

    bool needsInitialize; // Offset: 0x194

    bool enabled; // Offset: 0x195

    lobbyUserId_t lobbyUserId; // Offset: 0x198

    bool selectionConfirmed; // Offset: 0x19C

}; // Size: 0x1A0
