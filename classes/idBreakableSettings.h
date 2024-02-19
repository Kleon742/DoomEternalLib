struct idBreakableSettings
{
    // translational friction {{ units = 1 / s }}
    float linearFriction; // Offset: 0x0

    // rotational friction {{ units = 1 / s }}
    float angularFriction; // Offset: 0x4

    // friction with contact surfaces {{ units = 1 / s }}
    float contactFriction; // Offset: 0x8

    // translational friction in water {{ units = 1 / s }}
    float linearFrictionWater; // Offset: 0xC

    // rotational friction in water {{ units = 1 / s }}
    float angularFrictionWater; // Offset: 0x10

    // bouncyness
    float bouncyness; // Offset: 0x14

    // gravity {{ units = m / ( s * s ) }}
    idVec3 gravityVector; // Offset: 0x18

    // if true only collide with world models
    bool worldCollisionOnly; // Offset: 0x24

    // simple point collisions that ignore rotational inertia
    bool simplePointCollision; // Offset: 0x25

    // chance (0-1) to take a crazy bounce on impact instead of doing correct momentum-based behavior
    float crazyBounceChance; // Offset: 0x28

    // simulation stops after this many seconds
    float maxSimulationTime; // Offset: 0x2C

    // particle effect for weapon impacts that damage us
    idDeclParticle* impactParticle; // Offset: 0x30

    // particle effect for weapon impacts that kill us
    idDeclParticle* deathParticle; // Offset: 0x38

    // particle effect for weapon impacts that do nothing to us
    idDeclParticle* harmlessParticle; // Offset: 0x40

    // stop speed {{ units = m / s }}
    float stopSpeed; // Offset: 0x48

    // maximum linear velocity {{ units = m / s }}
    float maxLinearVelocity; // Offset: 0x4C

    // maximum angular velocity {{ units = radians / s }}
    float maxAngularVelocity; // Offset: 0x50

    // if false allow breakable model to cast dimshadows
    bool noShadows; // Offset: 0x54

    // contents the clip model collides with
    int clipMask; // Offset: 0x58

    // 0 = no dampening, 1 = come to rest at maxSimulation, 2 = come to rest at 1/2 maxSimulation, etc.
    float dampeningDecay; // Offset: 0x5C

}; // Size: 0x60
