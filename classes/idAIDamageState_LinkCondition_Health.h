struct idAIDamageState_LinkCondition_Health : idAIDamageState_LinkCondition
{
    // if AI is greater than this health fraction, reaction is invalid, unless there is a prerequisite state
    float prerequisiteHealthFraction; // Offset: 0x20

}; // Size: 0x28
