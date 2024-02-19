struct idSWFWidget_PVPSeries_RankDetails : idSWFWidget
{
    enum displayState_t : int
    {
        DISPLAY_STATE_CURRENT = 0,
        DISPLAY_STATE_PREVIOUS = 1,
        DISPLAY_STATE_ANIMATE_PROGRESS = 2,
        NUM_DISPLAY_STATES = 3
    };

    idDeferredFuncList deferred; // Offset: 0x180

    idSWFWidget_PVPSeries_RankDetails::displayState_t displayState; // Offset: 0x1C8

    idStr displayName; // Offset: 0x1D0

    idStr description; // Offset: 0x200

    int currentProgress; // Offset: 0x230

    int previousProgress; // Offset: 0x234

    int goal; // Offset: 0x238

    int rank; // Offset: 0x23C

    bool isDemon; // Offset: 0x240

    idDeclWarehouseItem* rewardItem; // Offset: 0x248

    int rewardXP; // Offset: 0x250

    bool useProgressBarWidget; // Offset: 0x254

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressBarTweenDuration; // Offset: 0x258

    idSWFWidget_PVPSeries_RankDetails::anon_30 sprites; // Offset: 0x260

    idSWFWidget_ProgressBar* progressBar; // Offset: 0x4D0

    idSWFWidget_RankBadge* rankBadge; // Offset: 0x4D8

    idSWFWidget_Seasons_RewardListItem* rewardWidget; // Offset: 0x4E0

}; // Size: 0x4E8
