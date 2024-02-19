struct Shared_MoveToNewPosition : idAIStateTransition
{
    // name in positioning parms decl list to match
    idAtomicString dataName; // Offset: 0xF8

    // name in positioning parms decl list to match for hangout points
    idAtomicString dataName_hangout; // Offset: 0x100

    // if false, don't move when we need to engage
    bool useWhenEngaged; // Offset: 0x108

    // if this transition comes from a state moving towards enemy
    bool movingTowardEnemy; // Offset: 0x109

    // if true, we can stay at our current position if it is still ideal
    bool allowCurrentPosition; // Offset: 0x10A

    // used to filter hangout nodes if desired
    aiHangoutNodeSelection_t hangoutSelection; // Offset: 0x10C

    // override positioning parms decl
    idDeclAIPositioningParms* positioningParms; // Offset: 0x110

}; // Size: 0x118
