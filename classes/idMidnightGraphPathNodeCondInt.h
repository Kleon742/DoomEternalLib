struct idMidnightGraphPathNodeCondInt : idMidnightGraphPathNode
{
    enum enum_24100 : int
    {
        NB_MAX_OUTPUT = 20
    };

    // store the next info for default output
    idMidnightGraphNextInfo nextDefault; // Offset: 0x30

    // store the next info for each int value
    idStaticList < idMidnightGraphNextInfo , 20 , false , TAG_IDLIST > next; // Offset: 0x38

}; // Size: 0xF0
