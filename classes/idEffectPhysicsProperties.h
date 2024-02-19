struct idEffectPhysicsProperties
{
    idEffectPhysicsBroadPhase* broadPhase; // Offset: 0x0

    // handle of the trace model used for collision detection
    idHandle < int , traceModelHandleType_t , INVALID_TRACE_MODEL_HANDLE > traceModelHandle; // Offset: 0x8

    // contents the clip model collides with
    int clipMask; // Offset: 0xC

    // translational friction {{ units = 1 / s }}
    float linearFriction; // Offset: 0x10

    // rotational friction {{ units = 1 / s }}
    float angularFriction; // Offset: 0x14

    // friction with contact surfaces {{ units = 1 / s }}
    float contactFriction; // Offset: 0x18

    // translational friction in water {{ units = 1 / s }}
    float linearFrictionWater; // Offset: 0x1C

    // rotational friction in water {{ units = 1 / s }}
    float angularFrictionWater; // Offset: 0x20

    // bouncyness
    float bouncyness; // Offset: 0x24

    // gravity {{ units = m / ( s * s ) }}
    idVec3 gravityVector; // Offset: 0x28

    // only collide with the world
    bool worldCollisionOnly; // Offset: 0x34

    // simple point collisions that ignore rotational inertia
    bool simplePointCollision; // Offset: 0x35

    // chance (0-1) for taking a crazy bounce on impact instead of doing proper momentum-based behavior
    float crazyBounceChance; // Offset: 0x38

    // derived properties mass of body {{ units = kg }} do not expose this as equations assume momentum == velocity
    float mass; // Offset: 0x3C

    // 1 / mass {{ units = 1 / kg }}
    float inverseMass; // Offset: 0x40

    // center of mass of trace model {{ units = m }}
    idVec3 centerOfMass; // Offset: 0x44

    // mass distribution
    idMat3 inertiaTensor; // Offset: 0x50

    // inverse inertia tensor
    idMat3 inverseInertiaTensor; // Offset: 0x74

    // stop speed {{ units = m / s }}
    float stopSpeed; // Offset: 0x98

    // maximum linear velocity {{ units = m / s }}
    float maxLinearVelocity; // Offset: 0x9C

    // maximum angular velocity {{ units = radians / s }}
    float maxAngularVelocity; // Offset: 0xA0

}; // Size: 0xA8
