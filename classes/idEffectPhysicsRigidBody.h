struct idEffectPhysicsRigidBody
{
    struct effectRBState_t
    {
        // {{ units = m }}
        idVec3 position; // Offset: 0x0

        idMat3 orientation; // Offset: 0xC

        // {{ units = kg * m / s }}
        idVec3 linearMomentum; // Offset: 0x30

        // {{ units = kg * radians / s }}
        idVec3 angularMomentum; // Offset: 0x3C

        // {{ units = kg * m / ( s * s ) }}
        idVec3 externalForce; // Offset: 0x48

        // {{ units = kg * radians / ( s * s ) }}
        idVec3 externalTorque; // Offset: 0x54

    }; // Size: 0x60

    struct effectRBDelta_t
    {
        // {{ units = m }}
        idVec3 translation; // Offset: 0x0

        idRotation rotation; // Offset: 0xC

        // {{ units = kg * m / s }}
        idVec3 linearForce; // Offset: 0x50

        // {{ units = kg * radians / s }}
        idVec3 angularForce; // Offset: 0x5C

    }; // Size: 0x68

    idEffectPhysicsProperties* properties; // Offset: 0x0

    idEffectPhysicsRigidBody::effectRBState_t currentState; // Offset: 0x8

    idSPObject SPObject; // Offset: 0x68

    bool active; // Offset: 0x110

    bool settled; // Offset: 0x111

    bool debug; // Offset: 0x112

}; // Size: 0x118
