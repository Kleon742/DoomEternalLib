struct idPieceEmitter : idBloatedEntity
{
    struct emitPieceItem_t
    {
        // {{ units = m }}
        idVec3 pos; // Offset: 0x0

        idMat3 axis; // Offset: 0xC

        // {{ units = m }}
        idVec3 impulsePoint; // Offset: 0x30

        // {{ units = kg * m / s }}
        idVec3 impulse; // Offset: 0x3C

    }; // Size: 0x48

    // impact sounds for different surface types
    idDeclImpactEffect* impactEffectTable; // Offset: 0xB88

    // how long each piece lives (ms)
    int pieceLifeSpan; // Offset: 0xB90

    // the maximum angular velocity, actual values will be randomized within this limit
    float pieceAngularVelocity; // Offset: 0xB94

    // velocity decay when near surfaces - this is a steady deceleration applied every frame {{ units = radians / ( s * s ) }}
    float pieceFriction; // Offset: 0xB98

    // the minimum bounce velocity for playing an impact sound {{ units = m / s }}
    float pieceMinBounceVelocity; // Offset: 0xB9C

    // progressive velocity decay after first collision, applied in collision impulse calculations (0=no decay, 1=full decay after 1 lifespan, 2=full decay after 1/2 lifespan, etc)
    float pieceCollisionAgeDecay; // Offset: 0xBA0

    // progressive collision sound volume decay in db/sec
    float pieceCollisionVolumeDecay; // Offset: 0xBA4

    idEffectPhysicsPieceEmitter* piecePhysics; // Offset: 0xBA8

    float emitModelDepthHack; // Offset: 0xBB0

    // Current position in emitBuffer
    int emitPieceBufferPos; // Offset: 0xBB4

    idPieceEmitter::emitPieceItem_t emitPieceBuffer[10]; // Offset: 0xBB8

}; // Size: 0xE88
