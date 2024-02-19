struct idAICondition_Shared_IsSlayerAttackingMeWithMicrowave : idAICondition
{
    // if the attack started > this amount of time ago, the condition will fail
    idTypesafeTime < float , secondUnique_t , 1 > maxTimeSinceAttackStarted; // Offset: 0x18

}; // Size: 0x20
