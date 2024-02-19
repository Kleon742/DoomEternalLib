struct idPortalSurface : idBloatedEntity
{
    enum portalMovementConstraints_t : int
    {
        PMC_NONE = 0,
        PMC_INITIAL = 1,
        PMC_CONTINUOUS = 2
    };

    struct entityRendermodelsPair_t
    {
        idManagedClassPtr < idEntity > ent; // Offset: 0x0

        idList < idRenderModel * , TAG_IDLIST , false > clonedModels; // Offset: 0x20

        bool megaMaterialsFixedUp; // Offset: 0x38

    }; // Size: 0x40

    // constant fetched from portalModel
    textureAxis_t textureAxis; // Offset: 0xB88

    idVec2 textureScale; // Offset: 0xBC0

    idImage* portalMap; // Offset: 0xBC8

    // may be dynamically updated
    idMat3 portalGlobalAxis; // Offset: 0xBD0

    // {{ units = m }}
    idVec3 portalGlobalOrigin; // Offset: 0xBF4

    float animatedThresholdValue; // Offset: 0xC00

    // ramped up and down to control opening and closing of portal
    float currentMaxThresholdValue; // Offset: 0xC04

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentRampDuration; // Offset: 0xC08

    float currentThresholdTarget; // Offset: 0xC10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tableStartTime; // Offset: 0xC18

    // table to use for looking up threshold values, if NULL defaults to 1.0 at all times
    idDeclTable* thresholdTable; // Offset: 0xC20

    // table max value is remapped to this
    float maxThreshold; // Offset: 0xC28

    // table min value is remapped to this
    float minThreshold; // Offset: 0xC2C

    // seconds it takes to make it one pass through lookup table
    idTypesafeTime < float , secondUnique_t , 1 > tableDuration; // Offset: 0xC30

    // how long the portal takes to open, in seconds
    idTypesafeTime < float , secondUnique_t , 1 > rampTimeOpen; // Offset: 0xC34

    // how long the portal takes to close, in seconds
    idTypesafeTime < float , secondUnique_t , 1 > rampTimeClose; // Offset: 0xC38

    // sound shader to play when portal opens
    idSoundEvent* openSound; // Offset: 0xC40

    // sound shader to play when portal closes
    idSoundEvent* closeSound; // Offset: 0xC48

    // sound shader to play looping as portal sits open
    idSoundEvent* loopSound; // Offset: 0xC50

    // play open sound when this threshold is reached
    float openSoundThreshold; // Offset: 0xC58

    // play close sound when this threshold is reached
    float closeSoundThreshold; // Offset: 0xC5C

    // if true, will teleport player to portal world
    bool teleporter; // Offset: 0xC60

    // if true, entity will remove itself after being opened and closed once
    bool removeWhenClosed; // Offset: 0xC61

    bool playedOpenSound; // Offset: 0xC62

    bool playedCloseSound; // Offset: 0xC63

    // anything that is going to be inside the portal, even partially
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > portalWorldEntities; // Offset: 0xC68

    // type of constraints that should exist between portal world and portal
    idPortalSurface::portalMovementConstraints_t movementConstraint; // Offset: 0xC80

    // proxy entity, in portal world space, where the portal "would" be located/facing, were it real
    idManagedClassPtr < idEntity > portalViewProxy; // Offset: 0xC88

    // true if we want to use view axis of portal proxy, instead of just origin
    bool usePortalProxyViewAxis; // Offset: 0xCA8

    // entities in this list won't be auto-moved according to portal placement, etc.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > movementExclusionEntities; // Offset: 0xCB0

    // anything not part of the portal world that should change due to portal ( light, sound, emitters )
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > effectEntities; // Offset: 0xCC8

    // if we have a portal proxy, we will clone the rendermodels of the portal world and use those instead
    idList < idPortalSurface::entityRendermodelsPair_t , TAG_IDLIST , false > clonedPortalWorldModels; // Offset: 0xCE0

}; // Size: 0xCF8
