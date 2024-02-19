struct idMainMenu_Screen_PVPSeries : idMenuElement
{
    enum pvpSeriesTab_t : int
    {
        PVP_SERIES_TAB_BATTLEMODE_SLAYER = 0,
        PVP_SERIES_TAB_BATTLEMODE_DEMON = 1,
        NUM_PVP_SERIES_TABS = 2
    };

    struct pvpSeriesRankInfo_t
    {
        int rank; // Offset: 0x0

        int progress; // Offset: 0x4

        int goal; // Offset: 0x8

    }; // Size: 0xC

    idSWFWidget_SectionList* rankList; // Offset: 0x100

    idSWFWidget_PVPSeries_RankDetails* rankDetails; // Offset: 0x108

    idSWFWidget_PVPSeries_RankProgress* rankProgress; // Offset: 0x110

    idSWFWidget_PlayerBadge* playerBadge; // Offset: 0x118

    idSWFWidget_HeaderTimer* timeRemaining; // Offset: 0x120

    idList < challengeInfo_t , TAG_IDLIST , false > rankData[2]; // Offset: 0x128

    // TODO: replace this with a tab index
    bool isDemon; // Offset: 0x158

}; // Size: 0x160
