struct aiBerserkIgnoreBuffsInfo_t
{
    // if the buffed AI is hit with one of these decls, the buffs in the list will be ignored
    idDeclAIDamageDeclCollection* damageDecls; // Offset: 0x0

    // the buff types that should be ignored
    aiBerserkBuffType_t buffsToIgnore; // Offset: 0x8

}; // Size: 0x10
