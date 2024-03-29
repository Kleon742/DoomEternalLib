enum gameDialogMessages_t : int
{
    GDM_INVALID = 0,
    GDM_NO_GAMER_PROFILE = 1,
    GDM_PLAY_ONLINE_NO_PROFILE = 2,
    GDM_ONLINE_INCORRECT_PERMISSIONS = 3,
    GDM_QUIT_WITHOUT_SAVING = 4,
    GDM_QUIT_AND_SAVE = 5,
    GDM_RESTART_MISSION = 6,
    GDM_SIGNIN_CHANGE = 7,
    GDM_CONNECTION_LOST = 8,
    GDM_CONNECTION_TO_HOST_LOST = 9,
    GDM_HOST_QUIT = 10,
    GDM_LOBBY_BECAME_HOST_GAME = 11,
    GDM_LOBBY_DISBANDED = 12,
    GDM_LEAVE_WITH_PARTY = 13,
    GDM_MIGRATING = 14,
    GDM_INVALID_GAME = 15,
    GDM_KICKED = 16,
    GDM_OVERWRITE_SAVE = 17,
    GDM_DELETE_SAVE = 18,
    GDM_DELETING = 19,
    GDM_OVERLAY_DISABLED = 20,
    GDM_PVP_QUIT = 21,
    GDM_INSUFFICIENT_STORAGE_SPACE = 22,
    GDM_LOBBY_FULL = 23,
    GDM_PARTY_LOBBY_FULL = 24,
    GDM_QUIT_GAME = 25,
    GDM_QUIT_GAME_PROGRESS_LOST = 26,
    GDM_QUIT_TO_MAIN_MENU = 27,
    GDM_VOICE_RESTRICTED = 28,
    GDM_LOAD_DAMAGED_FILE = 29,
    GDM_MUST_SIGNIN = 30,
    GDM_SIGNIN_CHANGE_POST = 31,
    GDM_HOST_RETURNED_TO_LOBBY = 32,
    GDM_HOST_RETURNED_TO_LOBBY_STATS_DROPPED = 33,
    GDM_CONFIRM_VIDEO_CHANGES = 34,
    GDM_UNABLE_TO_USE_SELECTED_STORAGE_DEVICE = 35,
    GDM_ERROR_LOADING_SAVEGAME = 36,
    GDM_ERROR_SAVING_SAVEGAME = 37,
    GDM_LEAVE_LOBBY = 38,
    GDM_LEAVE_LOBBY_AND_PARTY = 39,
    GDM_CONTROLLER_DISCONNECTED_0 = 40,
    GDM_ENTITLEMENT_ACCESS_ERROR = 41,
    GDM_CAMPAIGN_ENTITLEMENT_NOT_INSTALLED = 42,
    GDM_DLC1_ENTITLEMENT_NOT_INSTALLED = 43,
    GDM_DLC2_ENTITLEMENT_NOT_INSTALLED = 44,
    GDM_HORDE_ENTITLEMENT_NOT_INSTALLED = 45,
    GDM_DLC_ERROR_CORRUPT = 46,
    GDM_DLC_ERROR_MISSING_GENERIC = 47,
    GDM_CORRUPT_CONTINUE = 48,
    GDM_CANNOT_INVITE_LOBBY_FULL = 49,
    GDM_DISCONNECTED = 50,
    GDM_INCOMPATIBLE_NEWER_SAVE = 51,
    GDM_ACHIEVEMENTS_DISABLED_DUE_TO_CHEATING = 52,
    GDM_TEXTUREDETAIL_RESTARTREQUIRED = 53,
    GDM_OUT_OF_MEMORY = 54,
    GDM_CORRUPT_PROFILE = 55,
    GDM_PROFILE_TOO_OUT_OF_DATE_DEVELOPMENT_ONLY = 56,
    GDM_STREAMING_INSTALL_CONTENT_UNAVAILABLE = 57,
    GDM_BATTLEMODE_INSTALLATION_INCOMPLETE = 58,
    GDM_SIGNIN_CHANGE_PROFILE = 59,
    GDM_CHECKING_PRIVILEGES = 60,
    GDM_CHECKING_ONLINE_PRIVILEGES = 61,
    GDM_PARTY_NO_ONLINE_PRIVILEGES = 62,
    GDM_NO_ONLINE_PRIVILEGES = 63,
    GDM_SEARCHING = 64,
    GDM_CONNECTING = 65,
    GDM_PAUSE_DUE_TO_LAG = 66,
    GDM_LOADING_PROFILE = 67,
    GDM_SYSTEM_UPDATE_REQUIRED = 68,
    GDM_TITLE_UPDATE_REQUIRED = 69,
    GDM_INVALID_INVITE = 70,
    GDM_PARTY_DISBANDED = 71,
    GDM_USER_IS_UNDERAGE = 72,
    GDM_USER_CONTROLLER_PAIRING_CHANGE = 73,
    GDM_LOADING = 74,
    GDM_LOADING_SEASONS = 75,
    GDM_LOADING_PVP_SERIES = 76,
    GDM_CONNECTION_TO_FIRST_PARTY_LOST = 77,
    GDM_CANNOT_CONNECT_TO_ONLINE_SERVICES = 78,
    GDM_FAILED_TO_LOAD_DATA = 79,
    GDM_STREAMING_INSTALL_CONTENT_UNAVAILABLE_TRY_LATER = 80,
    GDM_CONNECTION_TO_HOST_DENIED = 81,
    GDM_CORRUPT_DATA_DELETED = 82,
    GDM_BATTLEMODE_NETWORK_ERROR = 83,
    GDM_SESSION_UNKNOWN_ERROR = 84,
    GDM_NO_ONLINE_ACCOUNT = 85,
    GDM_CANNOT_INVITE_PARTY_FULL = 86,
    GDM_RATE_LIMITED_BY_PLATFORM = 87,
    GDM_SP_RELOAD_CHECKPOINT = 88,
    GDM_SP_START_OVER = 89,
    GDM_CONFIRM_ADVANCED_CHANGES = 90,
    GDM_CONFIRM_ADVANCED_CHANGES_HIGHVRAM_NEEDED = 91,
    GDM_CONTINUE_GAME_MARKED_DIRTY = 92,
    GDM_ADVANCED_SETTING_NOT_ENOUGH_VRAM = 93,
    GDM_OVERALL_QUALITY_SETTING_NOT_ENOUGH_VRAM = 94,
    GDM_CHEAT_MODE_ENTERED = 95,
    GDM_CORRUPT_BACKUP_LOADED = 96,
    GDM_PROFILE_CORRUPT_BACKUP_LOADED = 97,
    GDM_CONFIRM_ADVANCED_CHANGES_RESTART_NEEDED = 98,
    GDM_SAVING_AND_RESTARTING = 99,
    GDM_ONLINE_PRIVILEGES_ERROR = 100,
    GDM_SAVING_PROFILE = 101,
    GDM_SCHEDULED_TITLE_STORAGE_UPDATE = 102,
    GDM_CONNECTION_TO_HOST_TIMEOUT = 103,
    GDM_INITIALIZING_PROFILE = 104,
    GDM_CORRUPT_SAVE_SLOT_DETECTED = 105,
    GDM_PROMPT_FOR_CORRUPT_SAVE_DELETE = 106,
    GDM_PROMPT_FOR_INVASION_RESERVED = 107,
    GDM_PROMPT_PLAY_DEMON_TUTORIAL_PVP = 108,
    GDM_PROMPT_PLAY_INVASION_TUTORIAL = 109,
    GDM_PROMPT_PLAY_PVP_TUTORIAL = 110,
    GDM_PROMPT_PLAY_SP_TUTORIAL = 111,
    GDM_PROMPT_RESET_PROFILE_PROMPT = 112,
    GDM_PROMPT_RESET_PROFILE_COMPLETE = 113,
    GDM_PURCHASING = 114,
    GDM_PURCHASE_FAILED = 115,
    GDM_EQUIP_NOW = 116,
    GDM_LEAVING_PARTY = 117,
    GDM_GENERIC = 118,
    GDM_MATCHMAKING_FAILED = 119,
    GDM_REQUEST_TIMED_OUT = 120,
    GDM_GO_ONLINE = 121,
    GDM_LOBBY_NO_SERVER_AVAILABLE = 122,
    GDM_LOBBY_NOT_ENOUGH_PLAYERS = 123,
    GDM_LOBBY_TIMED_OUT_WAITING = 124,
    GDM_LOBBY_SYSTEM_PATCH_NEEDED = 125,
    GDM_LOBBY_TITLE_PATCH_NEEDED = 126,
    GDM_LOBBY_HOST_LEFT_LOBBY = 127,
    GDM_LOBBY_MATCH_TERMINATED = 128,
    GDM_CONTINUE_GAME_FROM_MISSION_SELECT = 129,
    GDM_KIT_ENVIRONMENT_INCORRECT_DEVELOPMENT_ONLY = 130,
    GDM_ERROR_CAMPAIGN_PERMISSIONS_TIMEOUT = 131,
    GDM_ERROR_CAMPAIGN_PERMISSIONS_PARTY_MATCHMAKING = 132,
    GDM_ERROR_TUTORIAL_PERMISSIONS_TIMEOUT = 133,
    GDM_ERROR_TUTORIAL_PERMISSIONS_PARTY_MATCHMAKING = 134,
    GDM_ERROR_MATCHMAKING_DISABLED_PARTY_IN_CAMPAIGN = 135,
    GDM_ERROR_PVP_PERMISSIONS_TIMEOUT = 136,
    GDM_ERROR_PVP_PERMISSIONS_PARTY_IN_LOBBY = 137,
    GDM_PLEASE_WAIT = 138,
    GDM_UNKNOWN_ERROR_OCCURRED = 139,
    GDM_LEAVE_CAMPAIGN_TO_GO_TO_LOBBY = 140,
    GDM_LEAVE_TUTORIAL_TO_GO_TO_LOBBY = 141,
    GDM_CORRUPT_ATTEMPT_BACKUP = 142,
    GDM_CORRUPT_BACKUP_FAILED = 143,
    GDM_CUSTOMIZE_CHANGE_SKIN_WARNING = 144,
    GDM_LEAVE_CAMPAIGN_TO_GO_TO_LOBBY_ULTRANIGHTMARE = 145,
    GDM_CANCEL_MATCHMAKING = 146,
    GDM_HDR_NOT_SUPPORTED = 147,
    GDM_HDR_FAILED_TO_CREATE_SWAPCHAIN = 148,
    GDM_DISCARD_VIDEO_SETTING_CHANGES = 149,
    GDM_NOT_ENOUGH_VRAM_FOR_VIDEO_CHANGES = 150,
    GDM_LOBBY_PLAYER_SLOT_UNAVAILABLE = 151,
    GDM_DELETE_SAVE_ULTRANIGHTMARE = 152,
    GDM_CONFIRM_TUTORIAL_SETTING_CHANGE = 153,
    GDM_QOS_MISMATCH = 154,
    GDM_PARTY_MUST_LEAVE_PARTY_FOR_CAMPAIGN = 155,
    GDM_PARTY_JOIN_PARTY_FROM_CAMPAIGN = 156,
    GDM_MULTIPLAYER_LEAVE_PARTY_AS_LEADER = 157,
    GDM_MULTIPLAYER_LEAVE_PARTY_AS_MEMBER = 158,
    GDM_MULTIPLAYER_TUTORIAL_AS_LEADER = 159,
    GDM_MULTIPLAYER_TUTORIAL_AS_MEMBER = 160,
    GDM_MULTIPLAYER_TUTORIAL_IN_PARTY = 161,
    GDM_PARTY_LEAVING_PARTY_WILL_QUIT_PVP = 162,
    GDM_DLC_1_TUTORIAL_CAMPAIGN = 163,
    GDM_DLC_1_TUTORIAL_BATTLEMODE = 164,
    GDM_DLC_DIFFICULTY_WARNING = 165,
    GDM_CREATING_PARTY = 166,
    GDM_ERROR_BOOSTER_XP_CLAIM_TIMEOUT = 167,
    GDM_CHARACTER_SELECT_FAILED = 168,
    GDM_BELOW_MIN_RTX_WARNING = 169,
    GDM_RAYTRACING_SCALE_DOWN_SETTINGS_WARNING = 170,
    GDM_HAPTIC_WARNING = 171,
    GDM_CRITICAL_CONTROLS_WARNING = 172,
    GDM_HORDE_DIFFICULTY_WARNING = 173,
    GDM_STADIA_SEF_CORRUPT_DATA_WARNING = 174,
    GDM_QUIT_AND_SAVE_HORDE = 175,
    GDM_HORDE_NEW_PLAYER_WARNING = 176,
    GDM_MAX = 177
};
