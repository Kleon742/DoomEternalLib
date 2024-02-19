struct stateTransitionMetaNode_t
{
    idTypeInfo* transitionType; // Offset: 0x0

    idAtomicString transitionName; // Offset: 0x8

    idAtomicString lastTranscodeReason; // Offset: 0x10

    stateMetaNode_t* passthroughState; // Offset: 0x18

}; // Size: 0x20
