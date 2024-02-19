struct idSyncAttack_SlideMoveValidationResult
{
    idHavokQueryId slideMoveFromTargetQuery; // Offset: 0x0

    // Target to Validation point.
    trace_t slideMoveFromTargetResult; // Offset: 0x8

    bool slideMoveFromTargetComplete; // Offset: 0x88

    // {{ units = m }}
    idVec3 slideMoveFromTargetVelocity; // Offset: 0x8C

    // {{ units = m }}
    idVec3 slideMoveFromTargetPosition; // Offset: 0x98

    idHavokQueryId slideMoveFromInstigatorQuery; // Offset: 0xA8

    // Instigator To Validation point.
    trace_t slideMoveFromInstigatorResult; // Offset: 0xB0

    bool slideMoveFromInstigatorComplete; // Offset: 0x130

    // {{ units = m }}
    idVec3 slideMoveFromInstigatorVelocity; // Offset: 0x134

    // {{ units = m }}
    idVec3 slideMoveFromInstigatorPosition; // Offset: 0x140

    bool slideMoveAdjustVelocityForRamp; // Offset: 0x14C

    bool slideMoveTestsPlayerClip; // Offset: 0x14D

}; // Size: 0x150
