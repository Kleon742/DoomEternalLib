enum whipEventType_t : int
{
    WHIP_EVENT_GENERIC_ACTION_START = 0,
    WHIP_EVENT_GENERIC_ACTION_END = 1,
    WHIP_EVENT_DIRECTSTRIKE_START = 2,
    WHIP_EVENT_DIRECTSTRIKE_DAMAGE = 3,
    WHIP_EVENT_DIRECTSTRIKE_END = 4,
    WHIP_EVENT_TRAVERSAL_START = 5,
    WHIP_EVENT_TRAVERSAL_ATTACH = 6,
    WHIP_EVENT_TRAVERSAL_DETACH = 7,
    WHIP_EVENT_TRAVERSAL_END = 8,
    WHIP_EVENT_CLEAROUT_START = 9,
    WHIP_EVENT_CLEAROUT_END = 10,
    WHIP_EVENT_LEAP_START = 11,
    WHIP_EVENT_LEAP_ATTACH = 12,
    WHIP_EVENT_LEAP_DETACH = 13,
    WHIP_EVENT_LEAP_END = 14,
    WHIP_EVENT_LASH_START = 15,
    WHIP_EVENT_LASH_FORWARD_START = 16,
    WHIP_EVENT_LASH_FORWARD_END = 17,
    WHIP_EVENT_LASH_END = 18,
    WHIP_EVENT_CACHE_MODEL_TRANSFORM = 19,
    WHIP_EVENT_MAX = 20
};
