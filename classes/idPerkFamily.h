struct idPerkFamily
{
    // the base perk
    idDeclPerk* base; // Offset: 0x0

    // the slot to use in the generic_unhide_mod_select node, and others, in the fp_hands animweb
    weaponModSelect_t weaponModSelect; // Offset: 0x8

    // upgrades to the base perk
    idList < const idDeclPerk * , TAG_IDLIST , false > upgrades; // Offset: 0x10

    // the mastery perk
    idDeclPerk* mastery; // Offset: 0x28

    // Mastery requires an unlockable.
    idDeclUnlockable* masteryChallenge; // Offset: 0x30

    // the weapon mastery data
    idWeaponMastery weaponMastery; // Offset: 0x38

    // stat that tells us if the player has seen the unlock animation for the perk family
    gameStat_t viewedStat; // Offset: 0x100

    // weather we show this in the dossier or not.
    bool showInDossier; // Offset: 0x104

    // named swf color for this perk family
    swfNamedColors_t familyColor; // Offset: 0x108

    // stat needed for the perk family
    gameStat_t preReqStat; // Offset: 0x10C

    // Use my override Cost instead.
    bool overrideCost; // Offset: 0x110

    // the cost to upgrade a mod, based on how many have already been upgraded (ie: 1st mod cost 1, 2nd costs 2, etc..)
    idList < int , TAG_IDLIST , false > modUpgradeCost; // Offset: 0x118

}; // Size: 0x130
