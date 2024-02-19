struct idDeclPvpProgressionScoring : idDeclTypeInfo
{
    // points to award when winning a match
    int matchWinPts; // Offset: 0x88

    // points to award when losing a match
    int matchLossPts; // Offset: 0x8C

    // points to award when you draw first blood
    int firstBloodPts; // Offset: 0x90

    // points to award when you win a round
    int roundWinPts; // Offset: 0x94

    // points to award when you losing a round
    int roundLossPts; // Offset: 0x98

    // points to award when we have sequential round wins
    idList < int , TAG_IDLIST , false > sequentialWinPts; // Offset: 0xA0

    // slayer actions that score points for the match
    idList < slayerScoringActions_t , TAG_IDLIST , false > slayerScoringActions; // Offset: 0xB8

    // demon actions that score points for the match
    idList < demonScoringActions_t , TAG_IDLIST , false > demonScoringActions; // Offset: 0xD0

    // the rate of currency exchange to calculate the amount of currency to award
    pointsToSoftCurrencyExchange_t currencyExchange; // Offset: 0xE8

}; // Size: 0xF0
