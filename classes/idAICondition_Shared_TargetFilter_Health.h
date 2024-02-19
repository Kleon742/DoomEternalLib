struct idAICondition_Shared_TargetFilter_Health : idAICondition
{
    // acceptable health values on targets
    idRange < float > healthRange; // Offset: 0x18

    // Compare in the range of 0.0 to 1.0
    bool usePercentage; // Offset: 0x20

}; // Size: 0x28
