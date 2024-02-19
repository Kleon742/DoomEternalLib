struct idDeclDeathReportDamageMapping : idDeclTypeInfo
{
    struct damageMap_t
    {
        // The decl that is used in the stead of the mapped decls
        idDeclDamage* reportedDamageDecl; // Offset: 0x0

        // The damage decls that are overridden by the reported decl
        idDeclDamage* mappedDamageDecl; // Offset: 0x8

    }; // Size: 0x10

    // The damage mapping list for all types.
    idList < idDeclDeathReportDamageMapping::damageMap_t , TAG_IDLIST , false > damageMapping; // Offset: 0x88

    // For the slayer player it is assumed that their damage is always the equipped weapon. It usually is, but for equipment, this is not the case.
    idList < idDeclDamage * , TAG_IDLIST , false > slayerUnmaskedDamageDecls; // Offset: 0xA0

}; // Size: 0xB8
