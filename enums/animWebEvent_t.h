enum animWebEvent_t : int
{
    ANIMWEB_EVENT_NONE = -1,
    ANIMWEB_EVENT_START_BLEND_IN = 0,
    ANIMWEB_EVENT_START_BLEND_OUT = 1,
    ANIMWEB_EVENT_END_BLEND_IN = 2,
    ANIMWEB_EVENT_END_BLEND_OUT = 3,
    ANIMWEB_EVENT_DEST_START_BLEND_IN = 4,
    ANIMWEB_EVENT_DEST_END_BLEND_IN = 5,
    ANIMWEB_EVENT_DEST_CLAMPED = 6,
    ANIMWEB_EVENT_BLEND_NEXT_FRAME = 7,
    ANIMWEB_EVENT_CLAMP_NEXT_FRAME = 8,
    ANIMWEB_EVENT_DEST_WAS_CLAMPED = 9,
    ANIMWEB_EVENT_CLAMP_ANY = 10,
    ANIMWEB_EVENT_MAX = 11
};
