enum materialFlags_t : unsigned int
{
    MATERIAL_ZERO = 0,
    MATERIAL_CASTS_SHADOWS = 1,
    MATERIAL_IS_SKY = 2,
    MATERIAL_IS_FAKE_SKY = 4,
    MATERIAL_USES_REFRACTION = 8,
    MATERIAL_ALLOWS_DECALS = 16,
    MATERIAL_SKIP_SURFACE_INFO = 32,
    MATERIAL_USES_TEXTUREAXIS = 64,
    MATERIAL_TWOSIDED = 128,
    MATERIAL_IS_DISCRETE = 256,
    MATERIAL_IS_COMPOSITE = 512,
    MATERIAL_SORT_DOF = 1024,
    MATERIAL_TRANSPARENCY_FULL_RES = 2048,
    MATERIAL_IS_MULTILAYER = 4096,
    MATERIAL_PREZ_BLENDED = 8192,
    MATERIAL_SKIP_INSTANCE_LIGHTMAP = 16384,
    MATERIAL_NON_RUNTIME_MARKUP_ONLY = 32768,
    MATERIAL_USES_WATER_FFT = 65536,
    MATERIAL_ALLOW_MINMIP_SELECTION = 131072,
    MATERIAL_ALWAYS_CAST_SHADOWS = 262144,
    MATERIAL_WATER_NO_DRAW = 524288,
    MATERIAL_SHADOWCACHE_FORCE_LOD0 = 1048576
};