enum lightCommandType_t : int
{
    LC_SET_ALL = 0,
    LC_FADE_ALL = 1,
    LC_SET_ALL_TO_ORIGINAL = 2,
    LC_FADE_ALL_TO_ORIGINAL = 3,
    LC_SET_COLOR = 4,
    LC_SET_ORIGINAL_COLOR = 5,
    LC_FADE_IN = 6,
    LC_FADE_OUT = 7,
    LC_FADE_TO_COLOR = 8,
    LC_FADE_TO_ORIGINAL_COLOR = 9,
    LC_PLAY_LIGHT_SOUND = 10,
    LC_STOP_LIGHT_SOUND = 11,
    LC_ACTIVATE_LIGHT = 12,
    LC_DEACTIVATE_LIGHT = 13,
    LC_SET_INTENSITY = 14,
    LC_FADE_INTENSITY = 15,
    LC_SET_SHADER = 16,
    LC_SET_MATERIAL = 17,
    LC_SET_RADIUS = 18,
    LC_FADE_RADIUS = 19,
    LC_ENABLE_SHADOWS = 20,
    LC_DISABLE_SHADOWS = 21,
    LC_WAIT_FOR_NEXT_ACTIVATE = 22
};