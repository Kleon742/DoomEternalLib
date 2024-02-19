struct idHUDEvent_JukeboxInfo
{
    struct jukeboxInfo_t
    {
        struct jukeboxTrack_t
        {
            // name of the collectible.
            unsigned int name; // Offset: 0x0

            // track.
            idSoundEvent* trackEvent; // Offset: 0x8

        }; // Size: 0x10

        struct jukeboxAlbum_t
        {
            // name of the collectible.
            unsigned int name; // Offset: 0x0

            idDeclCollectible* collectible; // Offset: 0x8

            int numTracks; // Offset: 0x10

            idHUDEvent_JukeboxInfo::jukeboxInfo_t::jukeboxTrack_t tracks[30]; // Offset: 0x18

        }; // Size: 0x1F8

        idHUDEvent_JukeboxInfo::jukeboxInfo_t::jukeboxAlbum_t albums[30]; // Offset: 0x0

        int numAlbums; // Offset: 0x3B10

        idInteractable_JukeBox* jukebox; // Offset: 0x3B18

    }; // Size: 0x3B20

    idHUDEvent_JukeboxInfo::jukeboxInfo_t info; // Offset: 0x0

}; // Size: 0x3B20
