struct idAlertCycle_Stagger : idAIState
{
    painType_t currentStaggerType; // Offset: 0x130

    // always false when the state is entered and must be set by an anim event
    bool doRetaliationChecks; // Offset: 0x134

}; // Size: 0x138
