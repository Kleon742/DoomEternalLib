struct idAISnippet_StoneImp_UpdateImmolatorTrajectory : idAISnippet
{
    // name of memory key to use for caching last update time
    idAtomicString timestampMemKey; // Offset: 0x18

    // max rotation rate of correction
    float rotationRateMax; // Offset: 0x20

    // delay (in MS) between trajectory updates
    milliToGameTime_t updateIntervalMS; // Offset: 0x28

}; // Size: 0x38
