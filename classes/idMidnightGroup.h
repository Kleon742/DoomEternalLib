struct idMidnightGroup : idClass
{
    enum invalidTrackIndex_t : int
    {
        INVALID_TRACK_INDEX = -1
    };

    struct idSort_Tracks : idSort_Quick < idMidnightTrack * , idMidnightGroup::idSort_Tracks >
    {
    }; // Size: 0x8

    struct idSearch_TrackPriority : idSearch_Binary < idMidnightTrack * , idMidnightGroup::idSearch_TrackPriority >
    {
    }; // Size: 0x8

    typedef int TrackIndexType;

    typedef idIndex < idMidnightGroup::TrackIndexType , idMidnightGroup::invalidTrackIndex_t > TrackIndex_t;

    // list of track
    idStaticList < idMidnightTrack * , 8 , false , TAG_ARK_MIDNIGHT > lTracks; // Offset: 0x10

    // store the handle of the group
    idMidnightGroupHandle handle; // Offset: 0x68

    // Keep for backward compatibility
    idAtomicString name; // Offset: 0x80

    // store the md6 when the group is use only for one md6 (with branching md6)
    idDeclMD6* specificMD6; // Offset: 0x88

}; // Size: 0x90
