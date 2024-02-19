struct idHUDEvent_UpdateUIWalkthrough
{
    struct updateUIWalkthroughData_t
    {
        bool active; // Offset: 0x0

        idUIWalkthroughSequenceItem_t* sequenceItem; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_UpdateUIWalkthrough::updateUIWalkthroughData_t info; // Offset: 0x0

}; // Size: 0x10
