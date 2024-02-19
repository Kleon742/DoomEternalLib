struct idScannerBot_Default : idAIState
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timer; // Offset: 0x130

    // {{ units = m }}
    float defaultHeight; // Offset: 0x138

    // amount of time (in sec) to delay before starting search (rises from the floor during this time)
    idTypesafeTime < float , secondUnique_t , 1 > initialDelayTime; // Offset: 0x13C

}; // Size: 0x140
