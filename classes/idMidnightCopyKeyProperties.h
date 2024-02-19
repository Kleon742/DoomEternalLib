struct idMidnightCopyKeyProperties
{
    // duration of the key
    int duration; // Offset: 0x0

    // curve of the key (optional)
    idCurveTangent < float , float > curve; // Offset: 0x8

    // List of markers
    idStaticList < idMidnightAnimMarkerInfo_t , 6 , false , TAG_IDLIST > markers; // Offset: 0x70

    // indicate if a curve was copied
    bool hasCurve; // Offset: 0x118

    // indicate if the key has anim marker
    bool hasMarkers; // Offset: 0x119

    // Properties
    idMidnightKeyProperties* keyProperties; // Offset: 0x120

}; // Size: 0x128
