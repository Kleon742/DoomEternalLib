struct characterEquippedSet_t
{
    // Character this equipped set is meant for
    idDeclWarehouseItem* associatedCharacter; // Offset: 0x0

    // Skin to apply to character
    idDeclWarehouseItem* characterSkin; // Offset: 0x8

    // Animation to play while idle
    idDeclWarehouseItem* idleAnim; // Offset: 0x10

    // Animation to play for the intro
    idDeclWarehouseItem* introAnim; // Offset: 0x18

    // Animation to play for victory
    idDeclWarehouseItem* victoryAnim; // Offset: 0x20

    // How to gore the enemies
    idDeclWarehouseItem* opponentDeath; // Offset: 0x28

    // Podium to display
    idDeclWarehouseItem* podium; // Offset: 0x30

}; // Size: 0x38
