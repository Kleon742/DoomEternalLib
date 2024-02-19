struct idUIView_PlayerBadge
{
    idUIView_PlayerBadge::anon_14 sprites; // Offset: 0x0

    idSWFWidget_PrestigeLevel* prestigeLevel; // Offset: 0x270

    idSWFWidget_DoomLevel* doomLevel; // Offset: 0x278

    idSWFWidget_MarqueeText* titleText; // Offset: 0x280

    idSWFWidget_PlayerStreak* streakCurrent; // Offset: 0x288

    idSWFWidget_PlayerStreak* streakPrevious; // Offset: 0x290

    idSWFWidget_RankBadge* rankBadgeCurrent; // Offset: 0x298

    idSWFWidget_RankBadge* rankBadgePrevious; // Offset: 0x2A0

    idSWFWidget* newStreakWin; // Offset: 0x2A8

    idSWFWidget* newStreakLoss; // Offset: 0x2B0

    idDeferredFuncList deferred; // Offset: 0x2B8

    playerBadgeDisplayStyle_t displayStyle; // Offset: 0x300

    playerBadgeDisplayState_t displayState; // Offset: 0x304

    playerBadgeDisplayInfo_t* displayInfo; // Offset: 0x308

    float boostersWidth; // Offset: 0x310

}; // Size: 0x318
