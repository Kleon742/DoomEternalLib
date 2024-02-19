struct idHUDEvent_WeaponWheelOpened
{
    struct weaponInfo_t
    {
        idDeclWeapon* weaponDecl; // Offset: 0x0

        idDeclInventory* inventoryDecl; // Offset: 0x8

        int ammoPerShot; // Offset: 0x10

        int ammoCount; // Offset: 0x14

        int maxAmmoCount; // Offset: 0x18

        int activeModIndex; // Offset: 0x1C

        int availableModBitFlags; // Offset: 0x20

        bool usesAmmo; // Offset: 0x24

        bool ammoLow; // Offset: 0x25

        bool outOfAmmo; // Offset: 0x26

        bool hasWeapon; // Offset: 0x27

    }; // Size: 0x28

    struct weaponWheelData_t
    {
        int numWeapons; // Offset: 0x0

        idHUDEvent_WeaponWheelOpened::weaponInfo_t weapons[8]; // Offset: 0x8

        int numVisibleSlots; // Offset: 0x148

    }; // Size: 0x150

    idHUDEvent_WeaponWheelOpened::weaponWheelData_t eventInfo; // Offset: 0x0

}; // Size: 0x150
