struct idSpawnNode : idBloatedEntity
{
    enum nodeType_t : int
    {
        TYPE_STANDARD = 0
    };

    enum debugDrawLevel_t : int
    {
        DL_NONE = 0,
        DL_LOW = 1,
        DL_HIGH = 2
    };

    struct actorFilterFlags_t
    {
        // If true then players can spawn at this node.
        bool player; // Offset: 0x0

    }; // Size: 0x1

    // bool IsUserTypeAllowed( const idGameplayFilterTarget & userFilterTarget ) { return userFilter.IsAllowed( userFilterTarget ); }Location obstructed while timer > 0.0f
    float obstructionTimer; // Offset: 0xB88

    // Indicates which entity types are allowed to spawn at this location.   idGameplayFilteruserFilter;Used to specify which user types are allowed to use this node.Special spawn node behaviors.
    idSpawnNode::nodeType_t nodeType; // Offset: 0xB8C

    // Only allows spawns if isActive is true.
    bool isActive; // Offset: 0xB90

    // Specifies if this is an inital spawn for the game challenge
    bool initial; // Offset: 0xB91

    // __edit actorFilterFlags_tallowedEntities;Indicates which entity types are allowed to spawn at this location. if valid, this entity will get a call back when a player is spawned here
    idManagedClassPtr < idEntity > spawnCallbackEntity; // Offset: 0xB98

}; // Size: 0xBB8
