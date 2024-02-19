struct idSWFWidget_EOLCombat_PointsList : idSWFWidget
{
    eolCombatCategoryData_t data; // Offset: 0x180

    idDeclMenu::eolEncounterInfo displayInfo; // Offset: 0x190

    int currentPipIndex; // Offset: 0x1D0

    bool currentPipTweenComplete; // Offset: 0x1D4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pipAnimStartTime; // Offset: 0x1D8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pipAnimEndTime; // Offset: 0x1E0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > listCompletePreDelayTime; // Offset: 0x1E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > listCompletePostDelayTime; // Offset: 0x1F0

}; // Size: 0x1F8
