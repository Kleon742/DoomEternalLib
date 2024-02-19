struct idSWFWidget_TriumphDetails : idSWFWidget
{
    idSWFWidget_Seasons_RewardListItem* rewardItems[3]; // Offset: 0x180

    idStr displayName; // Offset: 0x198

    idStr description; // Offset: 0x1C8

    idMaterial2* icon; // Offset: 0x1F8

    int progress; // Offset: 0x200

    int goal; // Offset: 0x204

    int tier; // Offset: 0x208

    idMaterial2* tierIcon; // Offset: 0x210

    swfNamedColors_t tierTextColor; // Offset: 0x218

    bool showNextTierProgress; // Offset: 0x21C

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x220

}; // Size: 0x238
