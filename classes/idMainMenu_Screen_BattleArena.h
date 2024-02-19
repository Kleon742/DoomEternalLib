struct idMainMenu_Screen_BattleArena : idMenuElement
{
    enum screenState_battleArena_t : int
    {
        SCREEN_STATE_BATTLE_ARENA_INVALID = -1,
        SCREEN_STATE_BATTLE_ARENA_ROOT = 0,
        SCREEN_STATE_BATTLE_ARENA_CHANGE_REGION = 1,
        SCREEN_STATE_BATTLE_ARENA_CHANGE_MODE = 2,
        SCREEN_STATE_BATTLE_ARENA_CHANGE_PREFERENCE = 3,
        SCREEN_STATE_BATTLE_ARENA_CREATE_MATCH_SELECT_MAP = 4,
        SCREEN_STATE_BATTLE_ARENA_CHANGE_DEDICATED_SERVER = 5
    };

    enum dedicatedServerType_t : int
    {
        DED_TYPE_NONE = 0,
        DED_TYPE_LOCAL = 1,
        DED_TYPE_REMOTE = 2,
        DED_TYPE_MAX = 3
    };

    idMainMenu_Screen_BattleArena::screenState_battleArena_t state; // Offset: 0x100

    idMainMenu_Screen_BattleArena::screenState_battleArena_t nextState; // Offset: 0x104

    idSWFWidget_ExpandButton* btnRegion; // Offset: 0x108

    idSWFWidget_ExpandButton* btnMode; // Offset: 0x110

    idSWFWidget_ExpandButton* btnPreference; // Offset: 0x118

    idSWFWidget_ExpandButton* btnCreateMatch; // Offset: 0x120

    idSWFWidget_ExpandButton* btnPlayOnline; // Offset: 0x128

    idSWFWidget_ExpandButton* btnBrowseMatches; // Offset: 0x130

    idSWFWidget_ExpandButton* btnDedicatedServer; // Offset: 0x138

    idSWFWidget_ExpandButton* btnLaunchDedicatedServer; // Offset: 0x140

    idSWFWidget_ExpandList* expandList; // Offset: 0x148

    bool expandListIsTweening; // Offset: 0x150

    idSWFWidget_ExpandButton* currentExpandedButton; // Offset: 0x158

    // TEMP
    int regionID; // Offset: 0x160

    int modeID; // Offset: 0x164

    idMainMenu_Screen_BattleArena::dedicatedServerType_t dedicatedServerType; // Offset: 0x168

    idList < int , TAG_IDLIST , false > modifierDeclIndices; // Offset: 0x170

    // pvp progression rules
    idPvpProgressManagerUnlocks unlocks; // Offset: 0x188

    idList < const pvpProgressEntry_t * , TAG_IDLIST , false > lockedRules; // Offset: 0x1A0

}; // Size: 0x1B8
