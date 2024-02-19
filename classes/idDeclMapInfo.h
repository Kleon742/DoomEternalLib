struct idDeclMapInfo : idDeclTypeInfo
{
    struct gameTipInfo_t
    {
        // Game Tip image
        idMaterial2* image; // Offset: 0x0

        // Game Tip heading text
        idStrId headingText; // Offset: 0x8

        // Game Tip sub-heading text
        idStrId subHeadingText; // Offset: 0xC

        // Game Tip description text
        idStrId descText; // Offset: 0x10

        // override baseTipDisplayTime
        idTypesafeTime < int , millisecondUnique_t , 1000 > tipDisplayTime; // Offset: 0x14

        // priority of the tool tip (makes subarray)
        float priority; // Offset: 0x18

    }; // Size: 0x20

    struct gameModeGroup_t
    {
        // Game mode these tips apply to
        mapTipGameMode_t gameMode; // Offset: 0x0

        // Specific tips for this game mode
        idList < idDeclMapInfo::gameTipInfo_t , TAG_IDLIST , false > gameTips; // Offset: 0x8

    }; // Size: 0x20

    struct checkpointGroup_t
    {
        // which checkpoint this is associated with
        mapTipCheckpoint_t checkpointId; // Offset: 0x0

        // Tips activated by a specific checkpoint
        idList < idDeclMapInfo::gameModeGroup_t , TAG_IDLIST , false > gameModeGroup; // Offset: 0x8

    }; // Size: 0x20

    struct deathGroup_t
    {
        // Type of death for these tips
        mapTipDeath_t deathType; // Offset: 0x0

        // Tips for being killed by specific things
        idList < idDeclMapInfo::gameTipInfo_t , TAG_IDLIST , false > deathTips; // Offset: 0x8

    }; // Size: 0x20

    struct uiOverrides_t
    {
        // Disable all on-screen notifications when acquiring codex entries.
        bool disableCodexNotifications; // Offset: 0x0

        // Disable "Load Checkpoint" option in the pause menu
        bool disableLoadCheckpoint; // Offset: 0x1

        // Disable "Restart Mission" option in the pause menu
        bool disableRestartMission; // Offset: 0x2

        // If set, only show the Codex tab in the dossier. This is an ultra-specific patch for tutorial maps. Welp.
        bool dossierCodexOnly; // Offset: 0x3

        // If set, only show the Codex tab in the dossier. This is an ultra-specific patch for tutorial maps. Welp.
        bool dossierDisabled; // Offset: 0x4

        // Codex tree to use instead of the active campaign's codex tree. This is NOT recommended for use outside of tutorial maps.
        idDeclCodexTree* codexTree; // Offset: 0x8

    }; // Size: 0x10

    // how it will be shown on each save game
    idStrId mapName; // Offset: 0x88

    // video to run during first load
    idList < idStr , TAG_IDLIST , false > loadingVideos; // Offset: 0x90

    // video to run during first load
    idStr loopingLoadingVideo; // Offset: 0xA8

    // video to run during a checkpoint reload
    idStr checkpointLoadingVideo; // Offset: 0xD8

    // text that will override the game mode display in the loading screen
    idStrId loadingGameModeTextOverride; // Offset: 0x108

    // image to show on the loadscreen
    idMaterial2* loadingImage; // Offset: 0x110

    // image to show when override conditions are met
    idMaterial2* overrideLoadingImage; // Offset: 0x118

    // Layer names, if they are present, to use an override image
    idList < idStr , TAG_IDLIST , false > overrideLayers; // Offset: 0x120

    // Image to show in the main menu (mission select)
    idMaterial2* menuImage; // Offset: 0x138

    // which dlc package the map is in
    int dlcId; // Offset: 0x140

    // the container chunk id for the map
    int chunkId; // Offset: 0x144

    // par time for the map.
    idTypesafeTime < float , secondUnique_t , 1 > parCompletionTime; // Offset: 0x148

    // Is this map a tutorial map.
    bool tutorialMap; // Offset: 0x14C

    // how long to display a tip if a specific time isn't set on the gameTipInfo
    idTypesafeTime < int , millisecondUnique_t , 1000 > baseTipDisplayTime; // Offset: 0x150

    // List of game tips to show for this map during the loading screen
    idList < idDeclMapInfo::checkpointGroup_t , TAG_IDLIST , false > checkPointGroups; // Offset: 0x158

    // List of game tips to show for this map during the loading screen
    idList < idDeclMapInfo::deathGroup_t , TAG_IDLIST , false > deathGroups; // Offset: 0x170

    // milestone to receive when map has been completed
    idDeclMilestone* completedMilestone; // Offset: 0x188

    // milestone to receive when map has been completed on nightmare
    idDeclMilestone* completedNightmareMilestone; // Offset: 0x190

    // milestones required to complete the map milestone
    idList < idDeclMilestone * , TAG_IDLIST , false > milestoneRequirements; // Offset: 0x198

    // per-level customizations for demonic corruption bar (Single Player Only)
    idDeclDemonicCorruption* demonicCorruptionDecl; // Offset: 0x1B0

    // Map-specific UI overrides, primarily for use in tutorial maps.
    idDeclMapInfo::uiOverrides_t uiOverrides; // Offset: 0x1B8

}; // Size: 0x1C8
