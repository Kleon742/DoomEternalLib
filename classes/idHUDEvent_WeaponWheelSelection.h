struct idHUDEvent_WeaponWheelSelection
{
    struct weaponInfo_t
    {
        idDeclWeapon* weaponDecl; // Offset: 0x0

        int swapModIndex; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_WeaponWheelSelection::weaponInfo_t info; // Offset: 0x0

}; // Size: 0x10
