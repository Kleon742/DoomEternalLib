struct idTransitionCode : idClass
{
    // the transition code returned to the state
    int transitionCode; // Offset: 0x10

    // the reason for the transition (used for debug logs)
    char* reason; // Offset: 0x18

}; // Size: 0x20
