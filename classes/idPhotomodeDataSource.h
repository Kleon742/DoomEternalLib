struct idPhotomodeDataSource : idSettingsDataSource
{
    idDeclHUD* hudDecl; // Offset: 0x38

    idHUD_PhotoMode* photoModeMenu; // Offset: 0x40

    bool ResetPoseIndex; // Offset: 0x48

    bool SettingsAreBeingReset; // Offset: 0x49

    // =============== Runtime Settings
    bool dofEnabled; // Offset: 0x4A

    float dofMaxRange; // Offset: 0x4C

    float dofMinRange; // Offset: 0x50

    float dofNear; // Offset: 0x54

    float dofFar; // Offset: 0x58

    float dofFocus; // Offset: 0x5C

    float camFOV; // Offset: 0x60

    float camMinFreeCamRange; // Offset: 0x64

    float camMaxFreeCamRange; // Offset: 0x68

    float camCurFreeCamRangeLimit; // Offset: 0x6C

    float camMinMoveSpeed; // Offset: 0x70

    float camCurMoveSpeed; // Offset: 0x74

    float camMaxMoveSpeed; // Offset: 0x78

    float rFilmGrain; // Offset: 0x7C

    float rLootDropBrightness; // Offset: 0x80

    float rSharpening; // Offset: 0x84

    int rRenderMode; // Offset: 0x88

    float rRenderModeStrength; // Offset: 0x8C

    float rCustomRed; // Offset: 0x90

    float rCustomGreen; // Offset: 0x94

    float rCustomBlue; // Offset: 0x98

    int gamePlayerSkin; // Offset: 0x9C

    int gameWeaponSkin; // Offset: 0xA0

    int gamePlayerPose; // Offset: 0xA4

    int gamePlayerRotation; // Offset: 0xA8

    float gamePlayerMinVertOffset; // Offset: 0xAC

    float gamePlayerCurVertOffset; // Offset: 0xB0

    float gamePlayerMaxVertOffset; // Offset: 0xB4

    // =============== Cached Settings
    int cached_r_dof; // Offset: 0xB8

    bool cached_com_overrideDOF; // Offset: 0xBC

    float cached_r_dofTransparencySortDistance; // Offset: 0xC0

    float cached_g_fov; // Offset: 0xC4

    float cached_r_pickupItemsSaturation; // Offset: 0xC8

    float cached_r_sharpening; // Offset: 0xCC

    float cached_r_filmGrainRatio; // Offset: 0xD0

    int cached_r_renderMode; // Offset: 0xD4

    float cached_r_renderModeStrength; // Offset: 0xD8

}; // Size: 0xE0
