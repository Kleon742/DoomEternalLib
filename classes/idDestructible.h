struct idDestructible : idAnimatedEntity
{
    // Destruction properties
    idDestructibleComponent destructible; // Offset: 0x1B48

    // If empty will respond to all damage
    idList < idDeclDamage * , TAG_IDLIST , false > effectiveDamageTypes; // Offset: 0x1BB8

    // Physics Object.
    idPhysics* physicsObject; // Offset: 0x1BD0

    // make sure all clients pick up activation if true, demon players do not collide with this entity
    bool demonPlayersPassThrough; // Offset: 0x1BD8

    // melee as you hit this destructible with dash.
    bool meleeOnDash; // Offset: 0x1BD9

    // Render model when the local player is a demon.
    idRenderModel* demonPlayerRenderModel; // Offset: 0x1BE0

    // distance from demon dissolve effect will play
    float dissolveDistance; // Offset: 0x1BE8

    // activates destructible on spawn.
    bool spawnActivated; // Offset: 0x1BEC

    // Is this a player pushable object?
    bool playerPushable; // Offset: 0x1BED

    // Mass of this object
    float massOfObject; // Offset: 0x1BF0

    // if true, clients will hide destructible on destruct
    bool netHideOnDestruct; // Offset: 0x1BF4

    // Umbra vis blocking
    umbraDestructibleBlocking_t umbraVisBlocking; // Offset: 0x1BF8

    // Umbra sound blocking
    umbraDestructibleBlocking_t umbraSoundBlocking; // Offset: 0x1BFC

    // Unable to do anything with it until activated.
    bool staticUntilActivated; // Offset: 0x1C00

    // How long til it removes after being broken. ( -1 for never )
    idTypesafeTime < int , millisecondUnique_t , 1000 > removeAfterBreak; // Offset: 0x1C04

    // if true will remove this destructible from all master levels
    bool removeForMasterLevels; // Offset: 0x1C08

    // Can we be broken?
    bool ableToBeBroken; // Offset: 0x1C09

    // local memory of destruction
    bool destroyedLocal; // Offset: 0x1C0A

    // has this destructible been destroyed? used by clients to put themselves in correct state
    idNetEvent < 15 > destroyed; // Offset: 0x1C10

    // has render model been setup in post spawn yet?
    bool renderModelSet; // Offset: 0x1C28

    // use the visibility optimization on this entity.
    bool useVisibilityBox; // Offset: 0x1C29

    // disable the re triggering of the targets if the breakable is in a broken state
    bool disableTargetsOnReload; // Offset: 0x1C2A

    // disable the triggering of the targets if the breakable is in a broken state
    bool disableTargets; // Offset: 0x1C2B

}; // Size: 0x1C30
