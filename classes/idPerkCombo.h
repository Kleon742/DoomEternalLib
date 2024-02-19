struct idPerkCombo
{
    // all the perks that make up this combo
    idList < const idDeclPerk * , TAG_IDLIST , false > perksNeeded; // Offset: 0x0

    // the product of combining all listed perks
    idDeclPerk* comboPerk; // Offset: 0x18

}; // Size: 0x20
