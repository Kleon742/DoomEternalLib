struct idSoundSubtitlesEntity : idSoundEntity
{
    struct soundSubtitleAssociation_t
    {
        // sound event
        idSoundEvent* soundEvent; // Offset: 0x0

        // subtitle
        idStrId subtitle; // Offset: 0x8

        // speaker (can be empty)
        idStrId speaker; // Offset: 0xC

        // visible distance (m)
        float maxDistance; // Offset: 0x10

    }; // Size: 0x18

    // which subtitles to play for which sound events
    idList < idSoundSubtitlesEntity::soundSubtitleAssociation_t , TAG_IDLIST , false > subs; // Offset: 0xBD8

}; // Size: 0xBF0
