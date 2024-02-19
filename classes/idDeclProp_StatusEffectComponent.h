struct idDeclProp_StatusEffectComponent : idDeclProp_UseComponent
{
    // when used it will unlock these security unlock decls
    idDeclStatusEffect* statusEffect; // Offset: 0x130

    // will not allow picking up IF any of these items are the users inventory
    idList < const idDeclInventory * , TAG_IDLIST , false > restrictedInventoryDecl; // Offset: 0x138

    // will not allow picking up if any of these status effects are active on the user
    idList < const idDeclStatusEffect * , TAG_IDLIST , false > restrictedStatusEffects; // Offset: 0x150

    // How many MS after being shown do we need to wait before being useable
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayBeforeUseableMS; // Offset: 0x168

    // inventory decl associated with this status effect (if applicable)
    idDeclInventory* declInventory; // Offset: 0x170

    // codex to give.
    idDeclCodexEntry* codexDecl; // Offset: 0x178

    // scoring item to fire
    idDeclScoringItem* scoringItem; // Offset: 0x180

    // notification to fire on pickup
    idDeclNotification* notification; // Offset: 0x188

}; // Size: 0x190
