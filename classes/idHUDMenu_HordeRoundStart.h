struct idHUDMenu_HordeRoundStart : idMenuElement
{
    idDeferredFuncList deferred; // Offset: 0x100

    idSWFWidget_DynamicHordeProgress* hordeProgress; // Offset: 0x148

    idList < waveData_t , TAG_IDLIST , false > arenaDataList; // Offset: 0x150

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > inputBufferTime; // Offset: 0x168

    idDeclUICustomData_Widget_HordeProgress* dataDecl; // Offset: 0x170

    short levelIndex; // Offset: 0x178

}; // Size: 0x180
