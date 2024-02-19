struct idProp_Moveable : idProp_Usable
{
    struct idClipOverride
    {
        // physics contents value
        idContents contents; // Offset: 0x0

        // physics clip mask value
        idContents clipMask; // Offset: 0x4

    }; // Size: 0x8

    struct idAdditionalInventoryItem
    {
        // item to add
        idDeclInventory* decl; // Offset: 0x0

        // fixed count to add
        int count; // Offset: 0x8

        // additional random count to add
        int randCount; // Offset: 0xC

        // use the exact ( count + randCount ) amount, instead of multiplying it by the count value specified in the decl
        bool forceCount; // Offset: 0x10

    }; // Size: 0x18

    struct pickupEventInfo_t
    {
        // game time that the event occurred
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > eventTime; // Offset: 0x0

        // the time of the last handled event
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHandledEventTime; // Offset: 0x8

        // player index responsible for the event ( 0 is the server )
        int playerIndex; // Offset: 0x10

        // presentable index responsible for the event
        int entityIndex; // Offset: 0x14

    }; // Size: 0x18

    // touch component
    idTouchComponent touchComponent; // Offset: 0x1B68

    // density of the object; water = 0.004; higher numbers sink {{ units = kg / ( m * m * m ) }}
    float density; // Offset: 0x1BE0

    // friction {{ units = 1 / s }}
    float friction; // Offset: 0x1BE4

    // how much velocity the object retains after a collision
    float bouncyness; // Offset: 0x1BE8

    // friction applied to movement {{ units = 1 / s }}
    float linearFriction; // Offset: 0x1BEC

    // friction applied to rotation {{ units = 1 / s }}
    float angularFriction; // Offset: 0x1BF0

    // scale the intertia tensor
    idVec3 inertiaScale; // Offset: 0x1BF4

    // if true, clients will run its own think
    bool clientAuthoritative; // Offset: 0x0

    // setup cylinder clip models for barrel simulation, set clipmodel type to CYLINDER
    bool barrelCollision; // Offset: 0x0

    // allow monsters to step on the object
    bool allowStep; // Offset: 0x0

    // allow characters / damage to push this object (does nothing unless pushable contents flag set)
    bool actorPushable; // Offset: 0x0

    // when set, object drops to floor at start of level
    bool dropToFloor; // Offset: 0x0

    // trigger targets when damaged
    bool triggerOnDamage; // Offset: 0x0

    // destroy prop when damaged
    bool destroyOnDamage; // Offset: 0x0

    // wait until at rest, then remove
    bool removeWhenAtRest; // Offset: 0x0

    // is a sellable so don't call Think()
    bool skipThink; // Offset: 0x0

    // if activated, apply the impulse defined by impulseVelocity and impulseAVelocity
    bool impulseOnActivate; // Offset: 0x0

    // true to equip the inventory items when this prop is activated
    bool equipOnPickup; // Offset: 0x0

    // position towards which the impulse velocity is applied when activated {{ units = m }}
    idVec3 impulseTarget; // Offset: 0x1C04

    // velocity * impulseDir applied to prop when activated {{ units = m / s }}
    float impulseVelocity; // Offset: 0x1C10

    // angular velocities applied to prop when activated {{ units = radians / s }}
    idVec3 impulseAVelocity; // Offset: 0x1C14

    // minimum velocity before moveable applies damage {{ units = m / s }}
    float minDamageVelocity; // Offset: 0x1C20

    // velocity at which the maximum damage is applied {{ units = m / s }}
    float maxDamageVelocity; // Offset: 0x1C24

    // if damage > 0 apply damage to hit entities
    int damage; // Offset: 0x1C28

    // if >=0 then overrides damage when applied to a player
    int damagePlayer; // Offset: 0x1C2C

    // if selfDamage > 0 apply to self on collisions
    int selfDamage; // Offset: 0x1C30

    // time (in secs) to fade out, if 0 will not fade out
    float fadeTime; // Offset: 0x1C34

    // multiplier to be applied to the impulse used to push this prop away {{ units = m / s }}
    float pushMultiplier; // Offset: 0x1C38

    // settings for overriding collision contents
    idProp_Moveable::idClipOverride clipOverride; // Offset: 0x1C3C

    // Impact effect list to search for proper impact response.
    idDeclImpactEffect* impactEffectTable; // Offset: 0x1C48

    // sound to play when the object spawns
    idSoundEvent* sound_spawn; // Offset: 0x1C50

    // sound to play when the object bounces
    idSoundEvent* sound_bounce; // Offset: 0x1C58

    // sound to play when the object is moving across a surface
    idSoundEvent* sound_scrape; // Offset: 0x1C60

    // sound to play when the object is pickup up
    idSoundEvent* sound_pickup; // Offset: 0x1C68

    // minimum velocity to play bounce sound after collision {{ units = m / s }}
    float bounceMinVelocity; // Offset: 0x1C70

    // velocity to play bounce sound at maximum volume after collision {{ units = m / s }}
    float bounceMaxVelocity; // Offset: 0x1C74

    // particle for bling on item pickup
    idDeclParticle* pickupParticle; // Offset: 0x1C78

    // rendermodel for the particle
    idRenderModel* particleModel; // Offset: 0x1C80

    // inventory def for this prop - all properties relating to player / AI usage go here
    idDeclInventory* inventoryDecl; // Offset: 0x1C88

    // number of items of inventoryDecl type this prop holds
    int inventoryCount; // Offset: 0x1C90

    // inventory to give if primary fails, assumes primary has a reference to this.
    idDeclInventory* backupInventoryDecl; // Offset: 0x1C98

    // number of items of inventoryDecl type this prop holds if primary fails.
    int backupInventoryCount; // Offset: 0x1CA0

    // alternate items that may be used by ai and vehicle pickups
    idList < const idDeclInventory * , TAG_IDLIST , false > alternateInventoryDecl; // Offset: 0x1CA8

    // any additional items
    idList < idProp_Moveable::idAdditionalInventoryItem , TAG_IDLIST , false > additionalInventoryDecl; // Offset: 0x1CC0

    // must have inventory item to use the prop
    idDeclInventory* requiredInvDecl; // Offset: 0x1CD8

    // if non-zero, will respawn when Pickup() called
    float minRespawnDelay; // Offset: 0x1CE0

    // if non-zero, will respawn when Pickup() called
    float maxRespawnDelay; // Offset: 0x1CE4

    // how many seconds to delay before removing prop when not fading
    float removeDelaySec; // Offset: 0x1CE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > respawnTime; // Offset: 0x1CF0

    // the inventory this prop is holding
    idInventoryCollection inventory; // Offset: 0x1CF8

    idHavokPhysics_RigidBody physicsObj; // Offset: 0x2260

    // next time the movable can hurt the player
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDamageTime; // Offset: 0x24B0

    // next time the moveable can make a bounce sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBounceTime; // Offset: 0x24B8

    // next time the moveable can make a scrape sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextScrapeTime; // Offset: 0x24C0

    // next time the moveable can be damaged by any collision
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSelfDamageTime; // Offset: 0x24C8

    // next time we can apply an impulse
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextImpulseTime; // Offset: 0x24D0

    idFadeHelper fade; // Offset: 0x24D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pulseTime; // Offset: 0x24F8

    // alias handle for use animation, if any
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > useAlias; // Offset: 0x2500

    // set to true during the 'use' process to lock the object from being used again during the process
    bool useLock; // Offset: 0x2502

    // allows you not to play the pickup sound
    bool shouldPlayPickupSound; // Offset: 0x2503

    // netowkring
    idNetEvent < 15 > resetPickup; // Offset: 0x2508

    // true if prop has been locally picked up ( predicted )
    bool predictedPickup; // Offset: 0x2520

    idProp_Moveable::pickupEventInfo_t pickupEventInfo; // Offset: 0x2528

}; // Size: 0x2540
