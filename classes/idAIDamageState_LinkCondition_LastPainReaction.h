struct idAIDamageState_LinkCondition_LastPainReaction : idAIDamageState_LinkCondition
{
    // pass only is Equal or Greater than this
    painType_t painReaction; // Offset: 0x20

    // if true, accept any value greater than value in addition to specified value
    bool acceptGreaterThan; // Offset: 0x24

}; // Size: 0x28
