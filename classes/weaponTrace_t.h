struct weaponTrace_t
{
    enum weaponTraceType_t : int
    {
        WEAPON_TRACE_BULLET = 0,
        WEAPON_TRACE_EXPLOSION = 1,
        WEAPON_TRACE_PROJECTILE = 2
    };

    // {{ units = m }}
    idVec3 start; // Offset: 0x0

    // {{ units = m }}
    idVec3 end; // Offset: 0xC

    // {{ units = m }}
    idVec3 impactPoint; // Offset: 0x18

    idVec3 dir; // Offset: 0x24

    idSpawnId attacker; // Offset: 0x30

    idSpawnId projectile; // Offset: 0x34

    idDeclDamage* damageDecl; // Offset: 0x38

    // {{ units = m }}
    float radius; // Offset: 0x40

    weaponTrace_t::weaponTraceType_t weaponTraceType; // Offset: 0x44

}; // Size: 0x48
