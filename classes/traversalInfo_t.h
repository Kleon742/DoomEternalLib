struct traversalInfo_t
{
    enum traversalFlags_t : int
    {
        TRAVERSAL_FLAG_ENABLED = 1,
        TRAVERSAL_FLAG_EVASION = 2,
        TRAVERSAL_FLAG_EMERGENCY = 4,
        TRAVERSAL_FLAG_RUNWHENDONE = 8,
        TRAVERSAL_FLAG_BIDIRECTIONAL = 16,
        TRAVERSAL_FLAG_FALL = 32,
        TRAVERSAL_FLAG_ALIGNTOOBJECT = 64,
        TRAVERSAL_FLAG_ENT_INTERACT = 128,
        TRAVERSAL_FLAG_ONLY_HEALTHY = 256,
        TRAVERSAL_FLAG_TELEPORT = 512,
        TRAVERSAL_FLAG_DELTA_CORRECT = 2048,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_1 = 4096,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_2 = 8192,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_3 = 16384,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_4 = 32768,
        TRAVERSAL_FLAG_MONSTER_TYPE_BIT_5 = 65536,
        TRAVERSAL_FLAG_OBSTACLE = 1048576,
        TRAVERSAL_FLAG_CLASS_A = 33554432,
        TRAVERSAL_FLAG_CLASS_B = 67108864,
        TRAVERSAL_FLAG_CLASS_C = 134217728,
        TRAVSERAL_FLAG_EXTERNALLY_GATED = 1073741824
    };

    // animation
    idAnimWebPath anim; // Offset: 0x0

    // traversal usage flags
    traversalInfo_t::traversalFlags_t flags; // Offset: 0x30

    // the layer this traversal applies to
    aasType_t aasLayer; // Offset: 0x34

}; // Size: 0x38
