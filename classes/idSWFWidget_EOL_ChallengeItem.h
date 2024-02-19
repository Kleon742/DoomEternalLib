struct idSWFWidget_EOL_ChallengeItem : idSWFWidget
{
    challengeInfo_t challenge; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelayEndTime; // Offset: 0x330

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressShowEndTime; // Offset: 0x338

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > progressTweenEndTime; // Offset: 0x340

    bool animationComplete; // Offset: 0x348

}; // Size: 0x350
