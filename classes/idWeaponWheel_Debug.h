struct idWeaponWheel_Debug
{
    bool allowInput; // Offset: 0x0

    bool altKeyDown; // Offset: 0x1

    bool weaponWheelLocked; // Offset: 0x2

    bool logOpen; // Offset: 0x3

    idVec2 selectionAxis; // Offset: 0x4

    int selectionIndex; // Offset: 0xC

    idDeclWeapon* selectedWeapon; // Offset: 0x10

    // Timers for User Input
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > changeWeaponDownStart; // Offset: 0x18

    bool changeWeaponDown; // Offset: 0x20

    // The last 10 weapon wheel selections.
    idStaticList < idWeaponWheel_DebugEntry , 10 , false , TAG_IDLIST > debugEntries; // Offset: 0x28

}; // Size: 0x220
