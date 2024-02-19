struct idAIDamageInfo
{
    struct recentDamager_t
    {
        idSpawnId spawnId; // Offset: 0x0

        float recentDamage; // Offset: 0x4

    }; // Size: 0x8

    // all damage impulses over the course of a frame
    idStaticList < idDamageImpulse , 8 , false , TAG_IDLIST > impulses; // Offset: 0x0

    // object that killed us (usually a projectile, may be NULL)
    idEntityPtr_ThreadSafe < idEntity > inflictor; // Offset: 0x59D8

    // entity that caused the killing blow
    idEntityPtr_ThreadSafe < idEntity > attacker; // Offset: 0x59F0

    // list of recent damagers
    idStaticList < idAIDamageInfo::recentDamager_t , 4 , false , TAG_IDLIST > recentDamagers; // Offset: 0x5A08

    // joint where the damage is being applied
    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x5A40

    // index of the impulse that killed the AI, if < 0, the AI wasn't killed this frame
    int deathImpulseIdx; // Offset: 0x5A44

    // amount of damage over last frame
    float frameDamage; // Offset: 0x5A48

    // amount of damage applied to armor over the last frame
    float frameArmorDamage; // Offset: 0x5A4C

    // amount of recent raw damage (decaying over time)
    float recentUnscaledDamage; // Offset: 0x5A50

    // amount of recent health damage (decaying over time)
    float recentBodyDamage; // Offset: 0x5A54

    // the last time this actor sprayed blood from pain
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBloodSprayTime; // Offset: 0x5A58

    // the index to the damage group that has taken the most damage
    int mostDamagedIndex; // Offset: 0x5A60

    idAtomicString painGroupName; // Offset: 0x5A68

    // index into the injured state index array for the current injured state
    int injuredStateIndex; // Offset: 0x5A70

    // injury state index prior to current injuredStateIndex
    int lastInjuredStateIndex; // Offset: 0x5A74

    // if true, this pain is caused by the injury state code
    bool painFromInjuredState; // Offset: 0x5A78

    // the last time armor was hit
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastArmorHitTime; // Offset: 0x5A80

    // the last time a 'soft target' was hit
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > softTargetHitTime; // Offset: 0x5A88

}; // Size: 0x5A90
