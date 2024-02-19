struct idHUDEvent_RoundScore
{
    struct roundScoreInfo_t
    {
        int teamOneScore; // Offset: 0x0

        int teamTwoScore; // Offset: 0x4

        int roundNumber; // Offset: 0x8

    }; // Size: 0xC

    idHUDEvent_RoundScore::roundScoreInfo_t info; // Offset: 0x0

}; // Size: 0xC
