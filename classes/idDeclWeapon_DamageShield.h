struct idDeclWeapon_DamageShield : idDeclWeapon_Data
{
    // damage is reduced by spending ammo.
    bool fitlerDamageToAmmo; // Offset: 0x90

    // angle to filter damage out from (from the front)
    float damageFilterAngle; // Offset: 0x94

    // stop the weapon from firing normally in this mode
    bool inhibitFire; // Offset: 0x98

    // ammo to spend per second of activation
    int ammoPerSecondActivated; // Offset: 0x9C

    // amount of ammo below which the shield appears damaged.
    int damagedShieldAmmoThreshold; // Offset: 0xA0

}; // Size: 0xA8
