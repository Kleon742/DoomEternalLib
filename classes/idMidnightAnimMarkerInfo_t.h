struct idMidnightAnimMarkerInfo_t : idClass
{
    // Name of the marker (In, Apex, Accent, Loop, LoopEnd, Out)
    idMidnightAnimMarker::Name_t name; // Offset: 0x10

    // Time of the marker relative to midnight clip time
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0x14

}; // Size: 0x18
