struct idDeclPvpProgression : idDeclTypeInfo
{
    // whether this decl is active in the manager
    bool active; // Offset: 0x88

    // the entire progression tree
    idList < pvpProgressEntry_t , TAG_IDLIST , false > pvpProgression; // Offset: 0x90

}; // Size: 0xA8
