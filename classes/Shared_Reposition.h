struct Shared_Reposition : idAIStateTransition
{
    // common parms
    posePositionScoreParms_Common_t commonParms; // Offset: 0xF8

    // common parms
    posePositionScoreParms_Advanced_t advancedParms; // Offset: 0x128

    // name of pose position set to use, can be empty
    idAtomicString setName; // Offset: 0x170

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x178

    // if true don't reposition when injured
    int disableWhenInjured; // Offset: 0x17C

    // whether attacks are valid in this reposition
    bool allowAttacks; // Offset: 0x180

    // whether to ignore the move intervals
    bool ignoreTimers; // Offset: 0x181

    // if true, don't reposition when best position is equivalent in functionality to current position ( behavior dependent )
    bool ignoreEquivalent; // Offset: 0x182

}; // Size: 0x188
