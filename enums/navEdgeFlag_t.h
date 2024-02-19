enum navEdgeFlag_t : unsigned short
{
    WALL = 1,
    LEDGE = 2,
    WALL_CORNER = 4,
    LEDGE_CORNER = 8,
    STEP_TOP = 16,
    STEP_BOTTOM = 32,
    VERTICAL = 64,
    WATER = 128,
    LADDER = 256,
    STEP_SIDE = 512,
    WALL_CORNER_V0 = 1024,
    WALL_CORNER_V1 = 2048,
    FAKE = 4096,
    MAX = 4097
};
