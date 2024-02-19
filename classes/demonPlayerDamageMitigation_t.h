struct demonPlayerDamageMitigation_t
{
    // AI this damage mitigation applies to
    aiMonsterType_t monsterType; // Offset: 0x0

    // max damage AI can take
    idBranchedOptionValue < declInputBranch_t , float > maxDamage; // Offset: 0x8

    // flat scale damage
    idBranchedOptionValue < declInputBranch_t , float > damageScalar; // Offset: 0x30

    // maxDamage is per frame
    bool damagePerFrame; // Offset: 0x58

    // start fall off dist
    float startFODist; // Offset: 0x5C

    // end fall off dist
    float endFODist; // Offset: 0x60

    // fall off scale
    idBranchedOptionValue < declInputBranch_t , float > fallOffScale; // Offset: 0x68

}; // Size: 0x90
