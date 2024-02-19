enum aiTraversalGenFlags_t : unsigned int
{
    FLAG_NONE = 0,
    FLAG_USE_RENDERMODEL_GEO = 4,
    FLAG_MINIMUM_SPANNING = 8,
    FLAG_CHECK_PATH_DIST = 16,
    FLAG_TEST_ANIM_CLIPPING = 32,
    FLAG_TEST_ANIM_DELTA = 64,
    FLAG_TEST_EDGE_CROSSING = 128,
    FLAG_APPLY_RADIUS_TO_CLICKS = 256,
    FLAG_ANIMWEB_ADJACENT = 512,
    FLAG_SINGLE_RESULT = 1024,
    FLAG_RESTRICT_CLIP_TESTS_TO_DC_WINDOW = 2048
};