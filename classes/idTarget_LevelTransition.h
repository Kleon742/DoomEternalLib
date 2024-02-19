struct idTarget_LevelTransition : idTarget
{
    struct statsScreen_t
    {
        // do we display the end of level stats screen before this transition?
        bool displayStatsScreen; // Offset: 0x0

        // type of end of level stats screen.
        idPlayer::playerEndOfLevel_t type; // Offset: 0x4

    }; // Size: 0x8

    // map to transition to.
    idStrMapName nextMapName; // Offset: 0xB88

    // type of load
    campaignSubType_t campaignSubType; // Offset: 0xBB8

    // checkpoint to transition to.
    idStr checkpointName; // Offset: 0xBC0

    // if true and it's the first time loading the new map grab the initial layers set in the maps worldspawn.
    bool addLayer; // Offset: 0xBF0

    // we could make this timer based, but basically it's to make sure we aren't triggered twice
    bool triggered; // Offset: 0xBF1

    // used to retain map stats between levels, used to transition to/from challenge specific maps where the map transition is considered part of the main map
    bool retainStats; // Offset: 0xBF2

    // will return to vega training terminal map IF this map was loaded directly from a terminal. this basically just executes "LoadPreviousMapFromSaveGame" from the console.
    bool returnToVegaTrainingTerminal; // Offset: 0xBF3

    // make this true if this is the end of a slayer gate area
    bool isSlayerGateTransition; // Offset: 0xBF4

    // set to transition to end game credits
    bool showCredits; // Offset: 0xBF5

    // always return to main menu after the stats screen
    bool returnToMainMenu; // Offset: 0xBF6

    // force the lore loading screen checkpoint
    bool forceFirstMapTipCheckpointForLoadScreen; // Offset: 0xBF7

    // checkpoint entity to load back into if restart map is selected by the player at the end level stats screen
    idManagedClassPtr < idTarget_LayerStateChange > restartMapCheckpoint; // Offset: 0xBF8

    // stat to count number of times this level was completed
    gameStat_t levelCompletionStat; // Offset: 0xC18

    // stat to count the number of times this level was completed on nightmare
    gameStat_t nightmareLevelCompletionStat; // Offset: 0xC1C

    // end of level stat screen data.
    idTarget_LevelTransition::statsScreen_t statsScreen; // Offset: 0xC20

    bool activated; // Offset: 0xC28

    idPlayer* playerActivator; // Offset: 0xC30

    // prevent XP from being granted on subsequent activations of the same LevelTransition target (i.e. player returned to level and hit it again)
    bool hasGrantedXP; // Offset: 0xC38

}; // Size: 0xC40
