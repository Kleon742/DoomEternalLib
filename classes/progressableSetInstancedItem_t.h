struct progressableSetInstancedItem_t : instancedItem_t
{
    int xp; // Offset: 0x60

    int level; // Offset: 0x64

    idList < int , TAG_IDLIST , false > levelsAwarded; // Offset: 0x68

}; // Size: 0x80
