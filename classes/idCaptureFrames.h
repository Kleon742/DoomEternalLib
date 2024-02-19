struct idCaptureFrames : idBloatedEntity
{
    // Name of output folder
    idStr outputName; // Offset: 0xB88

    // Playback framerate. Default 30.
    int framerate; // Offset: 0xBB8

    // Output resolution width
    int width; // Offset: 0xBBC

    // Output resolution height
    int height; // Offset: 0xBC0

    // Preview mode. If set, output resolution is lowered and image format is jpeg.
    bool preview; // Offset: 0xBC4

    // Use PNG format instead of TGA.
    bool usePNG; // Offset: 0xBC5

    // keep track of some parameters to be restored after capture.
    bool oldFullscreen; // Offset: 0xBC6

    int oldWidth; // Offset: 0xBC8

    int oldHeight; // Offset: 0xBCC

    int oldHz; // Offset: 0xBD0

    int oldDofMode; // Offset: 0xBD4

    int oldPostProcessHQ; // Offset: 0xBD8

    int outputFrameIndex; // Offset: 0xBDC

}; // Size: 0xBE0
