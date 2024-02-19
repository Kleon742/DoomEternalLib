struct renderModelInfo_t
{
    enum enum_1F800 : int
    {
        ALLOW_INLINE_FLAG = 1,
        IS_SKY_FLAG = 2,
        NO_AMBIENT_FLAG = 4,
        NO_SHADOWS_FLAG = 8,
        LIGHTMAP_FROM_DYNAMIC_MODEL_FLAG = 16,
        STATIC_SHADOWS_FROM_DYNAMIC_MODEL_FLAG = 32,
        CONTRIBUTES_TO_LIGHT_PROBE_GEN_FLAG = 64,
        OCCLUDER_FLAG = 128,
        IS_ECHO_MODEL_FLAG = 256,
        ACCEPTS_DECALS_FLAG = 512,
        SCALE_FX_FLAG = 1024,
        IGNORE_DESATURATE_FLAG = 2048,
        AUGMENT_HIGHLIGHT_KEEPOUT_FLAG = 8192,
        AUGMENT_HIGHLIGHT_KEEPOUT_FILL_FLAG = 16384,
        CASTS_WATER_CAUSTICS = 32768,
        IS_BLENDED_OPACITY_MODEL_FLAG = 65536,
        DISABLE_GEO_DECALS = 131072,
        AMBIENT_FROM_STATIC_MODEL_FLAG = 262144
    };

    unsigned short layerIdx; // Offset: 0x0

    short staticModelName; // Offset: 0x2

    short modelStreamName; // Offset: 0x4

    unsigned short pad0; // Offset: 0x6

    idVec3 position; // Offset: 0x8

    idMat3 orientation; // Offset: 0x14

    idVec3 scale; // Offset: 0x38

    unsigned int flags; // Offset: 0x44

    int extended; // Offset: 0x48

}; // Size: 0x4C
