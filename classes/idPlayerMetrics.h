struct idPlayerMetrics : idEventReceiver
{
    struct idDemonKilledByWeapon
    {
        weaponDamageTypeBits_t typeBits; // Offset: 0x0

        bool kill; // Offset: 0x8

    }; // Size: 0x10

    struct bossVoiceOverInstance_t
    {
        idSpawnId spawnId; // Offset: 0x0

        idEventReceiver eventReceiver; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > firstDamageTime; // Offset: 0x40

        idTypesafeTime < int , millisecondUnique_t , 1000 > damageWindowTime; // Offset: 0x48

        float damageThreshold; // Offset: 0x4C

        float totalDamageInWindow; // Offset: 0x50

    }; // Size: 0x58

    struct statsTagKillCount_t
    {
        weaponStatsTag_t statsTag; // Offset: 0x0

        int count; // Offset: 0x10

    }; // Size: 0x18

    struct killCountInfo_t
    {
        // circular index
        int index; // Offset: 0x0

        // list of kills
        idStaticList < idPlayerMetrics::statsTagKillCount_t , 10 , false , TAG_IDLIST > list; // Offset: 0x8

    }; // Size: 0x110

    struct damageDealtEntry_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStamp; // Offset: 0x0

        float damageValue; // Offset: 0x8

    }; // Size: 0x10

    idStaticList < idStat , 1459 , false , TAG_IDLIST > stats; // Offset: 0x38

    idEventReceiver* eventListener; // Offset: 0x111E0

    idList < idPlayerMetrics::bossVoiceOverInstance_t , TAG_IDLIST , false > bossVoiceOverData; // Offset: 0x111E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > bossVoiceOverDamageCooldownEndTime; // Offset: 0x11200

    idList < idManagedClassPtr < idAbnormalPlayerMetrics > , TAG_IDLIST , false > abnormalMetricsList; // Offset: 0x11208

    idStaticList < idList < gameStat_t > , 12 , false , TAG_IDLIST > damagedByPlayersThisLife; // Offset: 0x11220

    idStaticList < bool , 8 , false , TAG_IDLIST > demonsPlayed; // Offset: 0x11358

    idStaticList < idPlayerMetrics::idDemonKilledByWeapon , 8 , false , TAG_IDLIST > demonWeaponKill; // Offset: 0x11378

    int entityNumber; // Offset: 0x11410

    float lastDamageAmount; // Offset: 0x11414

    int lastDamageEntityNum; // Offset: 0x11418

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTimestamp; // Offset: 0x11420

    idSpawnId lastKilledEnemy; // Offset: 0x11428

    int lastKillEntityNum; // Offset: 0x1142C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastKillTimestamp; // Offset: 0x11430

    int currentKillStreak; // Offset: 0x11438

    int killsThisLife; // Offset: 0x1143C

    int currentDeathStreak; // Offset: 0x11440

    float kdr; // Offset: 0x11444

    int shieldActivationTime; // Offset: 0x11448

    bool inGame; // Offset: 0x1144C

    int maxChainTimestamp; // Offset: 0x11450

    idVec3 origin; // Offset: 0x11454

    bool isBot; // Offset: 0x11460

    bool allowSpecialKill; // Offset: 0x11461

    // Used ONLY for tracking kills for the "Untouchable" medal.
    int untouchableKills; // Offset: 0x11464

    // updates continuously when player is alive AND game is in progress (not pre-game or pre-round)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTimeWithoutDying; // Offset: 0x11468

    idSmartTimer < GAMETIME_SCALED > lastHumiliatorKillTime; // Offset: 0x11470

    idSmartTimer < GAMETIME_SCALED > lastThawTime; // Offset: 0x11478

    idSmartTimer < GAMETIME_SCALED > lastCriticalKillTime; // Offset: 0x11480

    idSmartTimer < GAMETIME_SCALED > teleportSurpriseTimer; // Offset: 0x11488

    idList < int , TAG_IDLIST , false > playersKilledThisLife; // Offset: 0x11490

    // resets after each round / death
    int numPlayersKilledAsLastMan; // Offset: 0x114A8

    int pointCapturesThisLife; // Offset: 0x114AC

    int flagCapturesThisRound; // Offset: 0x114B0

    // resets after each round
    int damageTakenThisRound; // Offset: 0x114B4

    // resets after each frame
    float damageTakenFrame; // Offset: 0x114B8

    // resets after each frame
    float damageInflictedFrame; // Offset: 0x114BC

    int numTimesBecameDemonThisLife; // Offset: 0x114C0

    idTypesafeTime < long long , serverGameTimeUnique_t , 999960 > clientAcknowledgedServerTime; // Offset: 0x114C8

    idList < weaponQueueEntry_t , TAG_IDLIST , false > weaponQueue; // Offset: 0x114D0

    // time to remove old (lost) entries
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weaponQueueCleanupTime; // Offset: 0x114E8

    // for tracking impressive shots
    weaponQueueEntry_t lastHit; // Offset: 0x114F0

    int shotId; // Offset: 0x11580

    // so we only update the backend in sec instead of ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeBucket; // Offset: 0x11584

    // update the time stamp
    idTypesafeTime < int , millisecondUnique_t , 1000 > lastTimeStampMilliseconds; // Offset: 0x11588

    // the next time we need to check for time
    idTypesafeTime < int , millisecondUnique_t , 1000 > nextCheckTime; // Offset: 0x1158C

    // temporary level statistics so SP can easily track statistics PER WEAPON. We could've used the stat's session variables but we'd have to create stats for all events for all weapons...
    idLevelStats levelStats; // Offset: 0x11590

    // When we award xp for damaging enemy players, we round off the damage to a float. This is to account for the error that builds up from rounding.
    float damageDealtXpRemainder; // Offset: 0x11C00

    // When a player takes damage, we round off the damage to a float. This is to account for the error that builds up from rounding.
    float damageTakenRemainder; // Offset: 0x11C04

    // Explosive weapons hit multiple damage groups, resulting in lots of XP gain events in one frame. This lets us accumulate 1 frame's worth of damage XP and provide it as a single event.
    int deferredMPDamageXp; // Offset: 0x11C08

    // leftover milliseconds for tracking prowler off ground time
    idTypesafeTime < int , millisecondUnique_t , 1000 > prowlerTimeOffGroundBucketMilliseconds; // Offset: 0x11C0C

    // leftover milliseconds for tracking chaingun spin up time
    idTypesafeTime < int , millisecondUnique_t , 1000 > chaingunFullSpinBucketMilliseconds; // Offset: 0x11C10

    // leftover milliseconds for tracking static cannon full charge time
    idTypesafeTime < int , millisecondUnique_t , 1000 > staticCannonFullChargeBucketMilliseconds; // Offset: 0x11C14

    // leftover milliseconds for tracking cacodemon off ground time
    idTypesafeTime < int , millisecondUnique_t , 1000 > cacodemonTimeOffGroundBucketMilliseconds; // Offset: 0x11C18

    // leftover milliseconds for tracking pinky being cloaked
    idTypesafeTime < int , millisecondUnique_t , 1000 > pinkyTimeCloakedBucketMilliseconds; // Offset: 0x11C1C

    // leftover milliseconds for tracking boost pack being used
    idTypesafeTime < int , millisecondUnique_t , 1000 > boostPackTimeUsedBucketMilliseconds; // Offset: 0x11C20

    // Number of times this player has killed every other player
    int playerKillCount[12]; // Offset: 0x11C24

    // Damage this player has dealt to other players. These are cleared when idPlayerMetrics::WeaponFiredDone is called
    idList < metricsDamageInstance_t , TAG_IDLIST , false > damageInstances; // Offset: 0x11C58

    // This tracks the last level the player has received rewards for in UpdateLevel
    int lastLevelRewarded; // Offset: 0x11C70

    idPlayerMetrics::killCountInfo_t killThreeWithFragGrenade; // Offset: 0x11C78

    // last 32 frame entries we have used
    idCircularBuffer < idPlayerMetrics::damageDealtEntry_t , 32 > damageDealtEntries; // Offset: 0x11D88

    idEncounterMetrics encounterMetrics; // Offset: 0x11F90

}; // Size: 0x137D0
