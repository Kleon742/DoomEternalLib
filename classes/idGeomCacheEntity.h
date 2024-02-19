struct idGeomCacheEntity : idAnimatedEntity
{
    // current time of the alembic animation
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0x1B48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopPlayingTimeNonLooping; // Offset: 0x1B50

    bool streamingEnabled; // Offset: 0x1B58

    // Play on Spawn
    bool playingOnSpawn; // Offset: 0x1B59

    // Looping
    bool looping; // Offset: 0x1B5A

    // Animation Playback Speed (1.0 for normal speed, 0.5 for half speed, etc.)
    float playbackSpeed; // Offset: 0x1B5C

    // Animation start time on spawn
    float startTime; // Offset: 0x1B60

    // if true, this entity will show on activation if hidden
    bool showOnActivate; // Offset: 0x1B64

    // if true, this entity will hide itself automatically when its animation is complete. Looping animations ignore this flag unless they are directly stopped.
    bool hideOnCompletion; // Offset: 0x1B65

    // if true, we stop streaming this entity when it stops playing
    bool stopStreamingOnStopPlaying; // Offset: 0x1B66

    // if true, a start streaming event will immediately start the streamer on this entity.
    bool forceStreamingImmediately; // Offset: 0x1B67

    bool hasFinishedPlayingBefore; // Offset: 0x1B68

    idAnimator_Paused animator; // Offset: 0x1B70

}; // Size: 0x1BC8
