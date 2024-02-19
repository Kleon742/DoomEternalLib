struct pvpProgressEntry_t
{
    // list of progression requirements for the corresponding items to be unlocked
    idList < pvpProgressionReq_t , TAG_IDLIST , false > pvpProgressionReqs; // Offset: 0x0

    // list of progress items to allow the player to use
    idList < pvpProgressionItem_t , TAG_IDLIST , false > pvpProgressionItems; // Offset: 0x18

}; // Size: 0x30
