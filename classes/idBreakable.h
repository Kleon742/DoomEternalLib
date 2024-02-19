struct idBreakable : idBloatedEntity
{
    // explosion sound
    idSoundEvent* soundExplosion; // Offset: 0xB88

    // impact sounds for different surface types
    idDeclImpactEffect* impactEffectTable; // Offset: 0xB90

    // the minimum bounce velocity for playing an impact sound {{ units = m / s }}
    float pieceMinBounceVelocity; // Offset: 0xB98

    // entity will not take any damage from and damage decl that ANDs with this value
    idDamageParms::damageType_t ignoreDamageType; // Offset: 0xB9C

    // health value
    float health; // Offset: 0xBA0

    idEffectPhysicsBreakable* breakablePhysics; // Offset: 0xBA8

    idFadeHelper fade; // Offset: 0xBB0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > brokenStartTime; // Offset: 0xBD0

    // the last time we updated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0xBD8

    // time (in seconds) it takes for fade to occur
    float fadeTime; // Offset: 0xBE0

    // fade will start after this delay after broken
    float fadeDelay; // Offset: 0xBE4

}; // Size: 0xBE8
