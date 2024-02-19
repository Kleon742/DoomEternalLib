struct idSoundPrefetchEntity : idBloatedEntity
{
    // list of sound events to prefetch when this entity is active
    idList < const idSoundEvent * , TAG_SOUND , false > eventsToPrefetch; // Offset: 0xB88

    bool active; // Offset: 0xBA0

    idSoundWwiseAudioDataContainerPrefetchID prefetchID; // Offset: 0xBA2

}; // Size: 0xBA8
