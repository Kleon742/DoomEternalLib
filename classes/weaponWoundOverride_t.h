struct weaponWoundOverride_t
{
    // Type of Damage.
    idPlayerWeaponDamageType_t type; // Offset: 0x0

    // Cosmetic type
    idAtomicString cosmeticType; // Offset: 0x8

    // Wound to use.
    idDeclGoreWound* wound; // Offset: 0x10

}; // Size: 0x18
