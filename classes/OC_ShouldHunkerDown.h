struct OC_ShouldHunkerDown : idAIStateTransition
{
    // don't start a charge if we're closer than this {{ units = m }}
    float minDistance; // Offset: 0xF8

    // beyond this distance, don't charge {{ units = m }}
    float maxDistance; // Offset: 0xFC

    // only start a charge if shield has less health than this
    float maxShieldHealthFraction; // Offset: 0x100

}; // Size: 0x108
