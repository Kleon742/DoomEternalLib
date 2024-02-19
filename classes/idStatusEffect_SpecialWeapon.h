struct idStatusEffect_SpecialWeapon : idStatusEffect
{
    // player weapon restored to this after BFG time is up
    idDeclWeapon* previousWeapon; // Offset: 0x130

    int originalAmmoCount; // Offset: 0x138

    bool removeSpecialWeapon; // Offset: 0x13C

}; // Size: 0x140
