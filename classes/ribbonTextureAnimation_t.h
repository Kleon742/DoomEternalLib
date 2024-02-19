struct ribbonTextureAnimation_t
{
    // single cycle / cycle
    ribbonTextureAnimationType_t type; // Offset: 0x0

    // if > 1, subdivide the texture S axis
    unsigned short numColumns; // Offset: 0x4

    // if > 1, subdivide the texture T axis
    unsigned short numRows; // Offset: 0x6

    // frames per second
    float rate; // Offset: 0x8

    // use an explicit start frame, if < 0, choose a start frame randomly
    short startFrame; // Offset: 0xC

    // use cross fading between frames
    bool useFrameBlending; // Offset: 0xE

}; // Size: 0x10
