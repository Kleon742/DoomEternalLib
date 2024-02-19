struct idSWFWidget_DoomLevel : idSWFWidget
{
    enum animState_t : int
    {
        ANIM_STATE_IDLE = -1,
        ANIM_STATE_TWEEN_XP = 0,
        ANIM_STATE_LEVEL_UP_NORMAL = 1,
        ANIM_STATE_LEVEL_UP_PRESTIGE = 2,
        ANIM_STATE_PRESTIGE_UP = 3,
        NUM_ANIM_STATES = 4
    };

    struct animLevelInfo_t
    {
        int levelNum; // Offset: 0x0

        int prestigeNum; // Offset: 0x4

        float startProgress; // Offset: 0x8

        float endProgress; // Offset: 0xC

        idMaterial2* frameImage; // Offset: 0x10

    }; // Size: 0x18

    bool miniVersion; // Offset: 0x180

    int xpValue; // Offset: 0x184

    idDeclWarehouseItem* customIconDecl; // Offset: 0x188

    idSWFWidget_PrestigeLevel* prestigeLevel; // Offset: 0x190

    idSWFWidget_DoomLevel::animState_t animState; // Offset: 0x198

    idList < idSWFWidget_DoomLevel::animLevelInfo_t , TAG_IDLIST , false > animLevels; // Offset: 0x1A0

    int animLevelIndex; // Offset: 0x1B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animStartTime; // Offset: 0x1C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animEndTime; // Offset: 0x1C8

}; // Size: 0x1D0
