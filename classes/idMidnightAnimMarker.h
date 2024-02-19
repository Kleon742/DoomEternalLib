struct idMidnightAnimMarker
{
    enum invalidMarkerIndex_t : int
    {
        INVALID_MARKER_INDEX = -1
    };

    enum Name_t : int
    {
        EMAM_IN = 0,
        EMAM_APEX = 1,
        EMAM_ACCENT = 2,
        EMAM_LOOP = 3,
        EMAM_LOOPEND = 4,
        EMAM_HARD_CUT = 5,
        EMAM_OUT = 6,
        EMAM_INVALID = 7,
        EMAM_MAX = 7
    };

    typedef idIndex < int , idMidnightAnimMarker::invalidMarkerIndex_t , INVALID_MARKER_INDEX > Index;

    // Rate OR end loop?
    idMidnightMarkerType_t markerType; // Offset: 0x0

    // Sync time (anim time)
    idTypesafeTime < int , millisecondUnique_t , 1000 > animTime; // Offset: 0x4

    // Sync time (scene time)
    idTypesafeTime < int , millisecondUnique_t , 1000 > mdntTime; // Offset: 0x8

}; // Size: 0xC
