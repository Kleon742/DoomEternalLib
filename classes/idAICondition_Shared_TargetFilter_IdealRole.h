struct idAICondition_Shared_TargetFilter_IdealRole : idAICondition
{
    enum aiGlobalCondition_t : int
    {
        NONE = 0,
        I_AM_CLOSEST = 1
    };

    // bits for which monsters to include in our group
    aiMonsterType_t monsters; // Offset: 0x18

    // bits for the filters we want to apply
    idAICondition_Shared_TargetFilter_IdealRole::aiGlobalCondition_t filters; // Offset: 0x20

}; // Size: 0x28
