struct idLobbyMenu_LobbyPlayerCollection : idSWFWidget
{
    idLobbyMenu_LobbyPlayerListItem* localPlayer; // Offset: 0x180

    idSWFWidget_List* playerList; // Offset: 0x188

    idLobbyMenu_LobbyPlayerListItem* selectedPlayerItem; // Offset: 0x190

    idMenuElement* menuElement; // Offset: 0x198

    bool actionFallthrough; // Offset: 0x1A0

    bool dimWhenDropdownActive; // Offset: 0x1A1

}; // Size: 0x1A8
