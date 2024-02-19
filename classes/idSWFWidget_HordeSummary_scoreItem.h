struct idSWFWidget_HordeSummary_scoreItem : idSWFWidget
{
    idDeclHordeSummaryUtility* hordeUtilityDecl; // Offset: 0x180

    idHordeScoreItemType_t currentScoreItemType; // Offset: 0x188

    // not ideal since this is only used for one score item type, but we're in ship-it mode
    int difficulty; // Offset: 0x18C

    idSWFCachedSpriteInstance icon; // Offset: 0x190

    idSWFCachedSpriteInstance iconBurst; // Offset: 0x1C0

    idSWFCachedSpriteInstance score; // Offset: 0x1F0

    idSWFCachedSpriteInstance scoreBurst; // Offset: 0x220

    idSWFCachedSpriteInstance title; // Offset: 0x250

}; // Size: 0x280
