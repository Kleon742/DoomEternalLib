struct idAISnippet_Shared_OverrideFocus : idAISnippet
{
    // type of focus to apply to, use MAX to apply to all
    aiFoci_t focusType; // Offset: 0x18

    // focus tag
    idAtomicString overrideFocusTag; // Offset: 0x20

    // orientation tag
    idAtomicString overrideOrientationTag; // Offset: 0x28

    // tracking parms name
    idAtomicString overrideTrackingParmsName; // Offset: 0x30

    // if true, clear instead of set
    bool clearFocusTag; // Offset: 0x38

    // if true, clear instead of set
    bool clearOrientationTag; // Offset: 0x39

    // if true, clear instead of set
    bool clearParms; // Offset: 0x3A

}; // Size: 0x40
