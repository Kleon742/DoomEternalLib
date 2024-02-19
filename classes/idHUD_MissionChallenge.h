struct idHUD_MissionChallenge : idHUDElement
{
    idSWFWidget* introHeader; // Offset: 0xF8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > introHeaderEndTime; // Offset: 0x100

    idArray < idSWFWidget_ChallengeItem * , 3 > challenges; // Offset: 0x108

    idSWFWidget_ChallengeItem* challengeToShow; // Offset: 0x120

    idSWFWidget* challengeDecor; // Offset: 0x128

    idList < challengeInfo_t , TAG_IDLIST , false > challengesToShowList; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > challengeEndTime; // Offset: 0x148

    bool challengeIsShowing; // Offset: 0x150

    idArray < challengeInfo_t , 3 > pinnedChallenges; // Offset: 0x158

    idSWFWidget_EarningsItem* earningsWidget; // Offset: 0x668

    idList < earningsInfo_t , TAG_IDLIST , false > earningsToShowList; // Offset: 0x670

}; // Size: 0x688
