struct idHUD_PhotoMode : idHUDElement
{
    enum photoModeViewStates_t : int
    {
        PMVS_FIRST_PERSON = 0,
        PMVS_THIRD_PERSON = 1
    };

    enum photoModeSubStates_t : int
    {
        PMSS_SETTINGS_MODE = 0,
        PMSS_CAMERA_MODE = 1
    };

    enum photoModeSettingCategories_t : int
    {
        PMSC_CAMERA = 0,
        PMSC_DOF = 1,
        PMSC_EFFECTS = 2,
        PMSC_RENDERING = 3,
        PMSC_PLAYER = 4
    };

    enum photoModeSettingIndices_t : int
    {
        PMSI_CAMERA_FOV = 0,
        PMSI_CAMERA_RANGE = 1,
        PMSI_CAMERA_SPEED = 2,
        PMSI_DOF_ENABLE = 0,
        PMSI_DOF_NEAR_CLIP = 1,
        PMSI_DOF_FAR_CLIP = 2,
        PMSI_DOF_FOCAL = 3,
        PMSI_FX_RENDERING_MODE = 0,
        PMSI_FX_RENDER_MODE_STRENGTH = 1,
        PMSI_FX_CUSTOM_RED = 2,
        PMSI_FX_CUSTOM_GREEN = 3,
        PMSI_FX_CUSTOM_BLUE = 4,
        PMSI_RENDER_LOOT_DROP = 0,
        PMSI_RENDER_FILM_GRAIN = 1,
        PMSI_RENGER_SHARPENING = 2,
        PMSI_PLAYER_PLAYERSKIN = 0,
        PMSI_PLAYER_WEAPONSKIN = 1,
        PMSI_PLAYER_PLAYERPOSE = 2,
        PMSI_PLAYER_ROTATION = 3,
        PMSI_PLAYER_OFFSET = 4
    };

    // =============== SWF Data
    idPhotomodeDataSource dataSource; // Offset: 0xF8

    idSWFWidget_SettingsList* settingsList; // Offset: 0x1D8

    idSWFWidget_TabList* categoryList; // Offset: 0x1E0

    idSWFWidget_CommandBar* commandBar; // Offset: 0x1E8

    idSWFWidget_ControlsPanel* cameraControlsUI; // Offset: 0x1F0

    idList < PhotoModeCategoryData_t , TAG_IDLIST , false > categoryData; // Offset: 0x1F8

    idHUD_PhotoMode::photoModeSettingCategories_t currentCategory; // Offset: 0x210

    // ================ Stand-In Player for Poses
    idManagedClassPtr < idAnimated > standinPlayer; // Offset: 0x218

    idList < idManagedClassPtr < idAnimated > , TAG_IDLIST , false > propList; // Offset: 0x238

    // ================ Lists of Warehouse Items
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > ownedPlayerSkins; // Offset: 0x250

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > ownedWeaponSkins; // Offset: 0x268

    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > ownedPlayerPoses; // Offset: 0x280

    // ================ Cached Player Cosmetics and Current Sets
    characterEquippedSet_t* cachedOriginalCharacterSet; // Offset: 0x298

    weaponSkinSet_t* cachedOriginalWeaponSet; // Offset: 0x2A0

    // Intentionally not a pointer
    characterEquippedSet_t currentCharacterSet; // Offset: 0x2A8

    // Intentionally not a pointer
    weaponSkinSet_t currentWeaponSet; // Offset: 0x2E0

    idDeclWeapon* equippedWeapon; // Offset: 0x328

    // ================ Camera and Related Variables
    idPhotoModeCamera* camera; // Offset: 0x330

    idAngles savedCameraAngles; // Offset: 0x338

    idVec3 savedCameraPos; // Offset: 0x344

    bool FreeCamera; // Offset: 0x350

    int cachedClipSize; // Offset: 0x354

    bool restoreCamLocationOnSpawn; // Offset: 0x358

    float ManualZoom; // Offset: 0x35C

    // ================ HUD Decl
    idDeclHUD* hudDecl; // Offset: 0x360

    // ================ UI Flags
    bool OverallUIVisible; // Offset: 0x368

    bool CommandBarVisible; // Offset: 0x369

    bool SettingsUIVisible; // Offset: 0x36A

    bool CameraModeUIVisible; // Offset: 0x36B

    // ================ Data Flags
    bool InitialLoad; // Offset: 0x36C

    bool rebuildCategory; // Offset: 0x36D

    // ================ Action Restriction/Handling Flags
    bool PhotoModeAllowed; // Offset: 0x36E

    bool SkinChangeAllowed; // Offset: 0x36F

    bool PoseChangeAllowed; // Offset: 0x370

    bool FreeCameraAllowed; // Offset: 0x371

    bool PoseOptionsAllowed; // Offset: 0x372

    bool FreezeTimeAllowed; // Offset: 0x373

    bool SwitchedSkinsLastFrame; // Offset: 0x374

    int UndoPlayerOnlyTime; // Offset: 0x378

    int RedoFreezeTime; // Offset: 0x37C

    // =============== Photo Mode View State/Sub State Functionality
    idHUD_PhotoMode::photoModeViewStates_t currentViewState; // Offset: 0x380

    idHUD_PhotoMode::photoModeSubStates_t currentSubState; // Offset: 0x384

    // ================ Local Player (grabbed every frame, locally stored to clean up code, cannot be const)
    idPlayer* localPlayer; // Offset: 0x388

}; // Size: 0x390
