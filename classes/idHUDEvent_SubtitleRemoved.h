struct idHUDEvent_SubtitleRemoved
{
    struct subtitleRemoveInfoSource_t
    {
        // NULL removes all
        idEntity* source; // Offset: 0x0

    }; // Size: 0x8

    struct subtitleRemoveInfoSound_t
    {
        idSoundEvent* sound; // Offset: 0x0

    }; // Size: 0x8

    idHUDEvent_SubtitleRemoved::subtitleRemoveInfoSource_t infoSource; // Offset: 0x0

    idHUDEvent_SubtitleRemoved::subtitleRemoveInfoSound_t infoSound; // Offset: 0x8

}; // Size: 0x10
