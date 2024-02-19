struct dataDrivenOption_t
{
    // list of rules that must be true
    idList < dataDrivenRule_t , TAG_IDLIST , false > requiredRules; // Offset: 0x0

    // list of rules that will add
    idList < dataDrivenRule_t , TAG_IDLIST , false > bonusRules; // Offset: 0x18

    // decl result
    idGameDeclTypeInfo* resultDataDecl; // Offset: 0x30

}; // Size: 0x38
