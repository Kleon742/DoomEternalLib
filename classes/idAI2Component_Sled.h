struct idAI2Component_Sled : idAI2Component
{
    enum sledState_t : int
    {
        ATTACHED = 0,
        READY_TO_DETACH = 1,
        DETACHED_WAITING_FOR_CONFIRMATION = 2,
        DETACHED = 3
    };

    struct sledDetachInfo_t
    {
        struct jointTransform_t
        {
            idIndex < short , invalidJointIndex_t , - 1 > index; // Offset: 0x0

            idVec3 origin; // Offset: 0x4

            idMat3 axis; // Offset: 0x10

        }; // Size: 0x34

        idAnimator_Paused animator; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x58

        idVec3 origin; // Offset: 0x60

        idMat3 axis; // Offset: 0x6C

        unsigned char jointFilter[256]; // Offset: 0x90

        idStaticList < idAI2Component_Sled::sledDetachInfo_t::jointTransform_t , 20 , true , TAG_IDLIST > jointTransforms; // Offset: 0x190

    }; // Size: 0x5B8

    struct sledRocketInfo_t
    {
        enum sledFireState : int
        {
            NONE = 0,
            ROTATE = 1,
            FIRE_LEFT = 2,
            FIRE_RIGHT = 3,
            MAX = 4
        };

        idAI2Component_Sled::sledRocketInfo_t::sledFireState fireState; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > burstEndTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextRocketTime; // Offset: 0x10

    }; // Size: 0x18

    struct sledBossHUDInfo_t
    {
        bool staggered; // Offset: 0x0

        bool inMeleeRange; // Offset: 0x1

    }; // Size: 0x2

    struct chainsawData_t
    {
        // the chainsaw entity
        idManagedClassPtr < idEntity > chainsawEnt; // Offset: 0x0

        // Time the chainsaw stuck in the ground
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > stickTime; // Offset: 0x20

        // Time the chainsaw should explode
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > exlodeTime; // Offset: 0x28

    }; // Size: 0x30

    int sledMode; // Offset: 0x18

    bool showingShield; // Offset: 0x1C

    bool disableShield; // Offset: 0x1D

    bool disableShieldNeedsPainOverride; // Offset: 0x1E

    bool disableShieldFX; // Offset: 0x1F

    bool exploded; // Offset: 0x20

    // A oneShot damage scale destroyed the sled
    bool sledOneShotted; // Offset: 0x21

    // The last projectile that inflicted damage on the shield
    idManagedClassPtr < idProjectile > shieldLastInflictor; // Offset: 0x28

    // Ignore remaining damage from this inflictor
    idManagedClassPtr < idProjectile > ignoreInflictor; // Offset: 0x48

    idAI2Component_Sled::sledState_t sledState; // Offset: 0x68

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > sledDestroyedTime; // Offset: 0x70

    float shieldHitPoints; // Offset: 0x78

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > shieldDeactivateTime; // Offset: 0x80

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > shieldRechargeStartTime; // Offset: 0x88

    bool shieldRechargeStarted; // Offset: 0x90

    idColor shieldCurrentColor; // Offset: 0x94

    // cache of attacker
    idEntityPtr_ThreadSafe < idEntity > attacker; // Offset: 0xA8

    idAI2Component_Sled::sledDetachInfo_t detachInfo; // Offset: 0xC0

    idAI2Component_Sled::sledRocketInfo_t rocketInfo; // Offset: 0x678

    idAI2Component_Sled::sledBossHUDInfo_t bossHUDInfo; // Offset: 0x690

    idBossHazardTrail flameTrail; // Offset: 0x698

    idManagedClassPtr < idEntity > chainsawEnt; // Offset: 0x778

    idAtomicString chainsawTagName; // Offset: 0x798

    idList < idAI2Component_Sled::chainsawData_t , TAG_IDLIST , false > chainsawDataList; // Offset: 0x7A0

    // What scale to apply to the XY direction for the joint anmation when dropping a mine
    float mineJoinScale; // Offset: 0x7B8

    // ground query for dropping the mine
    idHavokQueryId mineZQuery; // Offset: 0x7C0

    // This is the offset at the final
    float zOffset; // Offset: 0x7C8

    // This is the position of the joint when the target is locked in place. It will be used to create the linear trajectory for LERPing
    idVec3 startingMinePos; // Offset: 0x7CC

    // The calculated final mine position
    idVec3 finalMinePos; // Offset: 0x7D8

    // Initial test position for where the mine will land
    idVec3 initialMineTestPos; // Offset: 0x7E4

    // Initial distance to where the mine will land
    float initialMineDistance; // Offset: 0x7F0

}; // Size: 0x7F8
