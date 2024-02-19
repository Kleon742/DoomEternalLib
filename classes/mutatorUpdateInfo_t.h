struct mutatorUpdateInfo_t
{
    struct useOrLoseInfo_t
    {
        enum eRestoreWeaponOptions : int
        {
            RESTORE_WEAPON_INVALID = -1,
            RESTORE_LAST_WEAPON = 0,
            RESTORE_SPECIFIC_WEAPON = 1,
            RESTORE_ALL_WEAPONS = 2
        };

        // Options to restore weapon
        mutatorUpdateInfo_t::useOrLoseInfo_t::eRestoreWeaponOptions restoreWeapon; // Offset: 0x0

        // restore specific weapon by decl if selected in restore weapon
        idDeclWeapon* restoreWeaponDecl; // Offset: 0x8

    }; // Size: 0x10

    mutatorUpdateInfo_t::useOrLoseInfo_t useOrLoseInfo; // Offset: 0x0

}; // Size: 0x10
