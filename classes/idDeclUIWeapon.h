struct idDeclUIWeapon : idGameDeclTypeInfo
{
    // Reference to the weapon decl
    idDeclWeaponRef weaponDeclRef; // Offset: 0x90

    // Reference to the entity def to use in the UI
    idEntityDefRef uiEntityDefRef; // Offset: 0x98

    // Display name
    idStrId displayName; // Offset: 0xA0

    // Can this weapon show up on the weapon wheel
    bool showOnWeaponWheel; // Offset: 0xA4

    // weapon icon
    idMaterial2* icon; // Offset: 0xA8

    // weapon icon color
    swfNamedColors_t iconColor; // Offset: 0xB0

    // mod family, used for default mod screen
    idDeclPerkGroup* perkGroup; // Offset: 0xB8

    // ammo decl
    idDeclAmmo* ammo; // Offset: 0xC0

    // meshes to show/hide by default for the 1st person model
    idMD6Util::meshShowHideInfo_t showHideMeshInfo; // Offset: 0xC8

    // Custom scale when displaying in a menu
    float menuScale; // Offset: 0x100

    // Position offset to the center of the model in a menu
    idVec3 menuCenterOffset; // Offset: 0x104

}; // Size: 0x110
