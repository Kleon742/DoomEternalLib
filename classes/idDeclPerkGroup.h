struct idDeclPerkGroup : idGameDeclTypeInfo
{
    // display Name of this Perk group
    idStrId displayName; // Offset: 0x90

    // description of this Perk group
    idStrId description; // Offset: 0x94

    // icon
    idMaterial2* iconMaterial; // Offset: 0x98

    // all the perk families in this group.
    idList < idPerkFamily , TAG_IDLIST , false > perkFamilies; // Offset: 0xA0

    // extra strings for this perk, used for pro tips weapons
    idList < idStrId , TAG_IDLIST , false > extraStrings; // Offset: 0xB8

    // the maximum number of perks this group is allowed to have active at any given time.
    int maxNumActivePerks; // Offset: 0xD0

    // The minimum number of perks this group is allowed to have active at any time.
    int minNumActivePerks; // Offset: 0xD4

}; // Size: 0xD8
