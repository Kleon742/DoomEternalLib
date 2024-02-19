struct idSWFWidget_WeaponWheelWedgeData : idSWFWidget_WheelWedgeData
{
    idMaterial2* emptyIcon; // Offset: 0x28

    idMaterial2* selectedIcon; // Offset: 0x30

    idMaterial2* ammoIcon; // Offset: 0x38

    idList < const idMaterial2 * , TAG_IDLIST , false > modIcons; // Offset: 0x40

    swfNamedColors_t colorFull; // Offset: 0x58

    int activeModIconIndex; // Offset: 0x5C

    int ammoCount; // Offset: 0x60

    int maxAmmoAmount; // Offset: 0x64

    bool isSelectedOnFocus; // Offset: 0x68

    bool infiniteAmmo; // Offset: 0x69

}; // Size: 0x70
