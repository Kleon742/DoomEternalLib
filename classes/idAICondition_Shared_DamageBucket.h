struct idAICondition_Shared_DamageBucket : idAICondition
{
    // check this bucket
    painType_t painType; // Offset: 0x18

    // condition passes if bucket level is this high or more
    float requiredLevel; // Offset: 0x1C

}; // Size: 0x20
