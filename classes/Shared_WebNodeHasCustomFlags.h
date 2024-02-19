struct Shared_WebNodeHasCustomFlags : idAIStateTransition
{
    // flags required
    animWebNodeCustomFlag_t requiredFlags; // Offset: 0xF8

    // flags that must not be there
    animWebNodeCustomFlag_t excludeFlags; // Offset: 0x100

}; // Size: 0x108
