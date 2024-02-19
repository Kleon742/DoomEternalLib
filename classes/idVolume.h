struct idVolume : idBloatedEntity
{
    struct touchInfo_t
    {
        // entity that touched volume
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // time that entity started touching volume
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x20

    }; // Size: 0x28

    typedef idList < idVolume::touchInfo_t > touchList_t;

    idList < idVolume::touchInfo_t , TAG_IDLIST , false > touching; // Offset: 0xB88

    // true to allow this volume to register touches from spawn time
    bool startEnabled; // Offset: 0xBA0

    // contents when enabled
    idContents contents; // Offset: 0xBA1

    // should player exit this trigger after teleport (should be true for most volumes, especially lethal ones)
    bool exitAfterTeleport; // Offset: 0xBA5

    // local FX condition to invoke when the player leaves this volume
    fxCondition_t localTouchFXStopCondition; // Offset: 0xBA8

    // local FX condition to invoke when the player touches this volume
    fxCondition_t localTouchFXStartCondition; // Offset: 0xBAC

    // true will cause volumes activated/deactivated on server to be synced to clients
    bool syncActivation; // Offset: 0xBB0

    // whether or not this volume should show damage numbers when damaged.
    bool showDamageNumbers; // Offset: 0xBB1

    // when activated, toggles the state, rather than just setting it to true.
    bool allowToggleOnActivate; // Offset: 0xBB2

    // sync activation
    idNetEvent < 15 > serverActivated; // Offset: 0xBB8

    // sync deactivation
    idNetEvent < 15 > serverDeactivated; // Offset: 0xBD0

    // Keep track of whether Spawn() has been called
    bool spawned; // Offset: 0xBE8

    // is the volume currently enabled
    bool active; // Offset: 0xBE9

    // was the volume enabled on last think (server only)
    bool activePreviousThink; // Offset: 0xBEA

    // The last time the player was registered as a toucher during the think cycle.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimePlayerTouched; // Offset: 0xBF0

    idSysMutex unTouchMutex; // Offset: 0xBF8

}; // Size: 0xC20
