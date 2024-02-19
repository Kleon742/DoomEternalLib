struct idMidnightGraphPathNodeCondPrompt : idMidnightGraphPathNode
{
    enum enum_24200 : int
    {
        NB_MAX_OUTPUT = 20
    };

    // store the next info for each int value
    idStaticList < idMidnightGraphNextInfo , 20 , false , TAG_IDLIST > next; // Offset: 0x30

}; // Size: 0xE8
