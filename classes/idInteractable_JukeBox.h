struct idInteractable_JukeBox : idInteractable
{
    // albums that are listed.
    idList < jukeBoxAlbum_t , TAG_IDLIST , false > albums; // Offset: 0x2B50

    // playList that is going to be playing.
    idList < const idSoundEvent * , TAG_IDLIST , false > playList; // Offset: 0x2B68

    // the track that is currently playing.
    idSoundEvent* currentTrack; // Offset: 0x2B80

    // are we shuffling the play list.
    bool shuffleMode; // Offset: 0x2B88

}; // Size: 0x2B90
