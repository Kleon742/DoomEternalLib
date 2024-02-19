struct idAICondition_Shared_WebNodeHasCustomFlags : idAICondition
{
    // flags required
    animWebNodeCustomFlag_t requiredFlags; // Offset: 0x18

    // flags that must not be there
    animWebNodeCustomFlag_t excludeFlags; // Offset: 0x20

}; // Size: 0x28
