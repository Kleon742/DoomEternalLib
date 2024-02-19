struct idHUDEvent_DemonInvasionDisguiseMove
{
    struct disguiseMoveData_t
    {
        long long moveStartTime; // Offset: 0x0

        // If this is 0 the button to move was pressed but was disallowed
        long long moveDuration; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_DemonInvasionDisguiseMove::disguiseMoveData_t info; // Offset: 0x0

}; // Size: 0x10
