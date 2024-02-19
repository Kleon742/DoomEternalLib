struct idDeclSoundPack : idGameDeclTypeInfo
{
    // Display name for this sound pack (e.g. on the settings menu).
    idStrId displayName; // Offset: 0x90

    // Description of this sound pack.
    idStrId description; // Offset: 0x94

    // Name of cvar to toggle when enabling/disabling this sound pack. If not set, this will not appear in the settings menu.
    idStr cvarName; // Offset: 0x98

    // Name of Wwise group this sound pack targets.
    idStr groupName; // Offset: 0xC8

    // Name of Wwise state to use when this sound pack is turned on.
    idStr onStateName; // Offset: 0xF8

    // Name of Wwise state to use when this sound pack is turned off.
    idStr offStateName; // Offset: 0x128

}; // Size: 0x158
