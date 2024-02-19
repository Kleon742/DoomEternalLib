struct idSWFWidget_EOL_MasterLevelProgress : idSWFWidget
{
    idDeferredFuncList deferred; // Offset: 0x180

    idSWFWidget_ProgressBar* progressBar; // Offset: 0x1C8

    idArray < idSWFWidget_EOL_MasterLevelProgressItem * , 5 > progressItems; // Offset: 0x1D0

    idList < int , TAG_IDLIST , false > availableDifficulties; // Offset: 0x1F8

    int completedDifficulty; // Offset: 0x210

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelay; // Offset: 0x218

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > itemFillDuration; // Offset: 0x220

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > itemWaitDuration; // Offset: 0x228

    idSoundEvent* barFillSound; // Offset: 0x230

    idSoundEvent* itemCompleteSound; // Offset: 0x238

}; // Size: 0x240
