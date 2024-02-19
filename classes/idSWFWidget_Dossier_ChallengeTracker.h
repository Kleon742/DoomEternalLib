struct idSWFWidget_Dossier_ChallengeTracker : idSWFWidget
{
    challengeWeek_t data; // Offset: 0x180

    int challengesCompleted; // Offset: 0xFB8

    idSWFWidget_Dossier_ChallengeReward* rewardWidgets[2]; // Offset: 0xFC0

}; // Size: 0xFD0
