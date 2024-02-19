struct idSWFFloatingText
{
    idSWF* swf; // Offset: 0x0

    idSWFSpriteInstance* baseSprite; // Offset: 0x8

    idList < idSWFFloatingText_SpriteInfo , TAG_IDLIST , false > spriteList; // Offset: 0x10

    idList < idSWFFloatingText_Info , TAG_IDLIST , false > textList; // Offset: 0x28

    int numCreatedSprites; // Offset: 0x40

}; // Size: 0x48
