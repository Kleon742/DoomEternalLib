struct Shared_ChargeMelee : idAIStateTransition
{
    // only temp charge if enemy within this range {{ units = m }}
    float range; // Offset: 0xF8

    // make sure the position awareness checks are completed before allowing this transition
    bool waitForPositionAwarenessChecks; // Offset: 0xFC

    // whether to ignore the time checks
    bool ignoreChargeTimer; // Offset: 0xFD

}; // Size: 0x100
