struct serializedFullBodyGibParms_t
{
    idVec3 impulse; // Offset: 0x0

    // {{ units = kg * m / s }}
    float magnitude; // Offset: 0xC

    idDeclDamage* damageDecl; // Offset: 0x10

    idDeclGoreBehavior* goreBehaviorDecl; // Offset: 0x18

}; // Size: 0x20
