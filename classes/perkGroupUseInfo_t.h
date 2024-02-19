struct perkGroupUseInfo_t
{
    // the perk group we are trying to control
    idDeclPerkGroup* perkGroup; // Offset: 0x0

    // the maximum number of perks this group is allowed to have active at any given time.
    int maxNumActivePerks; // Offset: 0x8

    // The minimum number of perks this group is allowed to have active at any time.
    int minNumActivePerks; // Offset: 0xC

}; // Size: 0x10
