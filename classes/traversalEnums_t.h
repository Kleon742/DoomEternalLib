struct traversalEnums_t
{
    enum traversalFlags_t : unsigned int
    {
        TRAVERSAL_ENABLED = 1,
        EVASION_ONLY = 2,
        EMERGENCY_ONLY = 4,
        RUN_WHEN_DONE = 8,
        BIDIRECTIONAL = 16,
        FALL = 32,
        ALIGNTOOBJECT = 64,
        ENT_INTERACT = 128,
        ONLY_HEALTHY = 256,
        TELEPORT = 512,
        DELTA_CORRECT = 2048,
        OBSTACLE = 1048576,
        REMOVE = 2097152,
        EXTERNALLY_GATED = 1073741824
    };

    enum classFlags_t : unsigned int
    {
        CLASS_A = 33554432,
        CLASS_B = 67108864,
        CLASS_C = 134217728
    };

    enum monsterBits_t : unsigned int
    {
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_1 = 8388608,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_2 = 16777216,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_3 = 33554432,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_4 = 67108864,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_5 = 134217728,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_6 = 268435456
    };

}; // Size: 0x1
