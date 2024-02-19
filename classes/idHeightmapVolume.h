struct idHeightmapVolume
{
    // Rendering specific data
    idVec3 projPos; // Offset: 0x0

    idVec3 extents; // Offset: 0xC

    idStr texturePath; // Offset: 0x18

    idRenderMatrix projMatrix; // Offset: 0x48

    idRenderMatrix viewProjMatrix; // Offset: 0x88

    idMat3 viewAxis; // Offset: 0xC8

    idImage* image; // Offset: 0xF0

    idBox box; // Offset: 0xF8

    float depthOffset; // Offset: 0x134

    // Entity specific data bake texture width
    int width; // Offset: 0x138

    // bake texture height
    int height; // Offset: 0x13C

    idStr name; // Offset: 0x140

}; // Size: 0x170
