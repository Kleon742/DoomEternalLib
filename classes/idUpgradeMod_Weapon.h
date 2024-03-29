struct idUpgradeMod_Weapon : idUpgradeMod
{
    enum weaponModType_t : int
    {
        WMT_NONE = 0,
        WMT_WEAPON_DAMAGE = 1,
        WMT_WEAPON_DAMAGE_SCALE = 2,
        WMT_WEAPON_MIN_DAMAGE = 3,
        WMT_WEAPON_MAX_DAMAGE = 4,
        WMT_WEAPON_DAMAGE_START_FALLOFF_DISTANCE = 5,
        WMT_WEAPON_DAMAGE_END_FALLOFF_DISTANCE = 6,
        WMT_WEAPON_DAMAGE_START_POINT_BLANK_FALLOFF_DISTANCE = 7,
        WMT_WEAPON_DAMAGE_END_POINT_BLANK_FALLOFF_DISTANCE = 8,
        WMT_WEAPON_DAMAGE_RADIUS_INNER = 9,
        WMT_WEAPON_DAMAGE_RADIUS_OUTER = 10,
        WMT_WEAPON_DAMAGE_RADIUS_OUTER_DAMAGE_STRENGTH = 11,
        WMT_WEAPON_DAMAGE_RADIUS_INNER_SCALE = 12,
        WMT_WEAPON_DAMAGE_RADIUS_OUTER_SCALE = 13,
        WMT_WEAPON_DAMAGE_RADIUS_OUTER_DAMAGE_STRENGTH_SCALE = 14,
        WMT_WEAPON_DAMAGE_TYPE = 15,
        WMT_WEAPON_DAMAGE_OVER_TIME_DURATION_MS = 16,
        WMT_WEAPON_DAMAGE_OVER_TIME_INTERVAL_MS = 17,
        WMT_WEAPON_DAMAGE_BULLET_PENETRATION_ENERGY = 18,
        WMT_WEAPON_DAMAGE_BULLET_PENETRATION_MAX_NUM = 19,
        WMT_WEAPON_DAMAGE_BULLET_PENETRATION_MAX_RANGE = 20,
        WMT_WEAPON_DAMAGE_BULLET_PENETRATION_DAMAGE_SCALE_ACCEPTED = 21,
        WMT_WEAPON_DAMAGE_AI_STIMULUS_SCALE = 22,
        WMT_WEAPON_DAMAGE_SOFT_TARGET_DAMAGE_DECL = 23,
        WMT_WEAPON_DAMAGE_FUTURE_DAMAGE_SCALE_DURATION = 24,
        WMT_WEAPON_DAMAGE_FUTURE_DAMAGE_SCALE_MULTIPLIER = 25,
        WMT_WEAPON_DAMAGE_HEADSHOT_ADD_DAMAGE_SCALE = 26,
        WMT_WEAPON_DAMAGE_PROJECTILE_ALL_TARGETS_DECL = 27,
        WMT_WEAPON_DAMAGE_PROJECTILE_AI_TARGETS_DECL = 28,
        WMT_WEAPON_DAMAGE_PROJECTILE_AI_KILLED_TARGETS_DECL = 29,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_IMPACT_EFFECT = 30,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_DAMAGE_SCALAR = 31,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_SELF_DAMAGE_SCALAR = 32,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_PLAYER_DAMAGE_SCALAR = 33,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_DEMON_PLAYER_DAMAGE_SCALAR = 34,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_BOUNCE_SOUND = 35,
        WMT_WEAPON_DAMAGE_PROJECTILE_WEAK_POINT_FEEDBACK_SOUND = 36,
        WMT_WEAPON_END_DAMAGE_MODS = 37,
        WMT_WEAPON_CYLINDRICAL_DAMAGE_RADIUS_INNER = 38,
        WMT_WEAPON_CYLINDRICAL_DAMAGE_RADIUS_OUTER = 39,
        WMT_WEAPON_DECL_WEAPON = 40,
        WMT_WEAPON_PRIMARY_TRIGGER_MODE = 41,
        WMT_WEAPON_SECONDARY_TRIGGER_MODE = 42,
        WMT_WEAPON_DECL_AMMO = 43,
        WMT_WEAPON_DECL_AMMO_AFTER_EVERY_BURST_SHOT_HITS = 44,
        WMT_WEAPON_SUPERCHARGE_DECL_WEAPON_PRIMARY = 45,
        WMT_WEAPON_SUPERCHARGE_DECL_WEAPON_SECONDARY = 46,
        WMT_WEAPON_SUPERCHARGE_DECL_WEAPON_MS = 47,
        WMT_WEAPON_SUPERCHARGE_DECL_WEAPON_NUM_SHOTS = 48,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_PRIMARY = 49,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_SECONDARY = 50,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_MS = 51,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_NUM_SHOTS = 52,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_MEATHOOKED = 53,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_DASH_USED = 54,
        WMT_WEAPON_SUPERCHARGE_DECL_AMMO_ON_KILL = 55,
        WMT_WEAPON_DECL_DAMAGE = 56,
        WMT_WEAPON_DECL_SPLASH_DAMAGE = 57,
        WMT_WEAPON_DECL_ALT_SPLASH_DAMAGE = 58,
        WMT_WEAPON_DECL_CONCUSSIVE_DAMAGE = 59,
        WMT_WEAPON_DECL_ALT_CONCUSSIVE_DAMAGE = 60,
        WMT_WEAPON_DECL_ENERGY_SHELL_DASH_DAMAGE = 61,
        WMT_WEAPON_DECL_ENERGY_SHELL_PRIMARY_FIRE_DAMAGE_SCALE = 62,
        WMT_WEAPON_DECL_ENERGY_SHELL_HEALTH_GAIN_ON_AI_HIT = 63,
        WMT_WEAPON_RANGE = 64,
        WMT_WEAPON_ADDITIVE_ZOOM_OFFSET = 65,
        WMT_WEAPON_OVERRIDE_SHOOT_STATE = 66,
        WMT_WEAPON_OVERRIDE_SHOOT_START_STATE = 67,
        WMT_WEAPON_OVERRIDE_SHOOT_LAST_STATE = 68,
        WMT_WEAPON_OVERRIDE_SHOOT_STATE_FIRING_INTERVAL = 69,
        WMT_WEAPON_OVERRIDE_SHOOT_THEN_THIS_MANY_NORMAL_SHOTS = 70,
        WMT_WEAPON_OVERRIDE_RELOAD_FROM_EMPTY_STATE = 71,
        WMT_WEAPON_FIRING_INTERVAL = 72,
        WMT_WEAPON_FIRING_INTERVAL_WHEN_LOCKED = 73,
        WMT_WEAPON_OTHER_FIRE_MODE_FIRING_INTERVAL = 74,
        WMT_WEAPON_FIRE_DELAY = 75,
        WMT_WEAPON_MOVEMENT_DELAY = 76,
        WMT_WEAPON_SHOOT_DELAY_ANIM_RATE_SCALE = 77,
        WMT_WEAPON_SHOOT_DELAY_ANIM_DURATION_MS = 78,
        WMT_WEAPON_FIRE_SOUND = 79,
        WMT_WEAPON_SOUND_SUPERCHARGE = 80,
        WMT_WEAPON_CLIP_SIZE = 81,
        WMT_WEAPON_RELOAD_NUM = 82,
        WMT_WEAPON_RELOAD_RATE_SCALE = 83,
        WMT_WEAPON_AMMO_COST = 84,
        WMT_WEAPON_BRING_UP_RATE_SCALE = 85,
        WMT_WEAPON_BRING_DOWN_RATE_SCALE = 86,
        WMT_WEAPON_ZOOM_FOV = 87,
        WMT_WEAPON_ZOOM_TIME = 88,
        WMT_WEAPON_ZOOM_DELAY = 89,
        WMT_WEAPON_ZOOM_MODE = 90,
        WMT_WEAPON_ZOOM_IN_SOUND = 91,
        WMT_WEAPON_ZOOM_OUT_SOUND = 92,
        WMT_WEAPON_KICK = 93,
        WMT_WEAPON_PITCH = 94,
        WMT_WEAPON_SPREAD = 95,
        WMT_WEAPON_ZOOM_SPREAD = 96,
        WMT_WEAPON_CROUCH_SPREAD = 97,
        WMT_WEAPON_ZOOM_CROUCH_SPREAD = 98,
        WMT_WEAPON_MOVEMENT_SPEED_SCALE = 99,
        WMT_WEAPON_MOVEMENT_SPEED_SCALE_ZOOMED = 100,
        WMT_WEAPON_MOVEMENT_SPEED_SCALE_CROUCHED = 101,
        WMT_WEAPON_MOVEMENT_SPEED_SCALE_VS_MS_TABLE = 102,
        WMT_WEAPON_ANIMATED_SPINNY_THING_FIRE_MODE_CHANGE_DEGS = 103,
        WMT_WEAPON_ANIMATED_SPINNY_THING_FIRE_MODE_CHANGE_DEGS_PER_SECOND = 104,
        WMT_WEAPON_ANIMATED_SPINNY_THING_PER_SHOT_DEGS = 105,
        WMT_WEAPON_ANIMATED_SPINNY_THING_PER_SHOT_DEGS_PER_SECOND = 106,
        WMT_WEAPON_FEEDBACK_LARGE_CHANCE = 107,
        WMT_WEAPON_MOVEMENT_PREVENT_JUMP = 108,
        WMT_WEAPON_BURST_MODE = 109,
        WMT_WEAPON_BURST_SIZE = 110,
        WMT_WEAPON_BURST_INTERVAL = 111,
        WMT_WEAPON_BURST_AMMO_COST = 112,
        WMT_WEAPON_CHARGE_START_SOUND = 113,
        WMT_WEAPON_CHARGE_LOOPING_SOUND = 114,
        WMT_WEAPON_CHARGE_DISCHARGE_SOUND = 115,
        WMT_WEAPON_CHARGE_FULLY_CHARGED_SOUND = 116,
        WMT_WEAPON_CHARGE_TIME = 117,
        WMT_WEAPON_CHARGE_TIME_AFTER_HEADSHOT = 118,
        WMT_WEAPON_CHARGE_TIME_AFTER_DIRECT_HIT = 119,
        WMT_WEAPON_CHARGE_TIME_AFTER_EVERY_BURST_SHOT_HITS = 120,
        WMT_WEAPON_CHARGE_TIME_AFTER_NUM_FIRE_MODE_SHOTS = 121,
        WMT_WEAPON_CHARGE_VALUE_TABLE = 122,
        WMT_WEAPON_CHARGE_VALUE_MIN = 123,
        WMT_WEAPON_CHARGE_VALUE_MAX = 124,
        WMT_WEAPON_CHARGE_SHOT_COUNTS = 125,
        WMT_WEAPON_CHARGE_VALUES_AT_SHOT_COUNT_MAX_INDEX = 126,
        WMT_WEAPON_CHARGE_TIMEOUT = 127,
        WMT_WEAPON_CHARGE_TIMEOUT_AFTER_HEADSHOT = 128,
        WMT_WEAPON_CHARGE_TIMEOUT_AFTER_DIRECT_HIT = 129,
        WMT_WEAPON_CHARGE_TIMEOUT_AFTER_EVERY_BURST_SHOT_HITS = 130,
        WMT_WEAPON_CHARGE_TIMEOUT_AFTER_NUM_FIRE_MODE_SHOTS = 131,
        WMT_WEAPON_CHARGE_TIMEOUT_BLOCKS_OTHER_FIRE_MODE = 132,
        WMT_WEAPON_CHARGE_TIMEOUT_NO_SHOTS_FIRED = 133,
        WMT_WEAPON_CHARGE_TIMEOUT_ALL_SHOTS_FIRED = 134,
        WMT_WEAPON_CHARGE_ANIM_RATE_AFTER_HEADSHOT = 135,
        WMT_WEAPON_CHARGE_ANIM_RATE_AFTER_DIRECT_HIT = 136,
        WMT_WEAPON_CHARGE_MIN_CHARGE_TO_DISCHARGE = 137,
        WMT_WEAPON_CHARGE_PER_SHOT_INCREMENT = 138,
        WMT_WEAPON_CHARGE_INTERVAL_AOE_SPLASH_DAMAGE_DECL = 139,
        WMT_WEAPON_CHARGE_ENABLE_INTERVAL_GIVE_ITEMS = 140,
        WMT_WEAPON_CHARGE_ADDITIVE_ANIMATION = 141,
        WMT_WEAPON_CHARGE_ADDITIVE_ANIMATION_CLASSIC = 142,
        WMT_WEAPON_HEAT_INCREMENT = 143,
        WMT_WEAPON_HEAT_DECREMENT_RATE = 144,
        WMT_WEAPON_HEAT_MAX_PERCENT = 145,
        WMT_WEAPON_OVERHEAT_EPSILON = 146,
        WMT_WEAPON_OVERHEAT_DELAY = 147,
        WMT_WEAPON_ARC_COUNT = 148,
        WMT_WEAPON_ARC_DEPTH = 149,
        WMT_WEAPON_ARC_DISTANCE = 150,
        WMT_WEAPON_ARC_ATTRACT_FIREBALLS = 151,
        WMT_WEAPON_MINIGUN_RETURN_AMMO = 152,
        WMT_WEAPON_MINIGUN_HIGH_DAMAGE = 153,
        WMT_WEAPON_PLASMA_MULTI_TARGET = 154,
        WMT_WEAPON_BFG_RAPID_FIRE = 155,
        WMT_WEAPON_BFG_CHARGE = 156,
        WMT_WEAPON_BFG_BEAM = 157,
        WMT_WEAPON_BFG_SPHERE = 158,
        WMT_WEAPON_BFG_ARC = 159,
        WMT_WEAPON_BFG_BURN = 160,
        WMT_WEAPON_PROJECTILE_ANGULAR_ACCEL = 161,
        WMT_WEAPON_PROJECTILE_MAX_ANGULAR_VEL = 162,
        WMT_WEAPON_PROJECTILE_SPEED_SCALE = 163,
        WMT_WEAPON_PROJECTILE_DOT = 164,
        WMT_WEAPON_PROJECTILE_PLASMA_EMP_LIFETIME = 165,
        WMT_WEAPON_PROJECTILE_HITSCAN_PASS_THRU_ENEMIES = 166,
        WMT_WEAPON_PROJECTILE_FX_DECL = 167,
        WMT_WEAPON_PROJECTILE_HEADSHOT_FX_DECL = 168,
        WMT_WEAPON_PROJECTILE_EXPLODE_SOUND = 169,
        WMT_WEAPON_PROJECTILE_ALT_EXPLODE_SOUND = 170,
        WMT_WEAPON_PROJECTILE_LOCK = 171,
        WMT_WEAPON_PROJECTILE_DEVIATION_CONE_ANGLE = 172,
        WMT_WEAPON_PROJECTILE_PROXIMITY_FLARE_MAX_DIST = 173,
        WMT_WEAPON_PROJECTILE_PROXIMITY_FLARE_MIN_TARGETS = 174,
        WMT_WEAPON_PROJECTILE_PROXIMITY_FLARE_DECL_SPLASH_DAMAGE = 175,
        WMT_WEAPON_KILL_TO_CRIT = 176,
        WMT_WEAPON_DETONATE_PROJECTILES = 177,
        WMT_WEAPON_DETONATE_PROJECTILES_DELAY_MS = 178,
        WMT_WEAPON_DETONATE_PROJECTILES_MAX_NUM = 179,
        WMT_WEAPON_DETONATE_PROJECTILES_BOOST_TIMES = 180,
        WMT_WEAPON_DETONATE_PROJECTILES_DETONATE_TIMES = 181,
        WMT_WEAPON_DETONATE_PROJECTILES_DELAYED_PROJECTILE_OFFSET_ENABLE = 182,
        WMT_WEAPON_DETONATE_PROJECTILES_DELAYED_PROJECTILE_OFFSET_DISABLE = 183,
        WMT_WEAPON_DETONATE_PROJECTILES_DELAYED_PROJECTILE_ALT_SPLASH_DAMAGE_DECL_MASTERED = 184,
        WMT_WEAPON_TARGET_MAX_TARGETS = 185,
        WMT_WEAPON_TARGET_LOCK_TIME_MS = 186,
        WMT_WEAPON_TARGET_LOCK_FOV = 187,
        WMT_WEAPON_TARGET_LOCK_DIST = 188,
        WMT_WEAPON_TARGET_OUT_OF_FOV_TIME_MS = 189,
        WMT_WEAPON_TARGET_RECOVERY_MS = 190,
        WMT_WEAPON_TARGET_UNBREAKABLE_LOCK = 191,
        WMT_WEAPON_FX_DECL = 192,
        WMT_WEAPON_FX_DECL_TP = 193,
        WMT_WEAPON_FX_DECL_CLASSIC = 194,
        WMT_WEAPON_RETICLE_DECL = 195,
        WMT_WEAPON_AMMO_UPGRADE_LEVEL = 196,
        WMT_WEAPON_MOD_MASTERY = 197,
        WMT_WEAPON_MOD_ALMOST_MASTERY = 198,
        WMT_WEAPON_SHOTGUN_CHARGE_BURST_FULL_AUTO = 199,
        WMT_WEAPON_CHAINGUN_SPIN_UP_TIME_MS = 200,
        WMT_WEAPON_CHAINGUN_DRILLBACK_ROUNDS = 201,
        WMT_WEAPON_CHAINGUN_MOVEMENT_SPEED_SCALE_FIRING_FORWARD = 202,
        WMT_WEAPON_CHAINGUN_MOVEMENT_SPEED_SCALE_FIRING_BACK = 203,
        WMT_WEAPON_CHAINGUN_MOVEMENT_SPEED_SCALE_FIRING_STRAFE = 204,
        WMT_WEAPON_CHAINGUN_MOVEMENT_SPEED_SCALE_NOT_FIRING_FORWARD = 205,
        WMT_WEAPON_CHAINGUN_MOVEMENT_SPEED_SCALE_NOT_FIRING_BACK = 206,
        WMT_WEAPON_CHAINGUN_MOVEMENT_SPEED_SCALE_NOT_FIRING_STRAFE = 207,
        WMT_WEAPON_CHAINSAW_GLORY_KILL_AMMO_COST = 208,
        WMT_WEAPON_CHAINSAW_LOOT_PERCENT_INCREASE = 209,
        WMT_WEAPON_CHAINSAW_KILL_RECHARGE_EQUIPMENT = 210,
        WMT_WEAPON_CHAINSAW_KILL_RECHARGE_FLAME_BELCH = 211,
        WMT_WEAPON_CHAINSAW_AMMO_REGEN_SECS_PER_FUEL = 212,
        WMT_WEAPON_CHAINSAW_AMMO_REGEN_MAX_COUNT = 213,
        WMT_WEAPON_GLORY_KILL_ANYTHING = 214,
        WMT_WEAPON_DOOMBLADE_LEVEL_1 = 215,
        WMT_WEAPON_DOOMBLADE_LEVEL_2 = 216,
        WMT_WEAPON_DOOMBLADE_LEVEL_3 = 217,
        WMT_WEAPON_GAUSS_DESTROYER_SPLINTER = 218,
        WMT_WEAPON_GAUSS_DESTROYER_UNSPLINTER = 219,
        WMT_WEAPON_GENERIC_ANIM_SCALE = 220,
        WMT_WEAPON_DEBUFFED_AOE = 221,
        WMT_TOTAL = 222
    };

    enum weaponModSlot_t : int
    {
        WS_NONE = 0,
        WS_SIGHTS = 1,
        WS_MUZZLE = 2,
        WS_CLIP = 3,
        WS_STOCK = 4,
        WS_RECEIVER = 5
    };

    // what are we affecting on the weapon
    idUpgradeMod_Weapon::weaponModType_t type; // Offset: 0x8

    // operator type
    upgradeModOperator_t opType; // Offset: 0xC

    // value to use for this data mod
    upgradeDataValue_t data; // Offset: 0x10

    // the weapon slot this mod gets applied to
    idUpgradeMod_Weapon::weaponModSlot_t slot; // Offset: 0x88

    // Damage modifications only affect splash Damage.
    bool onlyAffectSplashDamage; // Offset: 0x8C

    // allows a weapon upgrade to apply to a mode other than the overall upgrade mode, or WEAPONFIREMODE_NONE to ignore
    weaponFireMode_t fireMode; // Offset: 0x90

}; // Size: 0x98
