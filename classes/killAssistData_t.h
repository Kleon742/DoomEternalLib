struct killAssistData_t
{
    int playerNum; // Offset: 0x0

    // percentage of damage done by this player
    int damagePercent; // Offset: 0x4

    // percentage of health this player was left with after the kill
    int healthPercent; // Offset: 0x8

    // the damage decl
    idDeclDamage* damageDef; // Offset: 0x10

}; // Size: 0x18
