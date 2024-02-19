struct idDeclPerk : idGameDeclTypeInfo
{
    // display Name of this Perk
    idStrId displayName; // Offset: 0x90

    // display Name of this Perk when picked up.
    idStrId pickupName; // Offset: 0x94

    // subtext for perk acquired notification
    idStrId notificationSubtext; // Offset: 0x98

    // description of this Perk
    idStrId description; // Offset: 0x9C

    // the list of advanced descriptions for this Perk
    advancedDescriptionList_t advancedDescriptions; // Offset: 0xA0

    // icon
    idMaterial2* iconMaterial; // Offset: 0xC0

    // icon for completed version of perk
    idMaterial2* completedIconMat; // Offset: 0xC8

    // image of the tutorial if one 325 x 256 or 325 x 128.. fixed sizes so they work fine inside of flash
    idMaterial2* cinematicImage; // Offset: 0xD0

    // image for the background for the icon
    idMaterial2* backgroundMaterial; // Offset: 0xD8

    // icon to use specifically for the notification
    idMaterial2* notificationOverrideIcon; // Offset: 0xE0

    // named swf color for this perk family
    swfNamedColors_t iconColor; // Offset: 0xE8

    // list of icons to be colors with swfColors
    idList < swfColoredMaterial2_t , TAG_IDLIST , false > coloredIconList; // Offset: 0xF0

    // item that this perk applies to
    idDeclInventory* item; // Offset: 0x108

    // adds 'item' to inventory if it isn't already
    bool addItemtoInventory; // Offset: 0x110

    // allows skipping the verification that the declared 'item' is the same as the item applying the perk
    bool skipItemVerify; // Offset: 0x111

    // what upgrades this perk activates - these upgrades will be removed when the perk is deactivated
    idList < const idDeclUpgrade * , TAG_IDLIST , false > upgrades; // Offset: 0x118

    // extra strings for this perk, used for pro tips on mods and weapon upgrades
    idList < idStrId , TAG_IDLIST , false > extraStrings; // Offset: 0x130

    // any status effects this perk gives to the player
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > statusEffect; // Offset: 0x148

    // info for upgrading/activate demon card(s)
    perkDemonCardInfo_t demonCardInfo; // Offset: 0x160

    // whether we are allowed to have multiples of this perk loaded
    bool reUsable; // Offset: 0x17C

    // the max num the item can be reused, -1 == infinite
    int maxNumUses; // Offset: 0x180

    // descriptor flags for perk description sorting
    perkDescriptionFlags_t descriptionFlags; // Offset: 0x184

    // do we count towards the amount of active perks ?
    bool countTowardsActivePerks; // Offset: 0x188

    // this perk is always activated when added
    bool forceActivate; // Offset: 0x189

    // this perk automatically activates when it gets added (if it's the base perk in the perk family)
    bool autoActivate; // Offset: 0x18A

    // if true this perk will save in the perk component ( used to prevent perks given by the inventory system from being double given )
    bool componentSave; // Offset: 0x18B

    // this perk is part of a perk combo
    bool isComboPiece; // Offset: 0x18C

    // if true, removes the upgrades given by the perk on perk deactivation
    bool removeUpgradesOnDeactivate; // Offset: 0x18D

    // if true, postpone activation until after downgrades are applied
    bool processAfterDowngrades; // Offset: 0x18E

    // deactivates 'disablePerkWhenActivated' perk when this perk is activated (ie: only one can be activate at a time)
    idDeclPerk* disablePerkWhenActivated; // Offset: 0x190

    // stat gets incremented with every upgrade.
    gameStat_t upgradeStat; // Offset: 0x198

    // stat gets incremented when added to the player
    idList < gameStat_t , TAG_IDLIST , false > addStats; // Offset: 0x1A0

    // stat gets incremented when perk has been used max num times
    idList < gameStat_t , TAG_IDLIST , false > maxedOutStats; // Offset: 0x1B8

    // list of unlockables associated with the perk for UI data display reasons
    idList < const idDeclUnlockable * , TAG_IDLIST , false > unlockableList; // Offset: 0x1D0

    // cost of upgrade currency
    int cost; // Offset: 0x1E8

    // notification to fire when this is first activated
    idDeclNotification* notification; // Offset: 0x1F0

    // the codex entry to show
    idDeclCodexEntry* codexEntry; // Offset: 0x1F8

    // If the perk is a rune, what ID does it use?
    runeId_t runeId; // Offset: 0x200

}; // Size: 0x208
