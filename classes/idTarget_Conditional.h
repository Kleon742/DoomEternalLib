struct idTarget_Conditional : idTarget
{
    enum targetConditionalTriggerCondition_t : int
    {
        WHEN_GOING_ABOVE_COUNT = 0,
        WHEN_GOING_BELOW_COUNT = 1,
        WHEN_REACHING_COUNT = 2
    };

    // Condition for when to activate targets
    idTarget_Conditional::targetConditionalTriggerCondition_t condition; // Offset: 0xB88

    // Inital count value
    int initialCount; // Offset: 0xB8C

    // Conditional value to test against
    int count; // Offset: 0xB90

    // Only activate once
    bool activateOnce; // Offset: 0xB94

    bool activated; // Offset: 0xB95

    int num; // Offset: 0xB98

}; // Size: 0xBA0
