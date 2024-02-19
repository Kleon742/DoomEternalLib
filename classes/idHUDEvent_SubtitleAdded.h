struct idHUDEvent_SubtitleAdded
{
    struct subtitleInfoText_t
    {
        char text[512]; // Offset: 0x0

        char speaker[128]; // Offset: 0x200

        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x280

        idEntity* source; // Offset: 0x288

        idSoundEvent* sound; // Offset: 0x290

    }; // Size: 0x298

    struct subtitleInfoId_t
    {
        unsigned int textId; // Offset: 0x0

        unsigned int speakerId; // Offset: 0x4

        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x8

        idEntity* source; // Offset: 0x10

        idSoundEvent* sound; // Offset: 0x18

    }; // Size: 0x20

    struct subtitleInfoVO_t
    {
        idVoiceTrack* track; // Offset: 0x0

        unsigned int speakerId; // Offset: 0x8

        idEntity* source; // Offset: 0x10

    }; // Size: 0x18

    // for passing strings by copy
    idHUDEvent_SubtitleAdded::subtitleInfoText_t infoText; // Offset: 0x0

    // for passing strings by id
    idHUDEvent_SubtitleAdded::subtitleInfoId_t infoId; // Offset: 0x298

    // for passing VO tracks
    idHUDEvent_SubtitleAdded::subtitleInfoVO_t infoVO; // Offset: 0x2B8

}; // Size: 0x2D0
