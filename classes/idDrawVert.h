struct idDrawVert
{
    idVec3 pos; // Offset: 0x0

    idVec2 lightmapUV; // Offset: 0xC

    // [3] used to store weights for skinning
    unsigned char normal[4]; // Offset: 0x14

    // [3] is texture polarity sign
    unsigned char tangent[4]; // Offset: 0x18

    unsigned char color[4]; // Offset: 0x1C

    idVec2 materialUV; // Offset: 0x20

    // material indices
    unsigned short materials[2]; // Offset: 0x28

    unsigned short unused[2]; // Offset: 0x2C

}; // Size: 0x30
