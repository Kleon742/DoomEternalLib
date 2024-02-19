struct declFileDependency_t
{
    idAtomicString fileName; // Offset: 0x0

    idList < idAtomicString , TAG_IDLIST , false > dependentFilePaths; // Offset: 0x8

    unsigned int timestamp; // Offset: 0x20

    bool dirty; // Offset: 0x24

}; // Size: 0x28
