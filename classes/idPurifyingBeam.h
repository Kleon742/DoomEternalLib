struct idPurifyingBeam : idBloatedEntity
{
    struct hazardPool_t
    {
        idManagedClassPtr < idEnvironmentalDamage_Hurt_Trigger > damageTrigger; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStarted; // Offset: 0x20

    }; // Size: 0x28

    // Radius of the beam attack
    float beamRadius; // Offset: 0xB88

    // duration (in seconds) of the individual hazards
    float beamLifetime; // Offset: 0xB8C

    // Acceleration of the beam toward to player
    float acceleration; // Offset: 0xB90

    // max speed for the beam to follow the player
    float maxVelocity; // Offset: 0xB94

    // Scale for all components
    float scale; // Offset: 0xB98

    // duration (in seconds) of the individual hazards
    float hazardLifetime; // Offset: 0xB9C

    // distance between hazard triggers
    float hazardSpread; // Offset: 0xBA0

    // Distance to trace to the ground for beam collision
    float traceDistance; // Offset: 0xBA4

    // how long (in ms) between each damage tick
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageTickMS; // Offset: 0xBA8

    // DoT in the beam
    idDeclDamage* beamDamage; // Offset: 0xBB0

    // Pulse blast damage
    idDeclDamage* blastDamage; // Offset: 0xBB8

    // fx
    idDeclFX* beamFxDecl; // Offset: 0xBC0

    // Environmental damage trigger for the beam trail
    idDeclEntityDef* envDmgTriggerDef; // Offset: 0xBC8

    // FX entity to use for the beam trail
    idDeclEntityDef* envFXDef; // Offset: 0xBD0

    // Sound beam entity for the beam
    idDeclEntityDef* soundBeamDef; // Offset: 0xBD8

    idVec3 groundPos; // Offset: 0xBE0

    idVec3 velocity; // Offset: 0xBEC

    idVec3 endPoint; // Offset: 0xBF8

    bool beamIsActive; // Offset: 0xC04

    bool contactMade; // Offset: 0xC05

    idList < idPurifyingBeam::hazardPool_t , TAG_IDLIST , false > hazardList; // Offset: 0xC08

    idHavokQueryId beamGroundQuery; // Offset: 0xC20

    idManagedClassPtr < idSoundBeamEntity > soundBeam; // Offset: 0xC28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastServerTime; // Offset: 0xC48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDamageTime; // Offset: 0xC50

    idManagedClassPtr < idBloatedEntity > beamFXEntity; // Offset: 0xC58

    // slayer will be targeted unless this is set
    idManagedClassPtr < idEntity > targetOverride; // Offset: 0xC78

    // if greater than zero, stop when this close to target
    float stopOnTargetDist; // Offset: 0xC98

}; // Size: 0xCA0
