struct idInfoRuler : idInfo
{
    // name of the path to report
    idStr mPathName; // Offset: 0xB90

    // true if we've already measured distances from this path
    bool mVisited; // Offset: 0xBC0

}; // Size: 0xBC8
