struct idSWFWidget_Customization_CosmeticButton : idSWFWidget_Button
{
    // Character this cosmetic applies to
    idDeclPlayableCharacter* characterDecl; // Offset: 0x2A0

    // Weapon this cosmetic applies to
    idDeclUIWeapon* weaponDecl; // Offset: 0x2A8

    // Incase we dont need DeclUIWeapon;
    idDeclWeapon* realWeaponDecl; // Offset: 0x2B0

    // The warehouse item decl
    idDeclWarehouseItem* itemDecl; // Offset: 0x2B8

    // Only used in the set items list
    int requiredLevel; // Offset: 0x2C0

    // Only used when this button is part of a master collection list. Needed for enforcing skin-exclusivity for certain items.
    idDeclWarehouseItem* parentSet; // Offset: 0x2C8

    bool isDefaultCharacterSkin; // Offset: 0x2D0

    bool isDefaultWeaponSkin; // Offset: 0x2D1

    idStrId defaultDisplayText; // Offset: 0x2D4

}; // Size: 0x2D8
