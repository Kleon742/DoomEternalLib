struct idLogicNodeModelDamageListener : idLogicNodeModel
{
    float lastDamage; // Offset: 0x10

    float healthLeft; // Offset: 0x14

    float damageTotal; // Offset: 0x18

    idStaticList < bool , 5 , false , TAG_IDLIST > foundDamageDecl; // Offset: 0x20

    // optional damage decl filter (if set, will only activate if this matches)
    idDeclDamage* damageDecl; // Offset: 0x40

    // optional additional damage decls to filter
    idList < const idDeclDamage * , TAG_IDLIST , false > additionalDamageDecls; // Offset: 0x48

    // looks for decls and outputs TRUE when any decl in the list is found
    idStaticList < const idDeclDamage * , 5 , false , TAG_IDLIST > findDamageDecls; // Offset: 0x60

    // only activate if frozen
    bool frozenRequired; // Offset: 0xA0

    // only activate if on fire
    bool onFireRequired; // Offset: 0xA1

}; // Size: 0xA8
