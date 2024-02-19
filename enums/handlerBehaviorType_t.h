enum handlerBehaviorType_t : int
{
    HB_INVALID = -1,
    HB_ALWAYS_INACTIVE = 0,
    HB_ALWAYS_ACTIVE = 1,
    HB_SINGLE_USE = 2,
    HB_COOLDOWN = 3,
    HB_INVERSE_COOLDOWN = 4,
    HB_MAX_BEHAVIORS = 5
};
