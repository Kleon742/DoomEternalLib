struct botWeaponInfo_t
{
    struct botAltFireWeaponProperties_t
    {
        idDeclWeapon::weaponAltFireTypes_t altFireType; // Offset: 0x0

        // {{ units = m }}
        float minRange; // Offset: 0x4

        // {{ units = m }}
        float maxRange; // Offset: 0x8

    }; // Size: 0xC

    bool weaponFireBlocked; // Offset: 0x0

    idDeclWeapon::weaponCategory_t weaponCategory; // Offset: 0x4

    // {{ units = m }}
    float minRange; // Offset: 0x8

    // {{ units = m }}
    float minOptimalRange; // Offset: 0xC

    // {{ units = m }}
    float maxOptimalRange; // Offset: 0x10

    // {{ units = m }}
    float maxRange; // Offset: 0x14

    botWeaponInfo_t::botAltFireWeaponProperties_t altFireInfo; // Offset: 0x18

    // {{ units = m }}
    idVec3 muzzlePosition; // Offset: 0x24

    idMat3 muzzleAxis; // Offset: 0x30

}; // Size: 0x54
