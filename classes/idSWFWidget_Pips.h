struct idSWFWidget_Pips : idSWFWidget
{
    enum pipsAlignment_t : int
    {
        PIPS_ALIGN_LEFT = 0,
        PIPS_ALIGN_RIGHT = 1
    };

    int numPips; // Offset: 0x180

    float pipSpacing; // Offset: 0x184

    idSWFWidget_Pips::pipsAlignment_t pipAlignment; // Offset: 0x188

    idSWFCachedSpriteInstance protoItem; // Offset: 0x190

    idList < idSWFCachedSpriteInstance , TAG_IDLIST , false > pipSprites; // Offset: 0x1C0

    idList < idSWFCachedSpriteInstance , TAG_IDLIST , false > hitboxSprites; // Offset: 0x1D8

    bool spritesNeedRebuild; // Offset: 0x1F0

}; // Size: 0x1F8
