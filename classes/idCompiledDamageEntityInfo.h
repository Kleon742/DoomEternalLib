struct idCompiledDamageEntityInfo
{
    enum idEntityType_t : int
    {
        ENTITY_TYPE_UNKNOWN = -1,
        ENTITY_TYPE_PLAYER = 0,
        ENTITY_TYPE_AI = 1,
        ENTITY_TYPE_BARREL = 2,
        ENTITY_TYPE_DEMON_PLAYER = 3,
        ENTITY_ENV_HAZARD = 4
    };

    // spawn id of the entity.
    idSpawnId spawnID; // Offset: 0x0

    // type of entity.
    idCompiledDamageEntityInfo::idEntityType_t entityType; // Offset: 0x4

    // type of AI if it is an AI.
    aiMonsterType_t aiType; // Offset: 0x8

    // type of demon player if it is a demon player
    demonType_t demonPlayerType; // Offset: 0x10

    // Player context
    idPlayer* player; // Offset: 0x18

    // Used for any special group index like launch charge id
    int groupIndex; // Offset: 0x20

    // If true, AI is possessed by spirit
    bool possessedBySpirit; // Offset: 0x24

    // If true, AI was spawned by archville
    bool spawnedByArchvile; // Offset: 0x25

    // Flags to specify if the value is valid.
    idViolenceFilterFlags_t filterFlags; // Offset: 0x28

    // If the entity was on the ground.
    bool onGround; // Offset: 0x2C

    // If the entity was in the player's view.
    bool inPlayerView; // Offset: 0x2D

    // is the entity frozen.
    bool isFrozen; // Offset: 0x2E

    // is the entity on fire.
    bool isOnFire; // Offset: 0x2F

    // is this used manually
    bool isManualUse; // Offset: 0x30

    // is this a special weapon
    bool isSpecWeapon; // Offset: 0x31

}; // Size: 0x38
