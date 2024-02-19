struct idPlayerBodyReactionData_t
{
    // the default state
    idAnimWebPath tpBodyDefaultPath; // Offset: 0x0

    // list of shared base reactions
    idList < idPlayerBodyReaction_t , TAG_IDLIST , false > reactionsBase; // Offset: 0x30

    // list of map-specific reactions
    idList < idPlayerBodyReaction_t , TAG_IDLIST , false > reactionsMapSpecific; // Offset: 0x48

}; // Size: 0x60
