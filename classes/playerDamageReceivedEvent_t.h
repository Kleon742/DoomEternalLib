struct playerDamageReceivedEvent_t
{
    // damage decl of the damage type that came int
    idDeclDamage* damageDecl; // Offset: 0x0

    // amount of damage
    float damage; // Offset: 0x8

    // localized damage name
    idStr damageName; // Offset: 0x10

    // who dealt the damage
    idManagedClassPtr < idEntity > attacker; // Offset: 0x40

    // who dealt the damage
    idStr attackerName; // Offset: 0x60

    // who dealt the damage
    unsigned int attackerLobbyUserId; // Offset: 0x90

    // game time damage happened
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageTime; // Offset: 0x98

    // the gametime where this damage will "decay" and we will consider the next instance of this type to be a different attack
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageDecayTime; // Offset: 0xA0

    // damage icon
    idMaterial2* damageIcon; // Offset: 0xA8

    // what category of damage is this
    playerDamageReceivedType_t damageType; // Offset: 0xB0

}; // Size: 0xB8
