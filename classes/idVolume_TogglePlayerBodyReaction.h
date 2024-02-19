struct idVolume_TogglePlayerBodyReaction : idVolume
{
    struct reactionTypeToggleInfo_t
    {
        // reaction type to toggle.
        idPlayerBodyReactionType_t reactionTypeToToggle; // Offset: 0x0

        // true if we want to enable the reaction. false to disable.
        bool isEnabled; // Offset: 0x4

    }; // Size: 0x8

    // reactions to toggle;
    idList < idVolume_TogglePlayerBodyReaction::reactionTypeToggleInfo_t , TAG_IDLIST , false > reactionToggleList; // Offset: 0xC20

}; // Size: 0xC38
