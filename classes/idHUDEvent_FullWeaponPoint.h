struct idHUDEvent_FullWeaponPoint
{
    struct weaponPointUpdateData_t
    {
        int previousPoints; // Offset: 0x0

        int currentPoints; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_FullWeaponPoint::weaponPointUpdateData_t info; // Offset: 0x0

}; // Size: 0x8
