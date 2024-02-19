enum geomCacheStreamMask_t : unsigned int
{
    NONE = 0,
    INDICES = 1,
    POSITION = 2,
    TEXCOORDS = 4,
    TANGENTS = 8,
    BITANGENT_SIGNS = 16,
    COLOR = 32,
    GEO_DECAL_PROJ_DATA = 64,
    AUTO_SKIN_BASE_POSE = 128,
    AUTO_SKIN_TRANSFORMS = 256
};
