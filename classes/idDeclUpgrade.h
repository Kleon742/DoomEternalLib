struct idDeclUpgrade : idGameDeclTypeInfo
{
    // How does this upgrade get awarded?
    upgradeAwardCondition_t awardCondition; // Offset: 0x90

    // Skills required to unlock this skill
    idList < const idDeclUpgrade * , TAG_IDLIST , false > prerequisites; // Offset: 0x98

    // any damage overrides with this key will be activated for all AI
    idAtomicString aiDamageOverrideActivationKey; // Offset: 0xB0

    // all of the possible MISC DATA modifications that this upgrade applies
    idList < idUpgradeMod_Data , TAG_IDLIST , false > modifiersData; // Offset: 0xB8

    // all of the possible weapon modifications that this upgrade applies
    idList < idUpgradeMod_Weapon , TAG_IDLIST , false > modifiersWeapon; // Offset: 0xD0

    // all of the possible equipment modifications that this upgrade applies
    idList < idUpgradeMod_Equipment , TAG_IDLIST , false > modifiersEquipment; // Offset: 0xE8

    // all of the possible ability modifications that this upgrade applies
    idList < idUpgradeMod_Abilities , TAG_IDLIST , false > modifiersAbility; // Offset: 0x100

    // all of the possible upgrade to the perk group slots this upgrade applies to
    idList < idUpgradeMod_PerkGroupSlots , TAG_IDLIST , false > modifiersPerkGroup; // Offset: 0x118

    // all of the possible upgrade options to the UI
    idList < idUpgradeMod_UI , TAG_IDLIST , false > modifiersUI; // Offset: 0x130

    // all of the possible upgrade options to the UI
    idList < idUpgradeMod_GK , TAG_IDLIST , false > modifiersGK; // Offset: 0x148

    // tier Upgrades
    idList < const idDeclUpgrade * , TAG_IDLIST , false > tierUpgrades; // Offset: 0x160

    // list of possible next upgrades to choose from - these will get auto populated based on prerequisites
    idList < const idDeclUpgrade * , TAG_IDLIST , false > nextUpgrades; // Offset: 0x178

    // this flag will get auto populated based on whether it appears in a tier List.
    bool isTier; // Offset: 0x190

    // are tier skills required to be completed to unlock the next skills?
    bool tierSkillsRequired; // Offset: 0x191

    // display Name of this skill
    idStrId displayName; // Offset: 0x194

    // description of this skill
    idStrId description; // Offset: 0x198

    // icon
    idMaterial2* iconMaterial; // Offset: 0x1A0

    // xp required
    int xpRequired; // Offset: 0x1A8

    // how many skill points this uses.
    int skillPointCost; // Offset: 0x1AC

    // the meshes to hide/show with this upgrade for the 1st person model
    idMD6Util::meshShowHideInfo_t showHideMeshInfo; // Offset: 0x1B0

    // the meshes to hide/show with this upgrade for the 3rd person model
    idMD6Util::meshShowHideInfo_t showHideMeshInfo3rd; // Offset: 0x1E8

    // which firing mode this mod applies to (used only by idUpgradeMod_Weapon)
    weaponFireMode_t fireMode; // Offset: 0x220

    // if true, applies upgrade to all fire modes. if false, only applies upgrade to "fireMode"
    bool allFireModes; // Offset: 0x224

    // if true, this upgrade can be applied multiple times, note not all these upgrades can be turned off it depends on implementation
    bool reUsable; // Offset: 0x225

    // if true, we want all active components to get reapplied
    bool reInitAllUpgrades; // Offset: 0x226

    // the max number of times we can use this upgrade, -1 == infinite
    int maxNumUses; // Offset: 0x228

    // difficulty level required for this to be applied
    gameDifficulty_t difficultyLevel; // Offset: 0x22C

    // the stat add to when we give out an upgrade
    idList < gameStat_t , TAG_IDLIST , false > upgradeStats; // Offset: 0x230

    // stat gets incremented when upgrade has been used max num times
    idList < gameStat_t , TAG_IDLIST , false > maxedOutStats; // Offset: 0x248

}; // Size: 0x260
