struct idHeightmapVolumeEntity : idBloatedEntity
{
    // extents
    idVec3 extents; // Offset: 0xB88

    // bake texture width
    int width; // Offset: 0xB94

    // bake texture height
    int height; // Offset: 0xB98

    // bias for depth testing
    float depthOffset; // Offset: 0xB9C

    idHeightmapVolume* heightmapVolume; // Offset: 0xBA0

    idStr texturePath; // Offset: 0xBA8

}; // Size: 0xBD8
