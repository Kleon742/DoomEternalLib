enum aas2AreaFlag_t : unsigned int
{
    AAS_AREA_LEDGE = 1,
    AAS_AREA_REACHABLE_WALK = 2,
    AAS_AREA_OUTSIDE = 4,
    AAS_AREA_HIGH_CEILING = 8,
    AAS_AREA_NOPUSH = 16,
    AAS_AREA_CONTENTS_SOLID = 256,
    AAS_AREA_CONTENTS_WATER = 512,
    AAS_AREA_CONTENTS_CLUSTERPORTAL = 1024,
    AAS_AREA_CONTENTS_OBSTACLE = 2048,
    AAS_AREA_FAKE = 4096,
    AAS_AREA_CONTENTS_FLY = 8192,
    AAS_AREA_HIGH_GROUND = 16384,
    AAS_AREA_FLOOD_VISITED = 32768,
    AAS_AREA_MAX = 32769
};