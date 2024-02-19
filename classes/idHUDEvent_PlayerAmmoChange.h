struct idHUDEvent_PlayerAmmoChange
{
    struct playerAmmoData_t
    {
        // How much damage we actually took.
        int ammoDeltaChange; // Offset: 0x0

        int ammoPerShot; // Offset: 0x4

        idMaterial2* ammoIcon; // Offset: 0x8

        int ammoColor; // Offset: 0x10

        bool useHealthAsAmmo; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_PlayerAmmoChange::playerAmmoData_t info; // Offset: 0x0

}; // Size: 0x18
