struct idSWFWidget_EOL_MasterLevelRewardPips : idSWFWidget
{
    idSWFWidget_EOL_MasterLevelRewardPips::anon_37 sprites; // Offset: 0x180

    idList < idSWFCachedSpriteInstance , TAG_IDLIST , false > pipSprites; // Offset: 0x240

    idSWFWidget_InputTooltip* prevButton; // Offset: 0x258

    idSWFWidget_InputTooltip* nextButton; // Offset: 0x260

    keyNum_t prevJoyKey; // Offset: 0x268

    keyNum_t nextJoyKey; // Offset: 0x26C

    keyNum_t prevPCKey; // Offset: 0x270

    keyNum_t nextPCKey; // Offset: 0x274

    swfNamedColors_t color; // Offset: 0x278

    int numPips; // Offset: 0x27C

    int selection; // Offset: 0x280

    bool spritesNeedRebuild; // Offset: 0x284

}; // Size: 0x288
