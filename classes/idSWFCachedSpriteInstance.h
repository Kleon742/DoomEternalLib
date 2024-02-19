struct idSWFCachedSpriteInstance
{
    enum idCachedSpriteState_t : int
    {
        CACHED_SPRITE_INVALID = -1,
        CACHED_SPRITE_NOT_CACHED = 0,
        CACHED_SPRITE_CACHED = 1
    };

    idSWF* Swf; // Offset: 0x8

    idSWFSpriteInstance* SpriteInstance; // Offset: 0x10

    idList < idStr , TAG_IDLIST , false > SpritePath; // Offset: 0x18

}; // Size: 0x30
