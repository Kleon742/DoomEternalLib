struct renderModelStaticGeoDecals_t
{
    idMaterial2* material; // Offset: 0x0

    idDefragAllocatorHdl projectionsHandles[2]; // Offset: 0x8

    int offsets[2]; // Offset: 0x10

    unsigned int streamId; // Offset: 0x18

    unsigned short materialIndex; // Offset: 0x1C

    unsigned char bufferIndex; // Offset: 0x1E

}; // Size: 0x20
