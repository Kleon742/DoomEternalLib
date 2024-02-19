struct idDeclInventory : idGameDeclTypeInfo
{
    enum inventoryDeclType_t : int
    {
        INVENTORY_DECL_MISC = 0,
        INVENTORY_DECL_WEAPON = 1,
        INVENTORY_DECL_AMMO = 2,
        INVENTORY_DECL_THROWABLE = 3,
        INVENTORY_DECL_ACTOR_MOD = 4,
        INVENTORY_DECL_RUSH_ATTACK = 5,
        INVENTORY_DECL_HUD_ITEM = 6,
        INVENTORY_DECL_ABILITY = 7
    };

    enum inventoryUse_t : int
    {
        INVENTORY_USE_UNDEF = 0,
        INVENTORY_USE_WEAPON = 1,
        INVENTORY_USE_ABILITY = 2,
        INVENTORY_USE_ITEM = 3,
        INVENTORY_USE_EQUIPMENT = 4,
        INVENTORY_USE_EQUIPMENT_DROP = 5,
        INVENTORY_USE_EQUIPMENT_LAUNCHER = 6,
        INVENTORY_USE_EQUIPMENT_LAUNCHER_OR_THROW = 7,
        INVENTORY_USE_KEY = 8,
        INVENTORY_USE_POINTS = 9,
        INVENTORY_USE_NUM = 10
    };

    enum inventoryGroup_t : int
    {
        INVENTORY_GROUP_UNGROUPED = 0,
        INVENTORY_GROUP_BOOKS = 1,
        INVENTORY_GROUP_FOODS = 2,
        INVENTORY_GROUP_GAS = 3,
        INVENTORY_GROUP_OIL = 4,
        INVENTORY_GROUP_SMALL = 5,
        INVENTORY_GROUP_BEER = 6,
        INVENTORY_GROUP_TOOLS = 7
    };

    enum inventoryDesc_t : int
    {
        DESC_INVALID = 0,
        DESC_FRAG_GRENADE = 1,
        DESC_STUN_GRENADE = 2,
        DESC_FLAME_BELCH = 4,
        DESC_MEAT_HOOK = 8
    };

    struct controllerShakeInfo_t
    {
        // shake
        float highMagnitude; // Offset: 0x0

        // shake
        idTypesafeTime < int , millisecondUnique_t , 1000 > highDuration; // Offset: 0x4

        // shake
        float lowMagnitude; // Offset: 0x8

        // shake
        idTypesafeTime < int , millisecondUnique_t , 1000 > lowDuration; // Offset: 0xC

    }; // Size: 0x10

    struct itemListElement_t
    {
        // Item to be given
        idDeclInventory* item; // Offset: 0x0

        // Count to be given
        int count; // Offset: 0x8

    }; // Size: 0x10

    struct usageModifiers_t
    {
        // How long this item lasts in Milliseconds. ( -1 = forever )
        idTypesafeTime < int , millisecondUnique_t , 1000 > lifeTimeMS; // Offset: 0x0

        // if we need to stop any execution in this item for a glory kill
        bool pauseForGloryKill; // Offset: 0x4

        // allow to start and restart items on partial bar usage, if the inventory item is pip based this indicates we allow manual stop while in use
        bool allowPartialTimeDepletion; // Offset: 0x5

        // remove the remainder of a pip worth of health when we allow partial stop
        bool removePipOnPartialStop; // Offset: 0x6

        // whether this item interprets its metering as pip based or not
        bool isPipBased; // Offset: 0x7

        // minimum percentage adrenaline we must have to use as partial time
        int minPercentForTimeDepletion; // Offset: 0x8

        // the max number of pips to interpret the meter as
        int maxNumPips; // Offset: 0xC

        // allows individual pips to tick down gradually instead of locking 1 pip per shot
        int numShotsPerPip; // Offset: 0x10

    }; // Size: 0x14

    struct equipmentLauncherInfo_t
    {
        // which muzzle tag to use for launching
        idAtomicString muzzleTag; // Offset: 0x0

    }; // Size: 0x8

    // these flags prevent stack overflow due
    char strongLoadedAliasesForHandsModel; // Offset: 0x0

    // to recursion within the StrongLoad calls
    char strongLoadedAliasesForItemModel; // Offset: 0x0

    // typeinfo of the idInventoryItem class associated with this item
    idTypeInfoPtr < idInventoryItem > inventoryClass; // Offset: 0x98

    // the model to use when held in the player's hands
    idDeclMD6* handsModelMD6; // Offset: 0xA0

    // true for weapons & hands
    bool useWeaponFOVScale; // Offset: 0xA8

    // true for the equipment launcher
    bool useCustomFOVScale2; // Offset: 0xA9

    // the model to use when searching for a compatible anim web instead of handsModel
    idDeclMD6* MD6AnimOverride; // Offset: 0xB0

    // the MD6 model to use for an attachment other than the player's hands
    idDeclMD6* thirdPersonMD6; // Offset: 0xB8

    // the third person attachment tag to use when attaching the thirdPersonMD6. If empty, it will default to the equip slot of the weapon.
    idAtomicString thirdPersonAttachTag; // Offset: 0xC0

    // the static model to use for an attachment other than the player's hands
    idStaticModel* thirdPersonStatic; // Offset: 0xC8

    // the image to be displayed in the UI
    idStaticModel* guiModel; // Offset: 0xD0

    // model to be shown at the upgrade station
    idDeclMD6* upgradeModel; // Offset: 0xD8

    // different material forced onto model - remap table - new
    idList < materialRemap_t , TAG_IDLIST , false > materialRemap; // Offset: 0xE0

    // use an empty model as an attachment
    bool useEmptyModel; // Offset: 0xF8

    // scale of the model when viewed in third person
    float thirdPersonScale; // Offset: 0xFC

    // used by armor save code. any child items are visually in front of / on top of this item. so the child needs to be damaged / removed first
    idList < const idDeclInventory * , TAG_IDLIST , false > childItem; // Offset: 0x100

    // different material forced onto model
    idMaterial2* customMaterial; // Offset: 0x118

    // fov scale to use when held in the player's hands
    float handsFovScale; // Offset: 0x120

    // human-readable name for the item (player may see this)
    idStrId displayName; // Offset: 0x124

    // the human-readable name that is used when the 'Tactical Advantage' hack mod is active
    idStrId shortDisplayName; // Offset: 0x128

    // description of item
    idStrId description; // Offset: 0x12C

    // second line on the notification for aquiring this item
    idStrId notificationSubtext; // Offset: 0x130

    // item icon as displayed in the inventory screen
    idMaterial2* icon; // Offset: 0x138

    // used for accent on icons ( multiple layers )
    idMaterial2* iconDetails; // Offset: 0x140

    // item icon as displayed in the quick item dpad
    idMaterial2* quickIcon; // Offset: 0x148

    // icon that will be used instead of the normal icon for notificiations
    idMaterial2* notificationOverrideIcon; // Offset: 0x150

    // color to use for the icon
    swfNamedColors_t iconColor; // Offset: 0x158

    // list of icons to use and apply swf colors to
    idList < swfColoredMaterial2_t , TAG_IDLIST , false > swfIcons; // Offset: 0x160

    // name of the entity def that represents this inventory in the world
    idDeclEntityDef* entityDef; // Offset: 0x178

    // how should this item be dropped
    dropItemType_t dropItemType; // Offset: 0x180

    // if true, the item can be used ( i.e. ladder rungs etc )
    bool usable; // Offset: 0x184

    // quick slot group an item can be placed in.. NONE == not quick usable
    quickSlotGroup_t quickSlotGroup; // Offset: 0x188

    // if true, item can be received by "give all" etc. (Doesn't effect wether the item is giveable in the normal course of gameplay)
    bool giveableByCommand; // Offset: 0x18C

    // if true, item can be dropped
    bool droppable; // Offset: 0x18D

    // if true, dropped item counts toward player's bot limit
    bool droppedBot; // Offset: 0x18E

    // if true, will remove if any contacts happen with anything else other than the world.
    bool dropRemoveOnContact; // Offset: 0x18F

    // the way to shake the controller on item drop
    idDeclInventory::controllerShakeInfo_t droppedControllerShake; // Offset: 0x190

    // if true, items can be stacked (multiple items represented by a single idInventoryItem)
    bool stackable; // Offset: 0x1A0

    // if true, an entity should only ever have one of these items.
    bool singular; // Offset: 0x1A1

    // if true, item is removed when used
    bool removeOnUse; // Offset: 0x1A2

    // if true, removes an item, but does not delete it from your inventory, on use.
    bool removeButNotDelete; // Offset: 0x1A3

    // if true, will deactivate the inventory gui when used by a player.
    bool closeInventoryGuiOnUse; // Offset: 0x1A4

    // if true, the item has no attached model associated with it when equipped ( for instance, fists )
    bool noAttachment; // Offset: 0x1A5

    // if true, create an attachment for this item when it is added to an entity's inventory. (added from Doom4)
    bool autoAttach; // Offset: 0x1A6

    // if true, the player won't get a message when they receive the item
    bool noPickupMessage; // Offset: 0x1A7

    // if true, remove from the world after the item drops and comes to rest
    bool removeWhenDropped; // Offset: 0x1A8

    // if true, owner will 'forget' this item after it has been dropped and won't try to do things with it later (added from Doom4)
    bool ownerForgetAfterDrop; // Offset: 0x1A9

    // if > 0 will use a cool down before it can be used the first time.
    idTypesafeTime < int , millisecondUnique_t , 1000 > quickUseInitialDelay; // Offset: 0x1AC

    // if > 0 will use a cool down on this item before it can be used again.
    idTypesafeTime < int , millisecondUnique_t , 1000 > quickUseCoolDown; // Offset: 0x1B0

    // can specify an alternate cooldown time for specific special case inventory items
    idTypesafeTime < int , millisecondUnique_t , 1000 > quickUseAltCoolDown; // Offset: 0x1B4

    // If true, item will only be available when the players Global cool down is up.
    bool useGlobalCoolDown; // Offset: 0x1B8

    // If true, will use global cooldown system but the time will be the equipment's cooldown, not a shared one
    bool useMixedCooldown; // Offset: 0x1B9

    // if stackable this is the max number of this item the player can carry
    int maxCount; // Offset: 0x1BC

    // The max number of this item the player can carry in PvP mode - if left at -1 we just fall back to maxCount
    idBranchedOptionValue < declInputBranch_t , int > maxCountPVP; // Offset: 0x1C0

    // (PLEASE BE CAREFUL WITH THIS!) number of stacked items
    int count; // Offset: 0x1E8

    // if true, will consume fuel on use and passively regenerate when not at max
    bool usesItemFuel; // Offset: 0x1EC

    // how much fuel does it cost to consume a single instance of this inventory
    float itemFuelCost; // Offset: 0x1F0

    // how fast does the fuel on this inventory item recharge per second
    float itemFuelRegenRate; // Offset: 0x1F4

    // what is the total amount of fuel for this item
    float itemFuelMax; // Offset: 0x1F8

    // what is the starting amount of fuel for the player
    float itemFuelStarting; // Offset: 0x1FC

    // at what distance should you get credited fuel for retrieving the item
    float pickupDistanceFuelCredit; // Offset: 0x200

    // number of hands required to equip the item
    int numHands; // Offset: 0x204

    // where item must be equipped in order to use
    equipSlot_t equipSlot; // Offset: 0x208

    // slot where this weapon is when holstered
    equipSlot_t holsterSlot; // Offset: 0x20C

    // if viewing this weapon from third person don't remove it when unequipped
    bool removeOnUnequipThirdPerson; // Offset: 0x210

    // whether of not the player can see the item in his inventory
    bool playerCanSeeInInventory; // Offset: 0x211

    // if not NULL, this item is grouped into specified container item
    idDeclInventory* containerDecl; // Offset: 0x218

    // if true the item will be used when it is given
    bool useOnReceive; // Offset: 0x220

    // if item is a quick item and this is true, item will be set to quick item selected on receive
    bool selectOnReceive; // Offset: 0x221

    // sound to play on select
    idSoundEvent* selectSound; // Offset: 0x228

    // sound to play on use
    idSoundEvent* useSound; // Offset: 0x230

    // sound to play when dropped
    idSoundEvent* dropSound; // Offset: 0x238

    // sound to play when item has recharged
    idSoundEvent* rechargeSound; // Offset: 0x240

    // AI event to send out when dropped
    idDeclAiEvent* dropEventDecl; // Offset: 0x248

    // items use type throwable | deployable etc..
    idDeclInventory::inventoryUse_t itemUse; // Offset: 0x250

    // material used for object when displayed in GUIs
    idMaterial2* guiCustomMaterial; // Offset: 0x258

    // temp used for hiding regime shield
    bool initiallyHidden; // Offset: 0x260

    // group that item will be part of
    idDeclInventory::inventoryGroup_t itemGroup; // Offset: 0x264

    // worth of item for the particular group ( 2L gas > 1L gas )
    int itemGroupWorth; // Offset: 0x268

    // do something when this item is unequipped
    unequipAction_t unequipAction; // Offset: 0x26C

    // when trying to differentiate between a tap and a hold, how many milliseconds of having held down the button should we register a hold
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeToHoldMilliseconds; // Offset: 0x270

    // when trying to detect a double tap, in how many milliseconds should we detect multiple taps
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeToDoubleTapMilliseconds; // Offset: 0x274

    // custom hand animation associated with this item, acivated when item is used
    idHandsCustomAnimSelect customHandsAnim; // Offset: 0x278

    // custom hand animation associated with this item, activated first time item is picked up
    idHandsCustomAnimSelect customHandsAnimOnFirstPickup; // Offset: 0x27C

    // custom hand animation associated with this item, activated every time item is picked up (except when customHandsAnimOnFirstPickup is defined)
    idHandsCustomAnimSelect customHandsAnimOnPickup; // Offset: 0x280

    // custom weapon animation associated with this item, acivated when item is used
    idHandsCustomWeaponAnimSelect customWeaponAnim; // Offset: 0x284

    // custom weapon animation associated with this item, activated first time item is picked up
    idHandsCustomWeaponAnimSelect customWeaponAnimOnFirstPickup; // Offset: 0x288

    // custom weapon animation associated with this item, activated every time item is picked up (except when customWeaponAnimOnFirstPickup is defined)
    idHandsCustomWeaponAnimSelect customWeaponAnimOnPickup; // Offset: 0x28C

    // force item to be unequipped when prompted.
    bool customItemAlwaysUnequip; // Offset: 0x290

    // if true this inventory item should only exist once in the world, other instances wont be useable, props might remove it
    bool uniqueInventoryItem; // Offset: 0x291

    // allow the replacement of an item given via cheat with a non cheat item when
    bool cheatReplaceAllowed; // Offset: 0x292

    // save the history on how this item has been gathered, needs to be true for cheating items
    bool retainHistory; // Offset: 0x293

    // save the inventory data only on this level/map, discard the data once we have moved past it
    bool saveDataToLevelOnly; // Offset: 0x294

    // the saving of this inventory is gated until the game tells us to un-gate it
    bool saveDataGated; // Offset: 0x295

    // the save game type for the inventory item
    saveGameSerType_t saveGameType; // Offset: 0x298

    // these perks are automatically given/built.
    idList < const idDeclPerk * , TAG_IDLIST , false > givePerksOnReceive; // Offset: 0x2A0

    // list of items to give when this item is given.
    idList < const idDeclInventory * , TAG_IDLIST , false > giveItemsOnReceive; // Offset: 0x2B8

    // these unlockables are added to the manager when the item is given.
    idList < const idDeclUnlockable * , TAG_IDLIST , false > giveQuestsOnReceive; // Offset: 0x2D0

    // give these upgrades to the owner when the item is given
    idList < const idDeclUpgrade * , TAG_IDLIST , false > giveUpgradesOnReceive; // Offset: 0x2E8

    // list of items to give when this item is given. ... now with count
    idList < idDeclInventory::itemListElement_t , TAG_IDLIST , false > giveItemsOnRecieveWithCount; // Offset: 0x300

    // FIXME: Rename to just 'declFX' weapon FX
    idDeclFX* weaponFX; // Offset: 0x318

    idDeclInventory::inventoryDeclType_t inventoryDeclType; // Offset: 0x320

    // list of upgrades available to this inventory item
    idList < const idDeclUpgrade * , TAG_IDLIST , false > upgrades; // Offset: 0x328

    // list of perks available to this inventory item
    idList < const idDeclPerkGroup * , TAG_IDLIST , false > perkGroups; // Offset: 0x340

    // combos that can be created from perks in perkGroup
    idList < idPerkCombo , TAG_IDLIST , false > perkCombos; // Offset: 0x358

    // overrides perk icons
    idList < const idMaterial2 * , TAG_IDLIST , false > perkIconOverrides; // Offset: 0x370

    // Items required to unlock this inventory item
    idList < const idDeclInventory * , TAG_IDLIST , false > prerequisiteItems; // Offset: 0x388

    // video for the inventory item
    idMaterial2* video; // Offset: 0x3A0

    // Whether the item is allowed in MP games.
    bool supportedInMP; // Offset: 0x3A8

    // Hud event ID when the item gets added
    hudEventID_t addedHudEventID; // Offset: 0x3AC

    // Hud event ID when the item gets removed
    hudEventID_t removalHudEventID; // Offset: 0x3B0

    // description on how to interpret item for usage
    idDeclInventory::usageModifiers_t usageModifiers; // Offset: 0x3B4

    // the decl to init simple health
    idDeclSimpleHealthComponent* declSimpleHealth; // Offset: 0x3C8

    // game stat to INCREASE upon inventory received
    gameStat_t gameStat; // Offset: 0x3D0

    // allows adjusting aspects of this item based on game difficulty level (for items DROPPED by AI)
    idDeclGameDifficulty* gameDifficultyDecl_Dropped; // Offset: 0x3D8

    // allows adjusting aspects of this item based on game difficulty level (for items placed in the map by LDs)
    idDeclGameDifficulty* gameDifficultyDecl_Pickup; // Offset: 0x3E0

    // quick description flags
    idDeclInventory::inventoryDesc_t inventoryDescription; // Offset: 0x3E8

    // equipment launcher variables
    idDeclInventory::equipmentLauncherInfo_t launcherInfo; // Offset: 0x3F0

}; // Size: 0x3F8
