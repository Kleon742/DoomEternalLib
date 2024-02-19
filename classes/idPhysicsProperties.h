struct idPhysicsProperties
{
    enum ownerType_t : int
    {
        OWNERTYPE_UNKNOWN = 0,
        OWNERTYPE_AI = 1,
        OWNERTYPE_WEAPONENT = 2,
        OWNERTYPE_PROJECTILE = 3
    };

    // Callbacks for the physics system (QS: handled by creation)
    idPhysicsCallbacks* callbacks; // Offset: 0x0

    // Physics-id for lookup in hash-table (QS: handled by creation and destruction)
    int physicsId; // Offset: 0x8

    // Physics group, bodies in the same group does not collide with each other, 0 means no group
    unsigned int group; // Offset: 0xC

    // Entity spawn id
    idSpawnId spawnId; // Offset: 0x10

    // OWning entity spawn id (spawnId might be for a projectile but owner is player)
    idSpawnId ownerSpawnId; // Offset: 0x14

    // which type of collisionmodel is this
    cmType_t modelType; // Offset: 0x18

    // HACK: checked during OnManifold to control some behaviour
    idPhysicsProperties::ownerType_t ownerType; // Offset: 0x1C

    // frictionValue
    float frictionValue; // Offset: 0x20

    // Contents type for the physics object
    int contents; // Offset: 0x24

    // Contents mask that object should collide against
    int clipMask; // Offset: 0x28

    // Set when a body id is registered as a cloth collidable and removed when unregistered
    bool clothCollidable; // Offset: 0x2C

    bool contentsOverride; // Offset: 0x2D

    // If physics objects can self collide with itself
    bool spawnIdTestDisabled; // Offset: 0x2E

    // if physics is disabled for this object
    bool disabled; // Offset: 0x2F

    // are we overriding the surfaceType ? -1 means no.
    int overrideSurfaceType; // Offset: 0x30

    // list of spawnIds of entities to ignore collisions with
    idList < idSpawnId , TAG_IDLIST , false > passEntSpawnIds; // Offset: 0x38

}; // Size: 0x50
