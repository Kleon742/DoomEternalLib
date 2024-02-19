struct idHUDMenu_EscalationRewards : idHUDMenu_IngameRewards
{
    idSWFWidget_Escalation_Progress* progressWidget; // Offset: 0x288

    idSWFWidget* perkWidget; // Offset: 0x290

    notificationPack_t notificationData; // Offset: 0x298

    idDeclPerk* hammerPerk; // Offset: 0x5D8

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > escRewards; // Offset: 0x5E0

    int progress; // Offset: 0x5F8

}; // Size: 0x600
