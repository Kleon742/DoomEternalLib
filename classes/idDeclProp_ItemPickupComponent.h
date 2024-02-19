struct idDeclProp_ItemPickupComponent : idDeclProp_UseComponent
{
    struct idAdditionalInventoryItem
    {
        // item to add
        idDeclInventory* decl; // Offset: 0x0

        // fixed count to add
        int count; // Offset: 0x8

        // additional random count to add
        int randCount; // Offset: 0xC

        // use the exact ( count + randCount ) amount, instead of multiplying it by the count value specified in the decl
        bool forceCount; // Offset: 0x10

    }; // Size: 0x18

    // inventory def for this prop - all properties relating to player / AI usage go here
    idDeclInventory* inventoryDecl; // Offset: 0x130

    // Whether we want exactly this amount, or a percentage.
    propCountSpecifier_t countSpecifier; // Offset: 0x138

    // number of items of inventoryDecl type this prop holds ( percentage 0 - 100 )
    float inventoryCount; // Offset: 0x13C

    // alternate items that may be used by ai and vehicle pickups
    idList < idDeclProp_ItemPickupComponent::idAdditionalInventoryItem , TAG_IDLIST , false > alternateInventoryDecl; // Offset: 0x140

    // any additional items
    idList < idDeclProp_ItemPickupComponent::idAdditionalInventoryItem , TAG_IDLIST , false > additionalInventoryDecl; // Offset: 0x158

    // must have inventory item to use the prop
    idDeclInventory* requiredInvDecl; // Offset: 0x170

    // will not allow picking up IF any of these items are the users inventory
    idList < const idDeclInventory * , TAG_IDLIST , false > restrictedInventoryDecl; // Offset: 0x178

    // will not allow picking up if any of these status effects are active on the user
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > restrictedStatusEffects; // Offset: 0x190

    // will give the player upgrade currencies
    idList < playerCurrency_t , TAG_IDLIST , false > currencyToGive; // Offset: 0x1A8

    // How much of the commodity to add.
    int commodityAmount; // Offset: 0x1C0

    // How much XP is granted when this is picked up
    int xp; // Offset: 0x1C4

    // What equipment item to give
    idDeclInventory* equipmentToGive; // Offset: 0x1C8

    // What upgrade to give.
    idDeclUpgrade* upgradeDecl; // Offset: 0x1D0

    // What perk ( mod ) to give
    idDeclPerk* perkDecl; // Offset: 0x1D8

    // What perk ( mod ) to give
    idDeclPerk* runeDecl; // Offset: 0x1E0

    // What codex to give.
    idDeclCodexEntry* codexDecl; // Offset: 0x1E8

    // What audio log to give.
    idDeclAudioLog* audioLog; // Offset: 0x1F0

    // Notification to show when this is picked up.
    idDeclNotification* notification; // Offset: 0x1F8

    // which story to give an audio log from.
    idDeclAudioLogStory* audioLogStory; // Offset: 0x200

    // the card pack to give the player
    idDeclPlayableCardPack* cardPack; // Offset: 0x208

    // collectible to give.
    idDeclCollectible* collectible; // Offset: 0x210

    // scoring item to score on pickup
    idDeclScoringItem* scoringItem; // Offset: 0x218

    // sound to play when notification is suppressed
    idSoundEvent* suppressedNotificationSound; // Offset: 0x220

    // alternate Perks to give if primary is already available.
    idList < const idDeclPerk * , TAG_IDLIST , false > alternatePerks; // Offset: 0x228

    // additional Perks to give
    idList < const idDeclPerk * , TAG_IDLIST , false > additionalPerks; // Offset: 0x240

    // How much ability Fuel to give.
    float abilityFuel; // Offset: 0x258

    // How much dash meter pips to give. Use "0" for INSTANT DASH and no adjustment in the meter. Use "-1" for no dash at all.
    int dashMeterPips; // Offset: 0x25C

    // Reduce AI stagger meter by this amount
    float staggerMeterReduction; // Offset: 0x260

    // Num blood punch pips to fill
    float bloodPunchPips; // Offset: 0x264

    // How much hammer supermeter to add
    float hammerSupermeterCharge; // Offset: 0x268

    // How much crucible energy to add
    float crucibleEnergy; // Offset: 0x26C

    // Type of equipment to refill
    equipmentType_t equipmentType; // Offset: 0x270

    // How much of the equipment to refill
    float equipmentRefill; // Offset: 0x274

    // How many MS after being shown do we need to wait before being useable
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayBeforeUseableMS; // Offset: 0x278

    // Show map updated notification.
    bool showMapUpdated; // Offset: 0x27C

    // don't show hud notification for codex pickups (includes tutorial)
    bool suppressCodexHudNotification; // Offset: 0x27D

    // This is crucible energy;
    bool isCrucibleEnergyPickup; // Offset: 0x27E

    // Prefetch streamed hands geometry on approach
    bool prefetchHandsGeometry; // Offset: 0x27F

    // Weapon break master level challenge: specifically repair this weapon
    idDeclWeapon* repairWeaponSpecific; // Offset: 0x280

    // repair last broken weapon
    bool repairLastWeapon; // Offset: 0x288

    // repair all broken weapons
    bool repairAllWeapons; // Offset: 0x289

}; // Size: 0x290
