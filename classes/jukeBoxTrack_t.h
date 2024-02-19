struct jukeBoxTrack_t
{
    // Name of the track
    idStrId trackName; // Offset: 0x0

    // sound event to use for the track
    idSoundEvent* soundEvent; // Offset: 0x8

}; // Size: 0x10
