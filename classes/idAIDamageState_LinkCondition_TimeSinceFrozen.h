struct idAIDamageState_LinkCondition_TimeSinceFrozen : idAIDamageState_LinkCondition
{
    // if AI is greater than this health fraction, reaction is invalid, unless there is a prerequisite state
    float timeInSeconds; // Offset: 0x20

    // if true, include icy freeze check
    bool icyFreeze; // Offset: 0x24

    // if true, include bfg tendril freeze check
    bool bfgFreeze; // Offset: 0x25

    // if true, include microwave freeze check
    bool microwaveFreeze; // Offset: 0x26

}; // Size: 0x28
