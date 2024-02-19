struct idLobbyMenu_LobbyPlayerListItemButton : idSWFWidget_Button
{
    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x2A0

    lobbyUserId_t lobbyUserId; // Offset: 0x2A8

    bool queuedUpdate; // Offset: 0x2AC

}; // Size: 0x2B0
