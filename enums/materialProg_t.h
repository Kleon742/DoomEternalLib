enum materialProg_t : int
{
    MPR_SHADOW = 0,
    MPR_Z_PREPASS = 1,
    MPR_COVERAGE = 2,
    MPR_NUM_BASE = 3,
    MPR_ADD = 3,
    MPR_BLEND = 4,
    MPR_STAGE = 5,
    MPR_FADE_PERTURB = 6,
    MPR_PARTICLE_LIGHT_ATLAS = 7,
    MPR_DEPTH_FIXUP = 8,
    MPR_GEO_DECALS = 9,
    MPR_MAX = 10,
    MPR_FIRST_MULTI = 3,
    MPR_NUM_MULTI = 7
};
