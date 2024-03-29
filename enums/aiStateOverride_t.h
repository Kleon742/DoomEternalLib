enum aiStateOverride_t : int
{
    AIOVERRIDE_DEFAULT = 0,
    AIOVERRIDE_FORCE_AWARENESS_OF_PLAYER = 1,
    AIOVERRIDE_FORCE_AWARENESS_OF_ENTITY = 2,
    AIOVERRIDE_FORCE_SEARCH_TO_PLAYER = 3,
    AIOVERRIDE_FORCE_SEARCH_TO_ENTITY = 4,
    AIOVERRIDE_CHARGE_MELEE_PLAYER = 5,
    AIOVERRIDE_PLAY_ENTRANCE_ANIMATION = 6,
    AIOVERRIDE_PLAY_ENTRANCE_ANIMATION_WITH_CORRECTION = 7,
    AIOVERRIDE_FORCE_MOVE_TO_ENTITY = 8,
    AIOVERRIDE_FORCE_MOVE_TO_TRAVERSAL = 9,
    AIOVERRIDE_FORCE_TELEPORT_TO_TRAVERSAL = 10,
    AIOVERRIDE_TELEPORT = 11,
    AIOVERRIDE_TELEPORT_FORCE_SPAWN_ANGLE = 12,
    AIOVERRIDE_SPAWN_ANIM_IDLE = 13,
    AIOVERRIDE_SPAWNED_BY_SYNC_ENTITY = 14,
    AIOVERRIDE_WANDER = 15,
    AIOVERRIDE_ENTRANCE_ANIM_NO_ENEMIES = 16,
    AIOVERRIDE_TELEPORT_NO_ENEMIES = 17,
    AIOVERRIDE_FORCE_TELEPORT_TO_FLIGHT_ENTRANCE = 18,
    AIOVERRIDE_FORCE_TELEPORT_TO_FLIGHT_SPLINE = 19,
    AIOVERRIDE_MAX = 20
};
