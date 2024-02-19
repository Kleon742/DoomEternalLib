struct idMeleeTrace : idClass
{
    struct idHavokQueries
    {
        // main query
        idHavokQueryId query; // Offset: 0x0

        idHavokMultiHitQueryId query_multi; // Offset: 0x8

        // if there is a joint2
        idHavokQueryId query2; // Offset: 0x10

        idHavokMultiHitQueryId query2_multi; // Offset: 0x18

    }; // Size: 0x20

    // main queries
    idMeleeTrace::idHavokQueries queries; // Offset: 0x10

    // queries for ::PastUpdate
    idMeleeTrace::idHavokQueries pastUpdateQueries; // Offset: 0x30

    // callback function for we hit something so the owner can handle it their way
    bool (*hitCallback)(const trace_t & trace , idMeleeTrace & meleeTrace , idAnimatedEntity * const owner , const idVec3 & startPos , const idVec3 & curPos , const idVec3 & curPos2 , const bool pastUpdate); // Offset: 0x50

    bool (*multiHitCallback)(const multiHitTrace_t & trace , idMeleeTrace & meleeTrace , idAnimatedEntity * const owner , const idVec3 & startPos , const idVec3 & curPos , const idVec3 & curPos2 , const bool pastUpdate); // Offset: 0x58

    // damage decl to use when something is hit
    idDeclDamage* damageDef; // Offset: 0x60

    // impact effect to use when something is hit
    idDeclImpactEffect* impactEffect; // Offset: 0x68

    // joint to get positions from
    idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x70

    // also trace from joint to joint2
    idIndex < short , invalidJointIndex_t , - 1 > jointIndex2; // Offset: 0x72

    // tag data instead of jointIndex
    tagData_t tagData; // Offset: 0x74

    // which animator to use for tag data
    bool useWeaponAnimator; // Offset: 0x94

    // use tag data instead of joint
    bool useTagData; // Offset: 0x95

    // use tag data from the weapon, not AI
    bool weaponTagData; // Offset: 0x96

    // has this trace hit something
    bool hasHit; // Offset: 0x97

    // max points to sweep before ending, or -1 for unlimited
    int numSamples; // Offset: 0x98

    // full sweep will never apply more than this damage
    float damageCap; // Offset: 0x9C

    // MS interval between successive damage to target
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageInterval; // Offset: 0xA0

    // MS interval between successive damage to world, or -1 to use damageIntervalMS
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageIntervalWorld; // Offset: 0xA8

    // tracks last damage time so that damage interval is respected
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0xB0

    // tracks next damage time so that damage interval is respected
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDamageTime; // Offset: 0xB8

    // type of melee this is
    meleeDamage_t meleeType; // Offset: 0xC0

    // bounds to sweep from point to point
    unsigned char boundsType; // Offset: 0xC4

    // last position to sweep from {{ units = m }}
    idVec3 prevPos; // Offset: 0xC8

    // idClipModel *clipModel; clip model if BOUNDS_CUSTOM
    idHavokShape* havokShape; // Offset: 0xD8

    // the entity that was hit
    idManagedClassPtr < idEntity > hitEntity; // Offset: 0xE0

    // the hit origin {{ units = m }}
    idVec3 hitOrigin; // Offset: 0x100

    // the hit axis
    idMat3 hitAxis; // Offset: 0x10C

    // used during MELEE_CONTINUOUS_MULTI_ACTOR to remember actors to avoid damaging them again
    idStaticList < idManagedClassPtr < idEntity > , 10 , false , TAG_IDLIST > hitEntities; // Offset: 0x130

    // RCM Fixme: changed this to idDeclWeapon instead of idWeapon pointer to avoid a crash on removing inventory items, but this needs to be investigated weapon that the trace applies to (added from Doom4)
    idDeclWeapon* weaponDecl; // Offset: 0x288

    // time the last melee trace started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x290

    // last time we hit an entity
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHitTime; // Offset: 0x298

    // last place where something was hit
    idVec3 lastHitPos; // Offset: 0x2A0

    idStr aiWalkState; // Offset: 0x2B0

    idStr aiCurAnimation; // Offset: 0x2E0

    idStr aiDestAnimation; // Offset: 0x310

    idDeclAiEvent* hitEventDecl; // Offset: 0x340

    idHavokShapePointer customBounds; // Offset: 0x348

    bool useMultiHitTraces; // Offset: 0x350

}; // Size: 0x358
