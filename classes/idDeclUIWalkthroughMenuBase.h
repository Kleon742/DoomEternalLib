struct idDeclUIWalkthroughMenuBase : idGameDeclTypeInfo
{
    struct pointerContainer_t
    {
        idDeclUIWalkthroughMenuBase* decl; // Offset: 0x0

    }; // Size: 0x8

    // Check if two widget IDs match; the right-hand side is allowed to have a wildcard for partial matches. The menu ID this decl uses
    hudMenuID_t menuID; // Offset: 0x90

    // amount to dim all non-interactable widgets
    float dimAmount; // Offset: 0x94

    // The sequence items for this walkthrough
    idList < idUIWalkthroughSequenceItem_t , TAG_IDLIST , false > sequenceItems; // Offset: 0x98

    // The next walkthrough to trigger when this one finishes. Useful for cross-screen walkthroughs. Leave empty if not needed.
    idDeclUIWalkthroughMenuBase* nextWalkthrough; // Offset: 0xB0

    // Whether to respect the tutorial setting being off ( necessary for shell walkthroughs )
    bool ignoreTutorialSetting; // Offset: 0xB8

    // Whether this walkthrough requires an online connection to work. Will abandon if offline during walkthrough if set to true.
    bool requireOnlineServices; // Offset: 0xB9

}; // Size: 0xC0
