struct idDossier_Map : idMenuElement
{
    enum screenCommand_dossierMap_t : int
    {
        COMMAND_DOSSIER_MAP_SHOW_FAST_TRAVEL = 0,
        COMMAND_DOSSIER_MAP_TRAVEL = 1,
        COMMAND_DOSSIER_MAP_SELECT_MAP_GROUP = 2,
        COMMAND_DOSSIER_MAP_SHOW_MAP_GROUPS = 3,
        COMMAND_DOSSIER_MAP_AUTOMAP = 4,
        COMMAND_DOSSIER_MAP_SHOW_SLAYER_GATE = 5,
        COMMAND_DOSSIER_MAP_SLAYER_GATE = 6,
        COMMAND_DOSSIER_MAP_SHOW_LEGEND = 7
    };

    idSWFWidget_SectionList* fastTravelList; // Offset: 0x100

    // image for selected fast travel location
    idSWFWidget* fastTravelImage; // Offset: 0x108

    idSWFWidget_SectionList* mapGroupList; // Offset: 0x110

    idSWFWidget_CommandBar* mapControls; // Offset: 0x118

    // These are going away list of categories
    idSWFWidget_DynamicList* categories; // Offset: 0x120

    idSWFWidget_Objectives* objectives; // Offset: 0x128

    idSWFWidget_CombatRating* combat; // Offset: 0x130

    idSWFWidget_ProgressionItems* progressionItems; // Offset: 0x138

    idSWFWidget_VariableProgressPoints* secretEncounters; // Offset: 0x140

    idSWFWidget_VariableProgressPoints* slayerGateCompletionProgress; // Offset: 0x148

    idSWFWidget_CorruptionMeter* corruptionMeter; // Offset: 0x150

    idArray < idSWFWidget * , 2 > itemProgressPoints; // Offset: 0x158

    idList < int , TAG_IDLIST , false > fastTravelListWarpPointIndices; // Offset: 0x168

    idList < int , TAG_IDLIST , false > validLegendItemsList; // Offset: 0x180

    idHUDEvent_DossierMapUpdate::dossierMapData_t currentData; // Offset: 0x198

    float fastTravelStartYPos; // Offset: 0x268

    float automapStartYPos; // Offset: 0x26C

    float slayerGateStartYPos; // Offset: 0x270

    int mapGroupIndex; // Offset: 0x274

    int slayerGateIndex; // Offset: 0x278

    uint16 encounterBroadcastSystemId; // Offset: 0x27C

    bool isShowingFastTravelList; // Offset: 0x27E

    bool isHidingFastTravelList; // Offset: 0x27F

    bool isHidingMapGroupList; // Offset: 0x280

    bool isShowingLegend; // Offset: 0x281

    bool canShowLegend; // Offset: 0x282

    bool isMapControlsVisible; // Offset: 0x283

    bool isInMapGroupFastTravelFlow; // Offset: 0x284

    int lastMapGroupIndex; // Offset: 0x288

    bool usePositionUnknownText; // Offset: 0x28C

    bool isFastTravelCombatRestricted; // Offset: 0x28D

}; // Size: 0x290
