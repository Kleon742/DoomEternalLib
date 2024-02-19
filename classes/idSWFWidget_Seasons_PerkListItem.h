struct idSWFWidget_Seasons_PerkListItem : idSWFWidget_Seasons_RewardListItem
{
    idDeclPerk* perk; // Offset: 0x2C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > animEndTime; // Offset: 0x2C8

    idSWFCachedSpriteInstance nameSprite; // Offset: 0x2D0

    idSWFCachedSpriteInstance typeSprite; // Offset: 0x300

    idSWFCachedSpriteInstance encounterSprite; // Offset: 0x330

}; // Size: 0x360
