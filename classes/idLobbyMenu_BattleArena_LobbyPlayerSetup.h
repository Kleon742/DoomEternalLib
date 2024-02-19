struct idLobbyMenu_BattleArena_LobbyPlayerSetup : idMenuElement
{
    enum screenState_lobbyPlayerSetup_t : int
    {
        SCREEN_STATE_LOBBY_PLAYER_SETUP_INVALID = -1,
        SCREEN_STATE_LOBBY_PLAYER_SETUP_ROOT = 0
    };

    enum contextState_t : int
    {
        CONTEXT_STATE_INVALID = -1,
        CONTEXT_STATE_ACTIONS = 0,
        CONTEXT_STATE_ABILITIES = 1
    };

    enum screenCommand_lobbyPlayerSetup_t : int
    {
        CMD_LOBBY_CHAR_SELECT_VIEW_ABILITES = 0,
        CMD_LOBBY_CHAR_SELECT_VIEW_ACTIONS = 1,
        CMD_LOBBY_CHAR_SELECT_VIEW_UPGRADES_CHANGE_DECK = 2,
        CMD_LOBBY_CHAR_SELECT_SELECT_DEFAULT = 3,
        CMD_LOBBY_CHAR_SELECT_SELECT_CARD_DECK = 4,
        CMD_LOBBY_CHAR_SELECT_CLOSE_CARD_SELECT = 5,
        CMD_LOBBY_CHAR_SELECT_TUTORIAL = 6
    };

    idLobbyMenu_BattleArena_LobbyPlayerSetup::screenState_lobbyPlayerSetup_t state; // Offset: 0x100

    idLobbyMenu_BattleArena_LobbyPlayerSetup::screenState_lobbyPlayerSetup_t nextState; // Offset: 0x104

    idLobbyMenu_BattleArena_LobbyPlayerSetup::contextState_t contextState; // Offset: 0x108

    idLobbyMenu_BattleArena_LobbyPlayerSetup::contextState_t nextContextState; // Offset: 0x10C

    idSWFWidget_DropDownMenuList* dropdownList; // Offset: 0x110

    idSWFWidget_TabList* tabList; // Offset: 0x118

    idSWFWidget_Button* abilitiesButton; // Offset: 0x120

    idSWFWidget_Button* actionsButton; // Offset: 0x128

    idSWFWidget_Button* contextButton; // Offset: 0x130

    idLobbyMenu_BattleArena_ActionList* actionList; // Offset: 0x138

    idLobbyMenu_BattleArena_AbilityList* abilityList; // Offset: 0x140

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameStartTime; // Offset: 0x148

    swfPlatform_t lastSWFPlatform; // Offset: 0x150

    int queuedOptionsListFocus; // Offset: 0x154

    unsigned long long selectedCharacterResourceId; // Offset: 0x158

    bool clearPlayerDeckList; // Offset: 0x160

    bool updateCharacterSelections; // Offset: 0x161

    int characterSelection; // Offset: 0x164

}; // Size: 0x168
