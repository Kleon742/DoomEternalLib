struct idSoundEntity : idBloatedEntity
{
    // will be marked true if not placed by a sound designer
    bool temporarySoundEvent; // Offset: 0xB88

    // if true will post the startEvents on spawn, otherwise wait for Event_SoundEntity_On
    bool startWhenSpawned; // Offset: 0xB89

    // start events to post when the entity spawns
    idList < const idSoundEvent * , TAG_IDLIST , false > startEvents; // Offset: 0xB90

    // stop events to post when the entity goes away
    idList < const idSoundEvent * , TAG_IDLIST , false > stopEvents; // Offset: 0xBA8

    // the volume to play this entities events at
    float volumeOverride; // Offset: 0xBC0

    // the random range around the volume override
    float volumeRandomRange; // Offset: 0xBC4

    // the pitch to play this entities events at
    float pitchOverride; // Offset: 0xBC8

    // the random range around the pitch
    float pitchRandomRange; // Offset: 0xBCC

    bool active; // Offset: 0xBD0

}; // Size: 0xBD8
