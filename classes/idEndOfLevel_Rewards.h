struct idEndOfLevel_Rewards : idMenuElement
{
    swfPlatform_t currentPlatform; // Offset: 0x100

    endOfLevelRewardsScreens_t currentScreen; // Offset: 0x104

    idEndOfLevel_Rewards_Subscreen* screens[3]; // Offset: 0x108

    idSWFWidget_Button* prevButton; // Offset: 0x120

    idSWFWidget_Button* nextButton; // Offset: 0x128

    idSWFWidget* spinner; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serviceRefreshTime; // Offset: 0x138

    bool everythingLoaded; // Offset: 0x140

    bool pageControlsEnabled; // Offset: 0x141

    campaignSubType_t campaignSubType; // Offset: 0x144

}; // Size: 0x148
