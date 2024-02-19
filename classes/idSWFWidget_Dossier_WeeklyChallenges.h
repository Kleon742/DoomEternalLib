struct idSWFWidget_Dossier_WeeklyChallenges : idSWFWidget
{
    challengeWeek_t weeklyChallengeData; // Offset: 0x180

    idSWFWidget_Grid* weeklyChallengeGrid; // Offset: 0xFB8

    idList < idMenu_GridData * , TAG_IDLIST , false > weeklyChallengeCatalog; // Offset: 0xFC0

    idSWFWidget_Dossier_ChallengeTracker* weeklyChallengeTracker; // Offset: 0xFD8

    // manual override
    bool noChallengesAvailable; // Offset: 0xFE0

}; // Size: 0xFE8
