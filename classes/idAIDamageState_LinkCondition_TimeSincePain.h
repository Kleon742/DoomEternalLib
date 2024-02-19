struct idAIDamageState_LinkCondition_TimeSincePain : idAIDamageState_LinkCondition
{
    // pain type to check, none implies any
    painType_t painType; // Offset: 0x20

    // if AI is greater than this health fraction, reaction is invalid, unless there is a prerequisite state
    float timeInSeconds; // Offset: 0x24

}; // Size: 0x28
