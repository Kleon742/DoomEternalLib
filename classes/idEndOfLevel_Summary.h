struct idEndOfLevel_Summary : idMenuElement
{
    idArray < idSWFWidget_EOL_SummaryCategory * , 3 > categoryWidgets; // Offset: 0x100

    bool animationStarted; // Offset: 0x118

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialDelayEndTime; // Offset: 0x120

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showCategoryDelayEndTime; // Offset: 0x128

    int categoryToShow; // Offset: 0x130

    int categoryToAnimate; // Offset: 0x134

    int numCombatPointsTotal; // Offset: 0x138

    int numCombatPointsEarned; // Offset: 0x13C

    int numChallengesTotal; // Offset: 0x140

    int numChallengesCompleted; // Offset: 0x144

    int numItemsTotal; // Offset: 0x148

    int numItemsCompleted; // Offset: 0x14C

}; // Size: 0x150
