struct idRenderView
{
    // view parameters set by the game
    renderView_t g; // Offset: 0x0

    int updateInViewModelsPerType[4][8192]; // Offset: 0x970

    int numUpdateInViewModelsPerType[4]; // Offset: 0x20970

    // index of this view for feedback composition
    int viewIndex; // Offset: 0x28990

    // per-view dynamic environment settings
    envBlend_t envBlend; // Offset: 0x28998

    idParmBlock prevEnvBlendParms; // Offset: 0x289B0

    idParmBlock blendedEnvironmentParms; // Offset: 0x289C0

    // latched from 'g' at EndFrame time for renderer use
    renderView_t r; // Offset: 0x289D0

    // all the different matrices used for rendering this view view space to clip space
    idRenderMatrix projectionMatrix; // Offset: 0x29340

    // clip space to view space
    idRenderMatrix inverseProjectionMatrix; // Offset: 0x29380

    // world space to view space
    idRenderMatrix viewMatrix; // Offset: 0x293C0

    // view space to world space
    idRenderMatrix inverseViewMatrix; // Offset: 0x29400

    // world space to clip space
    idRenderMatrix viewProjectionMatrix; // Offset: 0x29440

    idRenderMatrix previousViewProjectionMatrix; // Offset: 0x29480

    // clip space to world space
    idRenderMatrix inverseViewProjectionMatrix; // Offset: 0x294C0

    idVec3 lockedViewPos; // Offset: 0x29500

    // forward is +x like the game
    idMat3 lockedViewAxis; // Offset: 0x2950C

    // forward is -z for rendering
    idRenderMatrix lockedViewRenderMatrix; // Offset: 0x29530

    idRenderMatrix lockedViewProjectionRenderMatrix; // Offset: 0x29570

    // custom view projection for objects that need a custom fov. Normally used for hands/guns.
    idRenderMatrix customViewProjectionMatrix; // Offset: 0x295B0

    // custom view projection for objects that need a custom fov. Normally used for hands/guns. Previous frame
    idRenderMatrix previousCustomViewProjectionMatrix; // Offset: 0x295F0

    // a second custom view projection for objects (i.e. equipmentLauncher) that need a custom fov. different from the hands/guns custom fov
    idRenderMatrix customViewProjectionMatrix2; // Offset: 0x29630

    // a second custom view projection for objects (i.e. equipmentLauncher) that need a custom fov. different from the hands/guns custom fov
    idRenderMatrix previousCustomViewProjectionMatrix2; // Offset: 0x29670

    // world space to clip space with a view position locked at the origin
    idRenderMatrix centeredViewProjectionMatrix; // Offset: 0x296B0

    // world space to clip space with a view position locked at the origin. Previous frame
    idRenderMatrix previousCenteredViewProjectionMatrix; // Offset: 0x296F0

    // clip space to world space with a view position locked at origin
    idRenderMatrix inverseCenteredViewProjectionMatrix; // Offset: 0x29730

    // custom view projection for objects that need a custom fov. Normally used for hands/guns.
    idRenderMatrix customCenteredViewProjectionMatrix; // Offset: 0x29770

    // custom view projection for objects that need a custom fov. Normally used for hands/guns. Previous frame
    idRenderMatrix previousCustomCenteredViewProjectionMatrix; // Offset: 0x297B0

    // custom view projection for objects that need a custom fov. Normally used for hands/guns.
    idRenderMatrix customCenteredViewProjectionMatrix2; // Offset: 0x297F0

    // custom view projection for objects that need a custom fov. Normally used for hands/guns. Previous frame
    idRenderMatrix previousCustomCenteredViewProjectionMatrix2; // Offset: 0x29830

    idVec3 previousGlobalViewOrigin; // Offset: 0x29870

    idVec3 previousLocalViewOrigin; // Offset: 0x2987C

    idVec3 previousViewOriginOffset; // Offset: 0x29888

    // World-space vector from view origin to TL corner of view frustum plane at linearZ=1
    idVec3 frustumVecTL; // Offset: 0x29894

    // World-space vector from TL to TR corner of view frustum plane at linearZ=1
    idVec3 frustumVecDirX; // Offset: 0x298A0

    // World-space vector from TL to BL corner of view frustum plane at linearZ=1
    idVec3 frustumVecDirY; // Offset: 0x298AC

    idVec2 subPixelOffset; // Offset: 0x298B8

    idVec2 previousSubPixelOffset; // Offset: 0x298C0

    idVec2 cursorPosition; // Offset: 0x298C8

    int windowWidth; // Offset: 0x298D0

    int windowHeight; // Offset: 0x298D4

    int renderWidth; // Offset: 0x298D8

    int renderHeight; // Offset: 0x298DC

    int previousRenderWidth; // Offset: 0x298E0

    int previousRenderHeight; // Offset: 0x298E4

    // settings for the current view in real pixels and proper Y flip
    idScreenRect viewport; // Offset: 0x298E8

    // local inside viewport, x1 and y1 will always be 0
    idScreenRect scissorRect; // Offset: 0x298F8

    // used for doing local screen tests if not empty
    idScreenRect testScissor; // Offset: 0x29908

    idRenderWorld* owningWorld; // Offset: 0x29918

    bool pickingEnabled; // Offset: 0x29940

    int cameraCutCounter; // Offset: 0x29944

}; // Size: 0x29950
