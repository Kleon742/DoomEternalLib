struct Shared_ShouldAbort : idAIStateTransition
{
    // enemy within this range? {{ units = m }}
    float enemyRange; // Offset: 0xF8

    // dot of max angle from FOV center that enemy can be to continue action
    float enemyInMyFOVDot; // Offset: 0xFC

}; // Size: 0x100
