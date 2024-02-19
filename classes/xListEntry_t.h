struct xListEntry_t
{
    // void *user;actual memory this entry should use
    unsigned char* ptr; // Offset: 0x0

    // sizeof( _type_ ) from user lists
    size_t typeSize; // Offset: 0x8

    // minimum number of elements allowed ... never resize to be smaller than this
    unsigned int min; // Offset: 0x10

    // number of elements this mem can hold ... mem should be ( typeSize * max ) bytes long
    unsigned int max; // Offset: 0x14

    // spawn ID of user entity
    idSpawnId spawnID; // Offset: 0x18

    // index in array
    int index; // Offset: 0x1C

}; // Size: 0x20
