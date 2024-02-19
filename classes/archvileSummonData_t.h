struct archvileSummonData_t
{
    // ai to spawn
    idDeclEntityDef* entityDef; // Offset: 0x0

    // min time it takes to get to summon pull
    idTypesafeTime < float , secondUnique_t , 1 > summonTime_min; // Offset: 0x8

    // max time it takes to get to summon pull
    idTypesafeTime < float , secondUnique_t , 1 > summonTime_max; // Offset: 0xC

    // number of simultaneous guys to spawn
    int numToSpawn; // Offset: 0x10

    // the type of summon bits this entry satisfies
    aiSummonType_t summonType; // Offset: 0x14

    // monster type of this summon
    aiMonsterType_t monsterType; // Offset: 0x18

    // place the guy this far from archvile
    float distanceFromArchvile; // Offset: 0x20

    // don't get closer to other stuff than this
    float minClearance; // Offset: 0x24

    // offset from ground - used for flying AIs
    float groundZOffset; // Offset: 0x28

}; // Size: 0x30
