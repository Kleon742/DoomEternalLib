struct idSWFWidget_Tree : idSWFWidget
{
    idList < prototypeCache_t , TAG_IDLIST , false > prototypeCache; // Offset: 0x180

    idList < idSWFWidget * , TAG_IDLIST , false > displayList; // Offset: 0x198

    idList < idSWFWidget * , TAG_IDLIST , false > visibleList; // Offset: 0x1B0

    int maxVisible; // Offset: 0x1C8

    int selected; // Offset: 0x1CC

    int viewIndex; // Offset: 0x1D0

    int scrollType; // Offset: 0x1D4

    // how much to indent for child branches.
    float indent; // Offset: 0x1D8

}; // Size: 0x1E0
