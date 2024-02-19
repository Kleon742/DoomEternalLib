struct idEncounterLogicAIDamageData_t
{
    // Damage data Damage dealt
    float damage; // Offset: 0x0

    // Remaining health after damage
    float remainingHealthPercent; // Offset: 0x4

    // Did the AI die
    bool isDead; // Offset: 0x8

    // (NOT FUNCTIONAL YET) List of damage decls the damage was done with
    idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x10

    // List of weapon decls the damage was done with
    idList < const idDeclWeapon * , TAG_IDLIST , false > weaponDecls; // Offset: 0x28

}; // Size: 0x40
