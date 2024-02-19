struct AlertCycle_CheckFreezeState : idAIStateTransition
{
    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t icyFrozenState_min; // Offset: 0xF8

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t icyFrozenState_max; // Offset: 0xFC

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t microwaveFrozenState_min; // Offset: 0x100

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t microwaveFrozenState_max; // Offset: 0x104

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t sacrificeFrozenState_min; // Offset: 0x108

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t sacrificeFrozenState_max; // Offset: 0x10C

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t bfgArcFrozenState_min; // Offset: 0x110

    // transition passes if actual state is between min/max, inclusive
    aiFreezeState_t bfgArcFrozenState_max; // Offset: 0x114

}; // Size: 0x118
