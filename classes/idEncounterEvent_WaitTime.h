struct idEncounterEvent_WaitTime : idEncounterEvent_Wait
{
    // Time the wait was activated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > waitStartTime; // Offset: 0xA8

    // Duration of the wait command
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > waitDuration; // Offset: 0xB0

}; // Size: 0xB8
