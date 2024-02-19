struct idDeclAIDamageDeclCollection : idGameDeclTypeInfo
{
    // list of damage decls in this collection
    idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x90

    // list of children containing even more decls
    idList < const idDeclAIDamageDeclCollection * , TAG_IDLIST , false > childCollections; // Offset: 0xA8

}; // Size: 0xC0
