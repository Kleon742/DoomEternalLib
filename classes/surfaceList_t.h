struct surfaceList_t
{
    drawSurf_t surfaces[16384]; // Offset: 0x0

    interlockedInt_t num; // Offset: 0x80000

}; // Size: 0x80008
