struct idDeclCampaign : idGameDeclTypeInfo
{
    struct campaignDifficultyInfo_t
    {
        // Show Ultra Nightmare difficulty
        bool showUltraNightmare; // Offset: 0x0

        // Show extra life mode
        bool showExtraLife; // Offset: 0x1

        // Show warning about unchangeable difficulty (horde specific)
        bool showHordeInterstitial; // Offset: 0x2

    }; // Size: 0x3

    struct campaignPurchaseInfo_t
    {
        // ID of online live tile to show as the purchase dialog for this campaign
        idStr liveTileId; // Offset: 0x0

        // Backup live tile to show if the user is offline or if data for liveTileId cannot be found
        idDeclLiveTile* fallbackLiveTile; // Offset: 0x30

    }; // Size: 0x38

    struct campaignGameCompleteInfo_t
    {
        // The title of the save game after the game is completed.
        idStr saveTitle; // Offset: 0x0

        // The image to use for the save slot after the game is completed.
        idMaterial2* saveImage; // Offset: 0x30

        // Hide savegame info bar after the game is completed.
        bool hideSaveInfoBar; // Offset: 0x38

        // Can the player select the 'continue' option for this save slot after the game is completed?
        bool canContinue; // Offset: 0x39

        // Reward info for campaign completion (e.g. for extra life mode / ultra nightmare rewards)
        idDeclUIDataGroup* rewardInfo; // Offset: 0x40

    }; // Size: 0x48

    struct campaignDossierOptions_t
    {
        // Show/hide the currency bars within the dossier for this campaign mode
        bool showDossierCurrency; // Offset: 0x0

        // Show/hide the mission challenges within the dossier for this campaign mode
        bool showDossierMissionChallenge; // Offset: 0x1

        // Force specified dossier pages to be hidden for this campaign mode
        idList < dossierPage_t , TAG_IDLIST , false > forceHiddenDossierPages; // Offset: 0x8

        // Dossier page to open by default in this campaign mode
        dossierPage_t defaultDossierPage; // Offset: 0x20

    }; // Size: 0x28

    struct campaignCheatCodeOptions_t
    {
        // Start with all cheat codes unlocked
        bool unlockAll; // Offset: 0x0

        // Number of columns to use on the cheat code selection grid
        int numColumns; // Offset: 0x4

        // Cheat code SKUs available for this campaign
        idDeclCheatCodesSKUBitFlags_t skusAvailable; // Offset: 0x8

    }; // Size: 0xC

    struct newCampaignPopup_t
    {
        // Popup to show for PC (used as default for platforms not in this list)
        idDeclLiveTile* pc; // Offset: 0x0

        // Popup to show for XBox platforms
        idDeclLiveTile* xb; // Offset: 0x8

        // Popup to show for PlayStation platforms
        idDeclLiveTile* ps; // Offset: 0x10

        // Popup to show for Switch platforms
        idDeclLiveTile* nx; // Offset: 0x18

    }; // Size: 0x20

    // display name for this campaign, to be shown in menus and such
    idStrId displayName; // Offset: 0x90

    // Doom Eternal SKU for this campaign
    doomEternalSku_t doomEternalSku; // Offset: 0x94

    // MainMenu ID for this campaign
    mainMenuElementID_t mainMenuID; // Offset: 0x98

    // save slots associated with this campaign
    idList < int , TAG_IDLIST , false > saveSlots; // Offset: 0xA0

    // associated dev menu option, for loading the map; TODO replace this
    idDeclDevMenuList* devMenuOption; // Offset: 0xB8

    // codex tree for this campaign
    idDeclCodexTree* codexTree; // Offset: 0xC0

    // intro text crawl for this campaign
    idDeclTextCrawl* introTextCrawl; // Offset: 0xC8

    // outro text crawl for this campaign
    idDeclTextCrawl* outroTextCrawl; // Offset: 0xD0

    // credits reel text for this campaign
    idDeclCredits* credits; // Offset: 0xD8

    // Info for displaying extra difficulty modes
    idDeclCampaign::campaignDifficultyInfo_t campaignDifficultyInfo; // Offset: 0xE0

    // dialog to display when trying to launch this campaign while content is not installed
    gameDialogMessages_t notInstalledDialog; // Offset: 0xE4

    // Purchase Info
    idDeclCampaign::campaignPurchaseInfo_t purchaseInfo; // Offset: 0xE8

    // Game Complete Info
    idDeclCampaign::campaignGameCompleteInfo_t gameCompleteInfo; // Offset: 0x120

    // The image to use if the selected save slot is empty.
    idMaterial2* emptySaveImage; // Offset: 0x168

    // Options for what information is present in the dossier for this campaign mode
    idDeclCampaign::campaignDossierOptions_t dossierOptions; // Offset: 0x170

    // Cheat code options for this campaign
    idDeclCampaign::campaignCheatCodeOptions_t cheatCodeOptions; // Offset: 0x198

    // Try and show the Slayer tutorial when first launching this campaign & not owning the main game
    bool showSlayerTutorial; // Offset: 0x1A4

    // The decl used to populate the mission select list
    idDeclMissionSelectInfoList* missionSelectList; // Offset: 0x1A8

    // master levels for this campaign
    idList < const idDeclMasterLevelInfo * , TAG_IDLIST , false > masterLevels; // Offset: 0x1B0

    // milestone sets (reward groups) to show on the landing page for this campaign
    idList < const idDeclMilestoneSet * , TAG_IDLIST , false > milestoneSets; // Offset: 0x1C8

    // milestone teaser set to show on rewards page
    idDeclMilestoneSet* milestoneTeaserSet; // Offset: 0x1E0

    // popups to show when creating a new save slot for this campaign
    idList < idDeclCampaign::newCampaignPopup_t , TAG_IDLIST , false > newCampaignPopups; // Offset: 0x1E8

}; // Size: 0x200
