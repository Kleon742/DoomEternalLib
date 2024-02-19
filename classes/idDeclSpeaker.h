struct idDeclSpeaker : idGameDeclTypeInfo
{
    // The raw name text to look for in the sound event name. For example: "Play_vo_SENTINEL_KING__Why_are_you_here", the key is "vo_SENTINEL_KING" (not case sensitive).
    idStr key; // Offset: 0x90

    // The speaker name to display
    idStrId displayName; // Offset: 0xC0

    // The speaker portrait to display (only on HUD, if showSpeakerHud is set)
    idMaterial2* portrait; // Offset: 0xC8

    // If true, show the speaker UI on the HUD when this person is speaking.
    bool showSpeakerHud; // Offset: 0xD0

}; // Size: 0xD8
