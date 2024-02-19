struct idProjectile_BfgArc : idProjectile_Rocket
{
    struct arcStunInfo_t
    {
        idManagedClassPtr < idEntity > sourceEntity; // Offset: 0x0

        idManagedClassPtr < idEntity > targetEntity; // Offset: 0x20

        bool inUse; // Offset: 0x40

        // {{ units = m }}
        idVec3 sourcePos; // Offset: 0x44

        // {{ units = m }}
        idVec3 targetPos; // Offset: 0x50

        idRibbon2 ribbon; // Offset: 0x60

        idRibbon2 ribbon2; // Offset: 0x178

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > expireTime; // Offset: 0x290

        bool blocking; // Offset: 0x298

        bool isInStagger; // Offset: 0x299

    }; // Size: 0x2A0

    struct traceQuery_t
    {
        idHavokQueryId query; // Offset: 0x0

        idManagedClassPtr < idEntity > ai; // Offset: 0x8

        bool ranQuery; // Offset: 0x28

    }; // Size: 0x30

    struct deferredArcDamage_t
    {
        // the entity having damage deferred
        idManagedClassPtr < idEntity > ent; // Offset: 0x0

        // how many times damage has been deferred
        int num; // Offset: 0x20

        // time when the deferred damage will be applied
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeToApply; // Offset: 0x28

        float damageScale; // Offset: 0x30

    }; // Size: 0x38

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > targetList; // Offset: 0x3038

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > prevTargetList; // Offset: 0x3050

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > ignoreList; // Offset: 0x3068

    idProjectileTarget projectileTarget; // Offset: 0x3080

    idStaticList < idProjectile_BfgArc::arcStunInfo_t , 10 , false , TAG_IDLIST > arcStunList; // Offset: 0x30B8

    int numArcTargets; // Offset: 0x4B10

    bool usesViewInfoForTargeting; // Offset: 0x4B14

    idStaticList < idProjectile_BfgArc::traceQuery_t , 50 , false , TAG_IDLIST > traceQuery; // Offset: 0x4B18

    // if non-zero, lifetime (in MS) of this object
    idTypesafeTime < int , millisecondUnique_t , 1000 > lifetimeMS; // Offset: 0x5490

    // standard arcing if true, chooses closest targets. if false, chooses random targets regardless of distance.
    bool chooseClosestTargets; // Offset: 0x5494

    // the ribbon effect that should play...
    idDeclRibbon2* ribbonEffect; // Offset: 0x5498

    // the ribbon effect that should play...
    idDeclRibbon2* ribbonEffect2; // Offset: 0x54A0

    // sound made while zapping enemy
    idSoundEvent* arcSound; // Offset: 0x54A8

    // sound made when an arc is started
    idSoundEvent* arcStartSound; // Offset: 0x54B0

    // amount of time to continually zap an enemy (chooses new enemy after this time expires)
    float arcTimeSec; // Offset: 0x54B8

    // max distance from projectile that an enemy can get zapped {{ units = m }}
    float arcRange; // Offset: 0x54BC

    // damage applied while zapping enemy
    idDeclDamage* arcDamage; // Offset: 0x54C0

    // defer arc damage for a randomized length of time to vary behavior
    idTypesafeTime < int , millisecondUnique_t , 1000 > arcDamageDeferMSMin; // Offset: 0x54C8

    // per AI and avoid having all fodder enemies instantly explode in unison
    idTypesafeTime < int , millisecondUnique_t , 1000 > arcDamageDeferMSMax; // Offset: 0x54CC

    // deferred arc damage
    idList < idProjectile_BfgArc::deferredArcDamage_t , TAG_IDLIST , false > deferredArcDamage; // Offset: 0x54D0

    // impact effect to play when an arc first hits a target
    idDeclImpactEffect* arcImpactEffect; // Offset: 0x54E8

    // how many arc targets are allowed at one time
    int maxArcTargets; // Offset: 0x54F0

    // creator of this entity must have targeted AI for this projectile. otherwise, this is immediately removed
    bool mustHaveAiTarget; // Offset: 0x54F4

    // optionally spawn a projectile entity at each arc target
    idDeclEntityDef* explodeProjectileAtArcTarget; // Offset: 0x54F8

    // perk decl required for bfg tendrils to damage demon players
    idDeclPerk* bfgTendrilPerk; // Offset: 0x5500

    // chaining arcs maximum number of chains that can be created
    int chainIterationMax; // Offset: 0x5508

    // maximum trace queries per frame (ie: max number of AI that will be arc'd to in one frame)
    int maxQueriesPerFrame; // Offset: 0x550C

    // damage multiplying factor when damaging demon players
    float demonPlayerDamageScale; // Offset: 0x5510

    // because BFG projectile is huge, when the collision is with the world, do a one-frame test ignoring the world to be sure AI are not being missed
    bool oneFrameCollisionIgnoreWorld; // Offset: 0x5514

    // used to save the clip mask for restoration after the one frame collision ignoring world
    int clipMaskSave; // Offset: 0x5518

    bool stopTendrilsAttackingHellCube; // Offset: 0x551C

}; // Size: 0x5520
