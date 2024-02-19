struct idHUD_SkipCinematic : idHUDElement
{
    idSWFWidget_CommandBar* commandBar; // Offset: 0xF8

    idStr cinematicName; // Offset: 0x100

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > rollOnTime; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayedSkipTime; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > delayedStartTime; // Offset: 0x140

    bool skippedCinematic; // Offset: 0x148

    idTypesafeTime < int , millisecondUnique_t , 1000 > sceneStartMs; // Offset: 0x14C

}; // Size: 0x150
