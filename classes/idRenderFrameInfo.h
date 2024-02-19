struct idRenderFrameInfo
{
    // There is typically a single screenView, but split-screen multiplayer or stereo-3D will define two views. Guis inside screenViews are potentially resolution scaled, but they will be persistant across frames. The views are processed in order, so a main menu gui that draws across both split screen views must be in a screenView (without a world) after them.
    idStaticList < idScreenView , 2 , false , TAG_IDLIST > screenViews; // Offset: 0x0

    // The world views that will be used to call idRenderModel::UpdateInView. There is normally just one, but there will be two unique ones in split-screen multiplayer and two identical ones in stereo-3D (both centered between the eyes).
    idStaticList < idScreenView , 2 , false , TAG_IDLIST > worldViews; // Offset: 0x1520

    // If this flag is set, the final image will be copied back to the viewColor image so it can be used as a source for automatic rendering by BeginAutomaticBackgroundSwaps()
    bool captureFrame; // Offset: 0x2A40

    screenshotMode_t screenshotMode; // Offset: 0x2A44

}; // Size: 0x2A50
