struct idSWFWidget_PVPSeries_RankListItem : idSWFWidget_Button
{
    idStr displayName; // Offset: 0x2A0

    int progress; // Offset: 0x2D0

    int goal; // Offset: 0x2D4

    int rank; // Offset: 0x2D8

    bool isDemon; // Offset: 0x2DC

    idDeclWarehouseItem* rewardItem; // Offset: 0x2E0

    int rewardXP; // Offset: 0x2E8

    idSWFWidget_PVPSeries_RankListItem::anon_31 sprites; // Offset: 0x2F0

    idSWFWidget_RankBadge* rankBadge; // Offset: 0x590

}; // Size: 0x598
