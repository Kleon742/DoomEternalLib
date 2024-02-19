struct idDemonPresenceComponent
{
    enum worldFXInfoState_t : int
    {
        WORLDFXINFOSTATE_EMPTY = 0,
        WORLDFXINFOSTATE_VALIDATING = 1,
        WORLDFXINFOSTATE_ACTIVE = 2
    };

    struct worldFXInfo_t
    {
        // current state of this info struct
        idDemonPresenceComponent::worldFXInfoState_t state; // Offset: 0x0

        // when should we create this
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

        // when we should remove it
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x10

        // position for fx is around player
        bool posAroundPlayer; // Offset: 0x18

        // position for fx is around demon
        bool posAroundDemon; // Offset: 0x19

        // position the fx should be created {{ units = m }}
        idVec3 position; // Offset: 0x1C

        // normal at the position we contacted while doing LOS
        idVec3 positionNormal; // Offset: 0x28

        // query to check LOS to
        idHavokQueryId losClipQuery; // Offset: 0x38

        // vector we did the LOS check to. used to find a valid end point {{ units = m }}
        idVec3 losQueryVec; // Offset: 0x40

        // where we started the LOS check from {{ units = m }}
        idVec3 losStartPos; // Offset: 0x4C

        // los query succeeded
        bool losCheckSuccess; // Offset: 0x58

        // handle to decal we placed as a world fx
        idDecalHandle decalHandle; // Offset: 0x5C

    }; // Size: 0x60

    // demonPlayer we're associated with
    idDemonPlayer* demonPlayer; // Offset: 0x0

    // local idPlayer we're updating for. if NULL, we'll never be active b/c IsEnabled will return false
    idManagedClassPtr < idPlayer > localPlayer; // Offset: 0x8

    // whether we're currently spawning world FX, etc
    bool isActive; // Offset: 0x28

    // distance at which we activate presence for the local player {{ units = m }}
    float activationDistance; // Offset: 0x2C

    // distance at which we deactivate presence for the local player {{ units = m }}
    float deactivationDistance; // Offset: 0x30

    // current distance from demon to local player {{ units = m }}
    float distanceToDemon; // Offset: 0x34

    // max number of FX we can create
    int maxFXCount; // Offset: 0x38

    // ensure we start this min number of FX when we are within activationDistance
    int minActivationFXCount; // Offset: 0x3C

    // min MS between any 2 world FX being created
    idTypesafeTime < int , millisecondUnique_t , 1000 > minTimeBetweenFXMs; // Offset: 0x40

    // min MS between creating attempting to create an FX under the reticle
    idTypesafeTime < int , millisecondUnique_t , 1000 > minTimeBetweenFXUnderReticleMs; // Offset: 0x44

    // min distance to create FX from the local player {{ units = m }}
    float minFXDistanceToPlayer; // Offset: 0x48

    // max distance to create FX from the local player {{ units = m }}
    float maxFXDistanceToPlayer; // Offset: 0x4C

    // max distance to create FX from the demon player {{ units = m }}
    float maxFXDistanceToDemon; // Offset: 0x50

    // list of possible materials to place as decals
    idList < const idMaterial2 * , TAG_IDLIST , false > decalMaterialList; // Offset: 0x58

    // depth of decal {{ units = m }}
    float decalDepth; // Offset: 0x70

    // min size of decal when we're within spacingCloseDistance {{ units = m }}
    float decalMinSize; // Offset: 0x74

    // max size of decal when we're within spacingCloseDistance {{ units = m }}
    float decalMaxSize; // Offset: 0x78

    // min lifetime in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > decalMinLifetimeMs; // Offset: 0x7C

    // max lifetime in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > decalMaxLifetimeMs; // Offset: 0x80

    // fade in time Ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > decalFadeInMs; // Offset: 0x84

    // fade out time Ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > decalFadeOutMs; // Offset: 0x88

    // distance to start fading in the demon presence post FX {{ units = m }}
    float postFXStartDistance; // Offset: 0x8C

    // distance that the post FX is at full power from {{ units = m }}
    float postFXFullDistance; // Offset: 0x90

    // list of all possible fx we've created
    idList < idDemonPresenceComponent::worldFXInfo_t , TAG_IDLIST , false > worldFXInfoList; // Offset: 0x98

    // next time we can create a world fx
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextWorldFXTime; // Offset: 0xB0

}; // Size: 0xB8
