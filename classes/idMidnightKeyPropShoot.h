struct idMidnightKeyPropShoot : idMidnightKeyProperties
{
    // What should we shoot at?
    idAtomicString targetEntity; // Offset: 0x10

    // If true then always show tracers
    bool alwaysTracer; // Offset: 0x18

    // which type of weapon will be fired
    idStr weapon; // Offset: 0x20

    // if not NULL then use this projectile rather than the weapon default one
    idStr projectile; // Offset: 0x50

}; // Size: 0x80
