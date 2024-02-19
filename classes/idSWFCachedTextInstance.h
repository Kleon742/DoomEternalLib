struct idSWFCachedTextInstance
{
    enum idCachedTextState_t : int
    {
        CACHED_TEXT_INVALID = -1,
        CACHED_TEXT_NOT_CACHED = 0,
        CACHED_TEXT_CACHED = 1
    };

    idSWF* Swf; // Offset: 0x8

    idSWFTextInstance* TextInstance; // Offset: 0x10

    idList < idStr , TAG_IDLIST , false > TextPath; // Offset: 0x18

}; // Size: 0x30
