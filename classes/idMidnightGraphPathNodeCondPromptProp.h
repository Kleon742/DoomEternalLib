struct idMidnightGraphPathNodeCondPromptProp : idMidnightGraphPathNodeProp
{
    // list of localized text identifiers of choices. Determines the node output count.
    idList < idStrId , TAG_IDLIST , false > choices; // Offset: 0x18

}; // Size: 0x30
