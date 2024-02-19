struct idSWFWidget_VideoSettings : idSWFWidget
{
    idSettingsDataSource_Video dataSource; // Offset: 0x180

    idSWFWidget_SettingsList* settingsList; // Offset: 0x218

    idSWFWidget_Text* vramUsageSettingsLabel; // Offset: 0x220

    idSWFWidget_Setting* pseFilter; // Offset: 0x228

    idSWFWidget_Setting* pseLumDeltaThreshold; // Offset: 0x230

    idSWFWidget_Setting* pseFullscreenLumDeltaThreshold; // Offset: 0x238

    idSWFWidget_Setting* antialiasingMode; // Offset: 0x2D0

    idSWFWidget_Setting* fov; // Offset: 0x2D8

    idSWFWidget_Setting* lootDropBrightness; // Offset: 0x2E0

    idSWFWidget_Setting* colorblindMode; // Offset: 0x2E8

    idSWFWidget_Setting* colorblindBrightness; // Offset: 0x2F0

    idSWFWidget_Setting* colorblindContrast; // Offset: 0x2F8

    idSWFWidget_Setting* colorblindIntensity; // Offset: 0x300

    idSWFWidget_Setting* colorblindCorrectionStrength; // Offset: 0x308

    idSWFWidget_Setting* brightness; // Offset: 0x310

    idSWFWidget_Setting* contrast; // Offset: 0x318

    idSWFWidget_Setting* screenCalibration; // Offset: 0x320

    idSWFWidget_Setting* hdrCalibration; // Offset: 0x328

    idSWFWidget_Setting* motionBlur; // Offset: 0x330

    idSWFWidget_Setting* motionBlurToggle; // Offset: 0x338

    idSWFWidget_Setting* advChromaticAberration; // Offset: 0x340

    idSWFWidget_Setting* advResolutionScalingMode; // Offset: 0x348

    idSWFWidget_Setting* advResolutionScalingTargetFrameRate; // Offset: 0x350

    idSWFWidget_Setting* advStaticResolutionScale; // Offset: 0x358

    idSWFWidget_Setting* advDoF; // Offset: 0x360

    idSWFWidget_Setting* advDoFAA; // Offset: 0x368

    idSWFWidget_Setting* advSharpening; // Offset: 0x370

    idSWFWidget_Setting* advHDRBloom; // Offset: 0x378

    idSWFWidget_Setting* advAsyncPresent; // Offset: 0x380

    idSWFWidget_Setting* advFilmGrain; // Offset: 0x388

    idSWFWidget_Setting* advPerformanceMetrics; // Offset: 0x390

    idSWFWidget_Setting* renderMode; // Offset: 0x398

    idSWFWidget_Setting* 120HzDisplay; // Offset: 0x3A0

    idSWFWidget_Setting* raytracing; // Offset: 0x3A8

    idSWFWidget_Setting* dlss; // Offset: 0x3B0

    idSWFWidget_Setting* dlssSharpness; // Offset: 0x3B8

    idSWFWidget_Setting* nextGenFeature; // Offset: 0x3C0

    idSWFWidget_Setting* hdrRendering; // Offset: 0x3C8

    int screenCalibrationPressCmdID; // Offset: 0x3D0

    int hdrCalibrationPressCmdID; // Offset: 0x3D4

}; // Size: 0x3D8
