struct idWeaponWheel
{
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x0

    // The Time stamp when we pressed the weapon change button.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startWeaponWheelPressTime; // Offset: 0x20

    // Debug Weapon Wheel GUI
    idWeaponWheel_Debug debug; // Offset: 0x28

}; // Size: 0x248
