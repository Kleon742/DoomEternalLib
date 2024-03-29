enum fireControlValidationFlags_t : int
{
    AIFIRE_NONE = 0,
    AIFIRE_VISIBILITY = 1,
    AIFIRE_BODY_FACING = 2,
    AIFIRE_WEAPON_ATTRIBUTES = 4,
    AIFIRE_MUZZLE_ALIGNMENT = 8,
    AIFIRE_RANGE = 16,
    AIFIRE_EXPLICIT = 32,
    AIFIRE_COLLISION = 64,
    AIFIRE_TOKEN = 128
};
