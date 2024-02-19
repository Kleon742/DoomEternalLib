struct logicNodePlayerModifyPerksInfo_t
{
    // perk we're dealing with
    idDeclPerk* perkDecl; // Offset: 0x0

    // 1 = add; -1 = remove
    int addOrRemove; // Offset: 0x8

    // activate after adding?
    bool activate; // Offset: 0xC

}; // Size: 0x10
