struct idShared_MoveToPositionInBlackboard : idAIState
{
    // memory holding the position we have to move to
    idAtomicString destinationMemoryKey; // Offset: 0x130

    // walk speed
    walkState_t walkstate; // Offset: 0x138

    // arrival radius {{ units = m }}
    float arrivalRadius; // Offset: 0x13C

    // walking radius - if within this distance, we'll walk rather than run {{ units = m }}
    float walkingRadius; // Offset: 0x140

    // whether we're charging to the destination
    bool charge; // Offset: 0x144

    // allow strafing
    bool strafe; // Offset: 0x145

}; // Size: 0x148
