struct idHandsHitReaction_t
{
    // the name of the reaction, for debugging purposes
    idAtomicString name; // Offset: 0x0

    // the hit reaction animweb state
    idAtomicString animWebState; // Offset: 0x8

    // the same states will have the same indices in different animwebs
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > animWebStateIndex; // Offset: 0x10

    // branch to this reaction if an impact is detected
    idAtomicString impactReaction; // Offset: 0x18

    // generally this is a brief clamped animation and the animweb pathing is from the generic idle state through this state and back to the generic idle state info about the hit reaction
    idHandsHitReactionDescriptor_t descriptor; // Offset: 0x20

}; // Size: 0x50
