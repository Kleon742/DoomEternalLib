struct idSWFWidget_ChallengeItem : idSWFWidget
{
    challengeInfo_t challenge; // Offset: 0x180

    idSWFWidget_MarqueeText* titleText; // Offset: 0x330

    bool showProgressBar; // Offset: 0x338

    bool showTween; // Offset: 0x339

    bool finishedTweening; // Offset: 0x33A

    bool isTracking; // Offset: 0x33B

    bool hideRequested; // Offset: 0x33C

    bool hasQueuedChallenge; // Offset: 0x33D

    int progressFrame; // Offset: 0x340

    float progressWidth; // Offset: 0x344

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showTime; // Offset: 0x348

}; // Size: 0x350
