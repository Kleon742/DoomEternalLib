enum hudNotificationType_t : int
{
    HUDNOTIFY_NONE = 0,
    HUD_NOTIFY_OBJECTIVE_UPDATE = 1,
    HUD_NOTIFY_OBJECTIVE_COMPLETE = 2,
    HUD_NOTIFY_OBJECTIVE_REPLACE = 3,
    HUD_NOTIFY_OBJECTIVE_SHOW_LAST = 4,
    HUD_NOTIFY_OBJECTIVE_PIN = 5,
    HUD_NOTIFY_CODEX_RECIEVED = 6,
    HUD_NOTIFY_CODEX_UPDATED = 7,
    HUD_NOTIFY_INVENTORY_ACQUIRED = 8,
    HUD_NOTIFY_RUNE_ACQUIRED = 9,
    HUD_NOTIFY_RUNE_UPGRADE_TOKEN_ACQUIRED = 10,
    HUD_NOTIFY_MOD_ACQUIRED = 11,
    HUD_NOTIFY_PRAETOR_ACQUIRED = 12,
    HUD_NOTIFY_SENTINEL_BATTERY_ACQUIRED = 13,
    HUD_NOTIFY_EQUIPMENT_ACQUIRED = 14,
    HUD_NOTIFY_ARGENTUPGRADE_ACQUIRED = 15,
    HUD_NOTIFY_COLLECTIBLE_ACQUIRED = 16,
    HUD_NOTIFY_FAST_TRAVEL_UNLOCKED = 17,
    HUD_NOTIFY_CHECKPOINT = 18,
    HUD_NOTIFY_GENERIC_CALLOUT = 19,
    HUD_NOTIFY_ROUND_TIMER_CALLOUT = 20,
    HUD_NOTIFY_ROUND_NUMBER_CALLOUT = 21,
    HUD_NOTIFY_ROUND_LOSE_CALLOUT = 22,
    HUD_NOTIFY_ROUND_WIN_CALLOUT = 23,
    HUD_NOTIFY_ROUND_START_CALLOUT = 24,
    HUD_NOTIFY_ENEMY_USED_CARD_CALLOUT = 25,
    HUD_NOTIFY_ALLY_USED_CARD_CALLOUT = 26,
    HUD_NOTIFY_MATCH_VICTORY_CALLOUT = 27,
    HUD_NOTIFY_MATCH_DEFEAT_CALLOUT = 28,
    HUD_NOTIFY_INVASION_CALLOUT = 29,
    HUD_NOTIFY_INVASION_INCOMING = 30,
    HUD_NOTIFY_CALLOUT_STATUS_TIMER = 31,
    HUD_NOTIFY_CALLOUT_MAJOR_TIMER = 32,
    HUD_NOTIFY_CALLOUT_MAJOR_ICON = 33,
    HUD_NOTIFY_CALLOUT_INVASION_ICON = 34,
    HUD_NOTIFY_SENTINEL_ARMOR_ACTIVATED = 35,
    HUD_NOTIFY_SENTINEL_ARMOR_DEACTIVATED = 36,
    HUD_NOTIFY_EXTRA_LIFE_ACTIVATED = 37,
    HUD_NOTIFY_EXTRA_LIFE_ACQUIRED = 38,
    HUD_NOTIFY_EXTRA_LIFE_ACQUIRED_2 = 39,
    HUD_NOTIFY_EXTRA_LIFE_ACQUIRED_3 = 40,
    HUD_NOTIFY_EXTRA_LIFE_MAXED = 41,
    HUD_NOTIFY_CHEAT_CODE_ACQUIRED = 42,
    HUD_NOTIFY_GAME_HINT = 43,
    HUD_NOTIFY_SECRET_HINT = 44,
    HUD_NOTIFY_SECRET_FOUND = 45,
    HUD_NOTIFY_SECRET_ENCOUNTER_FOUND = 46,
    HUD_NOTIFY_SECRET_ENCOUNTER_FAILED = 47,
    HUD_NOTIFY_SECRET_ENCOUNTER_COMPLETE = 48,
    HUD_NOTIFY_COMBAT_POINT = 49,
    HUD_NOTIFY_WEAPON_MASTERY_ACQUIRED = 50,
    HUD_NOTIFY_BOUNTY_COMPLETE = 51,
    HUD_NOTIFY_BOUNTY_ACTIVE = 52,
    HUD_NOTIFY_KEYCARD = 53,
    HUD_NOTIFY_SLAYER_KEY = 54,
    HUD_NOTIFY_SLAYER_GATE = 55,
    HUD_NOTIFY_SLAYER_GATE_E3 = 56,
    HUD_NOTIFY_SLAYER_ENCOUNTER = 57,
    HUD_NOTIFY_SLAYER_ENCOUNTER_NO_POINTS = 58,
    HUD_NOTIFY_SLAYER_BATTERY_ACQUIRED = 59,
    HUD_NOTIFY_MISSION_CHALLENGE_INTRO = 60,
    HUD_NOTIFY_MISSION_CHALLENGE_UPDATE = 61,
    HUD_NOTIFY_MISSION_CHALLENGE_COMPLETE = 62,
    HUD_NOTIFY_WEAPON_MASTERY_UPDATE = 63,
    HUD_NOTIFY_WEAPON_MASTERY_COMPLETE = 64,
    HUD_NOTIFY_WEAPON_BROKEN = 65,
    HUD_NOTIFY_DOOM_EVENT_BOSS_COMPLETE = 66,
    HUD_NOTIFY_DOOM_EVENT_MISSION_COMPLETE = 67,
    HUD_NOTIFY_DOOM_EVENT_MASTER_LEVEL_COMPLETE = 68,
    HUD_NOTIFY_DOOM_EVENT_INVASION_COMPLETE = 69,
    HUD_NOTIFY_DOOM_EVENT_PVP_MATCH_COMPLETE = 70,
    HUD_NOTIFY_MILESTONE_COMPLETED = 71,
    HUD_NOTIFY_MILESTONE_COMPLETED_SILENT = 72,
    HUD_NOTIFY_LEVEL_UP = 73,
    HUD_NOTIFY_SEASON_LEVEL_UP = 74,
    HUD_NOTIFY_LATER_IN_THE_MISISON_E3 = 75,
    HUD_NOTIFY_BUFF_POD_NEARBY = 76,
    HUD_NOTIFY_UPGRADE_REMINDER = 77,
    HUD_NOTIFY_UPGRADE_REMINDER_PRAETOR = 78,
    HUD_NOTIFY_DOOM_EVENT_SKYBOX_UNLOCK = 79,
    HUD_NOTIFY_UPGRADE_PERK = 80,
    HUD_NOTIFY_ARGENT_BONUS = 81,
    HUD_NOTIFY_MOD_POINT_ACQUIRED = 82,
    HUD_NOTIFY_MULTIPLE_MOD_POINT_ACQUIRED = 83,
    HUD_NOTIFY_AUTOMAP_REVEALED = 84,
    HUD_NOTIFY_GOLD_BOSS_START = 85,
    HUD_NOTIFY_GOLD_BOSS_DEFEATED = 86,
    HUD_NOTIFY_EXTRA_LIFE_ENCOUNTER_FOUND = 87,
    HUD_NOTIFY_EXTRA_LIFE_ENCOUNTER_FAILED = 88,
    HUD_NOTIFY_EXTRA_LIFE_ENCOUNTER_COMPLETE = 89,
    HUD_NOTIFY_SECRET_ENCOUNTER_DLC_COMPLETE = 90,
    HUD_NOTIFY_SECRET_ENCOUNTER_DLC_COMPLETE_SKIN_PROGRESS = 91,
    HUD_NOTIFY_SECRET_ENCOUNTER_DLC_COMPLETE_SKIN_UNLOCK = 92,
    HUD_NOTIFY_RUNE_CRYSTALS_ACQUIRED = 93,
    HUD_NOTIFY_MASTER_LEVEL_START = 94,
    HUD_NOTIFY_SUPPORT_RUNE_ACQUIRED = 95,
    HUD_NOTIFY_SCREECHER_KILLED = 96,
    HUD_NOTIFY_PLAYER_CURSED = 97,
    HUD_NOTIFY_HORDE_ROUND_START = 98,
    HUD_NOTIFY_HORDE_ROUND_END = 99,
    HUD_NOTIFY_HORDE_WAVE_START = 100,
    HUD_NOTIFY_HORDE_WAVE_END = 101,
    HUD_NOTIFY_HORDE_BOUNTY_START = 102,
    HUD_NOTIFY_HORDE_BOUNTY_COMPLETE = 103,
    HUD_NOTIFY_HORDE_BOUNTY_FAILED = 104,
    HUD_NOTIFY_HORDE_STATE_SHARE_COMPLETE = 105,
    HUD_NOTIFY_HORDE_STATE_SHARE_FAILED = 106,
    HUD_NOTIFY_MAX = 107
};
