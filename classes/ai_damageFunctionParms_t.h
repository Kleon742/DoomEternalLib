struct ai_damageFunctionParms_t
{
    idDamageParms damageParms; // Offset: 0x0

    // used for multi-threading
    idAIDamageInfo damageInfo; // Offset: 0xA50

    idStaticList < trace_t , 32 , false , TAG_IDLIST > traces; // Offset: 0x64E0

    // {{ units = m }}
    idArray < idVec3 , 32 > impactPoints; // Offset: 0x74F8

    idArray < idIndex < short , invalidJointIndex_t , - 1 > , 32 > hitJointIndices; // Offset: 0x7678

    idArray < idAtomicString , 32 > hitTestGroupNames; // Offset: 0x76B8

    idArray < int , 32 > bodyIDs; // Offset: 0x77B8

    idArray < int , 32 > damageGroupIndices; // Offset: 0x7838

    idArray < const idDamageGroup * , 32 > damageGroups; // Offset: 0x78B8

    idVec3 dir; // Offset: 0x79B8

    idEntityPtr_ThreadSafe < idEntity > inflictor; // Offset: 0x79C8

    idEntityPtr_ThreadSafe < idEntity > attacker; // Offset: 0x79E0

    float* rval_float; // Offset: 0x79F8

    float damageScale; // Offset: 0x7A00

    int earlyOutType; // Offset: 0x7A04

    float scaledDamage_forEntityDamageComponent; // Offset: 0x7A08

    float baseDamage; // Offset: 0x7A0C

    float scaledDamage; // Offset: 0x7A10

    float bodyDamage; // Offset: 0x7A14

    float armorDamage; // Offset: 0x7A18

    float limbDamage; // Offset: 0x7A1C

    float softTargetDamage; // Offset: 0x7A20

    float startingHealth; // Offset: 0x7A24

    damageCategoryMask_t categoryMask; // Offset: 0x7A28

    weaponStatsTag_t weaponStatsTag; // Offset: 0x7A30

    bool armorPoppedOff; // Offset: 0x7A40

    bool wasDead; // Offset: 0x7A41

}; // Size: 0x7A48
