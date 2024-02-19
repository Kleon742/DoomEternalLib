struct jukeBoxAlbum_t
{
    // Name of the album
    idStrId albumName; // Offset: 0x0

    // collectible needed to have.
    idDeclCollectible* collectible; // Offset: 0x8

    // the tracks that the jukebox stores.
    idList < jukeBoxTrack_t , TAG_IDLIST , false > tracks; // Offset: 0x10

}; // Size: 0x28
