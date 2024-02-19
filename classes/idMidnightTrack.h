struct idMidnightTrack : idClass
{
    struct idSort_Keys : idSort_Quick < idMidnightKey , idMidnightTrack::idSort_Keys >
    {
    }; // Size: 0x8

    // list of key
    idList < idMidnightKey , TAG_ARK_MIDNIGHT , false > keys; // Offset: 0x10

    // store the handle of the track
    idMidnightTrackHandle handle; // Offset: 0x28

    // type of the key
    idMidnight::TrackType_t trackType; // Offset: 0x40

}; // Size: 0x48
