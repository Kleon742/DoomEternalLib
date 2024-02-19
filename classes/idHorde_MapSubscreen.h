struct idHorde_MapSubscreen : idHorde_SummarySubscreen
{
    idSWFWidget_DynamicHordeProgress* hordeProgress; // Offset: 0x1C0

    idList < waveData_t , TAG_IDLIST , false > arenaDataList; // Offset: 0x1C8

    idDeclUICustomData_Widget_HordeProgress* dataDecl; // Offset: 0x1E0

    short levelIndex; // Offset: 0x1E8

}; // Size: 0x1F0
