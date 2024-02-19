struct idAIDamageState_LinkCondition_DamageDecl : idAIDamageState_LinkCondition
{
    // the decl this table is associated with
    idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x20

    // optional references to decls that list more damage decls
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > damageCollections; // Offset: 0x38

}; // Size: 0x50
