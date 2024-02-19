struct idHUDEvent_HordeStagedTimerStart
{
    struct hordeStagedTimerStartData_t
    {
        // cache it for ease of use
        int numStages; // Offset: 0x0

        // cached sum of stage durations
        idTypesafeTime < float , secondUnique_t , 1 > totalDuration; // Offset: 0x4

        // stages may not be equal, need to calculate burndown at unique rate for each stage
        idTypesafeTime < float , secondUnique_t , 1 > stageDurations[3]; // Offset: 0x8

        // BOUNTY, TRAVERSAL, BLITZ, etc.
        unsigned short challengeType; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_HordeStagedTimerStart::hordeStagedTimerStartData_t info; // Offset: 0x0

}; // Size: 0x18
