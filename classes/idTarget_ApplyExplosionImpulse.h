struct idTarget_ApplyExplosionImpulse : idTarget
{
    // how much impulse to apply ( 5000 is not much.. 50000 is a lot for vehicles ) {{ units = kg * m / s }}
    float impulse; // Offset: 0xB88

    // angular velocity {{ units = radians / s }}
    idVec3 angular; // Offset: 0xB8C

    // radius of influence, ignored if targets are set {{ units = m }}
    idTypesafeNumber < float , SphereUnique_t > radius; // Offset: 0xB98

    // if true, impulse will be applied in the direction entity to target
    bool isRadial; // Offset: 0xB9C

    // damage decl for explosion, set to NULL for just impulse
    idDeclDamage* damageDecl; // Offset: 0xBA0

    // scaling factor for damage decl
    float damageScale; // Offset: 0xBA8

    // multiplier for force applied to the player
    float pushPlayerScale; // Offset: 0xBAC

    idHavokGatherQueryId explosionBoundsQuery; // Offset: 0xBB0

}; // Size: 0xBB8
