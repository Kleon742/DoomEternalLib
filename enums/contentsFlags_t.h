enum contentsFlags_t : int
{
    CONTENTS_SOLID = 1,
    CONTENTS_OPAQUE = 2,
    CONTENTS_WATER = 4,
    CONTENTS_PLAYERCLIP = 8,
    CONTENTS_MONSTERCLIP = 16,
    CONTENTS_DEMONPLAYERCLIP = 32,
    CONTENTS_MOVEABLECLIP = 64,
    CONTENTS_SHOTCLIP = 128,
    CONTENTS_IKCLIP = 256,
    CONTENTS_AIAWARE = 512,
    CONTENTS_AI = 1024,
    CONTENTS_PROJECTILE = 2048,
    CONTENTS_CORPSE = 4096,
    CONTENTS_BREAKABLE = 8192,
    CONTENTS_TRIGGER = 16384,
    CONTENTS_PLAYER = 32768,
    CONTENTS_TEAM_ONE = 65536,
    CONTENTS_OBSTACLE = 131072,
    CONTENTS_TEAM_TWO = 262144,
    CONTENTS_PLAYERCOVERCLIP = 524288,
    CONTENTS_SOLIDPUSHABLE = 1048576,
    CONTENTS_PLAYERFOCUS = 2097152,
    CONTENTS_PUSHABLE = 4194304,
    CONTENTS_NO_TELEPORT = 8388608,
    CONTENTS_WALL_GRAB_CLIP = 16777216,
    CONTENTS_AAS_FLY = 33554432,
    CONTENTS_AAS_SOLID = 67108864,
    CONTENTS_AAS_OBSTACLE = 134217728,
    CONTENTS_AAS_CLUSTER_PORTAL = 268435456,
    CONTENTS_AAS_WALKABLE_WALL = 536870912,
    CONTENTS_EMPTY = 1073741824,
    CONTENTS_DO_NOT_USE = -2147483648
};
