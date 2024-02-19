struct idUseableStatusEffectComponent : idUseableComponent
{
    idDeclProp_StatusEffectComponent* componentDecl; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeRemainingOverride; // Offset: 0x38

    idList < const idDeclInventory * , TAG_IDLIST , false > restrictionedInventory; // Offset: 0x40

    idList < const idDeclStatusEffect * , TAG_IDLIST , false > restrictedStatusEffects; // Offset: 0x58

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > earliestUseableTime; // Offset: 0x70

}; // Size: 0x78
