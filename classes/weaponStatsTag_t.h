struct weaponStatsTag_t
{
    // player this tag is for (max 64 players)
    unsigned int entitynum; // Offset: 0x0

    // shot counter (max 1024 shots per frame)
    unsigned int shotnum; // Offset: 0x0

    // time event happened (max delay time 69.9 mins)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gametime; // Offset: 0x8

}; // Size: 0x10
