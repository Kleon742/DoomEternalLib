struct idPlayerProfileShell : idPlayerProfile
{
    enum displayMode_t : int
    {
        DISPLAY_INVALID = -1,
        DISPLAY_WINDOWED = 0,
        DISPLAY_FULLSCREEN = 1,
        DISPLAY_BORDERLESS_WINDOWED = 2,
        MAX_DISPLAY_MODES = 3
    };

    enum resolutionScalingMode_t : int
    {
        RESOLUTION_SCALING_MODE_OFF = 0,
        RESOLUTION_SCALING_MODE_STATIC = 1,
        RESOLUTION_SCALING_MODE_DYNAMIC = 2
    };

    enum readReceiptType_t : int
    {
        READ_RECEIPT_TYPE_INVALID = -1,
        READ_RECEIPT_TYPE_LIVE_TILE = 0,
        READ_RECEIPT_TYPE_PROHIBITION = 1
    };

    struct gameSlot_t
    {
        // unsigned intexperienceGained;
        unsigned int skillpoints; // Offset: 0x0

        unsigned int level; // Offset: 0x4

    }; // Size: 0x8

    struct gameSettingsData_t
    {
        idArray < int , 16 > gameSettings; // Offset: 0x0

    }; // Size: 0x40

    struct pvpProgressData_t
    {
        int slayerPvpPoints; // Offset: 0x0

        int demonPvpPoints[8]; // Offset: 0x4

    }; // Size: 0x24

    struct slayerLoadoutData_t
    {
        unsigned char weaponMods[16]; // Offset: 0x0

        unsigned char actorMods[16]; // Offset: 0x10

        unsigned int grenades; // Offset: 0x20

        unsigned int runes; // Offset: 0x24

        unsigned int primaryPerks; // Offset: 0x28

        unsigned int secondaryPerks; // Offset: 0x2C

        unsigned int checksum; // Offset: 0x30

    }; // Size: 0x34

    struct demonLoadoutData_t
    {
        unsigned char actorMods[16]; // Offset: 0x0

        unsigned int cardDecks; // Offset: 0x10

        unsigned char useCustom; // Offset: 0x14

        unsigned char customCards[8]; // Offset: 0x15

        unsigned int checksum; // Offset: 0x20

    }; // Size: 0x24

    struct demonLoadoutDeckSelection_t
    {
        idList < idPair < int , uint32 > , TAG_IDLIST , false > demonToDeckPairBattleArena; // Offset: 0x0

        idList < idPair < int , uint32 > , TAG_IDLIST , false > demonToDeckPairInvasion; // Offset: 0x18

    }; // Size: 0x30

    struct profileGameVars_t
    {
        idPlayerProfileShell::slayerLoadoutData_t slayerLoadoutData; // Offset: 0x0

        idPlayerProfileShell::demonLoadoutData_t demonLoadoutData; // Offset: 0x34

        idPlayerProfileShell::demonLoadoutDeckSelection_t deckPreferences; // Offset: 0x58

        int battleArenaDemonIndex; // Offset: 0x88

        int battleArenaSlayerIndex; // Offset: 0x8C

        int battleArenaDeckIndex; // Offset: 0x90

        int battleArenaDesiredTeam; // Offset: 0x94

        // XP acquired
        int experienceGained; // Offset: 0x98

    }; // Size: 0xA0

    struct readReceipt_t
    {
        idPlayerProfileShell::readReceiptType_t type; // Offset: 0x0

        idStrStatic < 128 > name; // Offset: 0x8

        int viewCount; // Offset: 0xB8

    }; // Size: 0xC0

    struct customControllerLayout_t
    {
        int bindset; // Offset: 0x0

        idArray < idStr , 24 > binds; // Offset: 0x8

        idList < idPair < idStr , idStr > , TAG_IDLIST , false > cvars; // Offset: 0x488

    }; // Size: 0x4A0

    struct profileStatBlock_t
    {
        idStaticList < profileStatValue_t , 1459 , false , TAG_IDLIST > stats; // Offset: 0x0

        // gated stats must be tracked separately because they only start tracking once a challenge is able to use them
        idStaticList < profileStatValue_t , 1459 , false , TAG_IDLIST > gatedStats; // Offset: 0x16E8

    }; // Size: 0x2DD0

    struct statValueListInfo_t
    {
        idStaticList < profileStatValue_t , 10 , false , TAG_IDLIST > statList; // Offset: 0x0

        int gameStatForList; // Offset: 0x40

        int startOfList; // Offset: 0x44

    }; // Size: 0x48

    struct weaponWheetCustomization_t
    {
        idArray < int , 8 > weaponWheelOrder; // Offset: 0x0

        int weaponWheelVisibleSlots; // Offset: 0x20

    }; // Size: 0x24

    typedef idStaticList < profileStatValue_t , STAT_MAX > challengeStatBlock_t;

    typedef idStaticList < profileStatValue_t , MAX_TRACKED_PER_GAME_STATS > statValueList_t;

    doomEternalSku_t currentDoomEternalSku; // Offset: 0x18

    // stat blocks for the sku, aka doom eternal, dlc1
    idPlayerProfileShell::profileStatBlock_t skuStats[doomEternalSku_t::DOOM_ETERNAL_SKU_MAX]; // Offset: 0x20

    // game stats
    idStaticList < profileStatValue_t , 1459 , false , TAG_IDLIST > stats; // Offset: 0xB760

    // gated stats must be tracked separately because they only start tracking once a challenge is able to use them
    idStaticList < profileStatValue_t , 1459 , false , TAG_IDLIST > gatedStats; // Offset: 0xCE48

    idList < idPlayerProfileShell::statValueListInfo_t , TAG_IDLIST , false > perGameStatList; // Offset: 0xE530

    // ------------------------ settings ------------------------
    bool useAimAssist; // Offset: 0xE548

    bool useVibrate; // Offset: 0xE549

    float joyXSensitivity; // Offset: 0xE54C

    float joyYSensitivity; // Offset: 0xE550

    int weaponWheelHoldTime; // Offset: 0xE554

    int slayerControllerLayout; // Offset: 0xE558

    idPlayerProfileShell::customControllerLayout_t customSlayerLayout; // Offset: 0xE560

    idArray < int , 12 > demonControllerLayouts; // Offset: 0xEA00

    idArray < idPlayerProfileShell::customControllerLayout_t , 12 > customDemonLayouts; // Offset: 0xEA30

    idPlayerProfileShell::weaponWheetCustomization_t spWeaponWheelCustomization; // Offset: 0x121B0

    idPlayerProfileShell::weaponWheetCustomization_t pvpWeaponWheelCustomization; // Offset: 0x121D4

    idPlayerProfileShell::weaponWheetCustomization_t hordeWeaponWheelCustomization; // Offset: 0x121F8

    idPlayerProfileShell::weaponWheetCustomization_t pvpDefaultModCustomization; // Offset: 0x1221C

    // ------------------------ video settings ------------------------
    bool GPUtranscodeEnabled; // Offset: 0x12240

    int advTexturePoolSizeQuality; // Offset: 0x12244

    int advShadowsQualityIndex; // Offset: 0x12248

    bool advChromaticAberration; // Offset: 0x1224C

    int motionBlurAmountIndex; // Offset: 0x12250

    int anisotropicFilter; // Offset: 0x12254

    int advGraphicsApiIndex; // Offset: 0x12258

    int advLightsQualityIndex; // Offset: 0x1225C

    int advShadingQualityIndex; // Offset: 0x12260

    int advParticlesQualityIndex; // Offset: 0x12264

    int advEffectsQualityIndex; // Offset: 0x12268

    int advDirectionalOcclusionQualityIndex; // Offset: 0x1226C

    int advReflectionsQualityIndex; // Offset: 0x12270

    int advDecalQualityIndex; // Offset: 0x12274

    int advMotionBlurQualityIndex; // Offset: 0x12278

    int advDecalFilteringIndex; // Offset: 0x1227C

    int advWaterQualityIndex; // Offset: 0x12280

    int advVolumetricsQualityIndex; // Offset: 0x12284

    int advTextureFilteringQualityIndex; // Offset: 0x12288

    int advGeometricQualityIndex; // Offset: 0x1228C

    int monitorIndex; // Offset: 0x12290

    float advStaticResolutionScale; // Offset: 0x12294

    int advResolutionScalingMode; // Offset: 0x12298

    int advResolutionScalingTargetFrameRate; // Offset: 0x1229C

    int advDlssQualityIndex; // Offset: 0x122A0

    float advDlssSharpness; // Offset: 0x122A4

    int advAmdFsrQualityIndex; // Offset: 0x122A8

    float advAmdFsrSharpness; // Offset: 0x122AC

    // ------------------------ voice chat settings ------------------------
    float voiceChatVolume; // Offset: 0x122B0

    idStr chatSpeechProfileId; // Offset: 0x122B8

    bool useVoiceChat; // Offset: 0x122E8

    bool usePushToTalk; // Offset: 0x122E9

    bool useTextToSpeech; // Offset: 0x122EA

    bool useSpeechToText; // Offset: 0x122EB

    bool useChatTranslation; // Offset: 0x122EC

    bool wantChatNarration; // Offset: 0x122ED

    // ------------------------ tutorial ------------------------
    bool hasCompletedDemonMovementTutorial; // Offset: 0x122EE

    bool hasCompletedInvasionTutorial; // Offset: 0x122EF

    bool hasCompletedPVPTutorial; // Offset: 0x122F0

    bool hasCompletedSPTutorial; // Offset: 0x122F1

    bool hasAcceptedOrMetRequirementsForPVPWarning; // Offset: 0x122F2

    bool hasSeenSpendYourWeaponPointsTutorial; // Offset: 0x122F3

    bool hasSeenSpendYourPraetorTokensTutorial; // Offset: 0x122F4

    // ------------------------ misc ------------------------
    bool initializedGameData; // Offset: 0x122F5

    bool seenInstallMessage; // Offset: 0x122F6

    bool seenAdvancedSettingsWarning; // Offset: 0x122F7

    bool hasSeenGammaScreen; // Offset: 0x122F8

    bool hasSeenHDRCalibrationScreen; // Offset: 0x122F9

    bool hasSeenStartupSettingsScreen; // Offset: 0x122FA

    int lastSeenBoostersNumFollowers; // Offset: 0x122FC

    bool processedCodexMilestoneFromGMC; // Offset: 0x12300

    bool hasEverStartedDLC1; // Offset: 0x12301

    bool hasSelectedStartupFeatures; // Offset: 0x12302

    bool hasSelectedHorde; // Offset: 0x12303

    bool hasSelectedBattlemode2; // Offset: 0x12304

    bool hasPlayedBattlemode2; // Offset: 0x12305

    bool hasSelectedBattlemode2Series; // Offset: 0x12306

    bool hasSelectedBattlemode2Leaderboard; // Offset: 0x12307

    bool hasSeenHordeNewPlayerWarning; // Offset: 0x12308

    bool hasInitializedDemonTextChatBindings; // Offset: 0x12309

    unsigned long long activeSkybox; // Offset: 0x12310

    idStrMapName pvpMapSelection; // Offset: 0x12318

    bool accountEquippedDefaultCharacterBehavior; // Offset: 0x12348

    // ------------------------ game slots ------------------------
    int lastUsedGameSlot; // Offset: 0x1234C

    idStrStatic < 64 > lastSaveGameName; // Offset: 0x12350

    idPlayerProfileShell::gameSettingsData_t gameSettingsData; // Offset: 0x123C0

    // owned play cards
    idPlayCardRepository playCardRepository; // Offset: 0x12400

    // Game Specific variables stored in the profile
    idPlayerProfileShell::profileGameVars_t profileGameVars; // Offset: 0x12478

    // Client-side Read Receipts stored in the profile
    idList < idPlayerProfileShell::readReceipt_t , TAG_IDLIST , false > readReceipts; // Offset: 0x12518

    // Milestones completed at least once on this profile; used by the UI to aggregate milestone completion across multiple save slots.
    idList < idStr , TAG_IDLIST , false > milestonesCompleted; // Offset: 0x12530

    // The last XP value we set in our online profile to reflect local progress
    int xpReflectedOnline; // Offset: 0x12548

    // The value the season XP was at when the player started a new map (used for diffing season XP)
    int storedSeasonXP; // Offset: 0x1254C

    // The value our doom level XP was at when the player started a new map (used for diffing DL XP)
    int storedDLXP; // Offset: 0x12550

    // An accumulation of the float->int error from XP calculation to ensure full XP is always awarded. Reset per map. Does not need to be serialized.
    float DLXPAccumulatedError; // Offset: 0x12554

    // progress points accrued for PVP game progression
    idPlayerProfileShell::pvpProgressData_t pvpProgressData; // Offset: 0x12558

    // manager for tracking service items
    idWarehouseManager warehouseManager; // Offset: 0x12580

    // manager for tracking equipped service items
    idEquippedManager equippedManager; // Offset: 0x12668

    // manager for tracking master levels
    idMasterLevelManager masterLevelManager; // Offset: 0x12770

    // invasion We save this time pool when an invasion finishes. When the player spawns into a campaign map,
    idTypesafeTime < float , secondUnique_t , 1 > timeUntilNextInvasion; // Offset: 0x12790

    // this time gets queried from profile and handed to invasion manager, where it will tick down.   ======================== nightmare progress slots ========================
    idArray < idPlayerNightmareProgress , 5 > nightmareProgressSlots; // Offset: 0x12798

    // logic tutorials
    idList < unsigned int , TAG_IDLIST , false > logicTutorialsCompleted; // Offset: 0x13DA0

}; // Size: 0x13DB8
