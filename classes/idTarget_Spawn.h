struct idTarget_Spawn : idTarget_Spawn_Parent
{
    enum spawnerTraversalClassFlags : int
    {
        CLASS_A = 1,
        CLASS_B = 2,
        CLASS_C = 4,
        MAX_CLASS_BITS = 3
    };

    struct spawnConditionTestFlags_t
    {
        bool runFOVTest; // Offset: 0x0

        bool runDistanceTest; // Offset: 0x1

        bool runLOSTest; // Offset: 0x2

    }; // Size: 0x3

    struct idSpawnSettings
    {
        // entity where
        idManagedClassPtr < idEntity > spawnAt; // Offset: 0x0

        // if true the targeted entity's target list will be copied to the spawned entity
        bool copyTargets; // Offset: 0x20

        // these entities will be copied to the spawned AI's target list, good for info/actionnodes or info/path, etc
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > additionalTargets; // Offset: 0x28

        // if true uses the following to overwrite the ai's traversal flags.
        bool overwriteTraversalFlags; // Offset: 0x40

        // if set to override traversal flags, use these to overwrite the ai's flags
        idTarget_Spawn::spawnerTraversalClassFlags traversalClassFlags; // Offset: 0x44

        // AI hint class override to use, CLASS_ALL == use entity defaults ( don't override )
        idAICombatHint::combatHintClass_t combatHintClass; // Offset: 0x48

        // if set and aiStateOverride is set to AIOVERRIDE_PLAY_ENTRANCE_ANIMATION, override the ai entrance animation.
        idAnimWebPath spawnAnim; // Offset: 0x50

        // if set and aiStateOverride is set to AIOVERRIDE_PLAY_ENTRANCE_ANIMATION, this is the anim subweb
        idAtomicString spawnAnimSubweb; // Offset: 0x80

        // if set and aiStateOverride is set to AIOVERRIDE_PLAY_ENTRANCE_ANIMATION, this is the anim node
        idAtomicString spawnAnimNode; // Offset: 0x88

        // if not AIOVERRIDE_DEFAULT will override the starting state of the si
        aiStateOverride_t aiStateOverride; // Offset: 0x90

        // if not empty will override the ai intialTarget;
        idManagedClassPtr < idEntity > initialTargetOverride; // Offset: 0x98

    }; // Size: 0xB8

    // editable settings specific to target/spawn
    idTarget_Spawn::idSpawnSettings spawnEditable; // Offset: 0xC70

    // optional gateway this spawner should associate with
    idManagedClassPtr < idPortalSurface > portal; // Offset: 0xD28

    // Target spawn parent to be used as a reference for a collection of AI types
    idManagedClassPtr < idTarget_Spawn_Parent > targetSpawnParent; // Offset: 0xD48

    // if true, disable pooling for entities spawned from this spawner
    bool disablePooling; // Offset: 0xD68

    idManagedClassPtr < idEntity > lastSpawned; // Offset: 0xD70

    // number of entities spawned
    int spawnedCount; // Offset: 0xD90

    // time when this target spawn was last used
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSpawnTime; // Offset: 0xD98

    // next time when this target can spawn an entity
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextAllowedSpawnTime; // Offset: 0xDA0

    // Deferred trace results havok'd
    idHavokQueryId TestLOS_TraceQuery; // Offset: 0xDA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > LOSQueryTime; // Offset: 0xDB0

}; // Size: 0xDB8
