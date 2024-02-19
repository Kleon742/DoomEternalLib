struct idHUDEvent_StartCinematic
{
    struct startCinematicData_t
    {
        // The user can mark some cinematics as non-skippable
        bool skipNotAllowed; // Offset: 0x0

        // The amount of time to wait before showing the skip cinematic button
        long long delaySkipButtonDisplay; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_StartCinematic::startCinematicData_t info; // Offset: 0x0

}; // Size: 0x10
