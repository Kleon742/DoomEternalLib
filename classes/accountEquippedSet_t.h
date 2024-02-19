struct accountEquippedSet_t
{
    // Icon to display in profile badge
    idDeclWarehouseItem* profileIcon; // Offset: 0x0

    // Title to display in profile badge
    idDeclWarehouseItem* profileTitle; // Offset: 0x8

    // Character that we are set to.
    idDeclWarehouseItem* profileCharacter; // Offset: 0x10

    // Skin to apply to character
    idDeclWarehouseItem* profileCharacterSkin; // Offset: 0x18

    // Animation to play while idle
    idDeclWarehouseItem* profileIdleAnim; // Offset: 0x20

    // Podium to display
    idDeclWarehouseItem* profilePodium; // Offset: 0x28

}; // Size: 0x30
