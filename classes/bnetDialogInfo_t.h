struct bnetDialogInfo_t
{
    idStr headerText; // Offset: 0x0

    idStr descText; // Offset: 0x30

    idList < bnetDialogButtonInfo_t , TAG_IDLIST , false > buttonInfo; // Offset: 0x60

}; // Size: 0x78
