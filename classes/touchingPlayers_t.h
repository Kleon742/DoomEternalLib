struct touchingPlayers_t
{
    idStaticList < int , 6 , false , TAG_IDLIST > actualTouching; // Offset: 0x0

    idStaticList < float , 6 , false , TAG_IDLIST > effectiveTouchingContributionForStrategy; // Offset: 0x30

}; // Size: 0x60
