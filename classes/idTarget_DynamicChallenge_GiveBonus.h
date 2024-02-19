struct idTarget_DynamicChallenge_GiveBonus : idTarget
{
    // bonus points
    int bonusPoints; // Offset: 0xB88

    // bonus time in seconds
    idTypesafeTime < float , secondUnique_t , 1 > bonusTimeSec; // Offset: 0xB8C

}; // Size: 0xB90
