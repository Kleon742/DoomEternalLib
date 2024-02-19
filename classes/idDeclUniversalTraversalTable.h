struct idDeclUniversalTraversalTable : idDeclTypeInfo
{
    enum traversalType_t : int
    {
        NONE = 0,
        LEAP_ACROSS_64 = 1,
        LEAP_ACROSS_128 = 2,
        LEAP_ACROSS_192 = 3,
        LEAP_ACROSS_256 = 4,
        LEAP_ACROSS_384 = 5,
        LEAP_ACROSS_512 = 6,
        LEDGE_DOWN_64 = 7,
        LEDGE_DOWN_128 = 8,
        LEDGE_DOWN_192 = 9,
        LEDGE_DOWN_256 = 10,
        LEDGE_DOWN_384 = 11,
        LEDGE_DOWN_512 = 12,
        LEDGE_UP_64 = 13,
        LEDGE_UP_128 = 14,
        LEDGE_UP_192 = 15,
        LEDGE_UP_256 = 16,
        LEDGE_UP_384 = 17,
        LEDGE_UP_512 = 18,
        RAIL_DOWN_64 = 19,
        RAIL_DOWN_128 = 20,
        RAIL_DOWN_192 = 21,
        RAIL_DOWN_256 = 22,
        RAIL_DOWN_384 = 23,
        RAIL_DOWN_512 = 24,
        RAIL_UP_64 = 25,
        RAIL_UP_128 = 26,
        RAIL_UP_192 = 27,
        RAIL_UP_256 = 28,
        RAIL_UP_384 = 29,
        RAIL_UP_512 = 30,
        TRAVERSAL_TYPE_MAX = 30
    };

    enum monsterTypes_t : int
    {
        MONSTER_ARCHVILE = 1,
        MONSTER_BARON = 2,
        MONSTER_ARMORED_BARON = 4,
        MONSTER_CYBERDEMON = 8,
        MONSTER_HELLIFIED_SOLDIER = 16,
        MONSTER_HELLKNIGHT = 32,
        MONSTER_IMP = 64,
        MONSTER_MANCUBUS = 128,
        MONSTER_PINKY = 256,
        MONSTER_REVENANT = 512,
        MONSTER_ZOMBIE = 1024,
        MONSTER_GLADIATOR = 2048,
        MONSTER_SAMUEL_BOSS = 4096,
        MAX_MONSTER_TYPE_BITS = 13
    };

    struct animInfo_t
    {
        // traversal type name
        idStr type; // Offset: 0x0

        // anim web path
        idAnimWebPath path; // Offset: 0x30

        // start offset from entity origin {{ units = m }}
        idVec3 offset; // Offset: 0x60

        // amount to scale traversal on X-axis
        float xScale; // Offset: 0x6C

    }; // Size: 0x70

    struct animInfoList_t
    {
        // monster type name
        idStr monster; // Offset: 0x0

        // set of traversals
        idDeclUniversalTraversalTable::animInfo_t traversal[30]; // Offset: 0x30

    }; // Size: 0xD50

    // master table of MONSTERS x TRAVERSALS values for editing in decl file
    idDeclUniversalTraversalTable::animInfoList_t table[13]; // Offset: 0x88

}; // Size: 0xAD98
