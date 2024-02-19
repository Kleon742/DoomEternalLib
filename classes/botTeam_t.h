struct botTeam_t
{
    idStaticList < botTeamMember_t , 12 , false , TAG_IDLIST > members; // Offset: 0x0

    gameTeam_t team; // Offset: 0xD8

}; // Size: 0xE0
