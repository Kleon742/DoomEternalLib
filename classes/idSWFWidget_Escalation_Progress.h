struct idSWFWidget_Escalation_Progress : idSWFWidget
{
    idSWFWidget_Seasons_PerkListItem* rewardPerk; // Offset: 0x180

    idSWFWidget_Seasons_PerkListItem* rewardItem; // Offset: 0x188

    idDeclPerk* perk; // Offset: 0x190

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > rewards; // Offset: 0x198

    int rewardProgress; // Offset: 0x1B0

    idStr progressBarAnimName; // Offset: 0x1B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animEndTime; // Offset: 0x1E8

}; // Size: 0x1F0
