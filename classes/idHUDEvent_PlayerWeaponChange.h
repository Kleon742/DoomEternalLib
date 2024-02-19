struct idHUDEvent_PlayerWeaponChange
{
    struct idPlayerWeaponData_t
    {
        struct weaponModInfo_t
        {
            idDeclPerk* base; // Offset: 0x0

            idDeclPerk* mastery; // Offset: 0x8

            bool isUnlocked; // Offset: 0x10

            bool isMastered; // Offset: 0x11

        }; // Size: 0x18

        // current Weapon.
        idDeclWeapon* currentWeapon; // Offset: 0x0

        idHUDEvent_PlayerWeaponChange::idPlayerWeaponData_t::weaponModInfo_t modList[2]; // Offset: 0x8

        // number of mods this weapon has
        int numMods; // Offset: 0x38

        // active mod index
        int activeModIndex; // Offset: 0x3C

        // current Ammo.
        int currentAmmo; // Offset: 0x40

        // max Ammo of the current weapon.
        int maxAmmo; // Offset: 0x44

        // ammo consumed per shot
        int ammoPerShot; // Offset: 0x48

    }; // Size: 0x50

    idHUDEvent_PlayerWeaponChange::idPlayerWeaponData_t info; // Offset: 0x0

}; // Size: 0x50
