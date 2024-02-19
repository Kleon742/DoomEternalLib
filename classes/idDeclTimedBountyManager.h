struct idDeclTimedBountyManager : idGameDeclTypeInfo
{
    // TODO: Is there any other data that is consistent across all bounties? Outline colors for this bounty at each timer stage. Place in order of value (e.g. gold, silver, bronze)
    idList < idColor , TAG_IDLIST , false > aiHighlightColors; // Offset: 0x90

    // sound to play if the player kills all the bounty demons in the given time
    idSoundEvent* bountyCompletedSound; // Offset: 0xA8

    // sound to play if the player fails to kill all the bounty demons in the given time
    idSoundEvent* bountyFailedSound; // Offset: 0xB0

    // List of VO to play when the bounty is close to ending. One VO line is chosen at random.
    idList < idSoundEvent * , TAG_IDLIST , false > bountyEndingSoonVO; // Offset: 0xB8

    // How close to the end of the bounty should the ending soon VO trigger? {{ units == ms }}
    idTypesafeTime < int , millisecondUnique_t , 1000 > bountyEndingSoonTime; // Offset: 0xD0

    // Gold particle emitter entity def for bounty death VFX
    idDeclEntityDef* goldEmitterDef; // Offset: 0xD8

    // Silver particle emitter entity def for bounty death VFX
    idDeclEntityDef* silverEmitterDef; // Offset: 0xE0

    // Bronze particle emitter entity def for bounty death VFX
    idDeclEntityDef* bronzeEmitterDef; // Offset: 0xE8

}; // Size: 0xF0
