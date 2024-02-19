struct idHUDEvent_ShowHordeSummary
{
    struct hordeSummaryData_t
    {
        short summaryType; // Offset: 0x0

        short highestLevel; // Offset: 0x2

        // each levels data is packaged together
        scoreDataSet_t levelScoreSets[3]; // Offset: 0x4

        // the total for everything in the run
        scoreDataSet_t totalScoreSet; // Offset: 0x148

        scoreDataSet_t previousBestLevelSets[3]; // Offset: 0x1B4

        scoreDataSet_t previousBestTotalSet; // Offset: 0x2F8

    }; // Size: 0x364

    idHUDEvent_ShowHordeSummary::hordeSummaryData_t info; // Offset: 0x0

}; // Size: 0x364
