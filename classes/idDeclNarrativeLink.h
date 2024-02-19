struct idDeclNarrativeLink : idTypeInfoGraphLink
{
    // actions to take when this link executes
    idList < narrativeAction_t , TAG_IDLIST , false > actions; // Offset: 0x40

    // IN PROGRESS.. No Touchy.
    idList < idNarrativeLinkCondition , TAG_IDLIST , false > conditions; // Offset: 0x58

}; // Size: 0x70
