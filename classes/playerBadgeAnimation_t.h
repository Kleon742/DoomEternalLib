struct playerBadgeAnimation_t
{
    // Frame to play when starting this animation
    idStr frame; // Offset: 0x0

    // Animation duration (in MS)
    idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x30

    // Sound to play for this animation
    idSoundEvent* soundEvent; // Offset: 0x38

    // UI Sound ID for this animation's sound event
    int soundId; // Offset: 0x40

}; // Size: 0x48
