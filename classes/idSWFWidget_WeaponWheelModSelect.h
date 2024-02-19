struct idSWFWidget_WeaponWheelModSelect : idSWFWidget
{
    enum modSelectCommand_t : int
    {
        COMMAND_SELECT_DEFAULT_MOD = 881
    };

    idSWFWidget_CommandBar* commandBar; // Offset: 0x180

    idSWFWidget_WeaponWheel* wheel; // Offset: 0x188

    idList < const idDeclUIWeapon * , TAG_IDLIST , false > weaponOrder; // Offset: 0x190

    idList < int , TAG_IDLIST , false > wedgeToWeaponOrderMapping; // Offset: 0x1A8

    idArray < int , 8 > wheelOrder; // Offset: 0x1C0

    idArray < int , 8 > defaultModList; // Offset: 0x1E0

    idSWFWidget_List* modList; // Offset: 0x200

    int desiredWedgeCount; // Offset: 0x208

}; // Size: 0x210
