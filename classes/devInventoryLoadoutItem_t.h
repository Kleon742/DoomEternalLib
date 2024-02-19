struct devInventoryLoadoutItem_t
{
    // list of items which will override this one if their activation keys are active
    idList < const idDeclDevInvLoadoutOverride * , TAG_IDLIST , false > overrides; // Offset: 0x0

    // which item
    idDeclInventory* item; // Offset: 0x18

    // which perk
    idDeclPerk* perk; // Offset: 0x20

    // which unlockable to complete
    idDeclUnlockable* unlockable; // Offset: 0x28

    // which glory kill decl to add kills to
    idDeclTargeting* gloryKillProgress; // Offset: 0x30

    // how many
    int count; // Offset: 0x38

    // if true then use the exact 'count' value and not 'count' * stack size
    bool forceCount; // Offset: 0x3C

    // if true then force the gameStat for the inventory item
    bool forceStat; // Offset: 0x3D

    // whether this item is equipped
    bool equip; // Offset: 0x3E

    // if there is a reserve slot, equip this item there
    bool equip_reserve; // Offset: 0x3F

    // if this item has an intro animation, allow it to play
    bool canIntro; // Offset: 0x40

    // Items that award upgrades need to be removed
    bool remove_after_equip; // Offset: 0x41

    // this entry is applied after full loadout has completed
    bool applyAfterLoadout; // Offset: 0x42

    // when true, applies the upgraded perk
    bool applyUpgradesForPerk; // Offset: 0x43

    // this is a Rune perk
    bool isRune; // Offset: 0x44

    // activates this Rune and adds it to the rune list
    bool activateRune; // Offset: 0x45

    // only give this item during buildgame
    bool buildGameOnly; // Offset: 0x46

}; // Size: 0x48
