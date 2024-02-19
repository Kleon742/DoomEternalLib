struct idDeclProp_PhysicsAttribs : idGameDeclTypeInfo
{
    struct idClipOverride
    {
        // physics contents value
        idContents contents; // Offset: 0x0

        // physics clip mask value
        idContents clipMask; // Offset: 0x4

    }; // Size: 0x8

    // whether to use Physics_RigidBody3DOF for simple physics
    bool useSimplePhysics; // Offset: 0x90

    // what type of motion we expect from this prop
    idPhysics::motionType_t motionType; // Offset: 0x94

    // if useSimplePhysics is true, determines if this object can rotate when it collides
    bool noRotationOnCollision; // Offset: 0x98

    // density of the object; water = 0.004; higher numbers sink {{ units = kg / ( m * m * m ) }}
    float density; // Offset: 0x9C

    // friction applied to movement {{ units = 1 / s }}
    float linearFriction; // Offset: 0xA0

    // friction applied to rotation {{ units = 1 / s }}
    float angularFriction; // Offset: 0xA4

    // setup cylinder clip models for barrel simulation, set clipmodel type to CYLINDER
    bool barrelCollision; // Offset: 0x0

    // allow monsters to step on the object
    bool allowStep; // Offset: 0x0

    // allow characters / damage to push this object (does nothing unless pushable contents flag set)
    bool actorPushable; // Offset: 0x0

    // when set, object drops to floor at start of level
    bool dropToFloor; // Offset: 0x0

    // wait until at rest, then remove
    bool removeWhenAtRest; // Offset: 0x0

    // is a sellable so don't call Think()
    bool skipThink; // Offset: 0x0

    // should this prop run its own physics locally on client (only relevant in MP)
    bool tearOffPhysics; // Offset: 0x0

    // if activated, apply the impulse defined by impulseVelocity and impulseAVelocity
    bool impulseOnActivate; // Offset: 0x0

    // breakables need this to be true so that they are added on spawn and can be seen by Havok for gather queries for radius damage
    bool addToHavokWorld; // Offset: 0x0

    // position towards which the impulse velocity is applied when activated {{ units = m }}
    idVec3 impulseTarget; // Offset: 0xAC

    // Do we apply Random velocity to this item?
    bool randomVelocity; // Offset: 0xB8

    // Do we apply Random velocity to this item Min VAL? {{ units = m / s }}
    float randomVelocityMin; // Offset: 0xBC

    // Do we apply Random velocity to this item Min VAL? {{ units = m / s }}
    float randomVelocityMax; // Offset: 0xC0

    // Do we apply Random velocity to this item?
    bool randomVelocityDir; // Offset: 0xC4

    // Do we apply Random velocity direction to this item Min VAL?
    idVec3 randomVelocityDirMin; // Offset: 0xC8

    // Do we apply Random velocity direction to this item Min VAL?
    idVec3 randomVelocityDirMax; // Offset: 0xD4

    // velocity * impulseDir applied to prop when activated {{ units = m / s }}
    float impulseVelocity; // Offset: 0xE0

    // angular velocities applied to prop when activated {{ units = radians / s }}
    idVec3 impulseAVelocity; // Offset: 0xE4

    // minimum velocity before moveable applies damage
    float minDamageVelocity; // Offset: 0xF0

    // velocity at which the maximum damage is applied
    float maxDamageVelocity; // Offset: 0xF4

    // if damage > 0 apply damage to hit entities
    int damage; // Offset: 0xF8

    // if selfDamage > 0 apply to self on collisions
    int selfDamage; // Offset: 0xFC

    // time (in secs) to fade out, if 0 will not fade out
    float fadeTime; // Offset: 0x100

    // multiplier to be applied to the impulse used to push this prop away {{ units = m / s }}
    float pushMultiplier; // Offset: 0x104

    // angle of the taper at the bottom of the pencil collision clip model. if 0, uses cylinder instead of pencil
    float pencilCollisionAngle; // Offset: 0x108

    // radius of the bottom of the pencil collision clip model. {{ units = m }}
    float pencilCollisionTaperRadius; // Offset: 0x10C

    // settings for overriding collision contents
    idDeclProp_PhysicsAttribs::idClipOverride clipOverride; // Offset: 0x110

    // sound to play when the object bounces
    idSoundEvent* sound_bounce; // Offset: 0x118

    // sound to play when the object is moving across a surface
    idSoundEvent* sound_scrape; // Offset: 0x120

    // minimum velocity to play bounce sound after collision {{ units = m / s }}
    float bounceMinVelocity; // Offset: 0x128

    // velocity to play bounce sound at maximum volume after collision {{ units = m / s }}
    float bounceMaxVelocity; // Offset: 0x12C

    // true will use the decl's gravity
    bool useDeclGravity; // Offset: 0x130

    // gravity to use if useDeclGravity is true {{ units = m / ( s * s ) }}
    idVec3 gravity; // Offset: 0x134

}; // Size: 0x140
