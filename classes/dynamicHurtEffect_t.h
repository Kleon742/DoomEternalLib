struct dynamicHurtEffect_t
{
    // type of damage
    idDeclDamage* declDamage; // Offset: 0x0

    // bounds centered around this size. x = right, y = forward, z = up {{ units = m }}
    idVec3 boundsSize; // Offset: 0x8

    // bounds is adjusted by this amount. x = right, y = forward, z = up {{ units = m }}
    idVec3 boundsOffset; // Offset: 0x14

    // tag name
    idAtomicString tagName; // Offset: 0x20

}; // Size: 0x28
