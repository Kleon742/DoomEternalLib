struct idVolume_DoomGravity : idVolume
{
    enum doomGravityMode_t : int
    {
        GM_SIMPLE = 0,
        GM_MOVE_TO_TARGET = 1,
        GM_MOVE_TO_VECTOR = 2,
        GM_MAX = 3
    };

    struct affectedEntity_t
    {
        // Entity type this applies to
        idDeclEntityDef* entityDef; // Offset: 0x0

        // If NOT 1.0, overrides (volume's global) gravity scale for this entity
        float gravityScale; // Offset: 0x8

        // Jump height scalar. (only valid for player)
        float jumpHeightScalar; // Offset: 0xC

        // If NOT 0.0, overrides (volume's global) max speed (units per sec) entity should be moving.
        float maxVelocity; // Offset: 0x10

        // if NOT 0.0, overrides (volume's global) friction scale applied to reach maxVelocity.
        float velocityFrictionScale; // Offset: 0x14

        // how this entity reacts when volume is activated
        idVolume_DoomGravity::doomGravityMode_t gravityMode; // Offset: 0x18

        // MOVE_TO_VECTOR: this entity moves in the direction/distance specified by this vector {{ units = m }}
        idVec3 moveToVector; // Offset: 0x1C

        // TODO: Seconds it takes for new gravity to take effect
        float fadeInTimeSec; // Offset: 0x28

        // Seconds it takes for original gravity to take effect
        float fadeOutTimeSec; // Offset: 0x2C

    }; // Size: 0x30

    struct gravEntity_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // {{ units = m / ( s * s ) }}
        idVec3 goalGravity; // Offset: 0x20

        // {{ units = m / ( s * s ) }}
        float goalGravitySpeed; // Offset: 0x2C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x30

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeEndTime; // Offset: 0x38

        int specificint; // Offset: 0x40

        // {{ units = m }}
        idVec3 previousOrigin; // Offset: 0x44

        // moving to point {{ units = m }}
        idVec3 goalPos; // Offset: 0x50

        idVec3 travelVector; // Offset: 0x5C

        // {{ units = m / s }}
        idVec3 driftVel; // Offset: 0x68

        // {{ units = m }}
        float distanceToTravel; // Offset: 0x74

        // {{ units = m }}
        float distanceTravelled; // Offset: 0x78

        bool reachedGoalPos; // Offset: 0x7C

        // fading in gravity
        bool fadingIn; // Offset: 0x7D

        bool fadeDone; // Offset: 0x7E

    }; // Size: 0x80

    // sound to play on Activation.
    idSoundEvent* spawnActivationSound; // Offset: 0xC20

    // sound to play for lifetime of volume.
    idSoundEvent* spawnLoopSound; // Offset: 0xC28

    // sound to play on Activation.
    idSoundEvent* activationSound; // Offset: 0xC30

    // sound to play for lifetime of volume.
    idSoundEvent* activationLoopSound; // Offset: 0xC38

    // sound to play for lifetime of volume.
    idSoundEvent* deactivationSound; // Offset: 0xC40

    // Global gravity scale (can be overridden for each specific entity)
    float gravityScale; // Offset: 0xC48

    // Max speed (units per sec) entity should be moving (can be overridden for each specific entity)
    float maxVelocity; // Offset: 0xC4C

    // Friction scale applied to reach maxVelocity. (can be overridden for each specific entity)
    float velocityFrictionScale; // Offset: 0xC50

    // list of specific entities affected by this volume
    idList < idVolume_DoomGravity::affectedEntity_t , TAG_IDLIST , false > affectedEntities; // Offset: 0xC58

    // only entity types listed in entitySpecificList are tracked in this list
    idList < idVolume_DoomGravity::gravEntity_t , TAG_IDLIST , false > gravEntityList; // Offset: 0xC70

    bool startedLoop; // Offset: 0xC88

}; // Size: 0xC90
