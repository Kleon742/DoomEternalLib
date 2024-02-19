struct idUseableItemComponent : idUseableComponent
{
    struct itemData_t
    {
        // item to add
        idDeclInventory* decl; // Offset: 0x0

        // fixed/percentage count to add
        int count; // Offset: 0x8

        // specifier for the count.
        propCountSpecifier_t countSpec; // Offset: 0xC

        // additional random count to add
        int randCount; // Offset: 0x10

        // use the exact ( count + randCount ) amount, instead of multiplying it by the count value specified in the decl
        bool forceCount; // Offset: 0x14

    }; // Size: 0x18

    // const idDeclProp_ItemPickup *componentData; the data for this class
    bool initialized; // Offset: 0x30

    idUseableItemComponent::itemData_t primaryInventory; // Offset: 0x38

    idList < idUseableItemComponent::itemData_t , TAG_IDLIST , false > additionalInventory; // Offset: 0x50

    idList < const idDeclInventory * , TAG_IDLIST , false > restrictionedInventory; // Offset: 0x68

    idList < const idDeclStatusEffect * , TAG_IDLIST , false > restrictedStatusEffects; // Offset: 0x80

    idList < playerCurrency_t , TAG_IDLIST , false > currencyToGive; // Offset: 0x98

    int xp; // Offset: 0xB0

    // must have inventory item to use the prop
    idDeclInventory* requiredInvDecl; // Offset: 0xB8

    idDeclUpgrade* upgradeToGive; // Offset: 0xC0

    idDeclPerk* perkToGive; // Offset: 0xC8

    idDeclPerk* runeToGive; // Offset: 0xD0

    idDeclCodexEntry* codexEntry; // Offset: 0xD8

    idDeclPlayableCardPack* cardPack; // Offset: 0xE0

    idDeclAudioLog* audioLog; // Offset: 0xE8

    idDeclAudioLogStory* audioLogStory; // Offset: 0xF0

    idDeclCollectible* collectible; // Offset: 0xF8

    bool suppressCodexHudNotification; // Offset: 0x100

    idList < const idDeclPerk * , TAG_IDLIST , false > alternatePerksToGive; // Offset: 0x108

    idList < const idDeclPerk * , TAG_IDLIST , false > additionalPerksToGive; // Offset: 0x120

    float abilityFuel; // Offset: 0x138

    int dashMeterPips; // Offset: 0x13C

    float staggerMeterReduction; // Offset: 0x140

    float bloodPunchPipsToFill; // Offset: 0x144

    float crucibleEnergy; // Offset: 0x148

    float hammerSupermeterCharge; // Offset: 0x14C

    equipmentType_t equipmentType; // Offset: 0x150

    float equipmentRefill; // Offset: 0x154

    unsigned int geometryPrefetchNodeId; // Offset: 0x158

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > actorModDuration; // Offset: 0x160

    // what's the earliest time this prop is considered useable. Takes idDeclProp_ItemPickupComponent::delayBeforeUseableMS into account.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > earliestUseableTime; // Offset: 0x168

    idDeclProp_ItemPickupComponent* componentData; // Offset: 0x170

    bool alternateGiven; // Offset: 0x178

    bool useAmmoDropModSoundEffect; // Offset: 0x179

    // Weapon break master level challenge:
    idDeclWeapon* repairWeaponSpecific; // Offset: 0x180

    bool repairLastWeapon; // Offset: 0x188

    bool repairAllWeapons; // Offset: 0x189

}; // Size: 0x190
