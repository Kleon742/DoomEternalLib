struct idLobbyMenu_LobbyPlayerListItem : idSWFWidget
{
    enum ItemState : int
    {
        CONTEXT_MENU_HIDDEN = 0,
        CONTEXT_MENU_VISIBLE = 1,
        COUNT = 2
    };

    enum lobbyUserListCmd_t : int
    {
        CMD_LOBBY_USER_SELECT_USER = 100,
        CMD_LOBBY_USER_VIEW_PROFILE = 101,
        CMD_LOBBY_USER_ADD_FAVORITE = 102,
        CMD_LOBBY_USER_REMOVE_FAVORITE = 103,
        CMD_LOBBY_USER_MUTE_USER = 104,
        CMD_LOBBY_USER_UNMUTE_USER = 105,
        CMD_LOBBY_USER_REPORT_USER = 106
    };

    idSWFWidget_DropDownMenuList* dropdownList; // Offset: 0x180

    idLobbyMenu_LobbyPlayerListItemButton* playerButton; // Offset: 0x188

    lobbyUserId_t lobbyUserId; // Offset: 0x190

    idLobbyMenu_LobbyPlayerListItem::ItemState state; // Offset: 0x194

    idMenu* menu; // Offset: 0x198

    bool clearDropdown; // Offset: 0x1A0

}; // Size: 0x1A8
