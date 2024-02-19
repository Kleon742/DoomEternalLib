struct Shared_ShouldDeflectProjectile : idAIStateTransition
{
    // incoming projectiles will be ignored unless they intersect bounds of this size, centered at character
    idVec3 characterBounds; // Offset: 0xF8

    // optional name of shared behavior bounds in behavior decl
    idAtomicString behaviorBoundsName; // Offset: 0x108

    // name of deflect set in shield decl
    idAtomicString setName; // Offset: 0x110

    // if estimated impact time - estimated deflect time < minTimeError, pass transition
    idTypesafeTime < float , secondUnique_t , 1 > minTimeError; // Offset: 0x118

    // if >= 0, time it will take to deflect projectile ( otherwise, get this from animation events )
    idTypesafeTime < float , secondUnique_t , 1 > deflectTimeInSeconds; // Offset: 0x11C

    // if true, doesn't build the deflect animation as part of the check
    bool ignoreAnimation; // Offset: 0x120

    // if true, use a looping deflect
    bool looping; // Offset: 0x121

    // enemy is firing a hitscan weapon
    bool hitscan; // Offset: 0x122

}; // Size: 0x128
