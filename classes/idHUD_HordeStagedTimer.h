struct idHUD_HordeStagedTimer : idHUDElement
{
    // Static info (per timer use) cache it for ease of use
    int numStages; // Offset: 0xF8

    // cached sum of stage durations
    idTypesafeTime < float , secondUnique_t , 1 > totalDuration; // Offset: 0xFC

    // stages may not be equal, need to calculate burndown at unique rate for each stage
    idList < idTypesafeTime < float , secondUnique_t , 1 > , TAG_IDLIST , false > stageDurations; // Offset: 0x100

    // BOUNTY, TRAVERSAL, BLITZ, etc.
    idStr challengeString; // Offset: 0x118

    // Updated info
    int currentStage; // Offset: 0x148

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeSinceStart; // Offset: 0x150

    // State tracking (since we will be turned on/off a lot)
    bool timerActive; // Offset: 0x158

}; // Size: 0x160
