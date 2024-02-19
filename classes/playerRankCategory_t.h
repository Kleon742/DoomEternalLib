struct playerRankCategory_t
{
    // SWF colors to use for widgets that show this rank category
    playerRankColors_t colors; // Offset: 0x0

    // Ranks that belong to this category
    idList < playerRank_t , TAG_IDLIST , false > ranks; // Offset: 0x28

}; // Size: 0x40
