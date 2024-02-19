struct idEffectPhysicsPieceEmitter
{
    struct pieceEmitterSound_t
    {
        // impact sounds for different surface types
        idDeclImpactEffect* impactTable; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSoundTime; // Offset: 0x8

        // minimum bounce velocity for playing impact sound {{ units = m * m / ( s * s ) }}
        float minBounceVelSqr; // Offset: 0x10

    }; // Size: 0x18

    idRenderModelDiscreteAnimation* model; // Offset: 0x8

    idDeclBreakable* decl; // Offset: 0x10

    idRenderModelEffects* modelEffects; // Offset: 0x18

    idEffectPhysicsPieceEmitter::pieceEmitterSound_t soundInfo; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pieceLifeTime; // Offset: 0x38

    // volume decay db/sec to apply to collision sounds
    float pieceCollisionVolumeDecay; // Offset: 0x40

}; // Size: 0x48
