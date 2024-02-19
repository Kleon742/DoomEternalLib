struct idBotBaseWeaponSelector : idItemSelector
{
    idWeapon* currentWeapon; // Offset: 0x18

    idItemTarget* target; // Offset: 0x20

    int numVisibleEnemiesAroundBot; // Offset: 0x28

}; // Size: 0x30
