struct idSWFWidget_MatchSummary_RewardsTab : idSWFWidget
{
    enum widgetCommand_MatchSummary_RewardsTab_t : int
    {
        CMD_SCROLL_LEFT_BUTTON = 30,
        CMD_SCROLL_RIGHT_BUTTON = 31
    };

    idSWFWidget_Seasons_RewardList* rewardList; // Offset: 0x180

    bool hasNewRewards; // Offset: 0x188

    bool isActive; // Offset: 0x189

    idSWFWidget_Button* leftArrow; // Offset: 0x190

    idSWFWidget_Button* rightArrow; // Offset: 0x198

}; // Size: 0x1A0
