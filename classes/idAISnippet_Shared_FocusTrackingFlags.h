struct idAISnippet_Shared_FocusTrackingFlags : idAISnippet
{
    // focus type to change, MAX for everything
    aiFoci_t focusType; // Offset: 0x18

    // if true, focus tracking will snap to goal when disabled, to prevent awkward re-rotation when blending back in
    bool snapToAnimWhenDisabled; // Offset: 0x1C

}; // Size: 0x20
