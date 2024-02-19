struct idSWFWidget_Button_ChallengeCard : idSWFWidget_Button
{
    idSWFWidget_MarqueeText* nameWidget; // Offset: 0x2A0

    idSWFWidget_ProgressBar* progressBar; // Offset: 0x2A8

    challengeInfo_t challengeInfo; // Offset: 0x2B0

    bool isPinned; // Offset: 0x460

    bool justCompleted; // Offset: 0x461

}; // Size: 0x468
