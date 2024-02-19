struct idAICondition_Shared_TargetFilter_Visibility : idAICondition
{
    // return if we've seen target since this time
    idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x18

}; // Size: 0x20
