struct idHUDEvent_DemonInvasionStateUpdate
{
    struct demonInvasionStateData_t
    {
        bool isGhost; // Offset: 0x0

        bool isDisguised; // Offset: 0x1

        bool propIsDestructible; // Offset: 0x2

        long long ghostEndTime; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_DemonInvasionStateUpdate::demonInvasionStateData_t info; // Offset: 0x0

}; // Size: 0x10
