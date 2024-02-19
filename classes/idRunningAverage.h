struct idRunningAverage
{
    int maxNum; // Offset: 0x0

    int current; // Offset: 0x4

    idList < float , TAG_IDLIST , false > vals; // Offset: 0x8

}; // Size: 0x20
