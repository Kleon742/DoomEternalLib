struct idEffectPhysicsBreakable
{
    struct breakablePieceSound_t
    {
        // impact sounds for different surface types
        idDeclImpactEffect* impactTable; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSoundTime; // Offset: 0x8

        // minimum bounce velocity for playing impact sound {{ units = m * m / ( s * s ) }}
        float minBounceVelSqr; // Offset: 0x10

    }; // Size: 0x18

    struct idExplosion
    {
        idBreakableExplosion decl; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x70

        int fxIndex; // Offset: 0x78

        // {{ units = m }}
        idVec3 worldPosition; // Offset: 0x7C

        // {{ units = m }}
        idVec3 worldDirectionOrigin; // Offset: 0x88

        bool effectsEnabled; // Offset: 0x94

        bool forceApplied; // Offset: 0x95

        bool localSpace; // Offset: 0x96

    }; // Size: 0x98

    struct idTrail
    {
        idBreakableTrail decl; // Offset: 0x0

        idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_FXPHYSICS , false > pieceStartTime; // Offset: 0x78

        // {{ units = m }}
        idList < idVec3 , TAG_FXPHYSICS , false > pieceLastParticleDropPos; // Offset: 0x90

        idList < bool , TAG_FXPHYSICS , false > pieceShowParticle; // Offset: 0xA8

    }; // Size: 0xC0

    struct idBreakableParticle
    {
        idDeclParticle* particle; // Offset: 0x0

        // {{ units = m }}
        idVec3 pos; // Offset: 0x8

        // {{ units = m }}
        idVec3 directionOrigin; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x20

    }; // Size: 0x28

    struct idBreakableRMParticles
    {
        idRenderModelParticle* particle; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopTime; // Offset: 0x8

    }; // Size: 0x10

    struct idDecalFX
    {
        idBreakableDecal decl; // Offset: 0x0

        idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_FXPHYSICS , false > pieceStartTime; // Offset: 0xE8

        // {{ units = m }}
        idList < idVec3 , TAG_FXPHYSICS , false > lastCollisionPos; // Offset: 0x100

        // {{ units = m / s }}
        idList < idVec3 , TAG_FXPHYSICS , false > lastCollisionNormal; // Offset: 0x118

        // {{ units = m }}
        idList < idVec3 , TAG_FXPHYSICS , false > pieceLastDecalDropPos; // Offset: 0x130

    }; // Size: 0x148

    // This lives here and is by default NULL unless allocated by the inherited interface.
    idEffectPhysicsBroadPhase* broadPhase; // Offset: 0x8

    // Decl used to initialize effect-physics with
    idDeclBreakable* decl; // Offset: 0x10

    // Game-lib effects used for trails, decals etc
    idGameLibEffects* gameLibEffects; // Offset: 0x18

    // Render model allocated with the decl that will sync physics positions to the joints
    idRenderModelDiscreteAnimation* model; // Offset: 0x20

    // Information regarding our sound-world so we can launch sound events during impacts etc
    idEffectPhysicsBreakable::breakablePieceSound_t soundInfo; // Offset: 0x28

    idList < idEffectPhysicsBreakable::idBreakableParticle , TAG_FXPHYSICS , false > particles; // Offset: 0x40

    idList < idEffectPhysicsBreakable::idExplosion , TAG_FXPHYSICS , false > explosions; // Offset: 0x58

    idList < idHandle < unsigned long long , unsigned long long , UINT64_MAX > , TAG_FXPHYSICS , false > explosionFX; // Offset: 0x70

    idList < idEffectPhysicsBreakable::idTrail , TAG_FXPHYSICS , false > trails; // Offset: 0x88

    idList < idEffectPhysicsBreakable::idDecalFX , TAG_FXPHYSICS , false > decals; // Offset: 0xA0

    idList < idEffectPhysicsBreakable::idBreakableRMParticles , TAG_FXPHYSICS , false > rmParticles; // Offset: 0xB8

    idList < float , TAG_FXPHYSICS , false > damage; // Offset: 0xD0

    idRandom random; // Offset: 0xE8

    idSoundObject soundObject; // Offset: 0xF0

}; // Size: 0x100
