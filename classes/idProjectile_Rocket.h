struct idProjectile_Rocket : idProjectile
{
    struct aiInteraction_t
    {
        // heavy AI will explode the projectile and falter, taking damage from falterDamageDecl
        bool falterAndStopOnHeavyAI; // Offset: 0x0

        // all AI will falter, take damage from falterDamageDecl and projectile will continue
        bool falterAndContinue; // Offset: 0x1

        // damage decl to use when falterAndStopOnHeavyAI is true
        idDeclDamage* falterDamageDecl; // Offset: 0x8

        // sound to play when this projectile falters an enemy
        idSoundEvent* falterSound; // Offset: 0x10

        // fodder AI will gib and projectile continues
        bool gibAndPassthruFodderAI; // Offset: 0x18

        // damage decl to use when gibAndPassthruFodderAI is true
        idDeclDamage* gibDamageDecl; // Offset: 0x20

    }; // Size: 0x28

    int contactPhysId; // Offset: 0x2AB0

    contactImpulse_t contactImpulse; // Offset: 0x2AB4

    // the physics object for the rocket
    idHavokPhysics_RigidCast physicsObjHavok; // Offset: 0x2C28

    // all the actors we've bounced on.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > bouncedActors; // Offset: 0x2E98

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastCollideTime; // Offset: 0x2EB0

    // what actor is attached to this rocket
    idManagedClassPtr < idEntity > stuckOnActor; // Offset: 0x2EB8

    // the angle to use to find a random vector from
    float randomAngle; // Offset: 0x2ED8

    // Will stick to enemy shields if contact is made
    bool stickToShields; // Offset: 0x2EDC

    // will delete the projectile when it hits dynamic entity shield (e.g. the soul barrier)
    bool deleteWhenHitDynamicEntityShields; // Offset: 0x2EDD

    // if true will allow this to be have an AI attached to it
    bool allowConstraint; // Offset: 0x2EDE

    // if true, we keep our physics when we return to the pool rather than destroy and recreate
    bool keepPhysicsInPool; // Offset: 0x2EDF

    // this entity is attached to this rocket so on collision do not EXPLODE!!!!
    idManagedClassPtr < idEntity > attachedToEnt; // Offset: 0x2EE0

    // how fast the jetback will take off at the start {{ units = m / s }}
    float startJetSpeed; // Offset: 0x2F00

    // the name of the constraint we are going to attach to or use.
    idStr constraintName; // Offset: 0x2F08

    // the time the constraint was made;
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > constraintTime; // Offset: 0x2F38

    // how close to the target does the projectile have to be to trigger the explosion {{ units = m }}
    float explodeRange; // Offset: 0x2F40

    // the delay wanted before the smoke starts to play (ms)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > calcThrustDelay; // Offset: 0x2F48

    // {{ units = m / s }}
    float goalSpeed; // Offset: 0x2F50

    // special case don't explode on collision
    bool handleExplosionManually; // Offset: 0x2F54

    // Projectile can clip through friendly players
    bool passThruFriendlies; // Offset: 0x2F55

    // Projectile can clip through enemy players
    bool passThruEnemies; // Offset: 0x2F56

    // different ways the projectile can interact with AI
    idProjectile_Rocket::aiInteraction_t aiInteraction; // Offset: 0x2F58

    // track the AI that have received damage from 'falterAndContinue' so that damage isn't dealt again
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > falteringAI; // Offset: 0x2F80

    // deferred trace a trace down on the Z to see what surf we are close to
    idHavokQueryId deferredSurfTrace; // Offset: 0x2F98

    // a trace down on the Z to see what surf we are close to
    idHavokQueryId havokDeferredSurfTrace; // Offset: 0x2FA0

    // last collision data
    trace_t explosionCollision; // Offset: 0x2FA8

    idVec3 cachedInternalVel; // Offset: 0x3028

}; // Size: 0x3038
