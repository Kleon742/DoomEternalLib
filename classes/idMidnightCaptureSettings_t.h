struct idMidnightCaptureSettings_t
{
    enum FrameRate_t : int
    {
        FRAMERATE_30 = 0,
        FRAMERATE_60 = 1
    };

    enum Format_t : int
    {
        FORMAT_TGA = 0,
        FORMAT_PNG = 1
    };

    // The midnight is used as a prerendered cutscene.
    bool bIsPrerenderedCutscene; // Offset: 0x0

    // The name of the cutscene entity that references this midnight.
    idAtomicString cutsceneEntityName; // Offset: 0x8

    // The map this cutscene midnight uses.
    idAtomicString mapName; // Offset: 0x10

    // Layers of the map to be used in the cutscene.
    idList < idAtomicString , TAG_IDLIST , false > mapLayers; // Offset: 0x18

    // Playback framerate. Default 30.
    idMidnightCaptureSettings_t::FrameRate_t frameRate; // Offset: 0x30

    // Output resolution width
    int width; // Offset: 0x34

    // Output resolution height
    int height; // Offset: 0x38

    // The image format to write
    idMidnightCaptureSettings_t::Format_t format; // Offset: 0x3C

    // Number of samples per pixel to render.
    int nSamples; // Offset: 0x40

    // The path to capture the cutscene to.
    idAtomicString capturePath; // Offset: 0x48

    // The bake variation of the map to use.
    idAtomicString bakeVariation; // Offset: 0x50

}; // Size: 0x58
