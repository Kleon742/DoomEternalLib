struct idInvasionMenu_Overlay : idMenuElement_Overlay
{
    idSWFWidget* timerContainer; // Offset: 0x120

    bool timerVisible; // Offset: 0x128

    invasionTimerStyle_t currentStyle; // Offset: 0x12C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x130

    float totalSeconds; // Offset: 0x138

}; // Size: 0x140
