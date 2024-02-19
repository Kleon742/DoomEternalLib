struct idEncounterEvent_WaitForAIHealthLevel : idEncounterEvent_Wait
{
    // Keep a list of all actors that need to be tracked for death
    idList < idEncounterSpawn_t , TAG_IDLIST , false > trackedActors; // Offset: 0xA8

    // Normalized percent health of the group that we need to drop below to pass
    float targetHealthPercent; // Offset: 0xC0

    // Amount of damage that has been dealt to the group
    float damageDone; // Offset: 0xC4

    // Total amount of health for allendSummonerSpawnRequests AI that have EVER belonged to the gruop
    float maxStartingHealth; // Offset: 0xC8

}; // Size: 0xD0
