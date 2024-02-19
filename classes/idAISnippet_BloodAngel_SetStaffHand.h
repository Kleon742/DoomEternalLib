struct idAISnippet_BloodAngel_SetStaffHand : idAISnippet
{
    // constraint staff joint to this hand; NOTE: AI_HAND_DUAL is not supported
    aiHand_t handIndex; // Offset: 0x18

    // if true, disable constraints on both hands (i.e. staff joint will inherit transform directly from animation)
    bool clear; // Offset: 0x1C

    // if true, check component decl for a default staff hand and set it to that if it exists
    bool forceDefaultHand; // Offset: 0x1D

    // if true, force snap to new staff hand instead of lerp
    bool forceSnap; // Offset: 0x1E

}; // Size: 0x20
