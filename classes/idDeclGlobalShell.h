struct idDeclGlobalShell : idDeclTypeInfo
{
    struct weaponCutsceneModels_t
    {
        // md6 that results in applying weapon skins
        idDeclMD6* model; // Offset: 0x0

        // weapon decl for this customized skin
        idDeclWeaponRef weaponDecl; // Offset: 0x8

    }; // Size: 0x10

    struct rewardReconciliaton_t
    {
        // If this item is owned...
        idDeclWarehouseItem* ifOwned; // Offset: 0x0

        // ...then grant this container.
        idDeclWarehouseOfflineContainer* thenGrant; // Offset: 0x8

    }; // Size: 0x10

    struct offlineData_t
    {
        // Live tiles to display when offline.
        idList < const idDeclLiveTile * , TAG_IDLIST , false > liveTiles; // Offset: 0x0

        // Default brief (preview) image to use when a live tile doesn't specify one.
        idMaterial2* defaultLiveTileBriefImage; // Offset: 0x18

        // Default article image to use when a live tile doesn't specify one.
        idMaterial2* defaultLiveTileArticleImage; // Offset: 0x20

    }; // Size: 0x28

    struct offlinePromptData_t
    {
        // BATTLEMODE 2.0 info prompt, to be queued by the multiplayer menu
        idDeclLiveTile* battlemode2Prompt; // Offset: 0x0

        // __def const idDeclLiveTile *m_hordeModePrompt; Horde mode info prompt, to be queued by the horde menu (TBD) Patch 6 greeting prompt 1, to be queued on main menu
        idDeclLiveTile* patch6GreetingPrompt1; // Offset: 0x8

        // Patch 6 greeting prompt 2, to be queued on main menu
        idDeclLiveTile* patch6GreetingPrompt2; // Offset: 0x10

        // Patch 6 greeting prompt 3, to be queued on main menu
        idDeclLiveTile* patch6GreetingPrompt3; // Offset: 0x18

        // Patch 6 greeting prompt 4, to be queued on main menu
        idDeclLiveTile* patch6GreetingPrompt4; // Offset: 0x20

    }; // Size: 0x28

    struct platformIconData_t
    {
        // Icon for the PC - Bethesda.net platform
        idMaterial2* bnetIcon; // Offset: 0x0

        // Icon for the PC - Steam platform
        idMaterial2* steamIcon; // Offset: 0x8

        // Icon for the PlayStation 4 platform
        idMaterial2* ps4Icon; // Offset: 0x10

        // Icon for the Xbox One platform
        idMaterial2* xb1Icon; // Offset: 0x18

        // Icon for the Nintendo Switch platform
        idMaterial2* switchIcon; // Offset: 0x20

        // Icon for the Google Stadia platform
        idMaterial2* stadiaIcon; // Offset: 0x28

    }; // Size: 0x30

    struct battlemodeDummyRankData_t
    {
        // dummy battlemode 2.0 ranks for slayer
        idList < const idDeclDummyTriumph * , TAG_IDLIST , false > slayer; // Offset: 0x0

        // dummy battlemode 2.0 ranks for slayer
        idList < const idDeclDummyTriumph * , TAG_IDLIST , false > demon; // Offset: 0x18

    }; // Size: 0x30

    // SWFs
    idMaterial2* guiSolid_Default; // Offset: 0x88

    // SWFs
    idMaterial2* guiSolid_DeGamma; // Offset: 0x90

    // SWFs
    idMaterial2* guiStencilIncr; // Offset: 0x98

    // SWFs
    idMaterial2* guiStencilDecr; // Offset: 0xA0

    // SWFs
    idMaterial2* white; // Offset: 0xA8

    // ? Referenced from script
    idMaterial2* videoGui; // Offset: 0xB0

    // ? Referenced from script
    idMaterial2* videoGuiNoFog; // Offset: 0xB8

    // ? Referenced from script
    idMaterial2* loadImage; // Offset: 0xC0

    // Decl that describes the main menu
    idDeclMenu* menuMain; // Offset: 0xC8

    // Decl that describes the dialog menu
    idDeclMenu* menuDialog; // Offset: 0xD0

    // Decl that describes the demo overlay.
    idDeclMenu* watermark; // Offset: 0xD8

    // Decl that describes the demo overlay.
    idDeclMenu* introOverlay; // Offset: 0xE0

    // Decl that describes the main menu for a demo
    idDeclMenu* menuMainDemo; // Offset: 0xE8

    // List of UI Walkthrough tutorials for the main menu.
    idList < const idDeclUIWalkthroughMenuShellBase * , TAG_IDLIST , false > shellWalkthroughs; // Offset: 0xF0

    // Decl for stadia state share popup
    idDeclTutorialEvent* stateShareTutorial; // Offset: 0x108

    // SWF overlay for the loadscreen
    idSWFResource* swfLoadScreen; // Offset: 0x110

    // SWF decl used for resources for the load screen
    idDeclSWF* swfLoadScreenDecl; // Offset: 0x118

    // SWF for floating text
    idSWFResource* swfFloatingText; // Offset: 0x120

    // Default swf resources used if the swf has none specified
    idList < const idDeclSWFResources * , TAG_IDLIST , false > swfDefaultResources; // Offset: 0x128

    // The master doom level decl
    idDeclDoomLevel* doomLevelDecl; // Offset: 0x140

    // Contains the decl for the animation for the horde summary screen
    idDeclHordeSummaryUtility* hordeSummaryAnimationUtilityDecl; // Offset: 0x148

    // The campaign decl for the main campaign
    idDeclCampaign* mainCampaignDecl; // Offset: 0x150

    // The campaign decl for the DLC1 campaign
    idDeclCampaign* dlc1CampaignDecl; // Offset: 0x158

    // The campaign decl for the DLC2 campaign
    idDeclCampaign* dlc2CampaignDecl; // Offset: 0x160

    // The horde mode decl
    idDeclCampaign* hordeModeDecl; // Offset: 0x168

    // pvp loadout decl for slayer
    idDeclPVPLoadoutRef slayerPVPLoadoutDecl; // Offset: 0x170

    // pvp loadout decl for demons
    idDeclPVPDemonLoadoutRef demonPVPLoadoutDecl; // Offset: 0x178

    // hit confirm sounds decl
    idDeclHitConfirmationSoundsInfo* hitConfirmSoundsDecl; // Offset: 0x180

    // devMenuOption decl to use for the Slayer tutorial map
    idDeclDevMenuList* slayerTutorialMapDecl; // Offset: 0x188

    // devMenuOption decl to use for the PVP tutorial map
    idDeclDevMenuList* pvpTutorialMapDecl; // Offset: 0x190

    // devMenuOption decl to use for the PVP demons tutorial map
    idDeclDevMenuList* demonPVPTutorialMapDecl; // Offset: 0x198

    // the settings used by the Casual Battle Arena Lobby UI
    idDeclLobbySettings* casualBALobbySettingsDecl; // Offset: 0x1A0

    // The codex tree decl for the shell menu
    idDeclCodexTree* shellCodexTree; // Offset: 0x1A8

    // The modswap codex applied manually through code.
    idDeclCodexEntry* modSwapCodex; // Offset: 0x1B0

    // The HDR image (EXR filetype) to display in the HDR calibration screen.
    idMaterial2* hdrCalibrationImage; // Offset: 0x1B8

    // profile to use when coloring the UI
    idList < const idDeclUIColor * , TAG_IDLIST , false > colorProfile; // Offset: 0x1C0

    // The list of speakers for subtitles & HUD elements.
    idList < const idDeclSpeaker * , TAG_IDLIST , false > subtitleSpeakerList; // Offset: 0x1D8

    // cutscene models to apply cosmetics to
    idList < const idDeclMD6 * , TAG_IDLIST , false > playerCutsceneModels; // Offset: 0x1F0

    // cutscene weapon model for weapon customization
    idList < idDeclGlobalShell::weaponCutsceneModels_t , TAG_IDLIST , false > weaponCustsceneModels; // Offset: 0x208

    // client-side rewards to reconcile on warehouse refresh; useful for backfilling rewards that were changed after a patch.
    idList < idDeclGlobalShell::rewardReconciliaton_t , TAG_IDLIST , false > rewardsToReconcile; // Offset: 0x220

    // Fallback data for offline modes.x
    idDeclGlobalShell::offlineData_t offlineData; // Offset: 0x238

    // Holds individual offline live tiles that should not be queued automatically
    idDeclGlobalShell::offlinePromptData_t offlinePromptData; // Offset: 0x260

    // Platform icon data
    idDeclGlobalShell::platformIconData_t platformIconData; // Offset: 0x288

    // dummy triumph data for Invasion UI testing.
    idList < const idDeclDummyTriumph * , TAG_IDLIST , false > invasionDummyTriumphs; // Offset: 0x2B8

    // dummy battlemode 2.0 ranks, for UI testing
    idDeclGlobalShell::battlemodeDummyRankData_t battlemodeDummyRanks; // Offset: 0x2D0

    // The icon used for the generic damage icon
    idMaterial2* genericDamageIcon; // Offset: 0x300

    // The default icon used for triumphs (if not specified in online data)
    idMaterial2* defaultTriumphIcon; // Offset: 0x308

    // Allows for custom mapping of some damage types to others
    idDeclDeathReportDamageMapping* deathReportDamageMapping; // Offset: 0x310

    // the banIcon used for PVP
    idMaterial2* banIcon; // Offset: 0x318

    // the qosMismatchIcon used for PVP ( region mismatch )
    idMaterial2* qosMismatchIcon; // Offset: 0x320

    // character podium arrival fx entity def
    idDeclEntityDef* characterPodiumArrivalFXEntityDef; // Offset: 0x328

}; // Size: 0x330
