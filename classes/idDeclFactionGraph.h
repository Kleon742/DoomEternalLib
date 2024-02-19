struct idDeclFactionGraph : idDeclFactionTemplate < idDeclFactionSubGraph , idDeclFactionNode , idDeclFactionLink >
{
    // only consider responses with depth <= activeDepth
    int activeDepth; // Offset: 0xF8

    // if false, ignore any links marked as infighting
    bool enableNaturalInfighting; // Offset: 0xFC

}; // Size: 0x100
