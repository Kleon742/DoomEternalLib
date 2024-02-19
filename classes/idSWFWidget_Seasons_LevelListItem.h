struct idSWFWidget_Seasons_LevelListItem : idSWFWidget_Button
{
    idSharedPtr < seasonProgress_t > progress; // Offset: 0x2A0

    int level; // Offset: 0x2A8

    int currentXPOverride; // Offset: 0x2AC

    int boosterXP; // Offset: 0x2B0

    idSWFWidget_Seasons_Reward_Base* contentWidget; // Offset: 0x2B8

    // Needs to be updated when focusing on a reward
    idSWFWidget_Seasons_Summary* summaryWidget; // Offset: 0x2C0

    idSWFWidget_Seasons_XP_Bar* xpBar; // Offset: 0x2C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animEndTime; // Offset: 0x2D0

    swfSoundType_t animationProgressFillSound; // Offset: 0x2D8

    swfSoundType_t animationLevelCompleteSound; // Offset: 0x2DC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressBarTweenDuration; // Offset: 0x2E0

    bool useExactTweenDuration; // Offset: 0x2E8

}; // Size: 0x2F0
