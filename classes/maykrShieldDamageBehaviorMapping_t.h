struct maykrShieldDamageBehaviorMapping_t
{
    // apply behavior if damaged by one of these damage decls (no entries implies default behavior)
    idList < const idDeclDamage * , TAG_IDLIST , false > damages; // Offset: 0x0

    // apply behavior if damaged by a damage decl in one of these collections (no entries implies default behavior)
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > damageCollections; // Offset: 0x18

    // when damaged by one of the above damages, modify damage using this behavior
    maykrShieldDamageBehavior_t damageBehavior; // Offset: 0x30

}; // Size: 0x40
