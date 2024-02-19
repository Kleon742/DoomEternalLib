struct idHUDEvent_CollectibleInfo
{
    struct collectibleGuiInfo_t
    {
        // name of the collectible.
        unsigned int name; // Offset: 0x0

        // description of the collectible.
        unsigned int description; // Offset: 0x4

        // artist name;
        unsigned int artist_name; // Offset: 0x8

        // album name.
        unsigned int album_name; // Offset: 0xC

        // track name.
        unsigned int track_name; // Offset: 0x10

        // percentage of the track.
        float trackPercent; // Offset: 0x14

        // whether viewing this collectible caused a scene change.
        bool causedSceneChange; // Offset: 0x18

        // whether this event broadcast triggers the hooks.
        bool triggersSFX; // Offset: 0x19

    }; // Size: 0x1C

    idHUDEvent_CollectibleInfo::collectibleGuiInfo_t info; // Offset: 0x0

}; // Size: 0x1C
