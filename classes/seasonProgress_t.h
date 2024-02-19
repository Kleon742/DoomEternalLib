struct seasonProgress_t
{
    int xp; // Offset: 0x0

    // starts at 0, not an index
    int level; // Offset: 0x4

    idList < int , TAG_IDLIST , false > levelsAwarded; // Offset: 0x8

    // Reference to the definition
    idSharedPtr < seasonDefinition_t > season; // Offset: 0x20

}; // Size: 0x28
