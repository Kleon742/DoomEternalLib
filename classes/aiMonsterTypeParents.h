struct aiMonsterTypeParents
{
    // the child aiMonsterType_t
    aiMonsterType_t child; // Offset: 0x0

    // the list of aiMonsterType_t parents for the child
    idList < aiMonsterType_t , TAG_IDLIST , false > parents; // Offset: 0x8

}; // Size: 0x20
