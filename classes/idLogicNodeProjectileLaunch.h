struct idLogicNodeProjectileLaunch
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_ENTITY_ATTACKER = 1,
        INPUT_ENTITY_TARGET = 2,
        INPUT_PROJECTILE_ORIGIN = 3,
        INPUT_PROJECTILE_DIRECTION = 4,
        OUTPUT_ACTIVATE = 5
    };

    idDeclProjectile* projectileDecl; // Offset: 0x0

}; // Size: 0x8
