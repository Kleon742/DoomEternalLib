struct idBasePropSpawner : idBloatedEntity
{
    enum pickupSpawnOrder_t : int
    {
        SPAWN_ORDER_NONE = -1,
        SPAWN_ORDER_SEQUENCE = 0,
        SPAWN_ORDER_RANDOM = 1,
        SPAWN_ORDER_NUM = 2
    };

    struct pickupDef_t
    {
        // Pickup to tell the spawner to spawn
        idDeclEntityDef* pickupSpawn; // Offset: 0x0

        // Pickup to tell the spawner to show when demonPickupSpawn is incoming
        idDeclEntityDef* pickupIncomingSpawn; // Offset: 0x8

        // Pickup to tell the spawner to drop when the demon dies.
        idDeclEntityDef* pickupDrop; // Offset: 0x10

        // Pickup to tell the spawner to show when demonPickupDrop is incoming
        idDeclEntityDef* pickupIncomingDrop; // Offset: 0x18

        // Amount of time in MS before initially spawning pickup
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeBeforeInitialSpawnMS; // Offset: 0x20

        // Amount of time in MS until the pickup respawns, -1 mean never respawning
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeUntilRespawnMS; // Offset: 0x24

        // Show the POI for pickup that's spawned
        bool showPickupSpawnPOI; // Offset: 0x28

        // Offset for incoming fx {{ units = m }}
        idVec3 incomingFxOffset; // Offset: 0x2C

        // sound to play when the object spawns (played on the base so that even if the object is picked up instantly we still hear it)
        idSoundEvent* sound_spawn; // Offset: 0x38

        // Offset from end ( if respawn time is 60s and this is 5s, incoming fx will start at 55s )
        idTypesafeTime < int , millisecondUnique_t , 1000 > timeToShowIncomingMS; // Offset: 0x40

        // Start respawn timer on pick up of prop
        bool respawnOnPickup; // Offset: 0x44

    }; // Size: 0x48

    struct pickupData_t
    {
        // the actual pickup entity
        idManagedClassPtr < idEntity > pickupEntity; // Offset: 0x0

        // whether this was dropped or spawned
        bool wasSpawned; // Offset: 0x20

        // the incoming entity that's visible before the pickup is shown
        idManagedClassPtr < idEntity > incomingEntity; // Offset: 0x28

        // whether this is still incoming or is visible
        bool isIncoming; // Offset: 0x48

        // who is actively using this pickup (note: the base class cannot infer when this user stops using it, the subclasses will need to do this!)
        idManagedClassPtr < idEntity > activeUser; // Offset: 0x50

        // whether this pickup is being used or not
        bool isBeingUsed; // Offset: 0x70

        // the pickup was for a demon rune
        bool isDemonRune; // Offset: 0x71

        // the pickup gives this inventory item
        idDeclInventory* itemDecl; // Offset: 0x78

        // the pickup gives this status effect
        idDeclStatusEffect* statusDecl; // Offset: 0x80

    }; // Size: 0x88

    typedef idList < idManagedClassPtr < idEntity > > SpawnNodeList;

    typedef idList < idBasePropSpawner::pickupData_t > PickupDataList;

    typedef idList < idBasePropSpawner::pickupDef_t > PickupDefList;

    // List of all pickups we're currently managing
    idList < idBasePropSpawner::pickupData_t , TAG_IDLIST , false > pickupDataList; // Offset: 0xB88

    // potential spots where the pickup may spawn.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > spawnNodes; // Offset: 0xBA0

    // should the pickupDef_t data be taken from the active game challenge
    bool activeGameChallengeOverrides; // Offset: 0xBB8

    // should the active game challenge specify the spawn node order
    bool gameChallengeOverridesNodeOrder; // Offset: 0xBB9

    // A list of pickups we can spawn with this spawner
    idList < idBasePropSpawner::pickupDef_t , TAG_IDLIST , false > pickupsToSpawn; // Offset: 0xBC0

    // This determines how we choose which items to spawn
    idBasePropSpawner::pickupSpawnOrder_t spawnOrder; // Offset: 0xBD8

    // offset when spawning items {{ units = m }}
    idVec3 spawnOffset; // Offset: 0xBDC

    // if true, allow bots to pickup.
    bool allowBots; // Offset: 0xBE8

    // index of our current pickup def in pickupsToSpawn list
    int currentSpawnIndex; // Offset: 0xBEC

    // reset timers and remove any existing pickups
    bool resetOnRoundEnd; // Offset: 0xBF0

    // If false, the spawner does not start timers when spawned
    bool startActive; // Offset: 0xBF1

    // Additional scale multiplier for gui
    float guiScaleMultiplier; // Offset: 0xBF4

    // Offset to apply from prop position {{ units = m }}
    idVec3 guiOffset; // Offset: 0xBF8

    // screen to show for this gui
    arGuiScreen_t guiScreen; // Offset: 0xC04

    // fx decl
    idDeclFX* fxDecl; // Offset: 0xC08

    // idMenuManager_GuiEntity *m_guiMgr;  internal var the actual pick up def, may be from game challenge or may be from placed prop spawner
    idBasePropSpawner::pickupDef_t activePickUpDef; // Offset: 0xC10

    // whether we should use a spawn timer or just let the game challenge tell us when to spawn
    bool enableSpawnTimer; // Offset: 0xC58

    // time we expect to spawn a pickup
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentRespawnTime; // Offset: 0xC60

    // total respawn time to show to ui
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTotalRespawnTime; // Offset: 0xC68

    // last respawn time we handled. let's us know if a spawn timer is active and if we've handled the idle fx for it spawning.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHandledRespawnTime; // Offset: 0xC70

    // last respawn time we started the incoming fx for.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHandledIncomingFx; // Offset: 0xC78

    // index into spawnNodes for where we're going to spawn the next pickup
    int nextNodeIndex; // Offset: 0xC80

    idNetEvent < 15 > propPickedUpPlatform; // Offset: 0xC88

    idNetEvent < 15 > propPickedUpDropped; // Offset: 0xCA0

    idNetEvent < 15 > propRespawnTimerStarted; // Offset: 0xCB8

    // {{ units = m }}
    idVec3 propPickedUpDropPos; // Offset: 0xCD0

    idList < idBasePropSpawner::pickupDef_t , TAG_IDLIST , false > validPickupsToSpawn; // Offset: 0xCE0

}; // Size: 0xCF8
