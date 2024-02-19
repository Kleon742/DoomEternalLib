struct idHUDEvent_PlayerSetInfiniteAmmo
{
    struct playerInfiniteAmmoData_t
    {
        bool infinite; // Offset: 0x0

        int endTime; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_PlayerSetInfiniteAmmo::playerInfiniteAmmoData_t info; // Offset: 0x0

}; // Size: 0x8
