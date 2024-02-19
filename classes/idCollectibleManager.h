struct idCollectibleManager
{
    idList < const idDeclCollectible * , TAG_IDLIST , false > acquiredCollectibles; // Offset: 0x0

    // contains the save data of items we have aquired
    idList < idStr , TAG_IDLIST , false > declNameCurList; // Offset: 0x18

    // data for collectible notifications
    idDeclUIDataGroup* collectibleGroupUIData; // Offset: 0x30

}; // Size: 0x38
