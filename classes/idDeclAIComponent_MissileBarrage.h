struct idDeclAIComponent_MissileBarrage : idDeclAIComponent
{
    // projectile entity to spawn for the missiles
    idDeclEntityDef* projectileEntityDef; // Offset: 0x98

    // projectile entity to spawn for the missiles
    idDeclEntityDef* missileFXEntityDef; // Offset: 0xA0

    // projectile entity to spawn for the missile targets
    idDeclEntityDef* missileTargetFXEntityDef; // Offset: 0xA8

    // ribbon to use for the missile smoke trail
    idDeclRibbon2* smokeTrailRibbon; // Offset: 0xB0

    // ribbon to use for the missile fire trail
    idDeclRibbon2* fireTrailRibbon; // Offset: 0xB8

    // ribbon to use for the missile fire trail
    idDeclRibbon2* targetingRibbon; // Offset: 0xC0

}; // Size: 0xC8
