struct idEndOfLevel_Combat : idMenuElement
{
    idList < eolCombatCategoryData_t , TAG_IDLIST , false > combatData; // Offset: 0x100

    idArray < idSWFWidget_EOLCombat_PointsList * , 4 > listWidgets; // Offset: 0x118

    int numAvailableWeaponPoints; // Offset: 0x138

    int numAvailableModUpgrades; // Offset: 0x13C

    bool animationStarted; // Offset: 0x140

    int currentListIndex; // Offset: 0x144

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelayEndTime; // Offset: 0x148

}; // Size: 0x150
