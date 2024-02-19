enum menuEventID_t : int
{
    MENU_EVENT_INVALID = -1,
    MENU_EVENT_READ_LIMITED_LIVE_TILE = 0,
    MENU_EVENT_YOU_GOT_STUFF = 1,
    MENU_EVENT_OPEN_CAMPAIGN_MENU = 2,
    MENU_EVENT_OPEN_CREDITS_MENU = 3,
    MENU_EVENT_OPEN_SOCIAL_MENU = 4,
    MENU_EVENT_OPEN_SEASONS_BOOSTERS = 5,
    MENU_EVENT_WAREHOUSE_ITEM_SEEN = 6,
    MENU_EVENT_ACCEPT_PARTY_INVITE_START = 7,
    MENU_EVENT_ACCEPT_PARTY_INVITE_END = 8,
    MENU_EVENT_SEASON_REWARD_ANIMATION_COMPLETE = 9,
    MENU_EVENT_SEASON_REWARD_ANIMATION_ABORTED = 10,
    MENU_EVENT_SEASON_REWARD_PAGE_CHANGED = 11,
    MENU_EVENT_SEASON_REWARD_FOCUS = 12,
    MENU_EVENT_SHOW_MATCH_SUMMARY = 13,
    MENU_EVENT_DEBUG_MATCH_SUMMARY_ANIMATION_LEVELUP = 14,
    MENU_EVENT_ACCCEPT_HORDE_DIFFICULTY = 15,
    MENU_EVENT_SPECIFY_MILESTONE_PAGE = 16,
    MENU_EVENT_BEGIN_BATTLEMODE_WALKTHROUGH = 17,
    MENU_EVENT_BEGIN_BOOSTERS_WALKTHROUGH = 18,
    MENU_EVENT_SHELL_WALKTHROUGH_FINISHED = 19,
    MENU_EVENT_ABANDON_SHELL_WALKTHROUGH = 20,
    MENU_EVENT_ADVANCE_SHELL_WALKTHROUGH = 21,
    MENU_EVENT_SHELL_WALKTHROUGH_PRESS_AND_HOLD_FINISHED = 22,
    MENU_EVENT_UPDATE_SHELL_WALKTHROUGH = 23,
    MENU_EVENT_EMERGENCY_ABANDON_SHELL_WALKTHROUGH = 24,
    MENU_EVENT_BOOSTERS_WALKTHROUGH_FINISHED = 25,
    MENU_EVENT_LOBBY_VOTE_SHUFFLE = 26,
    MENU_EVENT_LOBBY_VOTE_REMATCH = 27,
    MENU_EVENT_LOBBY_GO_TO_LOADOUT = 28,
    MENU_EVENT_LOBBY_GO_TO_CUSTOMIZE = 29,
    MENU_EVENT_LOBBY_CHANGE_CHARACTER = 30,
    MENU_EVENT_LOBBY_CLOSE_PLAYER_DROPDOWN = 31,
    MENU_EVENT_LOBBY_CLEAR_MATCH_RESULTS = 32,
    MENU_EVENT_SHOW_TUTORIAL = 33,
    MENU_EVENT_TRIGGER_BOOSTERS_TUTORIAL = 34,
    MENU_EVENT_ONLINE_BAN_EXPIRED = 35,
    MENU_EVENT_SHOW_HORDE_SUMMARY = 36,
    MENU_EVENT_MAX = 37
};
