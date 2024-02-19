struct idDeclHighlight : idGameDeclTypeInfo
{
    // What highlight functionality class to use.
    idTypeInfoPtr < idHighlightBehavior > behavior; // Offset: 0x90

    // Sets all these parms.
    idList < highlightParmValue_t , TAG_IDLIST , false > parms; // Offset: 0x98

    // color parm to use.
    highlightParmValue_t colorParm; // Offset: 0xB0

    // what type of highlight this is, global or local
    highlightType_t highlightType; // Offset: 0xC8

    // POI to show over highlighted entity
    idDeclPOI* POI; // Offset: 0xD0

    // if true, perform line of sight check against local player for highlight
    bool lineOfSightTestHighlight; // Offset: 0xD8

    // if true, perform line of sight check against local player for POI
    bool lineOfSightTestPOI; // Offset: 0xD9

    // if true, allow flashes
    bool allowFlashFade; // Offset: 0xDA

    // buffer time after line of sight lost where highlight still shows
    idTypesafeTime < int , millisecondUnique_t , 1000 > losBufferTimeMS; // Offset: 0xDC

    // after buffer is over, time highlight takes to fade to invisible
    idTypesafeTime < int , millisecondUnique_t , 1000 > losFadeOutTimeMS; // Offset: 0xE0

    // how long (in MS) for flash to last
    idTypesafeTime < int , millisecondUnique_t , 1000 > flashDurationMS; // Offset: 0xE4

    // if target entity's health is less than this (and above pulseHealthFast), pulse highlight slowly
    float pulseHealthSlow; // Offset: 0xE8

    // if target entity's health is less than this, pulse highlight quickly
    float pulseHealthFast; // Offset: 0xEC

}; // Size: 0xF0
