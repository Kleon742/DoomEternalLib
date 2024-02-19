struct idEndOfLevel_Challenges : idMenuElement
{
    idList < challengeInfo_t , TAG_IDLIST , false > challengeData; // Offset: 0x100

    idArray < idSWFWidget_EOL_ChallengeItem * , 3 > challengeWidgets; // Offset: 0x118

    int availablePraetorPoints; // Offset: 0x130

    int availablePerks; // Offset: 0x134

    bool animationStarted; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelayEndTime; // Offset: 0x140

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showChallengesDelayEndTime; // Offset: 0x148

    int challengeToShow; // Offset: 0x150

    int challengeToAnimate; // Offset: 0x154

    bool isPlaying; // Offset: 0x158

}; // Size: 0x160
