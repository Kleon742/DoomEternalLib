struct idSWFWidget_WeaponWheelCustomization : idSWFWidget
{
    enum secretState_t : int
    {
        SECRET_STATE_INVALID = -1,
        SECRET_STATE_DEFAULT = 0,
        SECRET_STATE_FOUND = 1
    };

    enum wheelCommand_t : int
    {
        COMMAND_WEAPON_WHEEL_RESET = 881,
        COMMAND_WEAPON_WHEEL_CHANGE_SIZE = 882,
        COMMAND_WEAPON_WHEEL_SELECT_WEDGE = 883,
        COMMAND_WEAPON_WHEEL_SELECT_GRID_ITEM = 884,
        COMMAND_WEAPON_WHEEL_CYCLE = 885
    };

    idSWFWidget_CommandBar* commandBar; // Offset: 0x180

    idSWFWidget_WeaponWheel* wheel; // Offset: 0x188

    idSWFWidget_DynamicGrid* weaponGrid; // Offset: 0x190

    idList < const idDeclWeapon * , TAG_IDLIST , false > weaponOrder; // Offset: 0x198

    idArray < int , 8 > wheelOrder; // Offset: 0x1B0

    int weaponToSlot; // Offset: 0x1D0

    int desiredWedgeCount; // Offset: 0x1D4

    int currentSizeVariationIndex; // Offset: 0x1D8

    bool allowWheelOrder; // Offset: 0x1DC

    bool isPVPCustomization; // Offset: 0x1DD

    keyNum_t prevJoyKey; // Offset: 0x1E0

    keyNum_t nextJoyKey; // Offset: 0x1E4

    keyNum_t prevPCKey; // Offset: 0x1E8

    keyNum_t nextPCKey; // Offset: 0x1EC

    swfPlatform_t lastSWFPlatform; // Offset: 0x1F0

}; // Size: 0x1F8
