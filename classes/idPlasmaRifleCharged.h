struct idPlasmaRifleCharged : idWeapon
{
    enum microwaveMuzzleSelector_t : int
    {
        MICROWAVE_MUZZLE_WEAPON = 0,
        MICROWAVE_MUZZLE_LAUNCHER_LEFT = 1,
        MICROWAVE_MUZZLE_LAUNCHER_RIGHT = 2,
        MICROWAVE_MUZZLE_NUM = 3
    };

    struct microwaveRibbonInfo_t
    {
        // originally thought more data would be here. leaving it in a struct just in case more per-ribbon data is needed. for rendering beam (ribbon)
        idRibbon2 ribbon2; // Offset: 0x0

    }; // Size: 0x118

    struct microwaveMuzzleInfo_t
    {
        // front pos of ribbon
        idVec3 startPos; // Offset: 0x0

        // end pos of ribbon
        idVec3 endPos; // Offset: 0xC

        // true if 'endPos' reached 'goalPos'
        bool reachedEnd; // Offset: 0x18

        // muzzle position
        idVec3 muzzlePos; // Offset: 0x1C

        // muzzle axis
        idMat3 muzzleAxis; // Offset: 0x28

        // visual rendering of beam
        idStaticList < idPlasmaRifleCharged::microwaveRibbonInfo_t , 3 , false , TAG_IDLIST > ribbonInfo; // Offset: 0x50

    }; // Size: 0x3B0

    struct microwaveTargetInfo_t
    {
        // active target
        idManagedClassPtr < idEntity > target; // Offset: 0x0

        // last active target
        idManagedClassPtr < idEntity > lastTarget; // Offset: 0x20

        // multiple traces along the spline path
        idList < idTraceHelper , TAG_IDLIST , false > beamTraces; // Offset: 0x40

        // index into 'beamTraces' where collision occurs
        int beamTraceCollisionIndex; // Offset: 0x58

        // target's goal pos
        idVec3 goalPos; // Offset: 0x5C

        idStaticList < idPlasmaRifleCharged::microwaveMuzzleInfo_t , 3 , false , TAG_IDLIST > muzzleInfo; // Offset: 0x68

    }; // Size: 0xB90

    struct splineOfs_t
    {
        idVec3 goalOfs; // Offset: 0x0

        idVec3 ofs; // Offset: 0xC

    }; // Size: 0x18

    struct beamDamageInfo_t
    {
        idManagedClassPtr < idActor > actor; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > beamTime; // Offset: 0x20

        int lastDamageFrame; // Offset: 0x28

        idTypesafeTime < int , millisecondUnique_t , 1000 > killTimeMS; // Offset: 0x2C

        bool isBeingDamaged; // Offset: 0x30

        bool hasExploded; // Offset: 0x31

        bool damageStateChanged; // Offset: 0x32

        fxCondition_t fxCondition; // Offset: 0x34

        idDeclEntityDef* cookedAiExplosionDecl; // Offset: 0x38

        idTypesafeTime < int , millisecondUnique_t , 1000 > upgradedConcussionDelayMS; // Offset: 0x40

        idDeclEntityDef* upgradedConcussionDecl; // Offset: 0x48

    }; // Size: 0x50

    // the targeting barb, if any
    idManagedClassPtr < idProjectile > targetingBarb; // Offset: 0x3BA0

    // instantiated to see its data
    idManagedClassPtr < idProjectile_Rocket > instantiatedPlasmaEnt; // Offset: 0x3BC0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > releaseTargetingDelayTime; // Offset: 0x3BE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeReductionTime; // Offset: 0x3BE8

    idStr debugBarTargetingBarbLifetimeName; // Offset: 0x3BF0

    int microwaveTierNum; // Offset: 0x3C20

    float chargePercentForSupercharge; // Offset: 0x3C24

    float controlPointSpacing; // Offset: 0x3C28

    int numControlPoints; // Offset: 0x3C2C

    int maxControlPoints; // Offset: 0x3C30

    bool wasRangeUpgradeActive; // Offset: 0x3C34

    // when this is true, targeting is turned off (locally) -- requires player to release and re-trigger to target a new AI
    bool microwaveWaitingForTriggerRelease; // Offset: 0x3C35

    // Starting or stopping fx when we have a target (or when we gain a target)
    bool startedHasTargetFX; // Offset: 0x3C36

    // starting or stopping fx when we don't have a target (or when we lose current target)
    bool startedNoTargetFX; // Offset: 0x3C37

    // starting/stopping fx that need to run regardless of if we have a target or not
    bool startedIdleFX; // Offset: 0x3C38

    idTraceHelper microwaveTraceForward; // Offset: 0x3C40

    idMat3 targetFireAxis; // Offset: 0x3D10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > firingStartedTime; // Offset: 0x3D38

    // microwave mod weapon data
    idDeclWeapon_PlasmaRifleData::secondary_force_beam_t* forceBeamDecl; // Offset: 0x3D40

    idStaticList < idPlasmaRifleCharged::microwaveTargetInfo_t , 2 , false , TAG_IDLIST > microwaveTargets; // Offset: 0x3D48

    // fluctuating offsets for each node along the spline
    idStaticList < idPlasmaRifleCharged::splineOfs_t , 32 , false , TAG_IDLIST > splineNodeOfs; // Offset: 0x5480

    // spline
    idCurve_UniformCubicBSpline < idVec3 > spline; // Offset: 0x5798

    // phase shift
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > phaseShiftEndTime; // Offset: 0x5800

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cooldownEndTime; // Offset: 0x5808

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSoundTime; // Offset: 0x5810

    bool phaseShiftActive; // Offset: 0x5818

    bool playedReadySound; // Offset: 0x5819

    bool microwaveIsEquipped; // Offset: 0x581A

    bool microwaveIsFiring; // Offset: 0x581B

    idList < idPlasmaRifleCharged::beamDamageInfo_t , TAG_IDLIST , false > beamDamageInfo; // Offset: 0x5820

}; // Size: 0x5838
