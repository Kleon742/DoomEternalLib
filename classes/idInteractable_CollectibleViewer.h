struct idInteractable_CollectibleViewer : idInteractable
{
    enum songState_t : int
    {
        SONG_STOPPED = 0,
        SONG_PAUSED = 1,
        SONG_PLAYING = 2
    };

    // Data for all the collectibles stored on this viewer.
    idList < collectibleInfo_t , TAG_IDLIST , false > collectibleInfo; // Offset: 0x2B50

    // Camera for viewing collectibles.
    idCollectibleCamera_Orbit orbitCamera; // Offset: 0x2B68

    // current selection.
    int currentSelection; // Offset: 0x2C28

    // skips the overall selection screen, jumps directly into individual model viewer
    bool bypassSelectionView; // Offset: 0x2C2C

    // position based on center of render model rather than model origin, for external viewing
    bool centerRenderModelForExternalViewing; // Offset: 0x2C2D

    // Entity to position the camera to.
    idManagedClassPtr < idEntity > externalScene; // Offset: 0x2C30

    // Entity to position the model to.
    idManagedClassPtr < idEntity > externalSceneModel; // Offset: 0x2C50

    // FX that are propigated as soon as this character is visible
    idEntityDefRef appearFXEntity; // Offset: 0x2C70

    idManagedClassPtr < idEntityFx > entityFX; // Offset: 0x2C78

    // Active collectibles, as found in target list. THIS IS THE LIST USED FOR TRAVERSING AROUND THE SHELVES.
    idList < collectibleInfo_t * , TAG_IDLIST , false > activeCollectibles; // Offset: 0x2C98

    // are we viewing at the external point.
    bool externalViewing; // Offset: 0x2CB0

    bool hasAllNonGatedCollectibles; // Offset: 0x2CB1

    bool hasNoExternalTargets; // Offset: 0x2CB2

    idInteractable_CollectibleViewer::songState_t songState; // Offset: 0x2CB4

    // Giant Hack to make it so we dont scroll automatically when used.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > useTime; // Offset: 0x2CB8

    idSoundState* currentAlbumPlaying; // Offset: 0x2CC0

    // Sound object for the collectible viewer camera sounds
    idSoundObject cameraSoundObject; // Offset: 0x2CC8

    // sound that is played when the camera moves
    idSoundEvent* moveSound; // Offset: 0x2CD8

    // sound that is played when the camera stops moving
    idSoundEvent* moveStopSound; // Offset: 0x2CE0

    // Zoom sound that is played when the camera zooms in
    idSoundEvent* zoomSound; // Offset: 0x2CE8

    // Zoom sound that is played when the camera stops zooming in
    idSoundEvent* zoomStopSound; // Offset: 0x2CF0

    // Are we playing the Pan Loop Sound?
    bool playingMoveLoopSound; // Offset: 0x2CF8

    // Are we playing the Zoom Loop Sound?
    bool playingZoomLoopSound; // Offset: 0x2CF9

}; // Size: 0x2D00
